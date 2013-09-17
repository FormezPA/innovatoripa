<?php
/**
 * @file
 * innovatoripa_og.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function innovatoripa_og_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_institutionals|node|comunita|form';
  $field_group->group_name = 'group_institutionals';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'comunita';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Loghi istituzionali',
    'weight' => '6',
    'children' => array(
      0 => 'field_institutional_link',
      1 => 'field_institutional_logo',
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
  $export['group_institutionals|node|comunita|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_og_settings|node|comunita|form';
  $field_group->group_name = 'group_og_settings';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'comunita';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Impostazioni comunità',
    'weight' => '5',
    'children' => array(
      0 => 'group_access',
      1 => 'group_group',
      2 => 'og_roles_permissions',
      3 => 'field_og_impostazioni_privacy',
      4 => 'field_og_list_group_directory',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Impostazioni comunità',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_og_settings|node|comunita|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_og_social|node|comunita|form';
  $field_group->group_name = 'group_og_social';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'comunita';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Social accounts',
    'weight' => '4',
    'children' => array(
      0 => 'field_og_flickr',
      1 => 'field_og_youtube',
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
  $export['group_og_social|node|comunita|form'] = $field_group;

  return $export;
}
