<?php
/**
 * @file
 * smash_locations.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function smash_locations_user_default_permissions() {
  $permissions = array();

  // Exported permission: create location content.
  $permissions['create location content'] = array(
    'name' => 'create location content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create venue_map content.
  $permissions['create venue_map content'] = array(
    'name' => 'create venue_map content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any location content.
  $permissions['delete any location content'] = array(
    'name' => 'delete any location content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any venue_map content.
  $permissions['delete any venue_map content'] = array(
    'name' => 'delete any venue_map content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own location content.
  $permissions['delete own location content'] = array(
    'name' => 'delete own location content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own venue_map content.
  $permissions['delete own venue_map content'] = array(
    'name' => 'delete own venue_map content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any location content.
  $permissions['edit any location content'] = array(
    'name' => 'edit any location content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any venue_map content.
  $permissions['edit any venue_map content'] = array(
    'name' => 'edit any venue_map content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own location content.
  $permissions['edit own location content'] = array(
    'name' => 'edit own location content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own venue_map content.
  $permissions['edit own venue_map content'] = array(
    'name' => 'edit own venue_map content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
