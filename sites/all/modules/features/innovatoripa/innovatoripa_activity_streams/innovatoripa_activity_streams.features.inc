<?php
/**
 * @file
 * innovatoripa_activity_streams.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function innovatoripa_activity_streams_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function innovatoripa_activity_streams_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_message_type().
 */
function innovatoripa_activity_streams_default_message_type() {
  $items = array();
  $items['innovatori_create_comment'] = entity_import('message_type', '{
    "name" : "innovatori_create_comment",
    "description" : "Innovatori - Create comment",
    "argument_keys" : [ "!teaser" ],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 1, "enabled" : 1, "quota" : "", "days" : "" }
    },
    "language" : "it",
    "arguments" : null,
    "message_text" : {
      "it" : [
        {
          "value" : "\\u003Cp\\u003E\\u003Ca href=\\u0022[message:user:url:absolute]\\u0022\\u003E[message:user:name]\\u003C\\/a\\u003E\\u0026nbsp;ha commentato il contenuto \\u0026nbsp;\\u003Ca href=\\u0022[message:field-comment-ref:url]\\u0022\\u003E[message:field-node-ref:title]\\u003C\\/a\\u003E\\u003C\\/p\\u003E\\r\\n",
          "format" : "full_html",
          "safe_value" : "\\u003Cp\\u003E\\u003Ca href=\\u0022[message:user:url:absolute]\\u0022\\u003E[message:user:name]\\u003C\\/a\\u003E\\u00a0ha commentato il contenuto \\u00a0\\u003Ca href=\\u0022[message:field-comment-ref:url]\\u0022\\u003E[message:field-node-ref:title]\\u003C\\/a\\u003E\\u003C\\/p\\u003E\\n"
        }
      ],
      "und" : [
        {
          "value" : "\\u003Ca href=\\u0022[message:user:url]\\u0022\\u003E@{message:user:name}\\u003C\\/a\\u003E \\u003Ca href=\\u0022[message:field-comment-ref:url]\\u0022\\u003Ecommented\\u003C\\/a\\u003E on [message:field-node-ref:title]",
          "format" : "full_html",
          "safe_value" : "\\u003Ca href=\\u0022[message:user:url]\\u0022\\u003E@{message:user:name}\\u003C\\/a\\u003E \\u003Ca href=\\u0022[message:field-comment-ref:url]\\u0022\\u003Ecommented\\u003C\\/a\\u003E on [message:field-node-ref:title]"
        },
        {
          "value" : "[message:field-comment-ref:comment-teaser]",
          "format" : "full_html",
          "safe_value" : "[message:field-comment-ref:comment-teaser]"
        }
      ]
    }
  }');
  $items['innovatori_create_node'] = entity_import('message_type', '{
    "name" : "innovatori_create_node",
    "description" : "Innovatori - Create node",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 1, "enabled" : 1, "quota" : "", "days" : "" }
    },
    "language" : "it",
    "arguments" : [],
    "message_text" : {
      "en" : [
        {
          "value" : "\\u003Cp\\u003E\\u0026nbsp;\\u003Ca href=\\u0022[message:user:url:absolute]\\u0022\\u003E[message:user:name]\\u003C\\/a\\u003E\\u0026nbsp;ha creato\\u0026nbsp;\\u003Ca href=\\u0022[message:field-node-ref]:0:url]\\u0022\\u003E[message:field-node-ref]:0:title]\\u003C\\/a\\u003E\\u003C\\/p\\u003E\\n",
          "format" : "full_html",
          "safe_value" : "\\u003Cp\\u003E\\u00a0\\u003Ca href=\\u0022[message:user:url:absolute]\\u0022\\u003E[message:user:name]\\u003C\\/a\\u003E\\u00a0ha creato\\u00a0\\u003Ca href=\\u0022[message:field-node-ref]:0:url]\\u0022\\u003E[message:field-node-ref]:0:title]\\u003C\\/a\\u003E\\u003C\\/p\\u003E\\n"
        }
      ],
      "it" : [
        {
          "value" : "\\u003Cp\\u003E\\u003Ca href=\\u0022[message:user:url:absolute]\\u0022\\u003E[message:user:name]\\u003C\\/a\\u003E\\u0026nbsp;ha creato il contenuto \\u0026nbsp;\\u003Ca href=\\u0022[message:field-node-ref:url]\\u0022\\u003E[message:field-node-ref:title]\\u003C\\/a\\u003E di tipo [message:field-node-ref:content-type:name]\\u003C\\/p\\u003E\\r\\n",
          "format" : "full_html",
          "safe_value" : "\\u003Cp\\u003E\\u003Ca href=\\u0022[message:user:url:absolute]\\u0022\\u003E[message:user:name]\\u003C\\/a\\u003E\\u00a0ha creato il contenuto \\u00a0\\u003Ca href=\\u0022[message:field-node-ref:url]\\u0022\\u003E[message:field-node-ref:title]\\u003C\\/a\\u003E di tipo [message:field-node-ref:content-type:name]\\u003C\\/p\\u003E\\n"
        }
      ],
      "und" : [
        {
          "value" : "\\u003Ca href=\\u0022[message:user:url]\\u0022\\u003E@{message:user:name}\\u003C\\/a\\u003E created \\u003Ca href=\\u0022[message:field-node-ref:url]\\u0022\\u003E[message:field-node-ref:title]\\u003C\\/a\\u003E",
          "format" : "full_html",
          "safe_value" : "\\u003Ca href=\\u0022[message:user:url]\\u0022\\u003E@{message:user:name}\\u003C\\/a\\u003E created \\u003Ca href=\\u0022[message:field-node-ref:url]\\u0022\\u003E[message:field-node-ref:title]\\u003C\\/a\\u003E"
        },
        {
          "value" : "[message:field-node-ref:node-teaser]",
          "format" : "full_html",
          "safe_value" : "[message:field-node-ref:node-teaser]"
        }
      ]
    }
  }');
  $items['innovatori_user_follow'] = entity_import('message_type', '{
    "name" : "innovatori_user_follow",
    "description" : "Innovatori - User follow",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 1, "enabled" : 1, "quota" : "", "days" : "" }
    },
    "language" : "it",
    "arguments" : null,
    "message_text" : { "it" : [
        {
          "value" : "\\u003Cp\\u003E\\u003Ca href=\\u0022[message:user:url:absolute]\\u0022\\u003E[message:user:name]\\u003C\\/a\\u003E\\u0026nbsp;ha iniziato a seguire \\u0026nbsp;\\u003Ca href=\\u0022[message:field-user-ref-follow:url]\\u0022\\u003E[message:field-user-ref-follow:name]\\u003C\\/a\\u003E\\u003C\\/p\\u003E\\r\\n",
          "format" : "full_html",
          "safe_value" : "\\u003Cp\\u003E\\u003Ca href=\\u0022[message:user:url:absolute]\\u0022\\u003E[message:user:name]\\u003C\\/a\\u003E\\u00a0ha iniziato a seguire \\u00a0\\u003Ca href=\\u0022[message:field-user-ref-follow:url]\\u0022\\u003E[message:field-user-ref-follow:name]\\u003C\\/a\\u003E\\u003C\\/p\\u003E\\n"
        }
      ]
    }
  }');
  return $items;
}
