<?php
/**
 * @file
 * innovatoripa_og.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function innovatoripa_og_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
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
function innovatoripa_og_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function innovatoripa_og_node_info() {
  $items = array(
    'comunita' => array(
      'name' => t('Comunita'),
      'base' => 'node_content',
      'description' => t('Comunità'),
      'has_title' => '1',
      'title_label' => t('Nome della comunità'),
      'help' => '',
    ),
    'discussione' => array(
      'name' => t('Discussione'),
      'base' => 'node_content',
      'description' => t('Crea una nuova discussione sul forum'),
      'has_title' => '1',
      'title_label' => t('Titolo'),
      'help' => '',
    ),
    'gruppo' => array(
      'name' => t('Gruppo'),
      'base' => 'node_content',
      'description' => t('Gruppo di discussione relativo ad una comunità.'),
      'has_title' => '1',
      'title_label' => t('Titolo'),
      'help' => '',
    ),
  );
  return $items;
}
