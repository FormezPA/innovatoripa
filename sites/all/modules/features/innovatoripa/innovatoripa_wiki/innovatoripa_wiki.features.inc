<?php
/**
 * @file
 * innovatoripa_wiki.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function innovatoripa_wiki_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
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
function innovatoripa_wiki_node_info() {
  $items = array(
    'book' => array(
      'name' => t('Wiki'),
      'base' => 'node_content',
      'description' => t('I <em>libri</em> hanno una navigazione gerarchica integrata. Usare per manuali o lezioni <em>(tutorials)</em>.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
