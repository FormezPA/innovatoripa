<?php
/**
 * @file
 * innovatoripa_segnalazione.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function innovatoripa_segnalazione_user_default_permissions() {
  $permissions = array();

  // Exported permission: create segnalazione content.
  $permissions['create segnalazione content'] = array(
    'name' => 'create segnalazione content',
    'roles' => array(
      'Innovatore' => 'Innovatore',
      'Innovatore attivo' => 'Innovatore attivo',
      'Innovatore esperto' => 'Innovatore esperto',
      'amministratore' => 'amministratore',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any segnalazione content.
  $permissions['delete any segnalazione content'] = array(
    'name' => 'delete any segnalazione content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own segnalazione content.
  $permissions['delete own segnalazione content'] = array(
    'name' => 'delete own segnalazione content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any segnalazione content.
  $permissions['edit any segnalazione content'] = array(
    'name' => 'edit any segnalazione content',
    'roles' => array(
      'amministratore' => 'amministratore',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own segnalazione content.
  $permissions['edit own segnalazione content'] = array(
    'name' => 'edit own segnalazione content',
    'roles' => array(
      'Innovatore' => 'Innovatore',
      'Innovatore attivo' => 'Innovatore attivo',
      'Innovatore esperto' => 'Innovatore esperto',
      'amministratore' => 'amministratore',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
