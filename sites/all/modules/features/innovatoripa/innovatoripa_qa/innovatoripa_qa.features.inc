<?php
/**
 * @file
 * innovatoripa_qa.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function innovatoripa_qa_ctools_plugin_api() {
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
function innovatoripa_qa_node_info() {
  $items = array(
    'domanda' => array(
      'name' => t('Domanda'),
      'base' => 'node_content',
      'description' => t('Utilizza questo contenuto per inserire domanda e risposte. Le risposte saranno inserite con modalità simile a dei commenti alle domande.'),
      'has_title' => '1',
      'title_label' => t('Domanda'),
      'help' => '',
    ),
  );
  return $items;
}
