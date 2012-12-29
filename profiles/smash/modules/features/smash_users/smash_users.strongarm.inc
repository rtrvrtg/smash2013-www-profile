<?php
/**
 * @file
 * smash_users.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function smash_users_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_user__user';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'redirect' => array(
          'weight' => '6',
        ),
        'account' => array(
          'weight' => '0',
        ),
        'timezone' => array(
          'weight' => '5',
        ),
        'picture' => array(
          'weight' => '2',
        ),
        'overlay_control' => array(
          'weight' => '4',
        ),
        'wysiwyg' => array(
          'weight' => '3',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_user__user'] = $strongarm;

  return $export;
}
