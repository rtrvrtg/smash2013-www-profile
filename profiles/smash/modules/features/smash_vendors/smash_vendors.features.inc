<?php
/**
 * @file
 * smash_vendors.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function smash_vendors_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function smash_vendors_node_info() {
  $items = array(
    'vendor' => array(
      'name' => t('Vendor'),
      'base' => 'node_content',
      'description' => t('A vendor at the given convention.'),
      'has_title' => '1',
      'title_label' => t('Vendor Name'),
      'help' => '',
    ),
  );
  return $items;
}
