<?php
/**
 * @file
 * smash_workflow_configuration.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function smash_workflow_configuration_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Community',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '2',
    'uuid' => '3c0afe88-cdf1-6cd4-c5c3-9e1f925bbf05',
    'vocabulary_machine_name' => 'section',
    'path' => array(
      'alias' => 'section/community',
      'pathauto' => FALSE,
    ),
  );
  $terms[] = array(
    'name' => 'Tickets',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '6',
    'uuid' => '75e65fbe-19b4-c4f4-956a-2024d83b6bdd',
    'vocabulary_machine_name' => 'section',
    'path' => array(
      'alias' => 'section/tickets',
      'pathauto' => FALSE,
    ),
  );
  $terms[] = array(
    'name' => 'Events',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '4',
    'uuid' => '7b418151-298a-e2d4-5975-8dad2ce83f47',
    'vocabulary_machine_name' => 'section',
    'path' => array(
      'alias' => 'section/events',
      'pathauto' => FALSE,
    ),
  );
  $terms[] = array(
    'name' => 'Guests',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '5',
    'uuid' => '7ba878a5-e359-7e24-05cd-da3a1d3bb30f',
    'vocabulary_machine_name' => 'section',
    'path' => array(
      'alias' => 'section/guests',
      'pathauto' => FALSE,
    ),
  );
  $terms[] = array(
    'name' => 'Vendors',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '7',
    'uuid' => 'c62c7390-9689-f094-f9aa-00e38f449129',
    'vocabulary_machine_name' => 'section',
    'path' => array(
      'alias' => 'section/vendors',
      'pathauto' => FALSE,
    ),
  );
  $terms[] = array(
    'name' => 'Details',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '3',
    'uuid' => 'cf981c06-87b5-8c14-ddc8-1bd251b4718e',
    'vocabulary_machine_name' => 'section',
    'path' => array(
      'alias' => 'section/details',
      'pathauto' => FALSE,
    ),
  );
  $terms[] = array(
    'name' => 'News',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '1',
    'uuid' => 'e36f15fc-7b0c-3bc4-798e-dfdd86426df1',
    'vocabulary_machine_name' => 'section',
    'path' => array(
      'alias' => 'section/news',
      'pathauto' => FALSE,
    ),
  );
  $terms[] = array(
    'name' => 'Home Page',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => 'e3c44062-a915-cb54-2147-d237e6b87f83',
    'vocabulary_machine_name' => 'section',
    'path' => array(
      'alias' => 'section/home-page',
      'pathauto' => FALSE,
    ),
  );
  return $terms;
}
