<?php
/**
 * @file
 * base_frontend.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function base_frontend_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'teaser_simplified';
  $ds_view_mode->label = 'Simplified teaser';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['teaser_simplified'] = $ds_view_mode;

  return $export;
}
