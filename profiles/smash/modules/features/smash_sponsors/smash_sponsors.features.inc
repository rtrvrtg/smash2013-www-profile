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
 * Implements hook_image_default_styles().
 */
function smash_sponsors_image_default_styles() {
  $styles = array();

  // Exported image style: sponsor.
  $styles['sponsor'] = array(
    'name' => 'sponsor',
    'effects' => array(
      4 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '200',
          'height' => '200',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
    ),
    'label' => 'sponsor',
  );

  return $styles;
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
