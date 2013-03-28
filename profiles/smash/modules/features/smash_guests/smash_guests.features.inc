<?php
/**
 * @file
 * smash_guests.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function smash_guests_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function smash_guests_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function smash_guests_node_info() {
  $items = array(
    'guest' => array(
      'name' => t('Guest'),
      'base' => 'node_content',
      'description' => t('A guest at the given convention.'),
      'has_title' => '1',
      'title_label' => t('Guest Name'),
      'help' => '',
    ),
  );
  return $items;
}
