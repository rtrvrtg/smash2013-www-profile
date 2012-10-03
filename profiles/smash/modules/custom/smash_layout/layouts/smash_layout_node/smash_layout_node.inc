<?php

/**
 * implementation of hook_panels_layouts()
 */
// Plugin definition

$plugin = array(
  'title' => t('SMASH! Layout Node'),
  'category' => t('SMASH!'),
  'icon' => 'onecol.png',
  'theme' => 'smash_layout_node',
  'css' => 'smash-layout-node.css',
  'panels' => array(
    'main' => t('Main'),
    'sidebar' => t('Sidebar'),
  ),
  'regions' => array(
    'main' => t('Main'),
    'sidebar' => t('Sidebar'),
  ),
);

