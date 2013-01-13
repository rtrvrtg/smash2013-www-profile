<?php
/**
 * @file
 * smash_workflow_configuration.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function smash_workflow_configuration_filter_default_formats() {
  $formats = array();

  // Exported format: Filtered HTML.
  $formats['filtered_html'] = array(
    'format' => 'filtered_html',
    'name' => 'Filtered HTML',
    'cache' => '0',
    'status' => '1',
    'weight' => '-9',
    'filters' => array(
      'ckeditor_link_filter' => array(
        'weight' => '-47',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => '-46',
        'status' => '1',
        'settings' => array(
          'filter_url_length' => '72',
        ),
      ),
      'filter_html' => array(
        'weight' => '-45',
        'status' => '1',
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd> <p> <br>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => '-43',
        'status' => '1',
        'settings' => array(),
      ),
      'media_filter' => array(
        'weight' => '-42',
        'status' => '1',
        'settings' => array(),
      ),
      'insert_view' => array(
        'weight' => '-41',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_tokens' => array(
        'weight' => '-40',
        'status' => '1',
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Full HTML.
  $formats['full_html'] = array(
    'format' => 'full_html',
    'name' => 'Full HTML',
    'cache' => '0',
    'status' => '1',
    'weight' => '-10',
    'filters' => array(
      'ckeditor_link_filter' => array(
        'weight' => '-46',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => '-45',
        'status' => '1',
        'settings' => array(
          'filter_url_length' => '72',
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => '-43',
        'status' => '1',
        'settings' => array(),
      ),
      'media_filter' => array(
        'weight' => '-42',
        'status' => '1',
        'settings' => array(),
      ),
      'insert_view' => array(
        'weight' => '-41',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_tokens' => array(
        'weight' => '-40',
        'status' => '1',
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
