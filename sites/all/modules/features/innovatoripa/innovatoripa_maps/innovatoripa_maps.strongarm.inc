<?php
/**
 * @file
 * innovatoripa_maps.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function innovatoripa_maps_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'openlayers_ui_version_check';
  $strongarm->value = 'Release 2.12';
  $export['openlayers_ui_version_check'] = $strongarm;

  return $export;
}
