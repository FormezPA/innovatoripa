<?php
/**
 * @file
 * innovatoripa_notify_subscriptions.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function innovatoripa_notify_subscriptions_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function innovatoripa_notify_subscriptions_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function innovatoripa_notify_subscriptions_flag_default_flags() {
  $flags = array();
  // Exported flag: "Email gruppo".
  $flags['email_gruppo'] = array(
    'content_type' => 'node',
    'title' => 'Email gruppo',
    'global' => 0,
    'types' => array(
      0 => 'gruppo',
    ),
    'flag_short' => 'Send Email',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Don\'t send Email',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => 2,
      ),
      'unflag' => array(
        0 => 2,
      ),
    ),
    'weight' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_on_page' => 0,
    'show_on_teaser' => 0,
    'show_contextual_link' => 0,
    'i18n' => 0,
    'api_version' => 2,
    'module' => 'innovatoripa_notify_subscriptions',
    'locked' => array(
      0 => 'name',
    ),
  );
  // Exported flag: "Email content".
  $flags['email_node'] = array(
    'content_type' => 'node',
    'title' => 'Email content',
    'global' => 0,
    'types' => array(
      0 => 'evento',
      1 => 'blog',
      2 => 'discussione',
      3 => 'domanda',
    ),
    'flag_short' => 'Send Email',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Don\'t send Email',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => 2,
      ),
      'unflag' => array(
        0 => 2,
      ),
    ),
    'weight' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_on_page' => 0,
    'show_on_teaser' => 0,
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'innovatoripa_notify_subscriptions',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  // Exported flag: "Email comunita".
  $flags['email_og'] = array(
    'content_type' => 'node',
    'title' => 'Email comunita',
    'global' => 0,
    'types' => array(
      0 => 'comunita',
    ),
    'flag_short' => 'Send Email',
    'flag_long' => '',
    'flag_message' => 'You will now recieve emails about this item.',
    'unflag_short' => 'Don\'t send Email',
    'unflag_long' => '',
    'unflag_message' => 'You will no longer recieve emails about this item.',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => 2,
      ),
      'unflag' => array(
        0 => 2,
      ),
    ),
    'weight' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_on_page' => 0,
    'show_on_teaser' => 0,
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'innovatoripa_notify_subscriptions',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  // Exported flag: "Email term".
  $flags['email_term'] = array(
    'content_type' => 'taxonomy_term',
    'title' => 'Email term',
    'global' => 0,
    'types' => array(
      0 => 'argomenti',
    ),
    'flag_short' => 'Send Email',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Don\'t send Email',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => 2,
      ),
      'unflag' => array(
        0 => 2,
      ),
    ),
    'weight' => 0,
    'show_on_entity' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'module' => 'innovatoripa_notify_subscriptions',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  // Exported flag: "Email user".
  $flags['email_user'] = array(
    'content_type' => 'user',
    'title' => 'Email user',
    'global' => 0,
    'types' => array(),
    'flag_short' => 'Send Email',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Don\'t send Email',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => 2,
      ),
      'unflag' => array(
        0 => 2,
      ),
    ),
    'weight' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_on_profile' => 0,
    'access_uid' => '',
    'module' => 'innovatoripa_notify_subscriptions',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
    'status' => FALSE,
  );
  // Exported flag: "Gruppi".
  $flags['innovatoripa_follow_gruppo'] = array(
    'content_type' => 'node',
    'title' => 'Gruppi',
    'global' => 0,
    'types' => array(
      0 => 'gruppo',
    ),
    'flag_short' => 'Attiva notifiche',
    'flag_long' => '',
    'flag_message' => 'Notifiche attivate',
    'unflag_short' => 'Disattiva notifiche',
    'unflag_long' => 'Smetti di ricevere le notifiche',
    'unflag_message' => 'Notifiche disattivate',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => 2,
      ),
      'unflag' => array(
        0 => 2,
      ),
    ),
    'weight' => -12,
    'show_on_form' => 0,
    'access_author' => '',
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'show_contextual_link' => 0,
    'i18n' => 0,
    'api_version' => 2,
    'module' => 'innovatoripa_notify_subscriptions',
    'locked' => array(
      0 => 'name',
    ),
  );
  // Exported flag: "Contenuti".
  $flags['innovatoripa_follow_node'] = array(
    'content_type' => 'node',
    'title' => 'Contenuti',
    'global' => 0,
    'types' => array(
      0 => 'evento',
      1 => 'blog',
      2 => 'discussione',
      3 => 'domanda',
    ),
    'flag_short' => 'Attiva notifiche',
    'flag_long' => '',
    'flag_message' => 'Notifiche attivate',
    'unflag_short' => 'Disattiva notifiche',
    'unflag_long' => 'Smetti di ricevere le notifiche',
    'unflag_message' => 'Notifiche disattivate',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => 2,
      ),
      'unflag' => array(
        0 => 2,
      ),
    ),
    'weight' => -11,
    'show_on_form' => 0,
    'access_author' => '',
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'innovatoripa_notify_subscriptions',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  // Exported flag: "Comunità".
  $flags['innovatoripa_follow_og'] = array(
    'content_type' => 'node',
    'title' => 'Comunità',
    'global' => 0,
    'types' => array(
      0 => 'comunita',
    ),
    'flag_short' => 'Attiva notifiche',
    'flag_long' => '',
    'flag_message' => 'Notifiche attivate',
    'unflag_short' => 'Disattiva notifiche',
    'unflag_long' => 'Smetti di ricevere le notifiche',
    'unflag_message' => 'Notifiche disattivate',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => 2,
      ),
      'unflag' => array(
        0 => 2,
      ),
    ),
    'weight' => -12,
    'show_on_form' => 0,
    'access_author' => '',
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'innovatoripa_notify_subscriptions',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  // Exported flag: "Argomenti".
  $flags['innovatoripa_follow_term'] = array(
    'content_type' => 'taxonomy_term',
    'title' => 'Argomenti',
    'global' => 0,
    'types' => array(
      0 => 'argomenti',
    ),
    'flag_short' => 'Attiva notifiche',
    'flag_long' => '',
    'flag_message' => 'Notifiche attivate',
    'unflag_short' => 'Disattiva notifiche',
    'unflag_long' => 'Smetti di ricevere le notifiche',
    'unflag_message' => 'Notifiche disattivate',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => 2,
      ),
      'unflag' => array(
        0 => 2,
      ),
    ),
    'weight' => -10,
    'show_on_entity' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'module' => 'innovatoripa_notify_subscriptions',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  return $flags;

}
