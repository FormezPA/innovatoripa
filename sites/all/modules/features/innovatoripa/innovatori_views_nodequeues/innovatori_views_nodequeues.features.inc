<?php
/**
 * @file
 * innovatori_views_nodequeues.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function innovatori_views_nodequeues_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
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
function innovatori_views_nodequeues_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function innovatori_views_nodequeues_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: post_in_evideza
  $nodequeues['post_in_evideza'] = array(
    'name' => 'post_in_evideza',
    'title' => 'Post in evideza',
    'subqueue_title' => '',
    'size' => 5,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'blog',
      1 => 'discussione',
      2 => 'evento',
      3 => 'forum',
      4 => 'segnalazione',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}
