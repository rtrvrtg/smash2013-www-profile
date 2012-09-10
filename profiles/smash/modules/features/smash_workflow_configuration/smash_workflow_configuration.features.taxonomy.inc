<?php
/**
 * @file
 * smash_workflow_configuration.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function smash_workflow_configuration_taxonomy_default_vocabularies() {
  return array(
    'section' => array(
      'name' => 'Section',
      'machine_name' => 'section',
      'description' => 'Site section',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '-10',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
