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
          'func' => 'theme_ds_field_expert',
          'lb' => 'When',
          'lb-el' => 'h3',
          'lb-cl' => 'sidebar-content-title',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'sidebar-block',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'sidebar-inner',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
    'field_location' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Where',
          'lb-el' => 'h3',
          'lb-cl' => 'sidebar-content-title',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'sidebar-block',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fis' => TRUE,
          'fis-el' => 'siv',
          'fis-cl' => 'sidebar-inner',
          'fis-at' => '',
          'fis-def-at' => FALSE,
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
    'field_vendors_sponsors' => array(
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
        0 => 'body',
        4 => 'field_vendors_sponsors',
      ),
      'smash_layout_node_sidebar' => array(
        1 => 'field_event_date_time',
        2 => 'field_location',
        3 => 'field_sidebar_content',
      ),
    ),
    'fields' => array(
      'body' => 'smash_layout_node_main',
      'field_event_date_time' => 'smash_layout_node_sidebar',
      'field_location' => 'smash_layout_node_sidebar',
      'field_sidebar_content' => 'smash_layout_node_sidebar',
      'field_vendors_sponsors' => 'smash_layout_node_main',
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
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|event|default'] = $ds_layout;

  return $export;
}
