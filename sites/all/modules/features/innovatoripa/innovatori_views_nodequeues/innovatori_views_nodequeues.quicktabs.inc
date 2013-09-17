<?php
/**
 * @file
 * innovatori_views_nodequeues.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function innovatori_views_nodequeues_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'hp_tabs_segnalazioni_discussioni';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'HP Tabs (Segnalazioni + Discussioni)';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'home_page_blocks',
      'display' => 'segnalazioni',
      'args' => '',
      'title' => 'Segnalazioni',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'comments_in_teaser',
      'display' => 'block_1',
      'args' => '',
      'title' => 'Discussioni',
      'weight' => '-99',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Discussioni');
  t('HP Tabs (Segnalazioni + Discussioni)');
  t('Segnalazioni');

  $export['hp_tabs_segnalazioni_discussioni'] = $quicktabs;

  return $export;
}
