<?php
/**
 * @file
 * innovatoripa_notify.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function innovatoripa_notify_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "mailhandler" && $api == "mailhandler_mailbox") {
    return array("version" => "2");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_message_type().
 */
function innovatoripa_notify_default_message_type() {
  $items = array();
  $items['innovatoripa_notify_commento_inserito'] = entity_import('message_type', '{
    "name" : "innovatoripa_notify_commento_inserito",
    "description" : "InnovatoriPA Notify: Commento inserito in una comunit\\u00e0",
    "argument_keys" : [],
    "argument" : [],
    "category" : "innovatoripa_notify",
    "data" : {
      "token options" : { "clear" : 1 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "it",
    "arguments" : null,
    "message_text" : { "it" : [
        {
          "value" : "[[site:name]]: Nuovo commento su [message:field-target-nodes:0:title]",
          "format" : "plain_text",
          "safe_value" : "\\u003Cp\\u003E[[site:name]]: Nuovo commento su [message:field-target-nodes:0:title]\\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "Ciao [message:user:name],\\r\\n\\r\\n[message:field-target-comments:0:author] ha inserito un nuovo commento su \\u0022[message:field-target-nodes:0:title]\\u0022\\r\\n\\r\\n[message:field-target-comments:0:body]\\r\\n\\r\\nLeggi\\/Rispondi: [message:field-target-comments:0:url]\\r\\nAggiorna le impostazioni di queste notifiche: [site:url]\\/notification-settings",
          "format" : "plain_text",
          "safe_value" : "\\u003Cp\\u003ECiao [message:user:name],\\u003C\\/p\\u003E\\n\\u003Cp\\u003E[message:field-target-comments:0:author] ha inserito un nuovo commento su \\u0026quot;[message:field-target-nodes:0:title]\\u0026quot;\\u003C\\/p\\u003E\\n\\u003Cp\\u003E[message:field-target-comments:0:body]\\u003C\\/p\\u003E\\n\\u003Cp\\u003ELeggi\\/Rispondi: [message:field-target-comments:0:url]\\u003Cbr \\/\\u003E\\nAggiorna le impostazioni di queste notifiche: [site:url]\\/notification-settings\\u003C\\/p\\u003E\\n"
        }
      ]
    }
  }');
  $items['innovatoripa_notify_commento_inserito_fuori_da_un_gruppo'] = entity_import('message_type', '{
    "name" : "innovatoripa_notify_commento_inserito_fuori_da_un_gruppo",
    "description" : "InnovatoriPA Notify: Commento inserito fuori da un gruppo o comunit\\u00e0",
    "argument_keys" : [],
    "argument" : [],
    "category" : "innovatoripa_notify",
    "data" : {
      "token options" : { "clear" : 1 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "it",
    "arguments" : null,
    "message_text" : { "it" : [
        {
          "value" : "[[site:name]]: Nuovo commento su \\u0022[message:field-target-nodes:0:title]\\u0022 in \\u0022[message:field-target-nodes:0:og-group-ref:0:title]\\u0022",
          "format" : "plain_text",
          "safe_value" : "\\u003Cp\\u003E[[site:name]]: Nuovo commento su \\u0026quot;[message:field-target-nodes:0:title]\\u0026quot; in \\u0026quot;[message:field-target-nodes:0:og-group-ref:0:title]\\u0026quot;\\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "Ciao [message:user:name],\\r\\n\\r\\n[message:field-target-comments:0:author] ha inserito un nuovo commento su \\u0022[message:field-target-nodes:0:title]\\u0022\\r\\n\\r\\n[message:field-target-comments:0:body]\\r\\n\\r\\nLeggi\\/Rispondi: [message:field-target-comments:0:url]\\r\\nAggiorna le impostazioni di queste notifiche: [site:url]\\/notification-settings",
          "format" : "plain_text",
          "safe_value" : "\\u003Cp\\u003ECiao [message:user:name],\\u003C\\/p\\u003E\\n\\u003Cp\\u003E[message:field-target-comments:0:author] ha inserito un nuovo commento su \\u0026quot;[message:field-target-nodes:0:title]\\u0026quot;\\u003C\\/p\\u003E\\n\\u003Cp\\u003E[message:field-target-comments:0:body]\\u003C\\/p\\u003E\\n\\u003Cp\\u003ELeggi\\/Rispondi: [message:field-target-comments:0:url]\\u003Cbr \\/\\u003E\\nAggiorna le impostazioni di queste notifiche: [site:url]\\/notification-settings\\u003C\\/p\\u003E\\n"
        }
      ]
    }
  }');
  $items['innovatoripa_notify_commento_inserito_gruppo_mail'] = entity_import('message_type', '{
    "name" : "innovatoripa_notify_commento_inserito_gruppo_mail",
    "description" : "InnovatoriPA Notify: Commento inserito in un gruppo",
    "argument_keys" : [],
    "argument" : [],
    "category" : "innovatoripa_notify",
    "data" : {
      "token options" : { "clear" : 1 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "it",
    "arguments" : null,
    "message_text" : { "it" : [
        {
          "value" : "[[site:name]]: Nuovo commento su [message:field-target-nodes:0:title]",
          "format" : "plain_text",
          "safe_value" : "\\u003Cp\\u003E[[site:name]]: Nuovo commento su [message:field-target-nodes:0:title]\\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "[message:field-target-comments:0:body]\\r\\n\\r\\n-----\\r\\nCommento di: \\u0022[message:field-target-comments:0:author]\\u0022\\r\\n\\r\\nLeggi\\/Rispondi dal sito: [message:field-target-comments:0:url]\\r\\nAggiorna le impostazioni di queste notifiche: [site:url]\\/notification-settings\\r\\n-----",
          "format" : "plain_text",
          "safe_value" : "\\u003Cp\\u003E[message:field-target-comments:0:body]\\u003C\\/p\\u003E\\n\\u003Cp\\u003E-----\\u003Cbr \\/\\u003E\\nCommento di: \\u0026quot;[message:field-target-comments:0:author]\\u0026quot;\\u003C\\/p\\u003E\\n\\u003Cp\\u003ELeggi\\/Rispondi dal sito: [message:field-target-comments:0:url]\\u003Cbr \\/\\u003E\\nAggiorna le impostazioni di queste notifiche: [site:url]\\/notification-settings\\u003Cbr \\/\\u003E\\n-----\\u003C\\/p\\u003E\\n"
        }
      ]
    }
  }');
  $items['innovatoripa_notify_node_no_group'] = entity_import('message_type', '{
    "name" : "innovatoripa_notify_node_no_group",
    "description" : "InnovatoriPA Notify: Nuovo nodo inseito fuori da un gruppo o da una comunit\\u00e0",
    "argument_keys" : [],
    "argument" : [],
    "category" : "innovatoripa_notify",
    "data" : {
      "token options" : { "clear" : 1 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "it",
    "arguments" : null,
    "message_text" : { "it" : [
        {
          "value" : "[[site:name]]: Nuovo\\/a [message:field-target-nodes:0:content-type]: [message:field-target-nodes:0:title]",
          "format" : "plain_text",
          "safe_value" : "\\u003Cp\\u003E[[site:name]]: Nuovo\\/a [message:field-target-nodes:0:content-type]: [message:field-target-nodes:0:title]\\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "Ciao [message:user:name],\\r\\n\\r\\n[message:field-target-nodes:0:author] ha creato nuovo contenuto di tipo \\u0022[message:field-target-nodes:0:content-type]\\u0022:\\r\\n\\r\\n[message:field-target-nodes:0:body]\\r\\n\\r\\nPermalink: [message:field-target-nodes:0:url]\\r\\nInvia un commento [message:field-target-nodes:0:url]#comment-form\\r\\n\\r\\nAggiorna le impostazioni di queste notifiche: [site:url]user\\/[message:user:uid]\\/notification-settings",
          "format" : "plain_text",
          "safe_value" : "\\u003Cp\\u003ECiao [message:user:name],\\u003C\\/p\\u003E\\n\\u003Cp\\u003E[message:field-target-nodes:0:author] ha creato nuovo contenuto di tipo \\u0026quot;[message:field-target-nodes:0:content-type]\\u0026quot;:\\u003C\\/p\\u003E\\n\\u003Cp\\u003E[message:field-target-nodes:0:body]\\u003C\\/p\\u003E\\n\\u003Cp\\u003EPermalink: [message:field-target-nodes:0:url]\\u003Cbr \\/\\u003E\\nInvia un commento [message:field-target-nodes:0:url]#comment-form\\u003C\\/p\\u003E\\n\\u003Cp\\u003EAggiorna le impostazioni di queste notifiche: [site:url]user\\/[message:user:uid]\\/notification-settings\\u003C\\/p\\u003E\\n"
        }
      ]
    }
  }');
  $items['innovatoripa_notify_nodo_inserito'] = entity_import('message_type', '{
    "name" : "innovatoripa_notify_nodo_inserito",
    "description" : "InnovatoriPA Notify: Nodo inserito in una comunit\\u00e0",
    "argument_keys" : [],
    "argument" : [],
    "category" : "innovatoripa_notify",
    "data" : {
      "token options" : { "clear" : 1 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "it",
    "arguments" : null,
    "message_text" : { "it" : [
        {
          "value" : "[[site:name]]: Nuovo\\/a [message:field-target-nodes:0:content-type] in \\u0022[message:field-target-nodes:0:og-group-ref:0:title]\\u0022: [message:field-target-nodes:0:title]",
          "format" : "plain_text",
          "safe_value" : "\\u003Cp\\u003E[[site:name]]: Nuovo\\/a [message:field-target-nodes:0:content-type] in \\u0026quot;[message:field-target-nodes:0:og-group-ref:0:title]\\u0026quot;: [message:field-target-nodes:0:title]\\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "Ciao [message:user:name],\\r\\n\\r\\n[message:field-target-nodes:0:author] ha creato nuovo contenuto di tipo \\u0022[message:field-target-nodes:0:content-type]\\u0022 su \\u0022[message:field-target-nodes:0:og-group-ref:0:title]\\u0022.\\r\\n\\r\\n[message:field-target-nodes:0:body]\\r\\n\\r\\nPermalink: [message:field-target-nodes:0:url]\\r\\nInvia un commento [message:field-target-nodes:0:url]#comment-form\\r\\n\\r\\nAggiorna le impostazioni di queste notifiche: [site:url]user\\/[message:user:uid]\\/notification-settings",
          "format" : "plain_text",
          "safe_value" : "\\u003Cp\\u003ECiao [message:user:name],\\u003C\\/p\\u003E\\n\\u003Cp\\u003E[message:field-target-nodes:0:author] ha creato nuovo contenuto di tipo \\u0026quot;[message:field-target-nodes:0:content-type]\\u0026quot; su \\u0026quot;[message:field-target-nodes:0:og-group-ref:0:title]\\u0026quot;.\\u003C\\/p\\u003E\\n\\u003Cp\\u003E[message:field-target-nodes:0:body]\\u003C\\/p\\u003E\\n\\u003Cp\\u003EPermalink: [message:field-target-nodes:0:url]\\u003Cbr \\/\\u003E\\nInvia un commento [message:field-target-nodes:0:url]#comment-form\\u003C\\/p\\u003E\\n\\u003Cp\\u003EAggiorna le impostazioni di queste notifiche: [site:url]user\\/[message:user:uid]\\/notification-settings\\u003C\\/p\\u003E\\n"
        }
      ]
    }
  }');
  $items['innovatoripa_notify_nodo_inserito_gruppo_mail'] = entity_import('message_type', '{
    "name" : "innovatoripa_notify_nodo_inserito_gruppo_mail",
    "description" : "InnovatoriPA Notify: Nodo inserito in un un gruppo",
    "argument_keys" : [],
    "argument" : [],
    "category" : "innovatoripa_notify",
    "data" : {
      "token options" : { "clear" : 1 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "it",
    "arguments" : null,
    "message_text" : { "it" : [
        {
          "value" : "[[site:name]]: Nuova discussione creata sul gruppo \\u0022[message:field-target-nodes:0:og-group-ref:0:title]\\u0022: [message:field-target-nodes:0:title]",
          "format" : "plain_text",
          "safe_value" : "\\u003Cp\\u003E[[site:name]]: Nuova discussione creata sul gruppo \\u0026quot;[message:field-target-nodes:0:og-group-ref:0:title]\\u0026quot;: [message:field-target-nodes:0:title]\\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "[message:field-target-nodes:0:body]\\r\\n\\r\\n-----\\r\\nDiscussione iniziata da: \\u0022[message:field-target-nodes:0:author]\\u0022\\r\\nPermalink: [message:field-target-nodes:0:url]\\r\\nInvia un commento [message:field-target-nodes:0:url]#comment-form\\r\\n\\r\\nAggiorna le impostazioni di queste notifiche: [site:url]user\\/[message:user:uid]\\/notification-settings\\r\\n-----",
          "format" : "plain_text",
          "safe_value" : "\\u003Cp\\u003E[message:field-target-nodes:0:body]\\u003C\\/p\\u003E\\n\\u003Cp\\u003E-----\\u003Cbr \\/\\u003E\\nDiscussione iniziata da: \\u0026quot;[message:field-target-nodes:0:author]\\u0026quot;\\u003Cbr \\/\\u003E\\nPermalink: [message:field-target-nodes:0:url]\\u003Cbr \\/\\u003E\\nInvia un commento [message:field-target-nodes:0:url]#comment-form\\u003C\\/p\\u003E\\n\\u003Cp\\u003EAggiorna le impostazioni di queste notifiche: [site:url]user\\/[message:user:uid]\\/notification-settings\\u003Cbr \\/\\u003E\\n-----\\u003C\\/p\\u003E\\n"
        }
      ]
    }
  }');
  return $items;
}

/**
 * Implements hook_default_message_type_category().
 */
function innovatoripa_notify_default_message_type_category() {
  $items = array();
  $items['innovatoripa_notify'] = entity_import('message_type_category', '{
    "category" : "innovatoripa_notify",
    "description" : "InnovatoriPA Notify",
    "language" : "und"
  }');
  return $items;
}
