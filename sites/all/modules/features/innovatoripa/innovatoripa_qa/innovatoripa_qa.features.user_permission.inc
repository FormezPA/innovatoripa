<?php
/**
 * @file
 * innovatoripa_qa.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function innovatoripa_qa_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer voting api.
  $permissions['administer voting api'] = array(
    'name' => 'administer voting api',
    'roles' => array(),
    'module' => 'votingapi',
  );

  // Exported permission: create domanda content.
  $permissions['create domanda content'] = array(
    'name' => 'create domanda content',
    'roles' => array(
      'Innovatore' => 'Innovatore',
      'Innovatore attivo' => 'Innovatore attivo',
      'Innovatore esperto' => 'Innovatore esperto',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any domanda content.
  $permissions['delete any domanda content'] = array(
    'name' => 'delete any domanda content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own domanda content.
  $permissions['delete own domanda content'] = array(
    'name' => 'delete own domanda content',
    'roles' => array(
      'Innovatore' => 'Innovatore',
      'Innovatore attivo' => 'Innovatore attivo',
      'Innovatore esperto' => 'Innovatore esperto',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any domanda content.
  $permissions['edit any domanda content'] = array(
    'name' => 'edit any domanda content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own domanda content.
  $permissions['edit own domanda content'] = array(
    'name' => 'edit own domanda content',
    'roles' => array(
      'Innovatore' => 'Innovatore',
      'Innovatore attivo' => 'Innovatore attivo',
      'Innovatore esperto' => 'Innovatore esperto',
    ),
    'module' => 'node',
  );

  // Exported permission: view rate results page.
  $permissions['view rate results page'] = array(
    'name' => 'view rate results page',
    'roles' => array(
      'amministratore' => 'amministratore',
    ),
    'module' => 'rate',
  );

  return $permissions;
}
