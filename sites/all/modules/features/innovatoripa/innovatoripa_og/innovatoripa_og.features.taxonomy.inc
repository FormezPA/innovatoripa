<?php
/**
 * @file
 * innovatoripa_og.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function innovatoripa_og_taxonomy_default_vocabularies() {
  return array(
    'forum_gruppo_standard' => array(
      'name' => 'Forum gruppo standard',
      'machine_name' => 'forum_gruppo_standard',
      'description' => 'Vocabolario custom forum da clonare per ogni OG (non usato)',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -9,
    ),
  );
}
