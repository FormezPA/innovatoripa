<?php
/**
 * @file
 * innovatoripa_notify.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function innovatoripa_notify_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer mailhandler.
  $permissions['administer mailhandler'] = array(
    'name' => 'administer mailhandler',
    'roles' => array(),
    'module' => 'mailhandler',
  );

  // Exported permission: administer message subscribe.
  $permissions['administer message subscribe'] = array(
    'name' => 'administer message subscribe',
    'roles' => array(),
    'module' => 'message_subscribe',
  );

  // Exported permission: clear import_comments_via_mailhandler feeds.
  $permissions['clear import_comments_via_mailhandler feeds'] = array(
    'name' => 'clear import_comments_via_mailhandler feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: import import_comments_via_mailhandler feeds.
  $permissions['import import_comments_via_mailhandler feeds'] = array(
    'name' => 'import import_comments_via_mailhandler feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: unlock import_comments_via_mailhandler feeds.
  $permissions['unlock import_comments_via_mailhandler feeds'] = array(
    'name' => 'unlock import_comments_via_mailhandler feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  return $permissions;
}
