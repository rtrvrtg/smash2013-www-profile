<?php
/**
 * @file
 * smash_sponsors.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function smash_sponsors_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function smash_sponsors_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function smash_sponsors_node_info() {
  $items = array(
    'sponsor' => array(
      'name' => t('Sponsor'),
      'base' => 'node_content',
      'description' => t('Special node for the sponsors; displayed in the footer.'),
      'has_title' => '1',
      'title_label' => t('Sponsor Name'),
      'help' => '',
    ),
  );
  return $items;
}
