<?php
/**
 * @file
 * innovatoripa_search_engine.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function innovatoripa_search_engine_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "current_search" && $api == "current_search") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function innovatoripa_search_engine_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_search_api_index().
 */
function innovatoripa_search_engine_default_search_api_index() {
  $items = array();
  $items['default_node_index'] = entity_import('search_api_index', '{
    "name" : "Content search",
    "machine_name" : "default_node_index",
    "description" : "An automatically created search index for indexing node data. Might be configured to specific needs.",
    "server" : "solr_server",
    "item_type" : "node",
    "options" : {
      "index_directly" : 1,
      "cron_limit" : "50",
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_node_access" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : { "title" : true, "body:value" : true } }
        },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "fields" : { "title" : true, "body:value" : true },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 1,
          "weight" : "20",
          "settings" : {
            "fields" : { "title" : true, "body:value" : true },
            "spaces" : "[^\\\\p{L}\\\\p{N}]",
            "ignorable" : "[-]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : { "title" : true, "body:value" : true },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        }
      },
      "fields" : {
        "nid" : { "type" : "integer" },
        "is_new" : { "type" : "boolean" },
        "type" : { "type" : "string" },
        "title" : { "type" : "text", "boost" : "5.0" },
        "language" : { "type" : "string" },
        "url" : { "type" : "uri" },
        "status" : { "type" : "integer" },
        "promote" : { "type" : "boolean" },
        "sticky" : { "type" : "boolean" },
        "created" : { "type" : "date" },
        "changed" : { "type" : "date" },
        "author" : { "type" : "integer", "entity_type" : "user" },
        "comment" : { "type" : "integer" },
        "comment_count" : { "type" : "integer" },
        "comment_count_new" : { "type" : "integer" },
        "views" : { "type" : "integer" },
        "day_views" : { "type" : "integer" },
        "og_group_ref" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "og_membership" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "og_membership" },
        "og_group_ref__og_membership" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "og_membership" },
        "group_group" : { "type" : "string" },
        "field_og_list_group_directory" : { "type" : "boolean" },
        "field_og_post_count" : { "type" : "integer" },
        "field_og_user_count" : { "type" : "integer" },
        "field_og_stats_last_post_date" : { "type" : "date" },
        "field_og_stats_last_post_nid" : { "type" : "integer" },
        "members" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "user" },
        "members__1" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "user" },
        "members__2" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "user" },
        "members__3" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "user" },
        "search_api_language" : { "type" : "string" },
        "search_api_access_node" : { "type" : "list\\u003Cstring\\u003E" },
        "author:uid" : { "type" : "integer" },
        "author:name" : { "type" : "string" },
        "author:mail" : { "type" : "text" },
        "author:url" : { "type" : "uri" },
        "author:last_access" : { "type" : "date" },
        "author:last_login" : { "type" : "date" },
        "author:created" : { "type" : "date" },
        "author:roles" : { "type" : "list\\u003Cinteger\\u003E" },
        "author:og_user_node" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "author:og_membership" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "og_membership" },
        "author:og_membership__1" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "og_membership" },
        "author:og_membership__2" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "og_membership" },
        "author:og_membership__3" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "og_membership" },
        "author:og_user_node__og_membership" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "og_membership" },
        "author:og_user_node__og_membership__1" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "og_membership" },
        "author:og_user_node__og_membership__2" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "og_membership" },
        "author:og_user_node__og_membership__3" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "og_membership" },
        "body:value" : { "type" : "text" },
        "body:summary" : { "type" : "text" },
        "og_group_ref:nid" : { "type" : "list\\u003Cinteger\\u003E" },
        "og_group_ref:og_membership" : {
          "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
          "entity_type" : "og_membership"
        },
        "og_group_ref:members" : {
          "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
          "entity_type" : "user"
        },
        "og_membership:id" : { "type" : "list\\u003Cinteger\\u003E" },
        "og_membership:type" : {
          "type" : "list\\u003Cstring\\u003E",
          "entity_type" : "og_membership_type"
        },
        "og_membership:entity_type" : { "type" : "list\\u003Ctext\\u003E" },
        "og_membership:group_type" : { "type" : "list\\u003Cstring\\u003E" },
        "og_membership:state" : { "type" : "list\\u003Cinteger\\u003E" },
        "og_membership:created" : { "type" : "list\\u003Cdate\\u003E" },
        "og_membership:field_name" : { "type" : "list\\u003Ctext\\u003E" },
        "og_membership:language" : { "type" : "list\\u003Ctext\\u003E" },
        "og_membership:og_membership_request" : { "type" : "list\\u003Ctext\\u003E" },
        "og_group_ref__og_membership:id" : { "type" : "list\\u003Cinteger\\u003E" },
        "og_group_ref__og_membership:type" : {
          "type" : "list\\u003Cstring\\u003E",
          "entity_type" : "og_membership_type"
        },
        "og_group_ref__og_membership:entity_type" : { "type" : "list\\u003Ctext\\u003E" },
        "og_group_ref__og_membership:group_type" : { "type" : "list\\u003Cstring\\u003E" },
        "og_group_ref__og_membership:state" : { "type" : "list\\u003Cinteger\\u003E" },
        "og_group_ref__og_membership:created" : { "type" : "list\\u003Cdate\\u003E" },
        "og_group_ref__og_membership:field_name" : { "type" : "list\\u003Ctext\\u003E" },
        "og_group_ref__og_membership:language" : { "type" : "list\\u003Ctext\\u003E" },
        "og_group_ref__og_membership:og_membership_request" : { "type" : "list\\u003Ctext\\u003E" }
      }
    },
    "enabled" : "1",
    "read_only" : "0"
  }');
  $items['users_search'] = entity_import('search_api_index', '{
    "name" : "Users search",
    "machine_name" : "users_search",
    "description" : null,
    "server" : "solr_server",
    "item_type" : "user",
    "options" : {
      "index_directly" : 0,
      "cron_limit" : "50",
      "fields" : {
        "name" : { "type" : "text" },
        "mail" : { "type" : "text" },
        "last_access" : { "type" : "date" },
        "last_login" : { "type" : "date" },
        "created" : { "type" : "string" },
        "roles" : { "type" : "list\\u003Cinteger\\u003E" },
        "status" : { "type" : "integer" },
        "profile_main" : { "type" : "integer", "entity_type" : "profile2" },
        "og_user_node" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "og_membership" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "og_membership" },
        "og_user_node__og_membership" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "og_membership" },
        "og_user_node__og_membership__1" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "og_membership" },
        "search_api_language" : { "type" : "string" },
        "profile_main:field_profile_nome" : { "type" : "text" },
        "profile_main:field_profile_cognome" : { "type" : "text" },
        "profile_main:field_profile_sex" : { "type" : "string" },
        "profile_main:field_profile_ente" : { "type" : "string" },
        "profile_main:field_profile_pa_type" : { "type" : "string" },
        "profile_main:field_profile_ruolo" : { "type" : "text" },
        "profile_main:field_profile_qualifica" : { "type" : "string" },
        "profile_main:field_profile_unit" : { "type" : "text" },
        "profile_main:field_profile_telefono" : { "type" : "text" },
        "profile_main:field_profile_cellulare" : { "type" : "text" },
        "profile_main:field_profile_studies" : { "type" : "string" },
        "profile_main:field_profile_summary" : { "type" : "text" },
        "profile_main:field_profile_education" : { "type" : "text" },
        "profile_main:field_profile_topics" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "profile_main:field_profile_skype" : { "type" : "text" },
        "profile_main:field_profile_gtalk" : { "type" : "text" },
        "profile_main:field_profile_porting_general_im" : { "type" : "text" },
        "profile_main:field_profile_location:locality" : { "type" : "string" },
        "profile_main:field_profile_geofield:geom" : { "type" : "text" },
        "profile_main:field_profile_avatar:file" : { "type" : "integer", "entity_type" : "file" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "fields" : { "name" : true, "mail" : true } }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : { "name" : true, "mail" : true },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : { "name" : true, "mail" : true },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : { "name" : true, "mail" : true },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0"
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function innovatoripa_search_engine_default_search_api_server() {
  $items = array();
  $items['innovatoripa_search_server'] = entity_import('search_api_server', '{
    "name" : "InnovatoriPA Search server",
    "machine_name" : "innovatoripa_search_server",
    "description" : "",
    "class" : "search_api_db_service",
    "options" : { "database" : "default:default", "min_chars" : "1", "indexes" : [] },
    "enabled" : "1"
  }');
  $items['solr_server'] = entity_import('search_api_server', '{
    "name" : "Solr server",
    "machine_name" : "solr_server",
    "description" : "",
    "class" : "search_api_solr_service",
    "options" : {
      "host" : "localhost",
      "port" : "8983",
      "path" : "\\/solr",
      "http_user" : "admin",
      "http_pass" : "",
      "excerpt" : 0,
      "retrieve_data" : 0,
      "highlight_data" : 0,
      "http_method" : "POST"
    },
    "enabled" : "1"
  }');
  return $items;
}
