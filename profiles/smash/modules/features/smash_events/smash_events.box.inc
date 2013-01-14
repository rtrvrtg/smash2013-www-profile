<?php
/**
 * @file
 * smash_events.box.inc
 */

/**
 * Implements hook_default_box().
 */
function smash_events_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'events_2013';
  $box->plugin_key = 'simple';
  $box->title = 'Previous year\'s events';
  $box->description = 'Events sidebar';
  $box->options = array(
    'body' => array(
      'value' => '<p>[view:gallery=block=Events]</p>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['events_2013'] = $box;

  return $export;
}
