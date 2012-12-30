<?php
/**
 * @file
 * smash_front_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function smash_front_page_ctools_plugin_api() {
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
function smash_front_page_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function smash_front_page_node_info() {
  $items = array(
    'home_page' => array(
      'name' => t('Home Page'),
      'base' => 'node_content',
      'description' => t('Defines a home page for the SMASH! website.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
