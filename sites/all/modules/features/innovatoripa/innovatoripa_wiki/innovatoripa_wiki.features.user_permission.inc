<?php
/**
 * @file
 * innovatoripa_wiki.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function innovatoripa_wiki_user_default_permissions() {
  $permissions = array();

  // Exported permission: access printer-friendly version.
  $permissions['access printer-friendly version'] = array(
    'name' => 'access printer-friendly version',
    'roles' => array(),
    'module' => 'book',
  );

  // Exported permission: add content to books.
  $permissions['add content to books'] = array(
    'name' => 'add content to books',
    'roles' => array(
      'Innovatore attivo' => 'Innovatore attivo',
      'Innovatore esperto' => 'Innovatore esperto',
      'amministratore' => 'amministratore',
    ),
    'module' => 'book',
  );

  // Exported permission: administer book outlines.
  $permissions['administer book outlines'] = array(
    'name' => 'administer book outlines',
    'roles' => array(
      'amministratore' => 'amministratore',
    ),
    'module' => 'book',
  );

  // Exported permission: create new books.
  $permissions['create new books'] = array(
    'name' => 'create new books',
    'roles' => array(
      'Innovatore attivo' => 'Innovatore attivo',
      'Innovatore esperto' => 'Innovatore esperto',
      'amministratore' => 'amministratore',
    ),
    'module' => 'book',
  );

  return $permissions;
}
