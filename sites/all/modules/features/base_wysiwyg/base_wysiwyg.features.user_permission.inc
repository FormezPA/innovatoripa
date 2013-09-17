<?php
/**
 * @file
 * base_wysiwyg.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function base_wysiwyg_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer linkit.
  $permissions['administer linkit'] = array(
    'name' => 'administer linkit',
    'roles' => array(),
    'module' => 'linkit',
  );

  // Exported permission: use text format full_html.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'amministratore' => 'amministratore',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format simplified_html.
  $permissions['use text format simplified_html'] = array(
    'name' => 'use text format simplified_html',
    'roles' => array(
      'Esperto del gruppo' => 'Esperto del gruppo',
      'Innovatore' => 'Innovatore',
      'Innovatore attivo' => 'Innovatore attivo',
      'Innovatore esperto' => 'Innovatore esperto',
      'Modifica page' => 'Modifica page',
      'Monitoraggio Utenti' => 'Monitoraggio Utenti',
      'Not validated' => 'Not validated',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format simplified_html_mailhandler_mailcomment_.
  $permissions['use text format simplified_html_mailhandler_mailcomment_'] = array(
    'name' => 'use text format simplified_html_mailhandler_mailcomment_',
    'roles' => array(),
    'module' => 'filter',
  );

  return $permissions;
}
