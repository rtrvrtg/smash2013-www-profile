<?php
/**
 * @file
 * Contains the theme's functions to manipulate Drupal's default markup.
 *
 * A QUICK OVERVIEW OF DRUPAL THEMING
 *
 *   The default HTML for all of Drupal's markup is specified by its modules.
 *   For example, the comment.module provides the default HTML markup and CSS
 *   styling that is wrapped around each comment. Fortunately, each piece of
 *   markup can optionally be overridden by the theme.
 *
 *   Drupal deals with each chunk of content using a "theme hook". The raw
 *   content is placed in PHP variables and passed through the theme hook, which
 *   can either be a template file (which you should already be familiary with)
 *   or a theme function. For example, the "comment" theme hook is implemented
 *   with a comment.tpl.php template file, but the "breadcrumb" theme hooks is
 *   implemented with a theme_breadcrumb() theme function. Regardless if the
 *   theme hook uses a template file or theme function, the template or function
 *   does the same kind of work; it takes the PHP variables passed to it and
 *   wraps the raw content with the desired HTML markup.
 *
 *   Most theme hooks are implemented with template files. Theme hooks that use
 *   theme functions do so for performance reasons - theme_field() is faster
 *   than a field.tpl.php - or for legacy reasons - theme_breadcrumb() has "been
 *   that way forever."
 *
 *   The variables used by theme functions or template files come from a handful
 *   of sources:
 *   - the contents of other theme hooks that have already been rendered into
 *     HTML. For example, the HTML from theme_breadcrumb() is put into the
 *     $breadcrumb variable of the page.tpl.php template file.
 *   - raw data provided directly by a module (often pulled from a database)
 *   - a "render element" provided directly by a module. A render element is a
 *     nested PHP array which contains both content and meta data with hints on
 *     how the content should be rendered. If a variable in a template file is a
 *     render element, it needs to be rendered with the render() function and
 *     then printed using:
 *       <?php print render($variable); ?>
 *
 * ABOUT THE TEMPLATE.PHP FILE
 *
 *   The template.php file is one of the most useful files when creating or
 *   modifying Drupal themes. With this file you can do three things:
 *   - Modify any theme hooks variables or add your own variables, using
 *     preprocess or process functions.
 *   - Override any theme function. That is, replace a module's default theme
 *     function with one you write.
 *   - Call hook_*_alter() functions which allow you to alter various parts of
 *     Drupal's internals, including the render elements in forms. The most
 *     useful of which include hook_form_alter(), hook_form_FORM_ID_alter(),
 *     and hook_page_alter(). See api.drupal.org for more information about
 *     _alter functions.
 *
 * OVERRIDING THEME FUNCTIONS
 *
 *   If a theme hook uses a theme function, Drupal will use the default theme
 *   function unless your theme overrides it. To override a theme function, you
 *   have to first find the theme function that generates the output. (The
 *   api.drupal.org website is a good place to find which file contains which
 *   function.) Then you can copy the original function in its entirety and
 *   paste it in this template.php file, changing the prefix from theme_ to
 *   smash2013_. For example:
 *
 *     original, found in modules/field/field.module: theme_field()
 *     theme override, found in template.php: smash2013_field()
 *
 *   where smash2013 is the name of your sub-theme. For example, the
 *   zen_classic theme would define a zen_classic_field() function.
 *
 *   Note that base themes can also override theme functions. And those
 *   overrides will be used by sub-themes unless the sub-theme chooses to
 *   override again.
 *
 *   Zen core only overrides one theme function. If you wish to override it, you
 *   should first look at how Zen core implements this function:
 *     theme_breadcrumbs()      in zen/template.php
 *
 *   For more information, please visit the Theme Developer's Guide on
 *   Drupal.org: http://drupal.org/node/173880
 *
 * CREATE OR MODIFY VARIABLES FOR YOUR THEME
 *
 *   Each tpl.php template file has several variables which hold various pieces
 *   of content. You can modify those variables (or add new ones) before they
 *   are used in the template files by using preprocess functions.
 *
 *   This makes THEME_preprocess_HOOK() functions the most powerful functions
 *   available to themers.
 *
 *   It works by having one preprocess function for each template file or its
 *   derivatives (called theme hook suggestions). For example:
 *     THEME_preprocess_page    alters the variables for page.tpl.php
 *     THEME_preprocess_node    alters the variables for node.tpl.php or
 *                              for node--forum.tpl.php
 *     THEME_preprocess_comment alters the variables for comment.tpl.php
 *     THEME_preprocess_block   alters the variables for block.tpl.php
 *
 *   For more information on preprocess functions and theme hook suggestions,
 *   please visit the Theme Developer's Guide on Drupal.org:
 *   http://drupal.org/node/223440 and http://drupal.org/node/1089656
 */


/**
 * Override or insert variables into the maintenance page template.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("maintenance_page" in this case.)
 */
