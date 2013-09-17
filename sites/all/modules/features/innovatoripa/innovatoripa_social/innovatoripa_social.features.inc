<?php
/**
 * @file
 * innovatoripa_social.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function innovatoripa_social_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function innovatoripa_social_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function innovatoripa_social_flag_default_flags() {
  $flags = array();
  // Exported flag: "Friend".
  $flags['friend'] = array(
    'content_type' => 'user',
    'title' => 'Friend',
    'global' => 0,
    'types' => array(),
    'flag_short' => 'Aggiungi alla tua rete',
    'flag_long' => 'Aggiungi questo utente alla tua rete',
    'flag_message' => 'Utente aggiunto alla tua rete',
    'unflag_short' => 'Rimuovi dalla tua rete',
    'unflag_long' => 'Rimuovi questo utente alla tua rete',
    'unflag_message' => 'Utente rimosso dalla tua rete',
    'unflag_denied_text' => 'Unfollow',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => 2,
        1 => 3,
        2 => 4,
        3 => 5,
        4 => 6,
      ),
      'unflag' => array(
        0 => 2,
        1 => 3,
        2 => 4,
        3 => 5,
        4 => 6,
      ),
    ),
    'weight' => -6,
    'show_on_entity' => FALSE,
    'show_on_form' => 0,
    'access_author' => '',
    'show_on_profile' => 1,
    'access_uid' => 'others',
    'module' => 'innovatoripa_social',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  return $flags;

}
