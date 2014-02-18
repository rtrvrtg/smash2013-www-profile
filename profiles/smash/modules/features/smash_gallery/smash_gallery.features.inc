<?php
/**
 * @file
 * smash_gallery.features.inc
 */

/**
 * Implements hook_views_api().
 */
function smash_gallery_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function smash_gallery_image_default_styles() {
  $styles = array();

  // Exported image style: gallery_thumb.
  $styles['gallery_thumb'] = array(
    'name' => 'gallery_thumb',
    'effects' => array(
      5 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '100',
          'height' => '100',
        ),
        'weight' => '1',
      ),
    ),
    'label' => 'gallery_thumb',
  );

  return $styles;
}
