<?php
/**
 * @file
 * innovatoripa_segnalazione.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function innovatoripa_segnalazione_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation:node/add/segnalazione
  $menu_links['navigation:node/add/segnalazione'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/segnalazione',
    'router_path' => 'node/add/segnalazione',
    'link_title' => 'Segnalazione',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Segnalazione');


  return $menu_links;
}
