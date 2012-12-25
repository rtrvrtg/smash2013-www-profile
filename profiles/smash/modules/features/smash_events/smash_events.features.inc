<?php
/**
 * @file
 * smash_events.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function smash_events_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function smash_events_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function smash_events_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('Events at the given convention.'),
      'has_title' => '1',
      'title_label' => t('Event Title'),
      'help' => '',
    ),
  );
  return $items;
}
