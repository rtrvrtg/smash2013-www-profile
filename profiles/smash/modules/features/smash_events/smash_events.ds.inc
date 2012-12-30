<?php
/**
 * @file
 * smash_events.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function smash_events_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|event|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'event';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_event_date_time' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'lb' => 'When',
        ),
      ),
    ),
    'field_location' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'lb' => 'Where',
        ),
      ),
    ),
    'field_sidebar_content' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
  );
  $export['node|event|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function smash_events_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|event|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'event';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'smash_layout_node';
  $ds_layout->settings = array(
    'regions' => array(
      'smash_layout_node_main' => array(
        0 => 'field_event_date_time',
        1 => 'field_location',
        2 => 'body',
      ),
      'smash_layout_node_sidebar' => array(
        3 => 'field_sidebar_content',
      ),
    ),
    'fields' => array(
      'field_event_date_time' => 'smash_layout_node_main',
      'field_location' => 'smash_layout_node_main',
      'body' => 'smash_layout_node_main',
      'field_sidebar_content' => 'smash_layout_node_sidebar',
    ),
    'classes' => array(),
    'wrappers' => array(
      'smash_layout_node_main' => 'div',
      'smash_layout_node_sidebar' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
  );
  $export['node|event|default'] = $ds_layout;

  return $export;
}