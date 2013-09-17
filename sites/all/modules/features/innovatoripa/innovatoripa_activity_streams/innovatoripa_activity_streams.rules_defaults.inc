<?php
/**
 * @file
 * innovatoripa_activity_streams.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function innovatoripa_activity_streams_default_rules_configuration() {
  $items = array();
  $items['rules_log_users_follow'] = entity_import('rules_config', '{ "rules_log_users_follow" : {
      "LABEL" : "Log users follow",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "innovatori_rules" ],
      "REQUIRES" : [ "rules", "flag" ],
      "ON" : [ "flag_flagged_friend" ],
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "message",
              "param_type" : "innovatori_user_follow",
              "param_user" : [ "flagging-user" ]
            },
            "PROVIDE" : { "entity_created" : { "entity_created" : "Entit\\u00e0 creata" } }
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-user-ref-follow" ],
            "value" : [ "flagged-user" ]
          }
        }
      ]
    }
  }');
  return $items;
}
