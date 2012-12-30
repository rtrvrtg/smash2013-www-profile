<?php
/**
 * @file
 * smash_events.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function smash_events_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'events';
  $context->description = 'Event List';
  $context->tag = 'Events';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'events' => 'events',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-events_2013' => array(
          'module' => 'boxes',
          'delta' => 'events_2013',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Event List');
  t('Events');
  $export['events'] = $context;

  return $export;
}
