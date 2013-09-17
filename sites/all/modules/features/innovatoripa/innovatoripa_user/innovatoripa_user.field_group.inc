<?php
/**
 * @file
 * innovatoripa_user.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function innovatoripa_user_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_im|profile2|main|form';
  $field_group->group_name = 'group_profile_im';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'main';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Instant messenger',
    'weight' => '4',
    'children' => array(
      0 => 'field_profile_skype',
      1 => 'field_profile_gtalk',
      2 => 'field_profile_porting_general_im',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Instant messenger',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_profile_im|profile2|main|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_job_profile|profile2|main|form';
  $field_group->group_name = 'group_profile_job_profile';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'main';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Il mio lavoro',
    'weight' => '2',
    'children' => array(
      0 => 'field_profile_ruolo',
      1 => 'field_profile_qualifica',
      2 => 'field_profile_unit',
      3 => 'field_profile_location',
      4 => 'field_profile_geofield',
      5 => 'field_profile_telefono',
      6 => 'field_profile_cellulare',
      7 => 'field_profile_studies',
      8 => 'field_profile_summary',
      9 => 'field_profile_education',
      10 => 'field_profile_topics',
      11 => 'field_profile_pa_check',
      12 => 'group_profile_lavoro_details',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Il mio lavoro',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_profile_job_profile|profile2|main|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_lavoro_details|profile2|main|form';
  $field_group->group_name = 'group_profile_lavoro_details';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'main';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_profile_job_profile';
  $field_group->data = array(
    'label' => 'Lavoro',
    'weight' => '28',
    'children' => array(
      0 => 'field_profile_ente',
      1 => 'field_profile_pa_type',
      2 => 'field_profile_job_specify',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_profile_lavoro_details|profile2|main|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_personal_info|profile2|main|form';
  $field_group->group_name = 'group_profile_personal_info';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'main';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Dati personali',
    'weight' => '1',
    'children' => array(
      0 => 'field_profile_nome',
      1 => 'field_profile_cognome',
      2 => 'field_profile_birthdate',
      3 => 'field_profile_birthplace',
      4 => 'field_profile_sex',
      5 => 'field_profile_avatar',
      6 => 'field_profile_chi_sono',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Dati personali',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_profile_personal_info|profile2|main|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_social|profile2|main|form';
  $field_group->group_name = 'group_profile_social';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'main';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Account social',
    'weight' => '3',
    'children' => array(
      0 => 'field_profile_twitter',
      1 => 'field_profile_linkedin',
      2 => 'field_profile_slideshare',
      3 => 'field_profile_flickr',
      4 => 'field_profile_google',
      5 => 'field_profile_site',
      6 => 'field_profile_feed_rss',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Account social',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_profile_social|profile2|main|form'] = $field_group;

  return $export;
}