/* -- Delete this line if you want to use this function
function smash2013_preprocess_maintenance_page(&$variables, $hook) {
  // When a variable is manipulated or added in preprocess_html or
  // preprocess_page, that same work is probably needed for the maintenance page
  // as well, so we can just re-use those functions to do that work here.
  smash2013_preprocess_html($variables, $hook);
  smash2013_preprocess_page($variables, $hook);
}
// */

/**
 * Override or insert variables into the html templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("html" in this case.)
 */

function smash2013_preprocess_html(&$variables, $hook) {
  // dpm($variables);
  if (isset($variables['head_title_array']) && isset($variables['head_title_array']['title'])) {
    $prepared_title = strtolower($variables['head_title_array']['title']);
    $prepared_title = preg_replace("/[^a-z0-9-]+/", "-", $prepared_title);
    $variables['classes_array'][] = "page-title-" . $prepared_title;
  }
}

/**
 * Override or insert variables into the page templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("page" in this case.)
 */
/*
function smash2013_preprocess_page(&$variables, $hook) {
}
*/

/**
 * Override or insert variables into the node templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("node" in this case.)
 */
/* -- Delete this line if you want to use this function
function smash2013_preprocess_node(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');

  // Optionally, run node-type-specific preprocess functions, like
  // smash2013_preprocess_node_page() or smash2013_preprocess_node_story().
  $function = __FUNCTION__ . '_' . $variables['node']->type;
  if (function_exists($function)) {
    $function($variables, $hook);
  }
}
// */

/**
 * Override or insert variables into the comment templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("comment" in this case.)
 */
/* -- Delete this line if you want to use this function
function smash2013_preprocess_comment(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');
}
// */

/**
 * Override or insert variables into the region templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("region" in this case.)
 */
/* -- Delete this line if you want to use this function
function smash2013_preprocess_region(&$variables, $hook) {
  // Don't use Zen's region--sidebar.tpl.php template for sidebars.
  //if (strpos($variables['region'], 'sidebar_') === 0) {
  //  $variables['theme_hook_suggestions'] = array_diff($variables['theme_hook_suggestions'], array('region__sidebar'));
  //}
}
// */

/**
 * Override or insert variables into the block templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("block" in this case.)
 */

function smash2013_preprocess_block(&$variables, $hook) {
  // dpm($variables['block_html_id']);
  // Add a count to all the blocks in the region.
  // $variables['classes_array'][] = 'count-' . $variables['block_id'];

  // By default, Zen will use the block--no-wrapper.tpl.php for the main
  // content. This optional bit of code undoes that:
  //if ($variables['block_html_id'] == 'block-system-main') {
  //  $variables['theme_hook_suggestions'] = array_diff($variables['theme_hook_suggestions'], array('block__no_wrapper'));
  //}
}

/**
 * Implements theme_menu_link
 */
function smash2013_menu_link(array $variables) {
  $element = $variables['element'];
  $sub_menu = '';

  // dpm($element);
  
  if ($element['#href'] == '<nolink-group>') {
    
    // Aggregate titles
    $title = $element['#title'];
    $titles = array();
    
    foreach ($element['#below'] as $item) {
      // dpm($item);
      if (isset($item['#href']) && $item['#href'] == '<nolink>') {
        array_push($titles, $item['#title']);
      }
    }
    
    $group_class = '';
    
    if (count($titles) > 1) {
      // implode titles
      $title = implode(' / ', $titles);
      $group_class = 'group-multi-headings';
    }
    elseif (count($titles) == 1) {
      $title = implode('', $titles);
      $group_class = 'group-single-heading';
    }
    else {
    }
    
    if ($element['#below']) {
      $sub_menu = drupal_render($element['#below']);
    }
    
    $text_item = '<div class="menu-item-group-name">' . $title . '</div>';
    return '<div class="menu-item-group ' . $group_class . '">' . $text_item . $sub_menu . '</div>';
  }
  else if ($element['#href'] == '<nolink-group>') {
    $element['#attributes']['class'][] = "group-single-heading";
  }
  else {
    if ($element['#below']) {
      $sub_menu = drupal_render($element['#below']);
    }
  }

  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}

/**
 * Menu toggler themer
 */
function _smash_2013_prep_toggler($seed) {
  $var_stack = md5($seed);
  $id = drupal_html_id('menu-tree--' . $var_stack);
  $label = '<input id="' . $id . '" class="menu-toggle-checkbox" type="checkbox" value="1" />' . 
    '<label for="' . $id . '" class="menu-toggle-label">' . t('Toggle menu') . '</label>';
  return array($id, $label);
}

/**
 * DOM helper: get elements by class name
 */
function _dom_getElementsByClassName($el, $className) {
  if (!is_a($el, 'DOMDocument') && !is_a($el, 'DOMNode')) return array();
  
  $elements = $el->getElementsByTagName("*");
  $matched = array();

  foreach ($elements as $node) {
    if (!$node->hasAttributes()) continue;

    $classAttribute = $node->attributes->getNamedItem('class');

    if (!$classAttribute) continue;

    $classes = explode(' ', $classAttribute->nodeValue);

    if(in_array($className, $classes)) {
      $matched[] = $node;
    }
  }

  return $matched;
}

