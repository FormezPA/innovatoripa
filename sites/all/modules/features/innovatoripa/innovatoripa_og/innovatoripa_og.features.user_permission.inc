<?php
/**
 * @file
 * innovatoripa_og.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function innovatoripa_og_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer group.
  $permissions['administer group'] = array(
    'name' => 'administer group',
    'roles' => array(
      'amministratore' => 'amministratore',
    ),
    'module' => 'og',
  );

  // Exported permission: create comunita content.
  $permissions['create comunita content'] = array(
    'name' => 'create comunita content',
    'roles' => array(
      'Innovatore esperto' => 'Innovatore esperto',
    ),
    'module' => 'node',
  );

  // Exported permission: create discussione content.
  $permissions['create discussione content'] = array(
    'name' => 'create discussione content',
    'roles' => array(
      'Innovatore attivo' => 'Innovatore attivo',
      'Innovatore esperto' => 'Innovatore esperto',
      'amministratore' => 'amministratore',
    ),
    'module' => 'node',
  );

  // Exported permission: create gruppo content.
  $permissions['create gruppo content'] = array(
    'name' => 'create gruppo content',
    'roles' => array(
      'Innovatore esperto' => 'Innovatore esperto',
      'amministratore' => 'amministratore',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any comunita content.
  $permissions['delete any comunita content'] = array(
    'name' => 'delete any comunita content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any discussione content.
  $permissions['delete any discussione content'] = array(
    'name' => 'delete any discussione content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any gruppo content.
  $permissions['delete any gruppo content'] = array(
    'name' => 'delete any gruppo content',
    'roles' => array(
      'amministratore' => 'amministratore',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own comunita content.
  $permissions['delete own comunita content'] = array(
    'name' => 'delete own comunita content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own discussione content.
  $permissions['delete own discussione content'] = array(
    'name' => 'delete own discussione content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own gruppo content.
  $permissions['delete own gruppo content'] = array(
    'name' => 'delete own gruppo content',
    'roles' => array(
      'amministratore' => 'amministratore',
    ),
    'module' => 'node',
  );

  // Exported permission: delete terms in 5.
  $permissions['delete terms in 5'] = array(
    'name' => 'delete terms in 5',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: edit any comunita content.
  $permissions['edit any comunita content'] = array(
    'name' => 'edit any comunita content',
    'roles' => array(
      'amministratore' => 'amministratore',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any discussione content.
  $permissions['edit any discussione content'] = array(
    'name' => 'edit any discussione content',
    'roles' => array(
      'amministratore' => 'amministratore',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any gruppo content.
  $permissions['edit any gruppo content'] = array(
    'name' => 'edit any gruppo content',
    'roles' => array(
      'amministratore' => 'amministratore',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own comunita content.
  $permissions['edit own comunita content'] = array(
    'name' => 'edit own comunita content',
    'roles' => array(
      'Innovatore esperto' => 'Innovatore esperto',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own discussione content.
  $permissions['edit own discussione content'] = array(
    'name' => 'edit own discussione content',
    'roles' => array(
      'Innovatore attivo' => 'Innovatore attivo',
      'Innovatore esperto' => 'Innovatore esperto',
      'amministratore' => 'amministratore',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own gruppo content.
  $permissions['edit own gruppo content'] = array(
    'name' => 'edit own gruppo content',
    'roles' => array(
      'Innovatore esperto' => 'Innovatore esperto',
      'amministratore' => 'amministratore',
    ),
    'module' => 'node',
  );

  // Exported permission: edit terms in 5.
  $permissions['edit terms in 5'] = array(
    'name' => 'edit terms in 5',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  return $permissions;
}
