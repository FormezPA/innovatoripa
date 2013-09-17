<?php
/**
 * @file
 * innovatoripa_user.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function innovatoripa_user_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'attivit_public_profile_';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Attività (Public profile)';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'node_social_blocks',
      'display' => 'panel_pane_1',
      'args' => '',
      'title' => 'Ultimi contenuti dell\'utente',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'up_attivit_sui_miei_contenuti',
      'display' => 'block',
      'args' => '',
      'title' => 'Attività sui miei contenuti',
      'weight' => '-99',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'accordion';
  $quicktabs->style = 'default';
  $quicktabs->options = array(
    'history' => 0,
    'jquery_ui' => array(
      'autoHeight' => 0,
      'collapsible' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Attività (Public profile)');
  t('Attività sui miei contenuti');
  t('Ultimi contenuti dell\'utente');

  $export['attivit_public_profile_'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'my_private_profile';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 2;
  $quicktabs->title = 'Attività (Private profile)';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'up_attivita_dalla_mia_rete',
      'display' => 'panel_pane_2',
      'args' => '',
      'title' => 'Le mie ultime attività',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'up_attivita_dalla_mia_rete',
      'display' => 'panel_pane_1',
      'args' => '',
      'title' => 'Attività della mia rete',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'vid' => 'up_attivit_sui_miei_contenuti',
      'display' => 'block',
      'args' => '',
      'title' => 'Attività sui miei contenuti',
      'weight' => '-98',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'accordion';
  $quicktabs->style = 'Basic';
  $quicktabs->options = array(
    'history' => 0,
    'jquery_ui' => array(
      'autoHeight' => 1,
      'collapsible' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Attività (Private profile)');
  t('Attività della mia rete');
  t('Attività sui miei contenuti');
  t('Le mie ultime attività');

  $export['my_private_profile'] = $quicktabs;

  return $export;
}
