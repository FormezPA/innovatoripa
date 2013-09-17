<?php
/**
 * @file
 * innovatoripa_blog.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function innovatoripa_blog_taxonomy_default_vocabularies() {
  return array(
    'argomenti' => array(
      'name' => 'Argomenti',
      'machine_name' => 'argomenti',
      'description' => 'Tags',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
