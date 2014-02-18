<?php
/**
 * @file
 * smash_guests.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function smash_guests_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:guests/previous
  $menu_links['main-menu:guests/previous'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'guests/previous',
    'router_path' => 'guests/previous',
    'link_title' => 'Previous Guests',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'node/222',
  );
  // Exported menu link: main-menu:node/222
  $menu_links['main-menu:node/222'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/222',
    'router_path' => 'node/%',
    'link_title' => 'Guests',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-45',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Guests');
  t('Previous Guests');


  return $menu_links;
}
