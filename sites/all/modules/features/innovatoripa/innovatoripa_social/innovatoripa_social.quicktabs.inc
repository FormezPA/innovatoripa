<?php
/**
 * @file
 * innovatoripa_social.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function innovatoripa_social_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'following_followers_tabs';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Following/Followers tabs';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'user_social_blocks',
      'display' => 'panel_pane_2',
      'args' => '%1',
      'title' => 'Following',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'user_social_blocks',
      'display' => 'panel_pane_3',
      'args' => '%1',
      'title' => 'Followers',
      'weight' => '-99',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Followers');
  t('Following');
  t('Following/Followers tabs');

  $export['following_followers_tabs'] = $quicktabs;

  return $export;
}
