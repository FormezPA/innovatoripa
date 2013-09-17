<?php
/**
 * @file
 * innovatoripa_og.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function innovatoripa_og_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|comunita|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'comunita';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h1',
        'class' => '',
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fis' => TRUE,
          'fis-el' => 'header',
          'fis-cl' => '',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
    'community_linked_institutional_logo' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'text_default',
    ),
    'community_flag_follow_link' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'text_default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'community_linked_credits' => array(
      'weight' => '5',
      'label' => 'inline',
      'format' => 'text_default',
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Profilo e crediti',
        ),
      ),
    ),
    'community_social_links' => array(
      'weight' => '8',
      'label' => 'hidden',
      'format' => 'text_default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_image' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'group_group' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'button community-subscribe',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
  );
  $export['node|comunita|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|discussione|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'discussione';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'links' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'comments' => array(
      'weight' => '6',
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
  );
  $export['node|discussione|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|discussione|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'discussione';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'node_link' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'Leggi',
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
  $export['node|discussione|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|discussione|teaser_simplified';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'discussione';
  $ds_fieldsetting->view_mode = 'teaser_simplified';
  $ds_fieldsetting->settings = array(
    'node_link' => array(
      'weight' => '3',
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
  $export['node|discussione|teaser_simplified'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|gruppo|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'gruppo';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h1',
        'class' => '',
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fis' => TRUE,
          'fis-el' => 'header',
          'fis-cl' => '',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
    'group_flag_follow_link' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'text_default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'group_group' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'button group-subscribe',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_image' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
  );
  $export['node|gruppo|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function innovatoripa_og_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|comunita|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'comunita';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'innovatoripa_og_comunita_contents_entity_view_1',
      ),
      'ds_block_community_full' => array(
        1 => 'community_linked_institutional_logo',
        2 => 'field_image',
        3 => 'title',
        4 => 'body',
        5 => 'community_linked_credits',
        6 => 'group_group',
        7 => 'community_flag_follow_link',
      ),
      'ds_block_community_social_links' => array(
        8 => 'community_social_links',
      ),
    ),
    'fields' => array(
      'innovatoripa_og_comunita_contents_entity_view_1' => 'ds_content',
      'community_linked_institutional_logo' => 'ds_block_community_full',
      'field_image' => 'ds_block_community_full',
      'title' => 'ds_block_community_full',
      'body' => 'ds_block_community_full',
      'community_linked_credits' => 'ds_block_community_full',
      'group_group' => 'ds_block_community_full',
      'community_flag_follow_link' => 'ds_block_community_full',
      'community_social_links' => 'ds_block_community_social_links',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'hide_page_title' => '1',
    'page_option_title' => '',
  );
  $export['node|comunita|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|discussione|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'discussione';
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
      ),
      'main' => array(
        4 => 'body',
      ),
      'bottom' => array(
        5 => 'links',
      ),
      'footer' => array(
        6 => 'og_vocabulary',
      ),
      'comments_region' => array(
        7 => 'comments',
      ),
    ),
    'fields' => array(
      'user_avatar' => 'user_info',
      'field_allegato' => 'attachments',
      'iconized_title' => 'hgroup',
      'publishing_information' => 'top',
      'body' => 'main',
      'links' => 'bottom',
      'og_vocabulary' => 'footer',
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
  $export['node|discussione|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|discussione|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'discussione';
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
  $export['node|discussione|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|discussione|teaser_simplified';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'discussione';
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
  $export['node|discussione|teaser_simplified'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|gruppo|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'gruppo';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'gruppo_discussioni_hp',
      ),
      'ds_block_group_full' => array(
        1 => 'field_image',
        2 => 'title',
        3 => 'body',
        4 => 'group_group',
        5 => 'group_flag_follow_link',
      ),
    ),
    'fields' => array(
      'gruppo_discussioni_hp' => 'ds_content',
      'field_image' => 'ds_block_group_full',
      'title' => 'ds_block_group_full',
      'body' => 'ds_block_group_full',
      'group_group' => 'ds_block_group_full',
      'group_flag_follow_link' => 'ds_block_group_full',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'hide_page_title' => '1',
    'page_option_title' => '',
  );
  $export['node|gruppo|full'] = $ds_layout;

  return $export;
}
