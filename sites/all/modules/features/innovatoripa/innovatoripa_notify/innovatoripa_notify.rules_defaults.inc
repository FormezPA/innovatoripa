<?php
/**
 * @file
 * innovatoripa_notify.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function innovatoripa_notify_default_rules_configuration() {
  $items = array();
  $items['rules_comunit_og_member_subscribe_active_'] = entity_import('rules_config', '{ "rules_comunit_og_member_subscribe_active_" : {
      "LABEL" : "Comunit\\u00e0: OG member subscribe (Active) ",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "innovatoripa_og" ],
      "REQUIRES" : [ "rules", "innovatoripa_og", "og" ],
      "ON" : [ "og_user_approved", "og_user_insert" ],
      "IF" : [
        { "data_is" : { "data" : [ "og-membership:state" ], "value" : "1" } },
        { "entity_is_of_type" : { "entity" : [ "og-membership:group" ], "type" : "node" } },
        { "node_is_of_type" : {
            "node" : [ "og-membership:group" ],
            "type" : { "value" : { "comunita" : "comunita" } }
          }
        }
      ],
      "DO" : [
        { "variable_add" : {
            "USING" : { "type" : "node", "value" : [ "og-membership:group" ] },
            "PROVIDE" : { "variable_added" : { "group" : "Added variable" } }
          }
        },
        { "innovatoripa_og_action_send_email_to_group_editors" : {
            "USING" : { "group_content" : [ "group" ] },
            "PROVIDE" : { "group_editors" : { "group_editors" : "List of group editors" } }
          }
        },
        { "mail" : {
            "to" : [ "account:mail" ],
            "subject" : "[[site:name]] La tua richiesta di iscrizione alla comunit\\u00e0 \\u0027[group:title]\\u0027 \\u00e8 stata approvata.\\r\\n",
            "message" : "Ciao [account:name],\\r\\n\\r\\nOra sei un membro della comunit\\u00e0 \\u0027[group:title]\\u0027, per accedere clicca qui [group:url]"
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "group-editors" ] },
            "ITEM" : { "group_editor" : "Editor del gruppo" },
            "DO" : [
              { "mail" : {
                  "to" : "[group-editor:mail]",
                  "subject" : "[[site:name]] [account:name] \\u00e8 ora iscritto alla comunit\\u00e0 [group:title]",
                  "message" : "Ciao [group-editor:name],\\r\\n\\r\\n[account:name] fa ora parte della comunit\\u00e0 [group:title] in [group:url]\\r\\n",
                  "language" : [ "" ]
                }
              }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_comunit_og_member_subscribe_pending_duplicato_'] = entity_import('rules_config', '{ "rules_comunit_og_member_subscribe_pending_duplicato_" : {
      "LABEL" : "Comunit\\u00e0: OG member subscribe (Pending)",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "innovatoripa_og" ],
      "REQUIRES" : [ "rules", "innovatoripa_og", "og" ],
      "ON" : [ "og_user_insert" ],
      "IF" : [
        { "data_is" : { "data" : [ "og-membership:state" ], "value" : "2" } },
        { "entity_is_of_type" : { "entity" : [ "og-membership:group" ], "type" : "node" } },
        { "node_is_of_type" : {
            "node" : [ "og-membership:group" ],
            "type" : { "value" : { "comunita" : "comunita" } }
          }
        }
      ],
      "DO" : [
        { "variable_add" : {
            "USING" : { "type" : "node", "value" : [ "og-membership:group" ] },
            "PROVIDE" : { "variable_added" : { "group" : "Added variable" } }
          }
        },
        { "innovatoripa_og_action_send_email_to_group_editors" : {
            "USING" : { "group_content" : [ "group" ] },
            "PROVIDE" : { "group_editors" : { "group_editors" : "List of group editors" } }
          }
        },
        { "mail" : {
            "to" : [ "account:mail" ],
            "subject" : "[[site:name]] La tua richiesta di far parte della comunit\\u00e0 \\u0027[group:title]\\u0027",
            "message" : "Ciao [account:name],\\r\\n\\r\\nLa tua richiesta di far parte della comunit\\u00e0 \\u0027[group:title]\\u0027 accessibile da [group:url] \\u00e8 in fase di approvazione. \\n Riceverai una notifica non appena sar\\u00e0 approvata.\\r\\n"
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "group-editors" ] },
            "ITEM" : { "group_editor" : "Editor del gruppo" },
            "DO" : [
              { "mail" : {
                  "to" : "[group-editor:mail]",
                  "subject" : "[site:name]] [account:name] richiesta di adesione alla comunit\\u00e0: [group:title]",
                  "message" : "Ciao [group-editor:name],\\r\\n\\r\\n[account:name] ha chiesto di poter aderire alla comunit\\u00e0 \\u0027[group:title]\\u0027 in [group:url].\\r\\nMessaggio:\\r\\n\\u0022[og_membership:og-membership-request]\\u0022\\r\\nClicca qui per gestire la richiesta:\\r\\n[site:url]\\/group\\/node\\/[group:nid]\\/admin\\/people?state=All\\u0026uid=\\u0026order=created\\u0026sort=desc",
                  "language" : [ "" ]
                }
              }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_comunit_og_member_subscribe_rejected'] = entity_import('rules_config', '{ "rules_comunit_og_member_subscribe_rejected" : {
      "LABEL" : "Comunit\\u00e0: OG member subscribe (Rejected)",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "TAGS" : [ "innovatoripa_og" ],
      "REQUIRES" : [ "rules", "innovatoripa_og", "og" ],
      "ON" : [ "og_user_delete", "og_user_blocked" ],
      "IF" : [
        { "OR" : [
            { "data_is" : { "data" : [ "og-membership:state" ], "value" : "2" } },
            { "data_is" : { "data" : [ "og-membership:state" ], "value" : "3" } }
          ]
        },
        { "entity_is_of_type" : { "entity" : [ "og-membership:group" ], "type" : "node" } },
        { "node_is_of_type" : {
            "node" : [ "og-membership:group" ],
            "type" : { "value" : { "comunita" : "comunita" } }
          }
        }
      ],
      "DO" : [
        { "variable_add" : {
            "USING" : { "type" : "node", "value" : [ "og-membership:group" ] },
            "PROVIDE" : { "variable_added" : { "group" : "Added variable" } }
          }
        },
        { "innovatoripa_og_action_send_email_to_group_editors" : {
            "USING" : { "group_content" : [ "group" ] },
            "PROVIDE" : { "group_editors" : { "group_editors" : "List of group editors" } }
          }
        },
        { "variable_add" : {
            "USING" : { "type" : "user", "value" : [ "site:current-user" ] },
            "PROVIDE" : { "variable_added" : { "utente_attuale" : "Utente attuale" } }
          }
        },
        { "mail" : {
            "to" : [ "account:mail" ],
            "subject" : "[[site:name]] La tua richiesta di iscrizione alla comunit\\u00e0 \\u0027[group:title]\\u0027 \\u00e8 stata rifiutata.\\r\\n",
            "message" : "Ciao [account:name],\\r\\n\\r\\nCi dispiace ma le tua richiesta di partecipare alla comunit\\u00e0 \\u0027[group:title]\\u0027, \\u00e8 stata rifiutata",
            "language" : [ "" ]
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "group-editors" ] },
            "ITEM" : { "group_editor" : "Editor del gruppo" },
            "DO" : [
              { "mail" : {
                  "to" : "[group-editor:mail]",
                  "subject" : "La richiesta rifiutata a [account:name] di partecipare a [group:title]",
                  "message" : "Ciao [group-editor:name],\\r\\n\\r\\nLa richiesta di [account:name] di partecipare a [group:title] in [group:url]\\r\\n\\u00e8 stata rifiutata dall\\u0027amministratore  [utente-attuale:name]",
                  "language" : [ "" ]
                }
              }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_gruppo_og_member_subscribe_active_'] = entity_import('rules_config', '{ "rules_gruppo_og_member_subscribe_active_" : {
      "LABEL" : "Gruppo: OG member subscribe (Active)",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "innovatoripa_og" ],
      "REQUIRES" : [ "rules", "innovatoripa_og", "og" ],
      "ON" : [ "og_user_approved", "og_user_insert" ],
      "IF" : [
        { "data_is" : { "data" : [ "og-membership:state" ], "value" : "1" } },
        { "entity_is_of_type" : { "entity" : [ "og-membership:group" ], "type" : "node" } },
        { "node_is_of_type" : {
            "node" : [ "og-membership:group" ],
            "type" : { "value" : { "gruppo" : "gruppo" } }
          }
        }
      ],
      "DO" : [
        { "variable_add" : {
            "USING" : { "type" : "node", "value" : [ "og-membership:group" ] },
            "PROVIDE" : { "variable_added" : { "group" : "Added variable" } }
          }
        },
        { "innovatoripa_og_action_send_email_to_group_editors" : {
            "USING" : { "group_content" : [ "group" ] },
            "PROVIDE" : { "group_editors" : { "group_editors" : "List of group editors" } }
          }
        },
        { "mail" : {
            "to" : [ "account:mail" ],
            "subject" : "[[site:name]] La tua richiesta di iscrizione al gruppo \\u0027[group:title]\\u0027 \\u00e8 stata approvata.\\r\\n",
            "message" : "Ciao [account:name],\\r\\n\\r\\nOra sei un membro del gruppo \\u0027[group:title]\\u0027, per accedere clicca qui [group:url]"
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "group-editors" ] },
            "ITEM" : { "group_editor" : "Editor del gruppo" },
            "DO" : [
              { "mail" : {
                  "to" : "[group-editor:mail]",
                  "subject" : "[[site:name]] [account:name] \\u00e8 ora iscritto al gruppo [group:title]",
                  "message" : "Ciao [group-editor:name],\\r\\n\\r\\n[account:name] fa ora parte del gruppo [group:title] in [group:url]\\r\\n",
                  "language" : [ "" ]
                }
              }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_gruppo_og_member_subscribe_pending_duplicato_duplicato_'] = entity_import('rules_config', '{ "rules_gruppo_og_member_subscribe_pending_duplicato_duplicato_" : {
      "LABEL" : "Gruppo: OG member subscribe (Pending)",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "innovatoripa_og" ],
      "REQUIRES" : [ "rules", "innovatoripa_og", "og" ],
      "ON" : [ "og_user_insert" ],
      "IF" : [
        { "data_is" : { "data" : [ "og-membership:state" ], "value" : "2" } },
        { "entity_is_of_type" : { "entity" : [ "og-membership:group" ], "type" : "node" } },
        { "node_is_of_type" : {
            "node" : [ "og-membership:group" ],
            "type" : { "value" : { "gruppo" : "gruppo" } }
          }
        }
      ],
      "DO" : [
        { "variable_add" : {
            "USING" : { "type" : "node", "value" : [ "og-membership:group" ] },
            "PROVIDE" : { "variable_added" : { "group" : "Added variable" } }
          }
        },
        { "innovatoripa_og_action_send_email_to_group_editors" : {
            "USING" : { "group_content" : [ "group" ] },
            "PROVIDE" : { "group_editors" : { "group_editors" : "List of group editors" } }
          }
        },
        { "mail" : {
            "to" : [ "account:mail" ],
            "subject" : "[[site:name]] La tua richiesta di far parte del gruppo \\u0027[group:title]\\u0027",
            "message" : "Ciao [account:name],\\r\\n\\r\\nLa tua richiesta di far parte del gruppo \\u0027[group:title]\\u0027 accessibile da [group:url] \\u00e8 in fase di approvazione. \\n Riceverai una notifica non appena sar\\u00e0 approvata.\\r\\n"
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "group-editors" ] },
            "ITEM" : { "group_editor" : "Editor del gruppo" },
            "DO" : [
              { "mail" : {
                  "to" : "[group-editor:mail]",
                  "subject" : "[site:name]] [account:name] richiesta di adesione al gruppo: [group:title]",
                  "message" : "Ciao [group-editor:name],\\r\\n\\r\\n[account:name] ha chiesto di poter aderire al gruppo \\u0027[group:title]\\u0027 in [group:url].\\r\\nMessaggio:\\r\\n\\u0022[og_membership:og-membership-request]\\u0022\\r\\nClicca qui per gestire la richiesta:\\r\\n[site:url]\\/group\\/node\\/[group:nid]\\/admin\\/people?state=All\\u0026uid=\\u0026order=created\\u0026sort=desc",
                  "language" : [ "" ]
                }
              }
            ]
          }
        }
      ]
    }
  }');
  return $items;
}
