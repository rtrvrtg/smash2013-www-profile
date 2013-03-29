<?php
/**
 * @file
 * smash_guests.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function smash_guests_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|guest|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'guest';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'guest_news' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_events' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_facebook' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_homepage' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_photo' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_twitter' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
  );
  $export['node|guest|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function smash_guests_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'guest_news';
  $ds_field->label = 'Guest News';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|news_for_current_node-block',
    'block_render' => '1',
  );
  $export['guest_news'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function smash_guests_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|guest|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'guest';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'smash_layout_node';
  $ds_layout->settings = array(
    'regions' => array(
      'smash_layout_node_main' => array(
        0 => 'body',
        1 => 'field_events',
        2 => 'guest_news',
      ),
      'smash_layout_node_sidebar' => array(
        3 => 'field_homepage',
        4 => 'field_twitter',
        5 => 'field_facebook',
        6 => 'field_photo',
      ),
    ),
    'fields' => array(
      'body' => 'smash_layout_node_main',
      'field_events' => 'smash_layout_node_main',
      'guest_news' => 'smash_layout_node_main',
      'field_homepage' => 'smash_layout_node_sidebar',
      'field_twitter' => 'smash_layout_node_sidebar',
      'field_facebook' => 'smash_layout_node_sidebar',
      'field_photo' => 'smash_layout_node_sidebar',
    ),
    'classes' => array(),
    'wrappers' => array(
      'smash_layout_node_main' => 'div',
      'smash_layout_node_sidebar' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
  );
  $export['node|guest|default'] = $ds_layout;

  return $export;
}
