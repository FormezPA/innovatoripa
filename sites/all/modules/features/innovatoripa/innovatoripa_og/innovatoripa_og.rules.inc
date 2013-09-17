<?php

/**
 * @file
 * Rules code: actions, conditions and events.
 */

/**
 * Implements hook_rules_action_info().
 */

function innovatoripa_og_rules_action_info() {

  $actions = array(
    'innovatoripa_og_action_send_email_to_group_editors' => array(
      'label'         => t('Get group editors from group audience'),
      'group'         => t('Innovatori PA'),
      'configurable'  => TRUE,
      'parameter' => array(
        'group_content' => array(
          'type' => 'entity',
          'label' => t('Group content'),
          'description' => t('The group content determining the group audience.'),
        ),
      ),
      'provides' => array(
        'group_editors' => array('type' => 'list<user>', 'label' => t('List of group editors')),
      ),
      'base'  => '_innovatoripa_og_rules_get_editors',
    ),
  );

  return $actions;

}


function _innovatoripa_og_rules_get_editors($group_content) {
  
  $gid = $group_content->getIdentifier();
  
  $type = $group_content->type();
  
  $group = $group_content->value();
  
  $bundle = $group_content->getBundle();
  
  if (empty($gid)) {
    // Not a group content.
    return;
  }
  
  $standard_roles = og_roles($type, $bundle, 0);
  
  $rid = array_keys($standard_roles, 'administrator member');
  
  if (empty($rid)) return;
      
  
  
  $group_admin_role_id = _og_roles_get_overridden_role($group, $type, array_shift($rid));
  
  if (empty($group_admin_role_id)) return;
  
  $members = array();
  //foreach ($group_content->og_membership->value() as $og_membership) {
    // Get the group members the group content belongs to.
  $current_members = db_select('og_membership', 'om');
  $current_members->join('og_users_roles', 'ogur', 'om.etid = ogur.uid');
  $current_members->fields('om', array('etid'));
  $current_members->condition('om.gid', $gid);
  $current_members->condition('om.entity_type', 'user');
    
    
  $current_members->condition('ogur.rid', $group_admin_role_id);

  $result = $current_members->execute();
  while ($res = $result->fetchAssoc()) {
    if (empty($res['etid'])) continue;  
    $members[] = $res['etid'];
  }
  
  // Remove duplicate items.
  $members = array_keys(array_flip($members));
  
  return array('group_editors' => $members);

}

function _og_roles_get_overridden_role($entity, $entity_type, $rid) {
  list($id, $vid, $bundle) = entity_extract_ids($entity_type, $entity);
  // Get og overridden roles.
  $og_overridden_roles = og_roles($entity_type, $bundle, $id);
  // Get og default roles.
  $og_default_roles = og_roles($entity_type, $bundle, 0, FALSE, FALSE);
  $role_name = $og_default_roles[$rid];
  foreach ($og_overridden_roles as $overridden_rid => $overridden_role) {
    if ($overridden_role == $role_name) {
      $rid = $overridden_rid;
      return $rid;
    }
  }
}

