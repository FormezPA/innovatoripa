<?php
/**
 * @file
 * innovatoripa_sondaggi.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function innovatoripa_sondaggi_user_default_permissions() {
  $permissions = array();

  // Exported permission: cancel own vote.
  $permissions['cancel own vote'] = array(
    'name' => 'cancel own vote',
    'roles' => array(),
    'module' => 'poll',
  );

  // Exported permission: create poll content.
  $permissions['create poll content'] = array(
    'name' => 'create poll content',
    'roles' => array(
      'Innovatore esperto' => 'Innovatore esperto',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any poll content.
  $permissions['delete any poll content'] = array(
    'name' => 'delete any poll content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own poll content.
  $permissions['delete own poll content'] = array(
    'name' => 'delete own poll content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any poll content.
  $permissions['edit any poll content'] = array(
    'name' => 'edit any poll content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own poll content.
  $permissions['edit own poll content'] = array(
    'name' => 'edit own poll content',
    'roles' => array(
      'Innovatore esperto' => 'Innovatore esperto',
    ),
    'module' => 'node',
  );

  // Exported permission: inspect all votes.
  $permissions['inspect all votes'] = array(
    'name' => 'inspect all votes',
    'roles' => array(),
    'module' => 'poll',
  );

  // Exported permission: vote on polls.
  $permissions['vote on polls'] = array(
    'name' => 'vote on polls',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'poll',
  );

  return $permissions;
}
