<?php

function samaranch_map_views_plugins() {
  $plugins['style']['samaranch_map'] = array(
    'title' => t('Samaranch Map'),
    'help' => t('Displays items on a Samaranch Map.'),
    'handler' => 'views_plugin_style_samaranch_map',
    'theme' => 'views_view_samaranch_map',
    'uses row plugin' => TRUE,
    'uses row class' => TRUE,
    'uses grouping' => FALSE,
    'uses options' => TRUE,
    'type' => 'normal',
    'help topic' => 'style-samaranch-map',
  );
  
  return $plugins;
}
