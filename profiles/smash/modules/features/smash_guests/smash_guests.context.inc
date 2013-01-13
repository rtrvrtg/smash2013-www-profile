<?php
/**
 * @file
 * smash_guests.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function smash_guests_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'guests';
  $context->description = 'Guest list';
  $context->tag = 'Guests';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'guest_list:events_page' => 'guest_list:events_page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-guests_2013_sidebar' => array(
          'module' => 'boxes',
          'delta' => 'guests_2013_sidebar',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Guest list');
  t('Guests');
  $export['guests'] = $context;

  return $export;
}