/**
 * Implements theme_menu_tree__menu_block
 */
function smash2013_menu_tree__menu_block($variables) {
  $tree = $variables['tree'];
  list($id, $label) = _smash_2013_prep_toggler($tree);
  
  // Load into DOM
  $doc = new DOMDocument();
  @$doc->loadHTML($tree);
  $el = $doc->getElementsByTagName('body')->item(0);
  $count = 0;
  $override_tag = NULL;
  
  foreach ($el->childNodes as $node) {
    if ($node->nodeType != XML_ELEMENT_NODE) continue;
    
    if (strpos($node->getAttribute('class'), 'menu-item-group') !== FALSE) {
      $count++;
    }
    
    // check if this is a view and test on that
    $view_test = _dom_getElementsByClassName($node, 'view-content');
    if (count($view_test) > 0) {
      $count += count(_dom_getElementsByClassName($view_test[0], 'menu-item-group'));
      $override_tag = 'ul';
    }
  }
  
  $count = $count > 0 ? $count : 1;
  
  $class = 'menu';
  $tag = 'ul';
  if ($count > 1) {
    $class .= ' menu-columns-' . $count;
    $tag = 'div';
    
    if (!is_null($override_tag)) {
      $tag = $override_tag;
    }
  }
  
  return $label . '<div class="menu-wrapper">' . 
    '<' . $tag . ' class="' . $class . '" id=" ' . $id . ' ">' . 
    $tree . 
    '</' . $tag . '>' . 
    '</div>';
}

/**
 * Preprocess views
 */
function smash2013_preprocess_views_view(&$vars) {
  // dpm($vars);
  if ($vars['view']->name == 'map_locations') {
    $map_location_nid = $vars['view']->args[0];
    $map_location_node = node_load($map_location_nid);
    // dpm($map_location_node);
  }
}

/**
 * Preprocess view list
 */
function smash2013_preprocess_views_view_list(&$vars) {
}

/**
 * Implements theme_breadcrumb
 */
function smash2013_breadcrumb($variables) {
  $breadcrumb = $variables['breadcrumb'];

  if (!empty($breadcrumb)) {
    $output = '<h2 class="element-invisible">' . t('You are here') . '</h2>';
    $page_title = drupal_get_title();

    $unique_bc = array();
    $unique_title = array();
    
    foreach ($breadcrumb as $key => $value) {
      $include = true;
      $title = strip_tags($value);
      
      if (in_array($value, $unique_bc)) {
        $include = false;
      }
      else if (in_array($title, $unique_title)) {
        $include = false;
      }
      else {      
        $class_matched = preg_match('/class="([^"]*)"/', $value, $class_matches);
        $href_matched = preg_match('/href="([^"]*)"/', $value, $href_matches);
        
        // Skip nolink links
        if ($href_matches[1] == '/%3Cnolink-group%3E' || $href_matches[1] == '/%3Cnolink%3E') {
          $include = false;
        }
        
        // Skip paths we don't want
        if ($href_matches[1] == '/\/news\/category\/all/') {
          $include = false;
        }
                
        // Skip for matching titles. Particularly for news
        if ($title == $page_title) {
          $include = false;
        }
      }
      if ($include) {
        $unique_bc[] = $value;
        $unique_title[] = $title;
      }
    }
    
    $breadcrumb = $unique_bc;
    
    array_push($breadcrumb, $page_title);

    $output .= '<div class="breadcrumb">' . implode(' » ', $breadcrumb) . '</div>';
    return $output;
  }
}

/**
 * Implements template_preprocess_username
 */
function smash2013_preprocess_username(&$variables) {
  if ($variables['uid'] != 0) {
    $user = user_load($variables['uid']);
    if (!empty($user->field_display_name) && !empty($user->field_display_name[LANGUAGE_NONE])) {
      if (!empty($user->field_display_name[LANGUAGE_NONE][0]['value'])) {
        $variables['real_name'] = $variables['name'] = $user->field_display_name[LANGUAGE_NONE][0]['value'];
      }
    }
  }
  else {
    $variables['real_name'] = $variables['name'] = '';
  }
  if (!isset($variables['real_name'])) {
    $variables['real_name'] = $variables['name'];
  }
}

/**
 * Implements theme_username
 */
function smash2013_username($variables) {
  if (isset($variables['link_path'])) {
    // $output = l($variables['real_name'] . $variables['extra'], $variables['link_path'], $variables['link_options']);
    $output = '<span' . drupal_attributes($variables['attributes_array']) . '>' . $variables['real_name'] . $variables['extra'] . '</span>';
  }
  else {
    $output = '<span' . drupal_attributes($variables['attributes_array']) . '>' . $variables['real_name'] . $variables['extra'] . '</span>';
  }
  return $output;
}

require_once(__DIR__ . '/template.calendar.php');
