<?php
/**
 * @file
 * innovatoripa_user.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function innovatoripa_user_user_default_roles() {
  $roles = array();

  // Exported role: Innovatore.
  $roles['Innovatore'] = array(
    'name' => 'Innovatore',
    'weight' => 3,
  );

  // Exported role: Innovatore attivo.
  $roles['Innovatore attivo'] = array(
    'name' => 'Innovatore attivo',
    'weight' => 4,
  );

  // Exported role: Innovatore esperto.
  $roles['Innovatore esperto'] = array(
    'name' => 'Innovatore esperto',
    'weight' => 5,
  );

  // Exported role: amministratore.
  $roles['amministratore'] = array(
    'name' => 'amministratore',
    'weight' => 2,
  );

  return $roles;
}
