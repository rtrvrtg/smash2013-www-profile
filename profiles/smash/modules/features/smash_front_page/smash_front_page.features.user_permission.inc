<?php
/**
 * @file
 * smash_front_page.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function smash_front_page_user_default_permissions() {
  $permissions = array();

  // Exported permission: create home_page content.
  $permissions['create home_page content'] = array(
    'name' => 'create home_page content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any home_page content.
  $permissions['delete any home_page content'] = array(
    'name' => 'delete any home_page content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own home_page content.
  $permissions['delete own home_page content'] = array(
    'name' => 'delete own home_page content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any home_page content.
  $permissions['edit any home_page content'] = array(
    'name' => 'edit any home_page content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own home_page content.
  $permissions['edit own home_page content'] = array(
    'name' => 'edit own home_page content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
