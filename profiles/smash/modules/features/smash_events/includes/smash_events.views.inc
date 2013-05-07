<?php

/**
 * @file
 *
 * Creates calendar displays of Views results.
 */
/**
 * Implementation of hook_views_plugins
 */
/*
function smash_events_views_plugins() {
  $views_path = drupal_get_path('module', 'views');
  $module_path = drupal_get_path('module', 'smash_events');
  $theme_path = $module_path;
  
  $base = array_keys(date_views_base_tables());

  $data = array(
    'module' => 'smash_events', 

    'style' => array(
      'calendar_style' => array(
        'title' => t('Calendar'),
        'help' => t('Present view results as a Calendar.'),
        'handler' => 'calendar_plugin_style',
        'path' => "$module_path/includes",
        'theme' => 'calendar_style',
        'theme file' => 'theme.inc',
        'theme path' => "$module_path/theme",
        'additional themes' => array(
          'calendar_schedule' => 'style',
        ),
        'uses fields' => TRUE,
        'uses grouping' => FALSE,
        'uses row plugin' => TRUE,
        'uses options' => TRUE,
        'type' => 'normal',
        'even empty' => TRUE,
        'base' => $base,
      ),
    ),
  );
  return $data;
} */

function smash_events_views_plugins_alter(&$plugins) {
  // dpm($plugins);
}
