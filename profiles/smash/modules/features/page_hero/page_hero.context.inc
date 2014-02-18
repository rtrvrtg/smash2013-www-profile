<?php
/**
 * @file
 * page_hero.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function page_hero_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'all_pages';
  $context->description = '';
  $context->tag = 'All pages';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-page_hero-block' => array(
          'module' => 'views',
          'delta' => 'page_hero-block',
          'region' => 'content_prefix',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('All pages');
  $export['all_pages'] = $context;

  return $export;
}
