<?php
/**
 * @file
 * smash_basic_config.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function smash_basic_config_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'SMASH! Sydney Manga and Anime Show';
  $export['site_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_slogan';
  $strongarm->value = 'Saturday, August 10 • Sydney Convention Centre';
  $export['site_slogan'] = $strongarm;

  return $export;
}
