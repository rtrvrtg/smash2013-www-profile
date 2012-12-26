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
function smash_vendors_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function smash_vendors_image_default_styles() {
  $styles = array();

  // Exported image style: vendor_banner.
  $styles['vendor_banner'] = array(
    'name' => 'vendor_banner',
    'effects' => array(
      3 => array(
        'label' => 'Javascript crop',
        'help' => 'Create a crop with a javascript toolbox.',
        'effect callback' => 'imagecrop_effect',
        'form callback' => 'imagecrop_effect_form',
        'summary theme' => 'imagecrop_effect_summary',
        'module' => 'imagecrop',
        'name' => 'imagecrop_javascript',
        'data' => array(
          'width' => '200',
          'height' => '80',
          'xoffset' => '',
          'yoffset' => '',
          'resizable' => 1,
          'downscaling' => 0,
          'aspect_ratio' => '',
          'disable_if_no_data' => 0,
        ),
        'weight' => '1',
      ),
      4 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '200',
          'height' => '80',
        ),
        'weight' => '2',
      ),
    ),
  );

  return $styles;
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
