<?php
/**
 * @file
 * innovatoripa_sondaggi.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function innovatoripa_sondaggi_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
