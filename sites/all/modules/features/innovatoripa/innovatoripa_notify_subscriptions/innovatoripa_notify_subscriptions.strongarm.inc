<?php
/**
 * @file
 * innovatoripa_notify_subscriptions.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function innovatoripa_notify_subscriptions_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'message_innovatoripa_follow_node';
  $strongarm->value = 'innovatoripa_follow_node:default';
  $export['message_innovatoripa_follow_node'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'message_innovatoripa_follow_og';
  $strongarm->value = 'innovatoripa_follow_node:default';
  $export['message_innovatoripa_follow_og'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'message_innovatoripa_follow_term';
  $strongarm->value = 'innovatoripa_follow_taxonomy_term:default';
  $export['message_innovatoripa_follow_term'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'message_innovatoripa_follow_user';
  $strongarm->value = 'og_extras_nodes:default';
  $export['message_innovatoripa_follow_user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'message_subscribe_flag_prefix';
  $strongarm->value = 'innovatoripa_follow';
  $export['message_subscribe_flag_prefix'] = $strongarm;

  return $export;
}
