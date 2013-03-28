<?php
/**
 * @file
 * smash_guests.ds.inc
 */

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
