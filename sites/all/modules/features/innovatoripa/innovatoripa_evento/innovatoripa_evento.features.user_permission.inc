<?php
/**
 * @file
 * innovatoripa_evento.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function innovatoripa_evento_user_default_permissions() {
  $permissions = array();

  // Exported permission: create evento content.
  $permissions['create evento content'] = array(
    'name' => 'create evento content',
    'roles' => array(
      'Innovatore esperto' => 'Innovatore esperto',
      'amministratore' => 'amministratore',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any evento content.
  $permissions['delete any evento content'] = array(
    'name' => 'delete any evento content',
    'roles' => array(
      'amministratore' => 'amministratore',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own evento content.
  $permissions['delete own evento content'] = array(
    'name' => 'delete own evento content',
    'roles' => array(
      'amministratore' => 'amministratore',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any evento content.
  $permissions['edit any evento content'] = array(
    'name' => 'edit any evento content',
    'roles' => array(
      'amministratore' => 'amministratore',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own evento content.
  $permissions['edit own evento content'] = array(
    'name' => 'edit own evento content',
    'roles' => array(
      'Innovatore esperto' => 'Innovatore esperto',
      'amministratore' => 'amministratore',
    ),
    'module' => 'node',
  );

  return $permissions;
}
