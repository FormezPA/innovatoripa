<?php
/**
 * @file
 * innovatoripa_activity_streams_og.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function innovatoripa_activity_streams_og_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_message_type().
 */
function innovatoripa_activity_streams_og_default_message_type() {
  $items = array();
  $items['innovatori_og_post_in_group'] = entity_import('message_type', '{
    "name" : "innovatori_og_post_in_group",
    "description" : "Innovatori - OG post in group",
    "argument_keys" : [ "!groups" ],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "it",
    "arguments" : null,
    "message_text" : {
      "it" : [
        {
          "value" : "\\u003Cp\\u003E\\u003Ca href=\\u0022[message:user:url:absolute]\\u0022\\u003E[message:user:name]\\u003C\\/a\\u003E\\u0026nbsp;ha creato il contenuto \\u0026nbsp;\\u003Ca href=\\u0022[message:field-node-ref:url]\\u0022\\u003E[message:field-node-ref:title]\\u003C\\/a\\u003E nella comunit\\u0026agrave; \\u003Ca href=\\u0022[message:field-node-groups-ref:0:url]\\u0022\\u003E[message:field-node-groups-ref:0:title]\\u003C\\/a\\u003E\\u003C\\/p\\u003E\\r\\n\\r\\n",
          "format" : "full_html",
          "safe_value" : "\\u003Cp\\u003E\\u003Ca href=\\u0022[message:user:url:absolute]\\u0022\\u003E[message:user:name]\\u003C\\/a\\u003E\\u00a0ha creato il contenuto \\u00a0\\u003Ca href=\\u0022[message:field-node-ref:url]\\u0022\\u003E[message:field-node-ref:title]\\u003C\\/a\\u003E nella comunit\\u00e0 \\u003Ca href=\\u0022[message:field-node-groups-ref:0:url]\\u0022\\u003E[message:field-node-groups-ref:0:title]\\u003C\\/a\\u003E\\u003C\\/p\\u003E\\n\\n"
        }
      ],
      "und" : [
        { "value" : "[message:user:picture]", "format" : "filtered_html" },
        {
          "value" : "\\u003Ca href=\\u0022[message:user:url]\\u0022\\u003E[message:user:name]\\u003C\\/a\\u003E posted \\u003Ca href=\\u0022[message:field-node-ref:url]\\u0022\\u003E[message:field-node-ref:title]\\u003C\\/a\\u003E in !groups.",
          "format" : "full_html",
          "safe_value" : "\\u003Ca href=\\u0022[message:user:url]\\u0022\\u003E[message:user:name]\\u003C\\/a\\u003E posted \\u003Ca href=\\u0022[message:field-node-ref:url]\\u0022\\u003E[message:field-node-ref:title]\\u003C\\/a\\u003E in !groups."
        },
        {
          "value" : "[message:field-node-ref:node-teaser]",
          "format" : "filtered_html"
        }
      ]
    }
  }');
  $items['innovatori_og_user_membership'] = entity_import('message_type', '{
    "name" : "innovatori_og_user_membership",
    "description" : "Innovatori - OG user membership",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "it",
    "arguments" : null,
    "message_text" : {
      "it" : [
        {
          "value" : "\\u003Cp\\u003E\\u003Ca href=\\u0022[message:user:url:absolute]\\u0022\\u003E[message:user:name]\\u003C\\/a\\u003E\\u0026nbsp;\\u00e8 entrato a far parte della comunit\\u00e0 \\u0026nbsp;\\u003Ca href=\\u0022[message:field-node-groups-ref:0:url]\\u0022\\u003E[message:field-node-groups-ref:0:title]\\u003C\\/a\\u003E\\u003C\\/p\\u003E\\r\\n",
          "format" : "full_html",
          "safe_value" : "\\u003Cp\\u003E\\u003Ca href=\\u0022[message:user:url:absolute]\\u0022\\u003E[message:user:name]\\u003C\\/a\\u003E\\u00a0\\u00e8 entrato a far parte della comunit\\u00e0 \\u00a0\\u003Ca href=\\u0022[message:field-node-groups-ref:0:url]\\u0022\\u003E[message:field-node-groups-ref:0:title]\\u003C\\/a\\u003E\\u003C\\/p\\u003E\\n"
        }
      ],
      "und" : [
        { "value" : "[message:user:picture]", "format" : "filtered_html" },
        {
          "value" : "\\u003Ca href=\\u0022[message:user:url]\\u0022\\u003E@{message:user:name}\\u003C\\/a\\u003E joined \\u003Ca href=\\u0022[message:field-node-groups-ref:0:url]\\u0022\\u003E[message:field-node-groups-ref:0:title]\\u003C\\/a\\u003E group.",
          "format" : "full_html",
          "safe_value" : "\\u003Ca href=\\u0022[message:user:url]\\u0022\\u003E@{message:user:name}\\u003C\\/a\\u003E joined \\u003Ca href=\\u0022[message:field-node-groups-ref:0:url]\\u0022\\u003E[message:field-node-groups-ref:0:title]\\u003C\\/a\\u003E group."
        }
      ]
    }
  }');
  return $items;
}
