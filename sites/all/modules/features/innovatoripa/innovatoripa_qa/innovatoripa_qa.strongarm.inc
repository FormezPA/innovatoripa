<?php
/**
 * @file
 * innovatoripa_qa.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function innovatoripa_qa_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_domanda';
  $strongarm->value = 'edit-userpoints-nc';
  $export['additional_settings__active_tab_domanda'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_domanda';
  $strongarm->value = 0;
  $export['comment_anonymous_domanda'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_changed_date_format_domanda';
  $strongarm->value = 'medium';
  $export['comment_changed_date_format_domanda'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_created_date_format_domanda';
  $strongarm->value = 'medium';
  $export['comment_created_date_format_domanda'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_domanda';
  $strongarm->value = 1;
  $export['comment_default_mode_domanda'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_domanda';
  $strongarm->value = '50';
  $export['comment_default_per_page_domanda'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_sorting_domanda';
  $strongarm->value = '1';
  $export['comment_default_sorting_domanda'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_domanda';
  $strongarm->value = '2';
  $export['comment_domanda'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_expose_fields_domanda';
  $strongarm->value = 0;
  $export['comment_expose_fields_domanda'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_label_domanda';
  $strongarm->value = 'Post new comment';
  $export['comment_form_label_domanda'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_domanda';
  $strongarm->value = 1;
  $export['comment_form_location_domanda'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_placement_domanda';
  $strongarm->value = '3';
  $export['comment_form_placement_domanda'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_domanda';
  $strongarm->value = '1';
  $export['comment_preview_domanda'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_section_label_domanda';
  $strongarm->value = 'Comments';
  $export['comment_section_label_domanda'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_domanda';
  $strongarm->value = 0;
  $export['comment_subject_field_domanda'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_domanda';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_domanda'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_domanda';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_domanda'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_domanda';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_domanda'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__domanda';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'teaser_simplified' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '4',
        ),
      ),
      'display' => array(
        'comments_in_teaser_entity_view_2' => array(
          'teaser' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
          'teaser_simplified' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
        ),
        'anteprima_commento_piu_votato' => array(
          'teaser' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
          'teaser_simplified' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__domanda'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_domanda';
  $strongarm->value = '0';
  $export['language_content_type_domanda'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_domanda';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_domanda'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_domanda';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_domanda'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_domanda';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_domanda'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_domanda';
  $strongarm->value = '1';
  $export['node_preview_domanda'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_domanda';
  $strongarm->value = 1;
  $export['node_submitted_domanda'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rate_widgets';
  $strongarm->value = array(
    1 => (object) array(
      'name' => 'qa_voti_risposte',
      'tag' => 'vote',
      'title' => 'QA: Voti risposte',
      'node_types' => array(),
      'comment_types' => array(
        0 => 'domanda',
      ),
      'options' => array(
        0 => array(
          0 => 1,
          1 => '+1',
        ),
        1 => array(
          0 => -1,
          1 => '-1',
        ),
      ),
      'template' => 'number_up_down',
      'node_display' => '2',
      'teaser_display' => FALSE,
      'comment_display' => '2',
      'node_display_mode' => '1',
      'teaser_display_mode' => '1',
      'comment_display_mode' => '1',
      'roles' => array(
        18 => '18',
        2 => '2',
        20 => '20',
        16 => '16',
        19 => '19',
        15 => '15',
        1 => 0,
        21 => 0,
        22 => 0,
        17 => 0,
      ),
      'allow_voting_by_author' => 1,
      'noperm_behaviour' => '3',
      'displayed' => '1',
      'displayed_just_voted' => '1',
      'description' => '',
      'description_in_compact' => TRUE,
      'delete_vote_on_second_click' => '1',
      'use_source_translation' => TRUE,
      'value_type' => 'points',
      'theme' => 'rate_template_number_up_down',
      'css' => 'sites/all/modules/contrib/rate/templates/number-up-down/number-up-down.css',
      'translate' => TRUE,
    ),
  );
  $export['rate_widgets'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'userpoints_nc_category_domanda';
  $strongarm->value = '0';
  $export['userpoints_nc_category_domanda'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'userpoints_nc_comment_category_domanda';
  $strongarm->value = '0';
  $export['userpoints_nc_comment_category_domanda'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'userpoints_nc_comment_delete_deduct_domanda';
  $strongarm->value = 0;
  $export['userpoints_nc_comment_delete_deduct_domanda'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'userpoints_nc_comment_enabled_domanda';
  $strongarm->value = 0;
  $export['userpoints_nc_comment_enabled_domanda'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'userpoints_nc_comment_ownership_deduct_domanda';
  $strongarm->value = 0;
  $export['userpoints_nc_comment_ownership_deduct_domanda'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'userpoints_nc_comment_points_domanda';
  $strongarm->value = '0';
  $export['userpoints_nc_comment_points_domanda'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'userpoints_nc_delete_deduct_domanda';
  $strongarm->value = 0;
  $export['userpoints_nc_delete_deduct_domanda'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'userpoints_nc_enabled_domanda';
  $strongarm->value = 1;
  $export['userpoints_nc_enabled_domanda'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'userpoints_nc_ownership_deduct_domanda';
  $strongarm->value = 0;
  $export['userpoints_nc_ownership_deduct_domanda'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'userpoints_nc_points_domanda';
  $strongarm->value = '3';
  $export['userpoints_nc_points_domanda'] = $strongarm;

  return $export;
}
