<?php
/**
 * @file
 * smash_news.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function smash_news_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'news';
  $context->description = 'News archive pages';
  $context->tag = 'news';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'news:by_date' => 'news:by_date',
        'news:by_tag' => 'news:by_tag',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-news-by_date_block' => array(
          'module' => 'views',
          'delta' => 'news-by_date_block',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-news-by_tag_block' => array(
          'module' => 'views',
          'delta' => 'news-by_tag_block',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('News archive pages');
  t('news');
  $export['news'] = $context;

  return $export;
}
