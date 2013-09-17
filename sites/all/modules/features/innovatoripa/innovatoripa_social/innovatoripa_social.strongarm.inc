<?php
/**
 * @file
 * innovatoripa_social.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function innovatoripa_social_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flag_default_flag_status';
  $strongarm->value = array(
    'friend' => TRUE,
    'email_term' => TRUE,
    'email_node' => TRUE,
    'email_og' => TRUE,
    'innovatoripa_follow_term' => TRUE,
    'innovatoripa_follow_node' => TRUE,
    'innovatoripa_follow_og' => TRUE,
  );
  $export['flag_default_flag_status'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'privatemsg_filter_inbox_tag';
  $strongarm->value = '1';
  $export['privatemsg_filter_inbox_tag'] = $strongarm;

  return $export;
}
