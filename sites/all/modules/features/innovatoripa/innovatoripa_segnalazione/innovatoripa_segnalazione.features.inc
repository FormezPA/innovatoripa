<?php
/**
 * @file
 * innovatoripa_segnalazione.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function innovatoripa_segnalazione_ctools_plugin_api() {
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
function innovatoripa_segnalazione_node_info() {
  $items = array(
    'segnalazione' => array(
      'name' => t('Segnalazione'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
