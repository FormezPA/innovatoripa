<?php
/**
 * @file
 * innovatoripa_og.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function innovatoripa_og_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:comunita:add user'
  $permissions['node:comunita:add user'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:comunita:administer group'
  $permissions['node:comunita:administer group'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:comunita:administer taxonomy'
  $permissions['node:comunita:administer taxonomy'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:comunita:approve and deny subscription'
  $permissions['node:comunita:approve and deny subscription'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:comunita:create blog content'
  $permissions['node:comunita:create blog content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:comunita:create book content'
  $permissions['node:comunita:create book content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:comunita:create discussione content'
  $permissions['node:comunita:create discussione content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:comunita:create domanda content'
  $permissions['node:comunita:create domanda content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:comunita:create evento content'
  $permissions['node:comunita:create evento content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:comunita:create gruppo content'
  $permissions['node:comunita:create gruppo content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:comunita:create page content'
  $permissions['node:comunita:create page content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:comunita:create segnalazione content'
  $permissions['node:comunita:create segnalazione content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:comunita:create webform content'
  $permissions['node:comunita:create webform content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:comunita:delete any blog content'
  $permissions['node:comunita:delete any blog content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:comunita:delete any book content'
  $permissions['node:comunita:delete any book content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:comunita:delete any discussione content'
  $permissions['node:comunita:delete any discussione content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:comunita:delete any domanda content'
  $permissions['node:comunita:delete any domanda content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:comunita:delete any evento content'
  $permissions['node:comunita:delete any evento content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:comunita:delete any gruppo content'
  $permissions['node:comunita:delete any gruppo content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:comunita:delete any page content'
  $permissions['node:comunita:delete any page content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:comunita:delete any segnalazione content'
  $permissions['node:comunita:delete any segnalazione content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:comunita:delete any webform content'
  $permissions['node:comunita:delete any webform content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:comunita:delete own blog content'
  $permissions['node:comunita:delete own blog content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:comunita:delete own book content'
  $permissions['node:comunita:delete own book content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:comunita:delete own discussione content'
  $permissions['node:comunita:delete own discussione content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:comunita:delete own domanda content'
  $permissions['node:comunita:delete own domanda content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:comunita:delete own evento content'
  $permissions['node:comunita:delete own evento content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:comunita:delete own gruppo content'
  $permissions['node:comunita:delete own gruppo content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:comunita:delete own page content'
  $permissions['node:comunita:delete own page content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:comunita:delete own segnalazione content'
  $permissions['node:comunita:delete own segnalazione content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:comunita:delete own webform content'
  $permissions['node:comunita:delete own webform content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:comunita:delete terms'
  $permissions['node:comunita:delete terms'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:comunita:edit terms'
  $permissions['node:comunita:edit terms'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:comunita:manage members'
  $permissions['node:comunita:manage members'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:comunita:manage permissions'
  $permissions['node:comunita:manage permissions'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:comunita:manage roles'
  $permissions['node:comunita:manage roles'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:comunita:subscribe'
  $permissions['node:comunita:subscribe'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:comunita:subscribe without approval'
  $permissions['node:comunita:subscribe without approval'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:comunita:unsubscribe'
  $permissions['node:comunita:unsubscribe'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:comunita:update any blog content'
  $permissions['node:comunita:update any blog content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:comunita:update any book content'
  $permissions['node:comunita:update any book content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:comunita:update any discussione content'
  $permissions['node:comunita:update any discussione content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:comunita:update any domanda content'
  $permissions['node:comunita:update any domanda content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:comunita:update any evento content'
  $permissions['node:comunita:update any evento content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:comunita:update any gruppo content'
  $permissions['node:comunita:update any gruppo content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:comunita:update any page content'
  $permissions['node:comunita:update any page content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:comunita:update any segnalazione content'
  $permissions['node:comunita:update any segnalazione content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:comunita:update any webform content'
  $permissions['node:comunita:update any webform content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:comunita:update group'
  $permissions['node:comunita:update group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:comunita:update own blog content'
  $permissions['node:comunita:update own blog content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:comunita:update own book content'
  $permissions['node:comunita:update own book content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:comunita:update own discussione content'
  $permissions['node:comunita:update own discussione content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:comunita:update own domanda content'
  $permissions['node:comunita:update own domanda content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:comunita:update own evento content'
  $permissions['node:comunita:update own evento content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:comunita:update own gruppo content'
  $permissions['node:comunita:update own gruppo content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:comunita:update own page content'
  $permissions['node:comunita:update own page content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:comunita:update own segnalazione content'
  $permissions['node:comunita:update own segnalazione content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:comunita:update own webform content'
  $permissions['node:comunita:update own webform content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:gruppo:add user'
  $permissions['node:gruppo:add user'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:gruppo:administer group'
  $permissions['node:gruppo:administer group'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:gruppo:administer taxonomy'
  $permissions['node:gruppo:administer taxonomy'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:gruppo:approve and deny subscription'
  $permissions['node:gruppo:approve and deny subscription'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:gruppo:create blog content'
  $permissions['node:gruppo:create blog content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:gruppo:create book content'
  $permissions['node:gruppo:create book content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:gruppo:create discussione content'
  $permissions['node:gruppo:create discussione content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:gruppo:create domanda content'
  $permissions['node:gruppo:create domanda content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:gruppo:create evento content'
  $permissions['node:gruppo:create evento content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:gruppo:create gruppo content'
  $permissions['node:gruppo:create gruppo content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:gruppo:create page content'
  $permissions['node:gruppo:create page content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:gruppo:create segnalazione content'
  $permissions['node:gruppo:create segnalazione content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:gruppo:create webform content'
  $permissions['node:gruppo:create webform content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:gruppo:delete any blog content'
  $permissions['node:gruppo:delete any blog content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:gruppo:delete any book content'
  $permissions['node:gruppo:delete any book content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:gruppo:delete any discussione content'
  $permissions['node:gruppo:delete any discussione content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:gruppo:delete any domanda content'
  $permissions['node:gruppo:delete any domanda content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:gruppo:delete any evento content'
  $permissions['node:gruppo:delete any evento content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:gruppo:delete any gruppo content'
  $permissions['node:gruppo:delete any gruppo content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:gruppo:delete any page content'
  $permissions['node:gruppo:delete any page content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:gruppo:delete any segnalazione content'
  $permissions['node:gruppo:delete any segnalazione content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:gruppo:delete any webform content'
  $permissions['node:gruppo:delete any webform content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:gruppo:delete own blog content'
  $permissions['node:gruppo:delete own blog content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:gruppo:delete own book content'
  $permissions['node:gruppo:delete own book content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:gruppo:delete own discussione content'
  $permissions['node:gruppo:delete own discussione content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:gruppo:delete own domanda content'
  $permissions['node:gruppo:delete own domanda content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:gruppo:delete own evento content'
  $permissions['node:gruppo:delete own evento content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:gruppo:delete own gruppo content'
  $permissions['node:gruppo:delete own gruppo content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:gruppo:delete own page content'
  $permissions['node:gruppo:delete own page content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:gruppo:delete own segnalazione content'
  $permissions['node:gruppo:delete own segnalazione content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:gruppo:delete own webform content'
  $permissions['node:gruppo:delete own webform content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:gruppo:delete terms'
  $permissions['node:gruppo:delete terms'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:gruppo:edit terms'
  $permissions['node:gruppo:edit terms'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:gruppo:manage members'
  $permissions['node:gruppo:manage members'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:gruppo:manage permissions'
  $permissions['node:gruppo:manage permissions'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:gruppo:manage roles'
  $permissions['node:gruppo:manage roles'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:gruppo:subscribe'
  $permissions['node:gruppo:subscribe'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:gruppo:subscribe without approval'
  $permissions['node:gruppo:subscribe without approval'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:gruppo:unsubscribe'
  $permissions['node:gruppo:unsubscribe'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:gruppo:update any blog content'
  $permissions['node:gruppo:update any blog content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:gruppo:update any book content'
  $permissions['node:gruppo:update any book content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:gruppo:update any discussione content'
  $permissions['node:gruppo:update any discussione content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:gruppo:update any domanda content'
  $permissions['node:gruppo:update any domanda content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:gruppo:update any evento content'
  $permissions['node:gruppo:update any evento content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:gruppo:update any gruppo content'
  $permissions['node:gruppo:update any gruppo content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:gruppo:update any page content'
  $permissions['node:gruppo:update any page content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:gruppo:update any segnalazione content'
  $permissions['node:gruppo:update any segnalazione content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:gruppo:update any webform content'
  $permissions['node:gruppo:update any webform content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:gruppo:update group'
  $permissions['node:gruppo:update group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:gruppo:update own blog content'
  $permissions['node:gruppo:update own blog content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:gruppo:update own book content'
  $permissions['node:gruppo:update own book content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:gruppo:update own discussione content'
  $permissions['node:gruppo:update own discussione content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:gruppo:update own domanda content'
  $permissions['node:gruppo:update own domanda content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:gruppo:update own evento content'
  $permissions['node:gruppo:update own evento content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:gruppo:update own gruppo content'
  $permissions['node:gruppo:update own gruppo content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:gruppo:update own page content'
  $permissions['node:gruppo:update own page content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:gruppo:update own segnalazione content'
  $permissions['node:gruppo:update own segnalazione content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:gruppo:update own webform content'
  $permissions['node:gruppo:update own webform content'] = array(
    'roles' => array(),
  );

  return $permissions;
}
