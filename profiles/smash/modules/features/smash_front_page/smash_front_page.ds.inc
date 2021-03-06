<?php
/**
 * @file
 * smash_front_page.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function smash_front_page_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'field_collection_item|field_hero|default';
  $ds_fieldsetting->entity_type = 'field_collection_item';
  $ds_fieldsetting->bundle = 'field_hero';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'wrapped_frontpage_hero' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_hero_image' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_hero_link' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_hero_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_hero_blurb' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_hero_video' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
  );
  $export['field_collection_item|field_hero|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function smash_front_page_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'feature_wrapper';
  $ds_field->label = 'Feature wrapper';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'field_collection_item' => 'field_collection_item',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<a href="[field_collection_item:field-feature-link:url]" class="feature-wrapped">
<span class="feature-wrapped-image">
<img class="feature-wrapped-image-inactive" src="[field_collection_item:field_feature_image_inactive]" />
<img class="feature-wrapped-image-active" src="[field_collection_item:field_feature_image_active]" />
</span>
<span class="feature-wrapped-text">
<h2>[field_collection_item:field_feature_title]</h2>
[field_collection_item:field_feature_blurb]
</span>
</a>',
      'format' => 'ds_code',
    ),
    'use_token' => 1,
  );
  $export['feature_wrapper'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'wrapped_hero';
  $ds_field->label = 'Wrapped Hero';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'field_collection_item' => 'field_collection_item',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<a href="[field_collection_item:field-hero-link:url]" class="hero-wrapped">
<span class="hero-wrapped-image"><img src="[field_collection_item:field_hero_image:homepage_full]" /><span class="hero-image-credits">Photo credits: [field_collection_item:field-photo-credits]</span></span>
<span class="hero-wrapped-content">
<h2>[field_collection_item:field-hero-title]</h2>
[field_collection_item:field_hero_blurb]
</span>
</a>',
      'format' => 'ds_code',
    ),
    'use_token' => 1,
  );
  $export['wrapped_hero'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function smash_front_page_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_hero|default';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_hero';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'wrapped_frontpage_hero',
      ),
      'ds_hidden' => array(
        1 => 'field_hero_image',
        2 => 'field_hero_link',
        3 => 'field_hero_title',
        4 => 'field_hero_blurb',
        5 => 'field_hero_video',
      ),
    ),
    'fields' => array(
      'wrapped_frontpage_hero' => 'ds_content',
      'field_hero_image' => 'ds_hidden',
      'field_hero_link' => 'ds_hidden',
      'field_hero_title' => 'ds_hidden',
      'field_hero_blurb' => 'ds_hidden',
      'field_hero_video' => 'ds_hidden',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['field_collection_item|field_hero|default'] = $ds_layout;

  return $export;
}
