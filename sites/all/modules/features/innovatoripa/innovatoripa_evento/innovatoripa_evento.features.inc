<?php
/**
 * @file
 * innovatoripa_evento.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function innovatoripa_evento_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function innovatoripa_evento_node_info() {
  $items = array(
    'evento' => array(
      'name' => t('Appuntamenti'),
      'base' => 'node_content',
      'description' => t('Appuntamenti. Sono gli appuntamenti e gli eventi inerenti ad una specifica comunità.'),
      'has_title' => '1',
      'title_label' => t('Titolo'),
      'help' => '',
    ),
  );
  return $items;
}
