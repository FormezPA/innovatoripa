<?php
/**
 * @file
 * innovatoripa_blog.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function innovatoripa_blog_user_default_permissions() {
  $permissions = array();

  // Exported permission: create blog content.
  $permissions['create blog content'] = array(
    'name' => 'create blog content',
    'roles' => array(
      'Innovatore attivo' => 'Innovatore attivo',
      'Innovatore esperto' => 'Innovatore esperto',
      'amministratore' => 'amministratore',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any blog content.
  $permissions['delete any blog content'] = array(
    'name' => 'delete any blog content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own blog content.
  $permissions['delete own blog content'] = array(
    'name' => 'delete own blog content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any blog content.
  $permissions['edit any blog content'] = array(
    'name' => 'edit any blog content',
    'roles' => array(
      'amministratore' => 'amministratore',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own blog content.
  $permissions['edit own blog content'] = array(
    'name' => 'edit own blog content',
    'roles' => array(
      'Innovatore attivo' => 'Innovatore attivo',
      'Innovatore esperto' => 'Innovatore esperto',
      'amministratore' => 'amministratore',
    ),
    'module' => 'node',
  );

  return $permissions;
}
