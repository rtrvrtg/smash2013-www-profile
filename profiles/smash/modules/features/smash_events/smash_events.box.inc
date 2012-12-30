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
  $box->title = 'Upcoming Events';
  $box->description = 'Events sidebar';
  $box->options = array(
    'body' => array(
      'value' => '<p>Here\'s a list of some of the events at SMASH! 2013 that are in the works:</p><ul><li>deviantArt Competition</li><li>Themed Art Competition</li><li>AMV Competition</li><li>Fanfiction Competition</li><li>Trivia</li><li>Cosplay Photobooth</li><li>Gaming: Free Play</li><li>Guest Panels</li><li>Gunpla Builders World Cup</li><li>Cosplay Panels</li><li>Madman Industry Panel</li><li>and much more!</li></ul>',
      'format' => 'full_html',
    ),
  );
  $export['events_2013'] = $box;

  return $export;
}
