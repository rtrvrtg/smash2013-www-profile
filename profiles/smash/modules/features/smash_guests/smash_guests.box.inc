<?php
/**
 * @file
 * smash_guests.box.inc
 */

/**
 * Implements hook_default_box().
 */
function smash_guests_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'guests_2013_sidebar';
  $box->plugin_key = 'simple';
  $box->title = 'Guests 2013';
  $box->description = 'Guests 2013 sidebar block';
  $box->options = array(
    'body' => array(
      'value' => '<p>Every year, SMASH! is joined by a range of guests from the animation, gaming and music industries. Come and join them as they discuss their works in a range of panels and activities. Please come back soon for more exciting information on our guests for 2013!</p><p>&nbsp;</p>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['guests_2013_sidebar'] = $box;

  return $export;
}
