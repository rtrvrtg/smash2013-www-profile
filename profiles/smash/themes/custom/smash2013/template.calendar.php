<?php

/**
 * Display a day view.
 */
function smash2013_preprocess_calendar_day(&$vars) {
  $vars['view']->style_with_weekno = FALSE;
  $view = $vars['view'];
  $rows = $vars['rows'];

  $rows = $view->style_plugin->calendar_build_day();

  $grouping_field = !empty($view->date_info->style_groupby_field) ? ($view->date_info->style_groupby_field) : NULL;
  $vars['scroll_content'] = FALSE;

  $styler = new Smash2013_Schedule_Styler($grouping_field);
  foreach ($rows['all_day'] as $item) {
    $styler->addAllDayItem($item);
  }

  foreach ($rows['items'] as $time => &$items) {
    foreach ($items as &$item) {
      $styler->addItem($item);
    }
  }

  $vars['calendar_styler'] = $styler;
  $vars['rendered_groups'] = $styler->render();
}

class Smash2013_Schedule_Util {
  public static function getTime($item, $index = 'start') {
    $field_name = 'calendar_' . $index . '_date';
    $field_value = $item->{$field_name};

    return date_format($field_value, 'H') + (date_format($field_value, 'i') / 60);
  }

  public static function getDuration($item) {
    return self::getTime($item, 'end') - self::getTime($item, 'start');
  }
}

/**
 * Bundles everything up into one obj.
 */
class Smash2013_Schedule_Styler {
  protected $groups = array();
  protected $grouping_field = NULL;

  public function __construct($grouping_field) {
    $this->grouping_field = $grouping_field;
  }

  public function initGroup($group) {
    if (!isset($this->groups[$group])) {
      $this->groups[$group] = new Smash2013_Schedule_Group($group);
    }
    return $group;
  }

  public function addItem($item) {
    $group = $this->initGroup($this->getGroupName($item));
    $start = Smash2013_Schedule_Util::getTime($item, 'start');
    $duration = Smash2013_Schedule_Util::getDuration($item);
    $this->groups[$group]->addItem($item, $start, $duration);
  }

  public function addAllDayItem($item) {
    $group = $this->initGroup($this->getGroupName($item));
    $this->groups[$group]->addAllDayItem($item);
  }

  protected function getGroupName($item) {
    $group_name = "All items";
    if (!is_null($this->grouping_field) && isset($item->rendered_fields[$this->grouping_field])) {
      $group_name = $item->rendered_fields[$this->grouping_field];  
    }
    return trim(strip_tags($group_name));
  }

  public function render() {
    $rendered_groups = array();
    foreach($this->groups as $group_name => $group) {
      $rendered_groups[$group_name] = $group->render();
    }
    return $rendered_groups;
  }
}

/**
 * Individual schedule group.
 */
class Smash2013_Schedule_Group {
  protected $items = array();
  protected $title = NULL;

  public function __construct($title) {
    $this->title = $title;
  }

  public function addItem($item, $hourstamp, $length) {
    $this->items[] = new Smash2013_Schedule_Item($item, $hourstamp, $length);
  }

  public function addAllDayItem($item) {
    $this->addItem($item, 0, 24);
  }

  public function render() {
    return theme('smash_events_calendar_group', array(
      'title' => $this->title,
      'items' => $this->items, 
    ));
  }
}

/**
 * Individual schedule item.
 */
class Smash2013_Schedule_Item {
  protected $item;
  protected $hourstamp = 0;
  protected $length = 0;

  public function __construct($item, $hourstamp = 0, $length = 0) {
    $this->item = $item;
    $this->hourstamp = $hourstamp;
    $this->length = $length;
  }

  protected function classes() {
    $hour = intval($this->hourstamp) == $this->hourstamp ? $this->hourstamp : floor($this->hourstamp) . '-half';

    $length_int = floor($this->length);
    $remainder = $this->length - $length_int;
    
    $length = $this->length;
    if ($remainder == 0.25) {
      $length = $length_int . '-1q';
    }
    elseif ($remainder == 0.5) {
      $length = $length_int . '-half';
    }
    elseif ($remainder == 0.75) {
      $length = $length_int . '-3q';
    }

    $classes = array(
      'schedule-item',
      'item-hourstamp-' . $hour,
      'item-length-' . $length,
    );
    return $classes;
  }

  public function render() {
    return theme('smash_events_calendar_item', array(
      'item_classes' => $this->classes(),
      'item_id' => 'schedule-item--' . $this->item->id,
      'rendered_fields' => $this->item->rendered_fields, 
      'item' => $this->item
    ));
  }
}
