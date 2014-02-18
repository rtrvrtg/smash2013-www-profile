<?php
/**
 * @file
 * page_hero.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function page_hero_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function page_hero_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function page_hero_node_info() {
  $items = array(
    'page_hero' => array(
      'name' => t('Page Hero'),
      'base' => 'node_content',
      'description' => t('Hero image for a particular page or group of pages.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
