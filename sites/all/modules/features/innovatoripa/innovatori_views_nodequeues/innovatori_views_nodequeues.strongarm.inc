<?php
/**
 * @file
 * innovatori_views_nodequeues.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function innovatori_views_nodequeues_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_forum_pattern';
  $strongarm->value = '[term:vocabulary]/[term:name]';
  $export['pathauto_forum_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_blog_pattern';
  $strongarm->value = 'posts/[node:created:custom:\'Y\']/[node:created:custom:\'m\']/[node:nid]/[node:title]';
  $export['pathauto_node_blog_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_book_pattern';
  $strongarm->value = '';
  $export['pathauto_node_book_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_comunita_pattern';
  $strongarm->value = 'groups/[node:title]';
  $export['pathauto_node_comunita_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_discussione_pattern';
  $strongarm->value = '[node:og-group-ref]/discussione/[node:title]';
  $export['pathauto_node_discussione_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_domanda_pattern';
  $strongarm->value = '[node:og-group-ref]/domanda/[node:title]';
  $export['pathauto_node_domanda_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_evento_pattern';
  $strongarm->value = 'appuntamenti/[node:title]';
  $export['pathauto_node_evento_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_gruppo_pattern';
  $strongarm->value = '[node:og-group-ref]/gruppo/[node:title]';
  $export['pathauto_node_gruppo_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_page_pattern';
  $strongarm->value = '';
  $export['pathauto_node_page_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_pattern';
  $strongarm->value = 'content/[node:title]';
  $export['pathauto_node_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_poll_pattern';
  $strongarm->value = '';
  $export['pathauto_node_poll_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_segnalazione_pattern';
  $strongarm->value = 'pointers/[node:created:custom:\'Y\']/[node:created:custom:\'m\']/[node:nid]/[node:title]';
  $export['pathauto_node_segnalazione_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_webform_pattern';
  $strongarm->value = '';
  $export['pathauto_node_webform_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_hyphen';
  $strongarm->value = '1';
  $export['pathauto_punctuation_hyphen'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_forum_gruppo_standardaccessibilit_dei_siti_web_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_forum_gruppo_standardaccessibilit_dei_siti_web_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_forum_gruppo_standardaccessibilit_e_usabilit_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_forum_gruppo_standardaccessibilit_e_usabilit_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_forum_gruppo_standardada_regione_calabria_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_forum_gruppo_standardada_regione_calabria_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_forum_gruppo_standardalumni_ripam_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_forum_gruppo_standardalumni_ripam_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_forum_gruppo_standardamministrazione_2_0_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_forum_gruppo_standardamministrazione_2_0_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_forum_gruppo_standardappalti_pubblici_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_forum_gruppo_standardappalti_pubblici_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_forum_gruppo_standardarea_2_di_test_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_forum_gruppo_standardarea_2_di_test_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_forum_gruppo_standardarea_di_coordinamento_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_forum_gruppo_standardarea_di_coordinamento_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_forum_gruppo_standardarea_di_lavoro_di_test_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_forum_gruppo_standardarea_di_lavoro_di_test_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_forum_gruppo_standardarea_di_lavoro_regione_calabria_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_forum_gruppo_standardarea_di_lavoro_regione_calabria_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_forum_gruppo_standardarea_di_lavoro_regione_campania_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_forum_gruppo_standardarea_di_lavoro_regione_campania_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_forum_gruppo_standardarea_di_lavoro_regione_puglia_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_forum_gruppo_standardarea_di_lavoro_regione_puglia_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_forum_gruppo_standardarea_di_lavoro_regione_siciliana_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_forum_gruppo_standardarea_di_lavoro_regione_siciliana_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_forum_gruppo_standardarea_di_test_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_forum_gruppo_standardarea_di_test_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_forum_gruppo_standardassistenza_utenti_innovatoripa_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_forum_gruppo_standardassistenza_utenti_innovatoripa_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_forum_gruppo_standardsperimentazione_aou_federico_ii_comparto_e_irccs_pascale_dirigenza_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_forum_gruppo_standardsperimentazione_aou_federico_ii_comparto_e_irccs_pascale_dirigenza_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_pattern';
  $strongarm->value = '[term:vocabulary]/[term:name]';
  $export['pathauto_taxonomy_term_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_user_pattern';
  $strongarm->value = 'users/[user:profile-main:field-profile-nome][user:profile-main:field-profile-cognome]';
  $export['pathauto_user_pattern'] = $strongarm;

  return $export;
}
