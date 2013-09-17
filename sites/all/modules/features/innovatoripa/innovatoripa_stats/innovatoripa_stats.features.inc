<?php
/**
 * @file
 * innovatoripa_stats.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function innovatoripa_stats_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function innovatoripa_stats_views_api() {
  return array("api" => "3.0");
}
