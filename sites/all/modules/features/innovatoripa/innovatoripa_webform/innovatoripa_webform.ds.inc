<?php
/**
 * @file
 * innovatoripa_webform.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function innovatoripa_webform_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|webform|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'webform';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'links' => array(
      'weight' => '14',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'comments' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'iconized_title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'text_default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'h1',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'publishing_information' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'text_default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
  );
  $export['node|webform|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|webform|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'webform';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'node_link' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'Visualizza il questionario',
        'wrapper' => '',
        'class' => '',
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'iconized_title_linked' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'text_default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'h2',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'publishing_information' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'text_default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
  );
  $export['node|webform|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function innovatoripa_webform_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|webform|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'webform';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'innovatori_pa_html5_1col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'hgroup' => array(
        0 => 'iconized_title',
      ),
      'top' => array(
        1 => 'publishing_information',
      ),
      'main' => array(
        2 => 'body',
      ),
      'attachments' => array(
        3 => 'field_allegato',
      ),
      'footer' => array(
        4 => 'webform',
      ),
      'comments_region' => array(
        5 => 'comments',
      ),
      'bottom' => array(
        6 => 'links',
      ),
    ),
    'fields' => array(
      'iconized_title' => 'hgroup',
      'publishing_information' => 'top',
      'body' => 'main',
      'field_allegato' => 'attachments',
      'webform' => 'footer',
      'comments' => 'comments_region',
      'links' => 'bottom',
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
      'attachments' => 'div',
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
  $export['node|webform|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|webform|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'webform';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'innovatori_pa_teaser';
  $ds_layout->settings = array(
    'regions' => array(
      'teaser_header_hgroup' => array(
        0 => 'iconized_title_linked',
      ),
      'teaser_header' => array(
        1 => 'publishing_information',
      ),
      'teaser_content_text' => array(
        2 => 'body',
        3 => 'node_link',
      ),
    ),
    'fields' => array(
      'iconized_title_linked' => 'teaser_header_hgroup',
      'publishing_information' => 'teaser_header',
      'body' => 'teaser_content_text',
      'node_link' => 'teaser_content_text',
    ),
    'classes' => array(),
    'wrappers' => array(
      'teaser_user' => 'div',
      'teaser_header_hgroup' => 'div',
      'teaser_header' => 'div',
      'teaser_content_text' => 'div',
      'teaser_content_stats' => 'div',
      'teaser_footer' => 'div',
      'teaser_comments' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|webform|teaser'] = $ds_layout;

  return $export;
}
