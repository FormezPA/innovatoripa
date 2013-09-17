<?php
/**
 * @file
 * innovatoripa_sondaggi.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function innovatoripa_sondaggi_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:comunita:create poll content'
  $permissions['node:comunita:create poll content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:comunita:delete any poll content'
  $permissions['node:comunita:delete any poll content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:comunita:delete own poll content'
  $permissions['node:comunita:delete own poll content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:comunita:update any poll content'
  $permissions['node:comunita:update any poll content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:comunita:update own poll content'
  $permissions['node:comunita:update own poll content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:gruppo:create poll content'
  $permissions['node:gruppo:create poll content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:gruppo:delete any poll content'
  $permissions['node:gruppo:delete any poll content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:gruppo:delete own poll content'
  $permissions['node:gruppo:delete own poll content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:gruppo:update any poll content'
  $permissions['node:gruppo:update any poll content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:gruppo:update own poll content'
  $permissions['node:gruppo:update own poll content'] = array(
    'roles' => array(),
  );

  return $permissions;
}
