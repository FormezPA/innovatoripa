<?php
/**
 * @file
 * innovatoripa_sondaggi.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function innovatoripa_sondaggi_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|poll|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'poll';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h1',
        'class' => '',
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'links' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'comments' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'submitted_by' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_post_date_long',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'content__pub-info',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|poll|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|poll|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'poll';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => '',
        'class' => '',
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'title',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|poll|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function innovatoripa_sondaggi_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|poll|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'poll';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'innovatori_pa_html5_1col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'submitted_by',
      ),
      'footer' => array(
        1 => 'links',
      ),
      'comments_region' => array(
        2 => 'comments',
      ),
      'hgroup' => array(
        3 => 'title',
      ),
      'main' => array(
        4 => 'poll_view_results',
        5 => 'poll_view_voting',
      ),
    ),
    'fields' => array(
      'submitted_by' => 'header',
      'links' => 'footer',
      'comments' => 'comments_region',
      'title' => 'hgroup',
      'poll_view_results' => 'main',
      'poll_view_voting' => 'main',
    ),
    'classes' => array(),
    'wrappers' => array(
      'user_info' => 'div',
      'hgroup' => 'div',
      'header' => 'div',
      'top' => 'div',
      'main' => 'div',
      'main_nowrapper' => 'div',
      'bottom' => 'div',
      'footer' => 'div',
      'comments_region' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'hide_page_title' => '1',
    'page_option_title' => '',
  );
  $export['node|poll|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|poll|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'poll';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'poll_view_voting',
        1 => 'poll_view_results',
      ),
    ),
    'fields' => array(
      'poll_view_voting' => 'ds_content',
      'poll_view_results' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|poll|teaser'] = $ds_layout;

  return $export;
}
