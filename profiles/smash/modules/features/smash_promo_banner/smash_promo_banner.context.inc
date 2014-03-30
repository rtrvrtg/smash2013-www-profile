<?php
/**
 * @file
 * smash_promo_banner.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function smash_promo_banner_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'annual_promo_1';
  $context->description = 'Annual promotion event 1';
  $context->tag = 'Annual Promotion';
  $context->conditions = array(
    'context_date' => array(
      'values' => array(
        'after' => 1396270800,
        'before' => 1396357200,
      ),
    ),
  );
  $context->reactions = array(
    'theme_html' => array(
      'class' => 'annual-promo-event-1',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Annual Promotion');
  t('Annual promotion event 1');
  $export['annual_promo_1'] = $context;

  return $export;
}
