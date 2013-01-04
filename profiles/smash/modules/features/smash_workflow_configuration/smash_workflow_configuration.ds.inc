<?php
/**
 * @file
 * smash_workflow_configuration.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function smash_workflow_configuration_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'field_collection_item|field_sidebar_content|default';
  $ds_fieldsetting->entity_type = 'field_collection_item';
  $ds_fieldsetting->bundle = 'field_sidebar_content';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_sidebar_body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_sidebar_image' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_sidebar_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'h3',
          'ow-cl' => 'sidebar-content-title',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['field_collection_item|field_sidebar_content|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|page|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'page';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_sidebar_content' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
  );
  $export['node|page|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function smash_workflow_configuration_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_sidebar_content|default';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_sidebar_content';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_sidebar_title',
        1 => 'field_sidebar_body',
        2 => 'field_sidebar_image',
      ),
    ),
    'fields' => array(
      'field_sidebar_title' => 'ds_content',
      'field_sidebar_body' => 'ds_content',
      'field_sidebar_image' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
  );
  $export['field_collection_item|field_sidebar_content|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'smash_layout_node';
  $ds_layout->settings = array(
    'regions' => array(
      'smash_layout_node_main' => array(
        0 => 'body',
      ),
      'smash_layout_node_sidebar' => array(
        1 => 'field_sidebar_content',
      ),
    ),
    'fields' => array(
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
  $export['node|page|default'] = $ds_layout;

  return $export;
}
