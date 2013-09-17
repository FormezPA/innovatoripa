<?php
/**
 * @file
 * innovatoripa_evento.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function innovatoripa_evento_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|evento|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'evento';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'links' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'comments' => array(
      'weight' => '8',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'user_avatar' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'text_default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'iconized_title' => array(
      'weight' => '1',
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
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'text_default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_data_inizio' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Quando',
          'lb-el' => 'span',
          'lb-cl' => 'label-inline',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'content__event-date',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fis' => TRUE,
          'fis-el' => 'span',
          'fis-cl' => 'field-items',
          'fis-at' => '',
          'fis-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_luogo_evento' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Dove',
          'lb-el' => 'span',
          'lb-cl' => 'label-inline',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'content__event-place',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
  );
  $export['node|evento|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|evento|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'evento';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'node_link' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'Read',
        'wrapper' => '',
        'class' => '',
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'user_avatar' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'text_default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'iconized_title_linked' => array(
      'weight' => '1',
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
      'weight' => '3',
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
    'field_data_inizio' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Quando',
          'lb-el' => 'span',
          'lb-cl' => 'label-inline',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'content__event-date',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fis' => TRUE,
          'fis-el' => 'span',
          'fis-cl' => 'field-items',
          'fis-at' => '',
          'fis-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
  );
  $export['node|evento|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function innovatoripa_evento_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|evento|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'evento';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'innovatori_pa_html5_1col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'user_info' => array(
        0 => 'user_avatar',
      ),
      'attachments' => array(
        1 => 'field_allegato',
      ),
      'hgroup' => array(
        2 => 'iconized_title',
      ),
      'top' => array(
        3 => 'publishing_information',
        4 => 'field_data_inizio',
        5 => 'field_luogo_evento',
      ),
      'main' => array(
        6 => 'body',
      ),
      'bottom' => array(
        7 => 'links',
      ),
      'footer' => array(
        8 => 'field_evento_link',
      ),
      'comments_region' => array(
        9 => 'comments',
      ),
    ),
    'fields' => array(
      'user_avatar' => 'user_info',
      'field_allegato' => 'attachments',
      'iconized_title' => 'hgroup',
      'publishing_information' => 'top',
      'field_data_inizio' => 'top',
      'field_luogo_evento' => 'top',
      'body' => 'main',
      'links' => 'bottom',
      'field_evento_link' => 'footer',
      'comments' => 'comments_region',
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
  $export['node|evento|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|evento|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'evento';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'innovatori_pa_teaser';
  $ds_layout->settings = array(
    'regions' => array(
      'teaser_user' => array(
        0 => 'user_avatar',
      ),
      'teaser_header_hgroup' => array(
        1 => 'iconized_title_linked',
      ),
      'teaser_header' => array(
        2 => 'field_data_inizio',
        3 => 'publishing_information',
      ),
      'teaser_content_text' => array(
        4 => 'body',
        5 => 'node_link',
      ),
      'teaser_comments' => array(
        6 => 'anteprima_commenti_in_teaser',
      ),
    ),
    'fields' => array(
      'user_avatar' => 'teaser_user',
      'iconized_title_linked' => 'teaser_header_hgroup',
      'field_data_inizio' => 'teaser_header',
      'publishing_information' => 'teaser_header',
      'body' => 'teaser_content_text',
      'node_link' => 'teaser_content_text',
      'anteprima_commenti_in_teaser' => 'teaser_comments',
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
  $export['node|evento|teaser'] = $ds_layout;

  return $export;
}
