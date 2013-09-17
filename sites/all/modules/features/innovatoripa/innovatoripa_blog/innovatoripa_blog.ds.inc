<?php
/**
 * @file
 * innovatoripa_blog.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function innovatoripa_blog_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|blog|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'blog';
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
    'social_share_buttons' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'text_default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_blog_tags' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'div',
          'lb-cl' => 'content__arguments-label',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'content__arguments clearfix',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fis' => TRUE,
          'fis-el' => 'ul',
          'fis-cl' => 'content__arguments-terms',
          'fis-at' => '',
          'fis-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'li',
          'fi-cl' => 'content__arguments-term',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_blog_img' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'content-opening-image',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
  );
  $export['node|blog|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|blog|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'blog';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'node_link' => array(
      'weight' => '4',
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
      'weight' => '2',
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
  $export['node|blog|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|blog|teaser_simplified';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'blog';
  $ds_fieldsetting->view_mode = 'teaser_simplified';
  $ds_fieldsetting->settings = array(
    'node_link' => array(
      'weight' => '4',
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
      'weight' => '2',
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
  $export['node|blog|teaser_simplified'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function innovatoripa_blog_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|blog|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'blog';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'innovatori_pa_html5_1col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'user_info' => array(
        0 => 'user_avatar',
      ),
      'hgroup' => array(
        1 => 'iconized_title',
      ),
      'top' => array(
        2 => 'publishing_information',
        3 => 'social_share_buttons',
      ),
      'main' => array(
        4 => 'field_blog_img',
        5 => 'body',
      ),
      'bottom' => array(
        6 => 'links',
      ),
      'footer' => array(
        7 => 'field_blog_tags',
      ),
      'comments_region' => array(
        8 => 'comments',
      ),
    ),
    'fields' => array(
      'user_avatar' => 'user_info',
      'iconized_title' => 'hgroup',
      'publishing_information' => 'top',
      'social_share_buttons' => 'top',
      'field_blog_img' => 'main',
      'body' => 'main',
      'links' => 'bottom',
      'field_blog_tags' => 'footer',
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
  $export['node|blog|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|blog|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'blog';
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
        2 => 'publishing_information',
      ),
      'teaser_content_text' => array(
        3 => 'body',
        4 => 'node_link',
      ),
      'teaser_comments' => array(
        5 => 'anteprima_commenti_in_teaser',
      ),
    ),
    'fields' => array(
      'user_avatar' => 'teaser_user',
      'iconized_title_linked' => 'teaser_header_hgroup',
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
  $export['node|blog|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|blog|teaser_simplified';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'blog';
  $ds_layout->view_mode = 'teaser_simplified';
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
      'teaser_comments' => array(
        4 => 'anteprima_commenti_in_teaser',
      ),
    ),
    'fields' => array(
      'iconized_title_linked' => 'teaser_header_hgroup',
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
  $export['node|blog|teaser_simplified'] = $ds_layout;

  return $export;
}
