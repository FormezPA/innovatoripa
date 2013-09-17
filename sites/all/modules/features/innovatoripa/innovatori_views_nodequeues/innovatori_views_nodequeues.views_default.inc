<?php
/**
 * @file
 * innovatori_views_nodequeues.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function innovatori_views_nodequeues_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'comments_in_teaser';
  $view->description = 'Visualizza gli ultimi commenti di un dato contenuto';
  $view->tag = 'default';
  $view->base_table = 'comment';
  $view->human_name = 'Commenti in teaser';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Commenti in teaser';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'altro';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Applica';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Ripristina';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordina per';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Disc';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relazione: Commento: Contenuto */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'comment';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['required'] = TRUE;
  /* Relazione: Commento: Autore */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'comment';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relazione: Utente: Profilo */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'uid';
  /* Campo: (hidden) Comment nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'comment';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['ui_name'] = '(hidden) Comment nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  /* Campo: (hidden) Nome */
  $handler->display->display_options['fields']['field_profile_nome']['id'] = 'field_profile_nome';
  $handler->display->display_options['fields']['field_profile_nome']['table'] = 'field_data_field_profile_nome';
  $handler->display->display_options['fields']['field_profile_nome']['field'] = 'field_profile_nome';
  $handler->display->display_options['fields']['field_profile_nome']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_profile_nome']['ui_name'] = '(hidden) Nome';
  $handler->display->display_options['fields']['field_profile_nome']['label'] = '';
  $handler->display->display_options['fields']['field_profile_nome']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_profile_nome']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_nome']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile_nome']['type'] = 'text_plain';
  /* Campo: (hidden) Cognome */
  $handler->display->display_options['fields']['field_profile_cognome']['id'] = 'field_profile_cognome';
  $handler->display->display_options['fields']['field_profile_cognome']['table'] = 'field_data_field_profile_cognome';
  $handler->display->display_options['fields']['field_profile_cognome']['field'] = 'field_profile_cognome';
  $handler->display->display_options['fields']['field_profile_cognome']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_profile_cognome']['ui_name'] = '(hidden) Cognome';
  $handler->display->display_options['fields']['field_profile_cognome']['label'] = '';
  $handler->display->display_options['fields']['field_profile_cognome']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_profile_cognome']['alter']['text'] = '[field_profile_nome] [field_profile_cognome]';
  $handler->display->display_options['fields']['field_profile_cognome']['alter']['path'] = '/user/[uid]';
  $handler->display->display_options['fields']['field_profile_cognome']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_cognome']['element_default_classes'] = FALSE;
  /* Campo: Profilo: Immagine profilo */
  $handler->display->display_options['fields']['field_profile_avatar']['id'] = 'field_profile_avatar';
  $handler->display->display_options['fields']['field_profile_avatar']['table'] = 'field_data_field_profile_avatar';
  $handler->display->display_options['fields']['field_profile_avatar']['field'] = 'field_profile_avatar';
  $handler->display->display_options['fields']['field_profile_avatar']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_profile_avatar']['label'] = '';
  $handler->display->display_options['fields']['field_profile_avatar']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_avatar']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_profile_avatar']['element_wrapper_class'] = 'teaser__comments-item-avatar';
  $handler->display->display_options['fields']['field_profile_avatar']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile_avatar']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_profile_avatar']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_profile_avatar']['settings'] = array(
    'image_style' => 'user_thumb',
    'image_link' => '',
  );
  /* Campo: Utente: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['text'] = '[field_profile_nome] [field_profile_cognome]';
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['element_default_classes'] = FALSE;
  /* Campo: Commento: Data modifica */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'comment';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = '';
  $handler->display->display_options['fields']['changed']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['changed']['alter']['text'] = '<em> il <span>[changed]</span> ha scritto </em>';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  /* Campo: Commento: Titolo */
  $handler->display->display_options['fields']['subject']['id'] = 'subject';
  $handler->display->display_options['fields']['subject']['table'] = 'comment';
  $handler->display->display_options['fields']['subject']['field'] = 'subject';
  $handler->display->display_options['fields']['subject']['label'] = '';
  $handler->display->display_options['fields']['subject']['exclude'] = TRUE;
  $handler->display->display_options['fields']['subject']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['subject']['alter']['text'] = 'ha scritto <em>[subject]</em>';
  $handler->display->display_options['fields']['subject']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['subject']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['subject']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['subject']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['subject']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['subject']['link_to_comment'] = FALSE;
  /* Campo: Commento: Comment */
  $handler->display->display_options['fields']['comment_body']['id'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['table'] = 'field_data_comment_body';
  $handler->display->display_options['fields']['comment_body']['field'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['label'] = '';
  $handler->display->display_options['fields']['comment_body']['alter']['max_length'] = '120';
  $handler->display->display_options['fields']['comment_body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['comment_body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['comment_body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['comment_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_body']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['comment_body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['comment_body']['type'] = 'text_plain';
  $handler->display->display_options['fields']['comment_body']['settings'] = array(
    'trim_length' => '100',
  );
  /* Campo: Commento: Link guarda */
  $handler->display->display_options['fields']['view_comment']['id'] = 'view_comment';
  $handler->display->display_options['fields']['view_comment']['table'] = 'comment';
  $handler->display->display_options['fields']['view_comment']['field'] = 'view_comment';
  $handler->display->display_options['fields']['view_comment']['label'] = '';
  $handler->display->display_options['fields']['view_comment']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_comment']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['view_comment']['text'] = 'leggi';
  /* Criterio di ordinamento: Commento: Data di inserimento */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'comment';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Criterio del filtro: Commento: Approvato */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'comment';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criterio del filtro: Contenuto: Pubblicato */
  $handler->display->display_options['filters']['status_node']['id'] = 'status_node';
  $handler->display->display_options['filters']['status_node']['table'] = 'node';
  $handler->display->display_options['filters']['status_node']['field'] = 'status';
  $handler->display->display_options['filters']['status_node']['relationship'] = 'nid';
  $handler->display->display_options['filters']['status_node']['value'] = 1;
  $handler->display->display_options['filters']['status_node']['group'] = 1;
  $handler->display->display_options['filters']['status_node']['expose']['operator'] = FALSE;

  /* Display: Anteprima commenti nei teaser */
  $handler = $view->new_display('entity_view', 'Anteprima commenti nei teaser', 'entity_view_1');
  $handler->display->display_options['display_description'] = 'Mostra un anteprima degli ultimi 3 commenti nei teaser dei CT';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: (hidden) Comment nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'comment';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['ui_name'] = '(hidden) Comment nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  /* Campo: (hidden) Nome */
  $handler->display->display_options['fields']['field_profile_nome']['id'] = 'field_profile_nome';
  $handler->display->display_options['fields']['field_profile_nome']['table'] = 'field_data_field_profile_nome';
  $handler->display->display_options['fields']['field_profile_nome']['field'] = 'field_profile_nome';
  $handler->display->display_options['fields']['field_profile_nome']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_profile_nome']['ui_name'] = '(hidden) Nome';
  $handler->display->display_options['fields']['field_profile_nome']['label'] = '';
  $handler->display->display_options['fields']['field_profile_nome']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_profile_nome']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_nome']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile_nome']['type'] = 'text_plain';
  /* Campo: (hidden) Cognome */
  $handler->display->display_options['fields']['field_profile_cognome']['id'] = 'field_profile_cognome';
  $handler->display->display_options['fields']['field_profile_cognome']['table'] = 'field_data_field_profile_cognome';
  $handler->display->display_options['fields']['field_profile_cognome']['field'] = 'field_profile_cognome';
  $handler->display->display_options['fields']['field_profile_cognome']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_profile_cognome']['ui_name'] = '(hidden) Cognome';
  $handler->display->display_options['fields']['field_profile_cognome']['label'] = '';
  $handler->display->display_options['fields']['field_profile_cognome']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_profile_cognome']['alter']['text'] = '[field_profile_nome] [field_profile_cognome]';
  $handler->display->display_options['fields']['field_profile_cognome']['alter']['path'] = '/user/[uid]';
  $handler->display->display_options['fields']['field_profile_cognome']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_cognome']['element_default_classes'] = FALSE;
  /* Campo: Profilo: Immagine profilo */
  $handler->display->display_options['fields']['field_profile_avatar']['id'] = 'field_profile_avatar';
  $handler->display->display_options['fields']['field_profile_avatar']['table'] = 'field_data_field_profile_avatar';
  $handler->display->display_options['fields']['field_profile_avatar']['field'] = 'field_profile_avatar';
  $handler->display->display_options['fields']['field_profile_avatar']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_profile_avatar']['label'] = '';
  $handler->display->display_options['fields']['field_profile_avatar']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_avatar']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_profile_avatar']['element_wrapper_class'] = 'teaser__comments-item-avatar';
  $handler->display->display_options['fields']['field_profile_avatar']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile_avatar']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_profile_avatar']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_profile_avatar']['settings'] = array(
    'image_style' => 'user_thumb',
    'image_link' => '',
  );
  /* Campo: div class=teaser__comments-item-text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'div class=teaser__comments-item-text';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="teaser__comments-item-text">';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Campo: Utente: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['text'] = '[field_profile_nome] [field_profile_cognome]';
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['element_default_classes'] = FALSE;
  /* Campo: Commento: Data modifica */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'comment';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = '';
  $handler->display->display_options['fields']['changed']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['changed']['alter']['text'] = '<em> il <span>[changed]</span> ha scritto </em>';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  /* Campo: Commento: Titolo */
  $handler->display->display_options['fields']['subject']['id'] = 'subject';
  $handler->display->display_options['fields']['subject']['table'] = 'comment';
  $handler->display->display_options['fields']['subject']['field'] = 'subject';
  $handler->display->display_options['fields']['subject']['label'] = '';
  $handler->display->display_options['fields']['subject']['exclude'] = TRUE;
  $handler->display->display_options['fields']['subject']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['subject']['alter']['text'] = 'ha scritto <em>[subject]</em>';
  $handler->display->display_options['fields']['subject']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['subject']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['subject']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['subject']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['subject']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['subject']['link_to_comment'] = FALSE;
  /* Campo: Commento: Comment */
  $handler->display->display_options['fields']['comment_body']['id'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['table'] = 'field_data_comment_body';
  $handler->display->display_options['fields']['comment_body']['field'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['label'] = '';
  $handler->display->display_options['fields']['comment_body']['alter']['max_length'] = '120';
  $handler->display->display_options['fields']['comment_body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['comment_body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['comment_body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['comment_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_body']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['comment_body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['comment_body']['type'] = 'text_plain';
  $handler->display->display_options['fields']['comment_body']['settings'] = array(
    'trim_length' => '100',
  );
  /* Campo: Commento: Link guarda */
  $handler->display->display_options['fields']['view_comment']['id'] = 'view_comment';
  $handler->display->display_options['fields']['view_comment']['table'] = 'comment';
  $handler->display->display_options['fields']['view_comment']['field'] = 'view_comment';
  $handler->display->display_options['fields']['view_comment']['label'] = '';
  $handler->display->display_options['fields']['view_comment']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_comment']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['view_comment']['text'] = 'leggi';
  /* Campo: /div */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = '/div';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '</div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contestuale: Contenuto: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Tutti';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'evento',
    1 => 'blog',
    2 => 'discussione',
  );

  /* Display: Domande: commento + votato */
  $handler = $view->new_display('entity_view', 'Domande: commento + votato', 'entity_view_2');
  $handler->display->display_options['display_description'] = 'Nelle domande e risposte mostra la risposta (commento) più votato';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relazione: Commento: Contenuto */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'comment';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['required'] = TRUE;
  /* Relazione: Commento: Autore */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'comment';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relazione: Utente: Profilo */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'uid';
  /* Relazione: Commento: Vote results */
  $handler->display->display_options['relationships']['votingapi_cache']['id'] = 'votingapi_cache';
  $handler->display->display_options['relationships']['votingapi_cache']['table'] = 'comment';
  $handler->display->display_options['relationships']['votingapi_cache']['field'] = 'votingapi_cache';
  $handler->display->display_options['relationships']['votingapi_cache']['votingapi'] = array(
    'value_type' => 'points',
    'tag' => 'vote',
    'function' => 'sum',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: (hidden) Node nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['ui_name'] = '(hidden) Node nid';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid_1']['element_default_classes'] = FALSE;
  /* Campo: (hidden) Comment nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'comment';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['ui_name'] = '(hidden) Comment nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  /* Campo: (hidden) Nome */
  $handler->display->display_options['fields']['field_profile_nome']['id'] = 'field_profile_nome';
  $handler->display->display_options['fields']['field_profile_nome']['table'] = 'field_data_field_profile_nome';
  $handler->display->display_options['fields']['field_profile_nome']['field'] = 'field_profile_nome';
  $handler->display->display_options['fields']['field_profile_nome']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_profile_nome']['ui_name'] = '(hidden) Nome';
  $handler->display->display_options['fields']['field_profile_nome']['label'] = '';
  $handler->display->display_options['fields']['field_profile_nome']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_profile_nome']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_nome']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile_nome']['type'] = 'text_plain';
  /* Campo: (hidden) Cognome */
  $handler->display->display_options['fields']['field_profile_cognome']['id'] = 'field_profile_cognome';
  $handler->display->display_options['fields']['field_profile_cognome']['table'] = 'field_data_field_profile_cognome';
  $handler->display->display_options['fields']['field_profile_cognome']['field'] = 'field_profile_cognome';
  $handler->display->display_options['fields']['field_profile_cognome']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_profile_cognome']['ui_name'] = '(hidden) Cognome';
  $handler->display->display_options['fields']['field_profile_cognome']['label'] = '';
  $handler->display->display_options['fields']['field_profile_cognome']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_profile_cognome']['alter']['text'] = '[field_profile_nome] [field_profile_cognome]';
  $handler->display->display_options['fields']['field_profile_cognome']['alter']['path'] = '/user/[uid]';
  $handler->display->display_options['fields']['field_profile_cognome']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_cognome']['element_default_classes'] = FALSE;
  /* Campo: Profilo: Immagine profilo */
  $handler->display->display_options['fields']['field_profile_avatar']['id'] = 'field_profile_avatar';
  $handler->display->display_options['fields']['field_profile_avatar']['table'] = 'field_data_field_profile_avatar';
  $handler->display->display_options['fields']['field_profile_avatar']['field'] = 'field_profile_avatar';
  $handler->display->display_options['fields']['field_profile_avatar']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_profile_avatar']['label'] = '';
  $handler->display->display_options['fields']['field_profile_avatar']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_avatar']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_profile_avatar']['element_wrapper_class'] = 'teaser__comments-item-avatar';
  $handler->display->display_options['fields']['field_profile_avatar']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile_avatar']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_profile_avatar']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_profile_avatar']['settings'] = array(
    'image_style' => 'user_thumb',
    'image_link' => '',
  );
  /* Campo: div class=teaser__comments-item-text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'div class=teaser__comments-item-text';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="teaser__comments-item-text">';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Campo: Vote results: Valore */
  $handler->display->display_options['fields']['value']['id'] = 'value';
  $handler->display->display_options['fields']['value']['table'] = 'votingapi_cache';
  $handler->display->display_options['fields']['value']['field'] = 'value';
  $handler->display->display_options['fields']['value']['relationship'] = 'votingapi_cache';
  $handler->display->display_options['fields']['value']['label'] = '';
  $handler->display->display_options['fields']['value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['value']['element_wrapper_class'] = 'average-vote';
  $handler->display->display_options['fields']['value']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['value']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['value']['precision'] = '0';
  $handler->display->display_options['fields']['value']['separator'] = '';
  $handler->display->display_options['fields']['value']['appearance'] = 'rate_views_widget_compact_disabled';
  /* Campo: Commento: Titolo */
  $handler->display->display_options['fields']['subject']['id'] = 'subject';
  $handler->display->display_options['fields']['subject']['table'] = 'comment';
  $handler->display->display_options['fields']['subject']['field'] = 'subject';
  $handler->display->display_options['fields']['subject']['label'] = '';
  $handler->display->display_options['fields']['subject']['exclude'] = TRUE;
  $handler->display->display_options['fields']['subject']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['subject']['alter']['text'] = 'ha scritto <em>[subject]</em>';
  $handler->display->display_options['fields']['subject']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['subject']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['subject']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['subject']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['subject']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['subject']['link_to_comment'] = FALSE;
  /* Campo: Commento: Comment */
  $handler->display->display_options['fields']['comment_body']['id'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['table'] = 'field_data_comment_body';
  $handler->display->display_options['fields']['comment_body']['field'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['label'] = '';
  $handler->display->display_options['fields']['comment_body']['alter']['max_length'] = '120';
  $handler->display->display_options['fields']['comment_body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['comment_body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['comment_body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['comment_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_body']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['comment_body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['comment_body']['type'] = 'text_plain';
  $handler->display->display_options['fields']['comment_body']['settings'] = array(
    'trim_length' => '100',
  );
  /* Campo: leggi (comment id) */
  $handler->display->display_options['fields']['cid']['id'] = 'cid';
  $handler->display->display_options['fields']['cid']['table'] = 'comment';
  $handler->display->display_options['fields']['cid']['field'] = 'cid';
  $handler->display->display_options['fields']['cid']['ui_name'] = 'leggi (comment id)';
  $handler->display->display_options['fields']['cid']['label'] = '';
  $handler->display->display_options['fields']['cid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['cid']['alter']['text'] = 'leggi';
  $handler->display->display_options['fields']['cid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['cid']['alter']['path'] = 'node/[nid_1]#comment-[cid]';
  $handler->display->display_options['fields']['cid']['alter']['alt'] = 'Leggi la risposta';
  $handler->display->display_options['fields']['cid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['cid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['cid']['link_to_comment'] = FALSE;
  /* Campo: (risposta inserita da  */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = '(risposta inserita da ';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<span class="info">(risposta inserita da ';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_2']['element_default_classes'] = FALSE;
  /* Campo: Utente: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['text'] = '[field_profile_nome] [field_profile_cognome]';
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['element_default_classes'] = FALSE;
  /* Campo: Commento: Data modifica */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'comment';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = '';
  $handler->display->display_options['fields']['changed']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['changed']['alter']['text'] = '<em> il <span>[changed]</span></em>)</span>';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  /* Campo: /div */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = '/div';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '</div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Criterio di ordinamento: Vote results: Valore */
  $handler->display->display_options['sorts']['value']['id'] = 'value';
  $handler->display->display_options['sorts']['value']['table'] = 'votingapi_cache';
  $handler->display->display_options['sorts']['value']['field'] = 'value';
  $handler->display->display_options['sorts']['value']['relationship'] = 'votingapi_cache';
  $handler->display->display_options['sorts']['value']['order'] = 'DESC';
  $handler->display->display_options['sorts']['value']['coalesce'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contestuale: Contenuto: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Tutti';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'domanda',
  );

  /* Display: Ultimi commenti inseriti (Global) */
  $handler = $view->new_display('block', 'Ultimi commenti inseriti (Global)', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Ultimi commenti ';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'tutte le discussioni';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'block-list-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'block-list';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Piè di pagina: Globale: Riassunto del risultato */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  $handler->display->display_options['footer']['result']['label'] = 'Numero discussioni e link alla pagina discussioni';
  $handler->display->display_options['footer']['result']['content'] = '<div class="total-count">Sono presenti <a href="/discussioni"><span>@total</span> discussioni</a></div>';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: (hidden) Comment nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'comment';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['ui_name'] = '(hidden) Comment nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  /* Campo: (hidden) Realname */
  $handler->display->display_options['fields']['realname']['id'] = 'realname';
  $handler->display->display_options['fields']['realname']['table'] = 'realname';
  $handler->display->display_options['fields']['realname']['field'] = 'realname';
  $handler->display->display_options['fields']['realname']['relationship'] = 'uid';
  $handler->display->display_options['fields']['realname']['ui_name'] = '(hidden) Realname';
  $handler->display->display_options['fields']['realname']['label'] = '';
  $handler->display->display_options['fields']['realname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['realname']['element_label_colon'] = FALSE;
  /* Campo: Utente: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['text'] = '[realname]';
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['element_default_classes'] = FALSE;
  /* Campo: Commento: Comment */
  $handler->display->display_options['fields']['comment_body']['id'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['table'] = 'field_data_comment_body';
  $handler->display->display_options['fields']['comment_body']['field'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['label'] = '';
  $handler->display->display_options['fields']['comment_body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['comment_body']['alter']['max_length'] = '120';
  $handler->display->display_options['fields']['comment_body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['comment_body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['comment_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_body']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['comment_body']['element_wrapper_class'] = 'block-list-item-text';
  $handler->display->display_options['fields']['comment_body']['element_default_classes'] = FALSE;
  /* Campo: Commento: Link guarda */
  $handler->display->display_options['fields']['view_comment']['id'] = 'view_comment';
  $handler->display->display_options['fields']['view_comment']['table'] = 'comment';
  $handler->display->display_options['fields']['view_comment']['field'] = 'view_comment';
  $handler->display->display_options['fields']['view_comment']['label'] = '';
  $handler->display->display_options['fields']['view_comment']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_comment']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['view_comment']['text'] = 'vedi discussione';
  /* Campo: Commento: Data modifica */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'comment';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = '';
  $handler->display->display_options['fields']['changed']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['changed']['alter']['text'] = '(inserito da [uid] il <span>[changed]</span>)';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['changed']['element_wrapper_class'] = 'block-list-item-pubinfo';
  $handler->display->display_options['fields']['changed']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  $handler->display->display_options['fields']['changed']['format_date_sql'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterio del filtro: Commento: Approvato */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'comment';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criterio del filtro: Contenuto: Pubblicato */
  $handler->display->display_options['filters']['status_node']['id'] = 'status_node';
  $handler->display->display_options['filters']['status_node']['table'] = 'node';
  $handler->display->display_options['filters']['status_node']['field'] = 'status';
  $handler->display->display_options['filters']['status_node']['relationship'] = 'nid';
  $handler->display->display_options['filters']['status_node']['value'] = 1;
  $handler->display->display_options['filters']['status_node']['group'] = 1;
  $handler->display->display_options['filters']['status_node']['expose']['operator'] = FALSE;
  /* Criterio del filtro: Contenuto: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'nid';
  $handler->display->display_options['filters']['type']['value'] = array(
    'blog' => 'blog',
    'discussione' => 'discussione',
  );

  /* Display: Page - ultimi commenti inseriti */
  $handler = $view->new_display('page', 'Page - ultimi commenti inseriti', 'page_discussioni');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Discussioni';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '5';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Voci per pagina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tutto -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Scostamento';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« prima';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ precedente';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'seguente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'ultima »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'discussions-item clearfix';
  $handler->display->display_options['style_options']['class'] = 'discussions';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: (hidden) Titolo contenuto */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'nid';
  $handler->display->display_options['fields']['title']['ui_name'] = '(hidden) Titolo contenuto';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Campo: (hidden) Comment nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'comment';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['ui_name'] = '(hidden) Comment nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  /* Campo: (hidden) User ID */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'uid';
  $handler->display->display_options['fields']['uid']['ui_name'] = '(hidden) User ID';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Campo: (hidden) Nome */
  $handler->display->display_options['fields']['field_profile_nome']['id'] = 'field_profile_nome';
  $handler->display->display_options['fields']['field_profile_nome']['table'] = 'field_data_field_profile_nome';
  $handler->display->display_options['fields']['field_profile_nome']['field'] = 'field_profile_nome';
  $handler->display->display_options['fields']['field_profile_nome']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_profile_nome']['ui_name'] = '(hidden) Nome';
  $handler->display->display_options['fields']['field_profile_nome']['label'] = '';
  $handler->display->display_options['fields']['field_profile_nome']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_profile_nome']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_nome']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile_nome']['type'] = 'text_plain';
  /* Campo: (hidden) Cognome */
  $handler->display->display_options['fields']['field_profile_cognome']['id'] = 'field_profile_cognome';
  $handler->display->display_options['fields']['field_profile_cognome']['table'] = 'field_data_field_profile_cognome';
  $handler->display->display_options['fields']['field_profile_cognome']['field'] = 'field_profile_cognome';
  $handler->display->display_options['fields']['field_profile_cognome']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_profile_cognome']['ui_name'] = '(hidden) Cognome';
  $handler->display->display_options['fields']['field_profile_cognome']['label'] = '';
  $handler->display->display_options['fields']['field_profile_cognome']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_profile_cognome']['alter']['text'] = '[field_profile_nome] [field_profile_cognome]';
  $handler->display->display_options['fields']['field_profile_cognome']['alter']['path'] = '/user/[uid]';
  $handler->display->display_options['fields']['field_profile_cognome']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_cognome']['element_default_classes'] = FALSE;
  /* Campo: Profilo: Immagine profilo */
  $handler->display->display_options['fields']['field_profile_avatar']['id'] = 'field_profile_avatar';
  $handler->display->display_options['fields']['field_profile_avatar']['table'] = 'field_data_field_profile_avatar';
  $handler->display->display_options['fields']['field_profile_avatar']['field'] = 'field_profile_avatar';
  $handler->display->display_options['fields']['field_profile_avatar']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_profile_avatar']['label'] = '';
  $handler->display->display_options['fields']['field_profile_avatar']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_profile_avatar']['alter']['path'] = 'user/[uid]';
  $handler->display->display_options['fields']['field_profile_avatar']['alter']['alt'] = '[field_profile_nome] [field_profile_cognome]';
  $handler->display->display_options['fields']['field_profile_avatar']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_avatar']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_profile_avatar']['element_wrapper_class'] = 'discussions-item-image';
  $handler->display->display_options['fields']['field_profile_avatar']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile_avatar']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_profile_avatar']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_profile_avatar']['settings'] = array(
    'image_style' => 'user_thumb',
    'image_link' => '',
  );
  /* Campo: div discussions-item-text-wr */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'div discussions-item-text-wr';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="discussions-item-text-wr">';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Campo: Commento: Comment */
  $handler->display->display_options['fields']['comment_body']['id'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['table'] = 'field_data_comment_body';
  $handler->display->display_options['fields']['comment_body']['field'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['label'] = '';
  $handler->display->display_options['fields']['comment_body']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['comment_body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['comment_body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['comment_body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['comment_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_body']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['comment_body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['comment_body']['type'] = 'text_plain';
  $handler->display->display_options['fields']['comment_body']['settings'] = array(
    'trim_length' => '100',
  );
  /* Campo: Commento: Link guarda */
  $handler->display->display_options['fields']['view_comment']['id'] = 'view_comment';
  $handler->display->display_options['fields']['view_comment']['table'] = 'comment';
  $handler->display->display_options['fields']['view_comment']['field'] = 'view_comment';
  $handler->display->display_options['fields']['view_comment']['label'] = '';
  $handler->display->display_options['fields']['view_comment']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_comment']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_comment']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['view_comment']['text'] = 'vai alla discussione';
  /* Campo: Nome utente + data modifica */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'comment';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['ui_name'] = 'Nome utente + data modifica';
  $handler->display->display_options['fields']['changed']['label'] = '';
  $handler->display->display_options['fields']['changed']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['changed']['alter']['text'] = 'Inserito da <a href="/user/[uid]">[field_profile_nome] [field_profile_cognome]</a> il <span>[changed]</span> in [title]';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['changed']['element_wrapper_class'] = 'discussions-item-pub-info';
  $handler->display->display_options['fields']['changed']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  $handler->display->display_options['fields']['changed']['format_date_sql'] = 0;
  /* Campo: /div */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = '/div';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '</div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterio del filtro: Commento: Approvato */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'comment';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criterio del filtro: Contenuto: Pubblicato */
  $handler->display->display_options['filters']['status_node']['id'] = 'status_node';
  $handler->display->display_options['filters']['status_node']['table'] = 'node';
  $handler->display->display_options['filters']['status_node']['field'] = 'status';
  $handler->display->display_options['filters']['status_node']['relationship'] = 'nid';
  $handler->display->display_options['filters']['status_node']['value'] = 1;
  $handler->display->display_options['filters']['status_node']['group'] = 1;
  $handler->display->display_options['filters']['status_node']['expose']['operator'] = FALSE;
  /* Criterio del filtro: Contenuto: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'nid';
  $handler->display->display_options['filters']['type']['value'] = array(
    'blog' => 'blog',
    'discussione' => 'discussione',
  );
  $handler->display->display_options['path'] = 'discussioni';
  $translatables['comments_in_teaser'] = array(
    t('Master'),
    t('Commenti in teaser'),
    t('altro'),
    t('Applica'),
    t('Ripristina'),
    t('Ordina per'),
    t('Asc'),
    t('Disc'),
    t('Contenuto'),
    t('autore'),
    t('Profilo'),
    t('.'),
    t('[field_profile_nome] [field_profile_cognome]'),
    t('<em> il <span>[changed]</span> ha scritto </em>'),
    t('ha scritto <em>[subject]</em>'),
    t('leggi'),
    t('Anteprima commenti nei teaser'),
    t('Mostra un anteprima degli ultimi 3 commenti nei teaser dei CT'),
    t('<div class="teaser__comments-item-text">'),
    t('</div>'),
    t('Tutti'),
    t('Domande: commento + votato'),
    t('Nelle domande e risposte mostra la risposta (commento) più votato'),
    t('Vote results'),
    t('Leggi la risposta'),
    t('<span class="info">(risposta inserita da '),
    t('<em> il <span>[changed]</span></em>)</span>'),
    t('Ultimi commenti inseriti (Global)'),
    t('Ultimi commenti '),
    t('tutte le discussioni'),
    t('Numero discussioni e link alla pagina discussioni'),
    t('<div class="total-count">Sono presenti <a href="/discussioni"><span>@total</span> discussioni</a></div>'),
    t('[realname]'),
    t('vedi discussione'),
    t('(inserito da [uid] il <span>[changed]</span>)'),
    t('Page - ultimi commenti inseriti'),
    t('Discussioni'),
    t('Voci per pagina'),
    t('- Tutto -'),
    t('Scostamento'),
    t('« prima'),
    t('‹ precedente'),
    t('seguente ›'),
    t('ultima »'),
    t('<div class="discussions-item-text-wr">'),
    t('vai alla discussione'),
    t('Inserito da <a href="/user/[uid]">[field_profile_nome] [field_profile_cognome]</a> il <span>[changed]</span> in [title]'),
  );
  $export['comments_in_teaser'] = $view;

  $view = new view();
  $view->name = 'community_page_blocks_';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Community (Page + Blocks)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'altro';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Applica';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Ripristina';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordina per';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Disc';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Voci per pagina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tutto -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Scostamento';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« prima';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ precedente';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'seguente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'ultima »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relazione: OG membership: OG membership from Nodo */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  /* Relazione: OG membership: Group Nodo from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  /* Campo: Contenuto: Titolo */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Criterio di ordinamento: Contenuto: Data di inserimento */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filtro contestuale: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['exception']['title'] = 'Tutti';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'og_context';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  /* Criterio del filtro: Contenuto: Pubblicato */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Community: Segnalazioni page */
  $handler = $view->new_display('page', 'Community: Segnalazioni page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Segnalazioni';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contestuale: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['exception']['title'] = 'Tutti';
  $handler->display->display_options['arguments']['gid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['gid']['title'] = 'Segnalazioni della community';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'og_context';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterio del filtro: Contenuto: Pubblicato */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criterio del filtro: Contenuto: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'segnalazione' => 'segnalazione',
  );
  $handler->display->display_options['path'] = 'segnalazioni/%';

  /* Display: Block: Header gruppo */
  $handler = $view->new_display('block', 'Block: Header gruppo', 'community_header');
  $handler->display->display_options['display_description'] = 'Mostra le informazioni minimali della comunità quando siamo all\'interno del contesto del gruppo';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenuto: Titolo */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Campo: Contenuto: Logo */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'community_thumb',
    'image_link' => 'content',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contestuale: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['exception']['title'] = 'Tutti';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'og_user_groups';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterio del filtro: Contenuto: Pubblicato */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criterio del filtro: Contenuto: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'comunita' => 'comunita',
  );

  /* Display: HP Community: stream contents (content pane) */
  $handler = $view->new_display('panel_pane', 'HP Community: stream contents (content pane)', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'HP Community: stream contents';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relazione: OG membership: OG membership from Nodo */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterio del filtro: Contenuto: Pubblicato */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criterio del filtro: Contenuto: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'blog' => 'blog',
    'discussione' => 'discussione',
    'domanda' => 'domanda',
    'evento' => 'evento',
    'page' => 'page',
    'segnalazione' => 'segnalazione',
    'webform' => 'webform',
    'book' => 'book',
  );
  $handler->display->display_options['pane_category']['name'] = 'Innovatori Views pane';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: HP Community: Segnalazioni block (content pane) */
  $handler = $view->new_display('panel_pane', 'HP Community: Segnalazioni block (content pane)', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Segnalazioni';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Vedi tutte le segnalazioni';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '5';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Voci per pagina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tutto -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Scostamento';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« prima';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ precedente';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'seguente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'ultima »';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Comportamento se non ci sono risultati: Globale: Area di testo */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Non sono presenti segnalazioni nel gruppo';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relazione: OG membership: OG membership from Nodo */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterio del filtro: Contenuto: Pubblicato */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criterio del filtro: Contenuto: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'segnalazione' => 'segnalazione',
  );
  $handler->display->display_options['pane_category']['name'] = 'Innovatori Views pane';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $translatables['community_page_blocks_'] = array(
    t('Master'),
    t('altro'),
    t('Applica'),
    t('Ripristina'),
    t('Ordina per'),
    t('Asc'),
    t('Disc'),
    t('Voci per pagina'),
    t('- Tutto -'),
    t('Scostamento'),
    t('« prima'),
    t('‹ precedente'),
    t('seguente ›'),
    t('ultima »'),
    t('OG membership from node'),
    t('Group node from OG membership'),
    t('Tutti'),
    t('Community: Segnalazioni page'),
    t('Segnalazioni'),
    t('Segnalazioni della community'),
    t('Block: Header gruppo'),
    t('Mostra le informazioni minimali della comunità quando siamo all\'interno del contesto del gruppo'),
    t('HP Community: stream contents (content pane)'),
    t('HP Community: stream contents'),
    t('Innovatori Views pane'),
    t('HP Community: Segnalazioni block (content pane)'),
    t('Vedi tutte le segnalazioni'),
    t('Non sono presenti segnalazioni nel gruppo'),
  );
  $export['community_page_blocks_'] = $view;

  $view = new view();
  $view->name = 'home_page_blocks';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Home (Page + Blocks)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'altro';
  $handler->display->display_options['link_display'] = 'homepage';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Applica';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Ripristina';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordina per';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Disc';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '5';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Voci per pagina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '5, 10, 20, 40';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tutto -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Scostamento';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« prima';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ precedente';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'seguente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'ultima »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['comments'] = TRUE;
  /* Campo: Contenuto: Titolo */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Campo: Contenuto: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Corpo';
  /* Campo: Contenuto: Data di inserimento */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  /* Campo: Contenuto: Immagine */
  $handler->display->display_options['fields']['field_blog_img']['id'] = 'field_blog_img';
  $handler->display->display_options['fields']['field_blog_img']['table'] = 'field_data_field_blog_img';
  $handler->display->display_options['fields']['field_blog_img']['field'] = 'field_blog_img';
  /* Criterio di ordinamento: Contenuto: Data di inserimento */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Criterio del filtro: Contenuto: Pubblicato */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Queue - Post in evidenza */
  $handler = $view->new_display('block', 'Queue - Post in evidenza', 'evidenza');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['class'] = 'featured';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['style_options']['slideshow_type'] = 'flexslider_views_slideshow';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Predefinito',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'type' => 0,
    'realname' => 0,
    'title' => 0,
    'totalcount' => 0,
    'created' => 0,
    'field_blog_img' => 0,
    'nothing' => 0,
    'nothing_1' => 0,
    'body' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'type' => 0,
    'realname' => 0,
    'title' => 0,
    'totalcount' => 0,
    'created' => 0,
    'field_blog_img' => 0,
    'nothing' => 0,
    'nothing_1' => 0,
    'body' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relazione: Queue: post in evidenza */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['ui_name'] = 'Queue: post in evidenza';
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'post_in_evideza' => 'post_in_evideza',
  );
  /* Relazione: Contenuto: Autore */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: (hidden) Content Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['ui_name'] = '(hidden) Content Type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['type']['machine_name'] = TRUE;
  /* Campo: (hidden) Realname */
  $handler->display->display_options['fields']['realname']['id'] = 'realname';
  $handler->display->display_options['fields']['realname']['table'] = 'realname';
  $handler->display->display_options['fields']['realname']['field'] = 'realname';
  $handler->display->display_options['fields']['realname']['relationship'] = 'uid';
  $handler->display->display_options['fields']['realname']['ui_name'] = '(hidden) Realname';
  $handler->display->display_options['fields']['realname']['label'] = '';
  $handler->display->display_options['fields']['realname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['realname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['realname']['element_default_classes'] = FALSE;
  /* Campo: (hidden) Titolo */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = '(hidden) Titolo';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Campo: (hidden) Visualizzazioni totali */
  $handler->display->display_options['fields']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['fields']['totalcount']['field'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['ui_name'] = '(hidden) Visualizzazioni totali';
  $handler->display->display_options['fields']['totalcount']['label'] = '';
  $handler->display->display_options['fields']['totalcount']['exclude'] = TRUE;
  $handler->display->display_options['fields']['totalcount']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['totalcount']['separator'] = '';
  /* Campo: (hidden) Data di inserimento */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['ui_name'] = '(hidden) Data di inserimento';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['created']['element_wrapper_class'] = 'teaser__content__pub-info-date';
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Campo: (hidden) Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['ui_name'] = '(hidden) Body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '400';
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Leggi';
  $handler->display->display_options['fields']['body']['alter']['more_link_path'] = '[view_node]';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '500',
  );
  /* Campo: (hidden) Leggi */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['ui_name'] = '(hidden) Leggi';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Leggi';
  /* Campo: Contenuto: Immagine */
  $handler->display->display_options['fields']['field_blog_img']['id'] = 'field_blog_img';
  $handler->display->display_options['fields']['field_blog_img']['table'] = 'field_data_field_blog_img';
  $handler->display->display_options['fields']['field_blog_img']['field'] = 'field_blog_img';
  $handler->display->display_options['fields']['field_blog_img']['label'] = '';
  $handler->display->display_options['fields']['field_blog_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_blog_img']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_blog_img']['element_wrapper_class'] = 'featured-image';
  $handler->display->display_options['fields']['field_blog_img']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_blog_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_blog_img']['settings'] = array(
    'image_style' => 'featured_content',
    'image_link' => 'content',
  );
  /* Campo: header (icona + titolo) */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'header (icona + titolo)';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<header class="featured-title"><h2><i class="icon content-type-[type]"></i>[title]</h2></header>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Campo: pubinfo (statistiche + data + autore) */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'pubinfo (statistiche + data + autore)';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="featured-pubinfo">
    <span class="content__pub-info-statistics">letto [totalcount] volte</span> &bull; 
    <span class="featured-pubinfo-date">pubblicato il [created]</span>
    <span class="featured-pubinfo-author">da [realname]</span>
</div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Campo: Body + Link leggi tutto */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = 'Body + Link leggi tutto';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<p>[body] [view_node]</p>';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_2']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing_2']['element_wrapper_class'] = 'featured-text';
  $handler->display->display_options['fields']['nothing_2']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterio del filtro: Contenuto: Pubblicato */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criterio del filtro: Nodequeue: In queue */
  $handler->display->display_options['filters']['in_queue']['id'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['filters']['in_queue']['field'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['filters']['in_queue']['value'] = '1';
  $handler->display->display_options['block_description'] = 'Homepage: post in evidenza';

  /* Display: Block - Segnalazioni */
  $handler = $view->new_display('block', 'Block - Segnalazioni', 'segnalazioni');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Segnalazioni';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Vedi tutte le segnalazioni';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_1';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'block-list-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'block-list';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Piè di pagina: Globale: Riassunto del risultato */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  $handler->display->display_options['footer']['result']['label'] = 'Totale con link alla pagina delle segnalazioni';
  $handler->display->display_options['footer']['result']['content'] = '<div class="total-count">Sono presenti <a href="/segnalazioni"><span>@total</span> segnalazioni</a></div>
';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Comportamento se non ci sono risultati: Globale: Area di testo */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Nessuna segnalazione presente.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relazione: Contenuto: Autore */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relazione: Utente: Profilo */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'main' => 'main',
  );
  /* Relazione: OG membership: OG membership from Nodo */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: (hidden) Nome */
  $handler->display->display_options['fields']['field_profile_nome']['id'] = 'field_profile_nome';
  $handler->display->display_options['fields']['field_profile_nome']['table'] = 'field_data_field_profile_nome';
  $handler->display->display_options['fields']['field_profile_nome']['field'] = 'field_profile_nome';
  $handler->display->display_options['fields']['field_profile_nome']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_profile_nome']['ui_name'] = '(hidden) Nome';
  $handler->display->display_options['fields']['field_profile_nome']['label'] = '';
  $handler->display->display_options['fields']['field_profile_nome']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_profile_nome']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_nome']['element_default_classes'] = FALSE;
  /* Campo: (hidden) Cognome */
  $handler->display->display_options['fields']['field_profile_cognome']['id'] = 'field_profile_cognome';
  $handler->display->display_options['fields']['field_profile_cognome']['table'] = 'field_data_field_profile_cognome';
  $handler->display->display_options['fields']['field_profile_cognome']['field'] = 'field_profile_cognome';
  $handler->display->display_options['fields']['field_profile_cognome']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_profile_cognome']['ui_name'] = '(hidden) Cognome';
  $handler->display->display_options['fields']['field_profile_cognome']['label'] = '';
  $handler->display->display_options['fields']['field_profile_cognome']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_profile_cognome']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_cognome']['element_default_classes'] = FALSE;
  /* Campo: (hidden) Data di inserimento */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['ui_name'] = '(hidden) Data di inserimento';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_type'] = 'span';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd/m/Y';
  /* Campo: (hidden) Realname */
  $handler->display->display_options['fields']['realname']['id'] = 'realname';
  $handler->display->display_options['fields']['realname']['table'] = 'realname';
  $handler->display->display_options['fields']['realname']['field'] = 'realname';
  $handler->display->display_options['fields']['realname']['relationship'] = 'uid';
  $handler->display->display_options['fields']['realname']['ui_name'] = '(hidden) Realname';
  $handler->display->display_options['fields']['realname']['label'] = '';
  $handler->display->display_options['fields']['realname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['realname']['element_label_colon'] = FALSE;
  /* Campo: Profilo: Immagine profilo */
  $handler->display->display_options['fields']['field_profile_avatar']['id'] = 'field_profile_avatar';
  $handler->display->display_options['fields']['field_profile_avatar']['table'] = 'field_data_field_profile_avatar';
  $handler->display->display_options['fields']['field_profile_avatar']['field'] = 'field_profile_avatar';
  $handler->display->display_options['fields']['field_profile_avatar']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_profile_avatar']['label'] = '';
  $handler->display->display_options['fields']['field_profile_avatar']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_profile_avatar']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_profile_avatar']['alter']['alt'] = '[field_profile_nome] [field_profile_cognome]';
  $handler->display->display_options['fields']['field_profile_avatar']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_avatar']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_profile_avatar']['element_wrapper_class'] = 'block-list-item-image';
  $handler->display->display_options['fields']['field_profile_avatar']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile_avatar']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_profile_avatar']['settings'] = array(
    'image_style' => 'user_thumb',
    'image_link' => 'content',
  );
  /* Campo: ([created] - [realname]) */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = '([created] - [realname])';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[realname] il <span>[created]</span> ha segnalato:';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing_1']['element_wrapper_class'] = 'block-list-item-pubinfo';
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  /* Campo: Contenuto: Titolo */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'block-list-item-title';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contestuale: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['exception']['title'] = 'Tutti';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'og_context';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['gid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['gid']['validate']['type'] = 'og';
  $handler->display->display_options['arguments']['gid']['validate']['fail'] = 'ignore';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterio del filtro: Contenuto: Pubblicato */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criterio del filtro: Contenuto: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'segnalazione' => 'segnalazione',
  );
  $handler->display->display_options['block_description'] = 'HOME+OG: Ultime segnalazioni';

  /* Display: Block: Comunità */
  $handler = $view->new_display('block', 'Block: Comunità', 'comunita');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Comunità';
  $handler->display->display_options['display_description'] = 'Elenco con i loghi delle comunità';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = '';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'comunita';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'block-list-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'block-list';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Piè di pagina: Globale: Riassunto del risultato */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  $handler->display->display_options['footer']['result']['content'] = '<div class="total-count">Sono presenti <a href="/comunita"><span>@total</span> comunità</a></div>';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: (hidden) Nome comunità */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = '(hidden) Nome comunità';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Campo: (hidden) Logo comunità */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['ui_name'] = '(hidden) Logo comunità';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['text'] = '[field_image]';
  $handler->display->display_options['fields']['field_image']['alter']['path'] = '[view_node]';
  $handler->display->display_options['fields']['field_image']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_image']['alter']['alt'] = '[title]';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'community_thumb',
    'image_link' => '',
  );
  /* Campo: Contenuto: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['text'] = '[field_image]';
  $handler->display->display_options['fields']['view_node']['alter']['alt'] = '[title]';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['view_node']['element_wrapper_class'] = 'block-list-item-image';
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterio del filtro: Contenuto: Pubblicato */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criterio del filtro: Contenuto: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'comunita' => 'comunita',
  );
  /* Criterio del filtro: Contenuto: Visualizza nell&#039;elenco delle comunità (field_og_list_group_directory) */
  $handler->display->display_options['filters']['field_og_list_group_directory_value']['id'] = 'field_og_list_group_directory_value';
  $handler->display->display_options['filters']['field_og_list_group_directory_value']['table'] = 'field_data_field_og_list_group_directory';
  $handler->display->display_options['filters']['field_og_list_group_directory_value']['field'] = 'field_og_list_group_directory_value';
  $handler->display->display_options['filters']['field_og_list_group_directory_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['block_description'] = 'HOME: Elenco comunità';

  /* Display: Page: HOMEPAGE */
  $handler = $view->new_display('page', 'Page: HOMEPAGE', 'homepage');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'La homepage del sito';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relazione: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['label'] = 'Queue: Post in evidenza';
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 0;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'post_in_evideza' => 0,
  );
  /* Relazione: Contenuto: Autore */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['label'] = 'Relazione utente';
  /* Relazione: Utente: Profilo */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['profile']['label'] = 'Utente: profilo';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: (hidden) Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['ui_name'] = '(hidden) Nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Campo: (hidden) Content Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['ui_name'] = '(hidden) Content Type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['machine_name'] = TRUE;
  /* Campo: (hidden) Utente uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'uid';
  $handler->display->display_options['fields']['uid']['ui_name'] = '(hidden) Utente uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Campo: (hidden) Ruoli utente */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'users_roles';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  $handler->display->display_options['fields']['rid']['relationship'] = 'uid';
  $handler->display->display_options['fields']['rid']['ui_name'] = '(hidden) Ruoli utente';
  $handler->display->display_options['fields']['rid']['label'] = '';
  $handler->display->display_options['fields']['rid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['rid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['rid']['alter']['text'] = '[rid-role]';
  $handler->display->display_options['fields']['rid']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['rid']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['rid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rid']['element_default_classes'] = FALSE;
  /* Campo: (hidden) Nome */
  $handler->display->display_options['fields']['field_profile_nome']['id'] = 'field_profile_nome';
  $handler->display->display_options['fields']['field_profile_nome']['table'] = 'field_data_field_profile_nome';
  $handler->display->display_options['fields']['field_profile_nome']['field'] = 'field_profile_nome';
  $handler->display->display_options['fields']['field_profile_nome']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_profile_nome']['ui_name'] = '(hidden) Nome';
  $handler->display->display_options['fields']['field_profile_nome']['label'] = '';
  $handler->display->display_options['fields']['field_profile_nome']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_profile_nome']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_nome']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile_nome']['type'] = 'text_plain';
  /* Campo: (hidden) Cognome */
  $handler->display->display_options['fields']['field_profile_cognome']['id'] = 'field_profile_cognome';
  $handler->display->display_options['fields']['field_profile_cognome']['table'] = 'field_data_field_profile_cognome';
  $handler->display->display_options['fields']['field_profile_cognome']['field'] = 'field_profile_cognome';
  $handler->display->display_options['fields']['field_profile_cognome']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_profile_cognome']['ui_name'] = '(hidden) Cognome';
  $handler->display->display_options['fields']['field_profile_cognome']['label'] = '';
  $handler->display->display_options['fields']['field_profile_cognome']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_profile_cognome']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_cognome']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile_cognome']['type'] = 'text_plain';
  /* Campo: div class=teaser__user */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'div class=teaser__user';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="teaser__user">';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Campo: Profilo: Immagine profilo */
  $handler->display->display_options['fields']['field_profile_avatar']['id'] = 'field_profile_avatar';
  $handler->display->display_options['fields']['field_profile_avatar']['table'] = 'field_data_field_profile_avatar';
  $handler->display->display_options['fields']['field_profile_avatar']['field'] = 'field_profile_avatar';
  $handler->display->display_options['fields']['field_profile_avatar']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_profile_avatar']['label'] = '';
  $handler->display->display_options['fields']['field_profile_avatar']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_avatar']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile_avatar']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_profile_avatar']['settings'] = array(
    'image_style' => 'user_preview',
    'image_link' => 'content',
  );
  /* Campo: span class=icon */
  $handler->display->display_options['fields']['nothing_4']['id'] = 'nothing_4';
  $handler->display->display_options['fields']['nothing_4']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_4']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_4']['ui_name'] = 'span class=icon';
  $handler->display->display_options['fields']['nothing_4']['label'] = '';
  $handler->display->display_options['fields']['nothing_4']['alter']['text'] = '<span class="icon innovatore"></span>';
  $handler->display->display_options['fields']['nothing_4']['element_label_colon'] = FALSE;
  /* Campo: Nome Cognome */
  $handler->display->display_options['fields']['nothing_7']['id'] = 'nothing_7';
  $handler->display->display_options['fields']['nothing_7']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_7']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_7']['ui_name'] = 'Nome Cognome';
  $handler->display->display_options['fields']['nothing_7']['label'] = '';
  $handler->display->display_options['fields']['nothing_7']['alter']['text'] = '[field_profile_nome] [field_profile_cognome]';
  $handler->display->display_options['fields']['nothing_7']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_7']['alter']['path'] = 'user/[uid]';
  $handler->display->display_options['fields']['nothing_7']['alter']['alt'] = 'Visualizza il profilo di [field_profile_nome] [field_profile_cognome]';
  $handler->display->display_options['fields']['nothing_7']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_7']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['nothing_7']['element_wrapper_class'] = 'teaser__user-name';
  $handler->display->display_options['fields']['nothing_7']['element_default_classes'] = FALSE;
  /* Campo: /div */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = '/div';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '</div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  /* Campo: div class=teaser__content */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = 'div class=teaser__content';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<div class="teaser__content">';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_2']['element_default_classes'] = FALSE;
  /* Campo: Contenuto: Titolo */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h3><span class="icon [type]"></span><a href="/node/[nid]" title="Vai a [title]">[title]</a></h3>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Campo: div class=teaser__content__pub-info */
  $handler->display->display_options['fields']['nothing_5']['id'] = 'nothing_5';
  $handler->display->display_options['fields']['nothing_5']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_5']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_5']['ui_name'] = 'div class=teaser__content__pub-info';
  $handler->display->display_options['fields']['nothing_5']['label'] = '';
  $handler->display->display_options['fields']['nothing_5']['alter']['text'] = '<div class="teaser__content__pub-info">';
  $handler->display->display_options['fields']['nothing_5']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_5']['element_default_classes'] = FALSE;
  /* Campo: pubblicato il [created] */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['ui_name'] = 'pubblicato il [created]';
  $handler->display->display_options['fields']['created']['label'] = 'pubblicato il';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['created']['element_wrapper_class'] = 'teaser__content__pub-info-date';
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Campo: nel blog di [field_profile_nome] [field_profile_cognome] */
  $handler->display->display_options['fields']['nothing_8']['id'] = 'nothing_8';
  $handler->display->display_options['fields']['nothing_8']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_8']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_8']['ui_name'] = 'nel blog di [field_profile_nome] [field_profile_cognome]';
  $handler->display->display_options['fields']['nothing_8']['label'] = '';
  $handler->display->display_options['fields']['nothing_8']['alter']['text'] = 'nel <a href="/blog/[uid]">blog di [field_profile_nome] [field_profile_cognome]</a>';
  $handler->display->display_options['fields']['nothing_8']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_8']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['nothing_8']['element_wrapper_class'] = 'teaser__content__pub-info-blog';
  $handler->display->display_options['fields']['nothing_8']['element_default_classes'] = FALSE;
  /* Campo: /div */
  $handler->display->display_options['fields']['nothing_6']['id'] = 'nothing_6';
  $handler->display->display_options['fields']['nothing_6']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_6']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_6']['ui_name'] = '/div';
  $handler->display->display_options['fields']['nothing_6']['label'] = '';
  $handler->display->display_options['fields']['nothing_6']['alter']['text'] = '</div>';
  $handler->display->display_options['fields']['nothing_6']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_6']['element_default_classes'] = FALSE;
  /* Campo: Contenuto: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_wrapper_class'] = 'teaser__content-text';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
  /* Campo: Statistiche del contenuto: Visualizzazioni totali */
  $handler->display->display_options['fields']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['fields']['totalcount']['field'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['label'] = '';
  $handler->display->display_options['fields']['totalcount']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['totalcount']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['totalcount']['element_wrapper_class'] = 'teaser__content-stats';
  $handler->display->display_options['fields']['totalcount']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['totalcount']['separator'] = '';
  $handler->display->display_options['fields']['totalcount']['prefix'] = 'letto ';
  $handler->display->display_options['fields']['totalcount']['suffix'] = ' volte';
  /* Campo: /div */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['ui_name'] = '/div';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '</div>';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_3']['element_default_classes'] = FALSE;
  /* Campo: Teaser commenti (views) */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['ui_name'] = 'Teaser commenti (views)';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['view']['view'] = 'comments_in_teaser';
  $handler->display->display_options['fields']['view']['display'] = 'block';
  $handler->display->display_options['fields']['view']['arguments'] = '[%nid]';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterio del filtro: Contenuto: Pubblicato */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criterio del filtro: Contenuto: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'forum' => 'forum',
    'blog' => 'blog',
  );
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Tipo';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['type']['group_info']['label'] = 'Tipo';
  $handler->display->display_options['filters']['type']['group_info']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['type']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  /* Criterio del filtro: Nodequeue: In queue */
  $handler->display->display_options['filters']['in_queue']['id'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['filters']['in_queue']['field'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['filters']['in_queue']['value'] = '0';
  $handler->display->display_options['path'] = 'home';

  /* Display: Page: Segnalazioni OG */
  $handler = $view->new_display('page', 'Page: Segnalazioni OG', 'page_1');
  $handler->display->display_options['display_description'] = 'La pagina con tutte le segnalazioni della comunità';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relazione: OG membership: OG membership from Nodo */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  /* Relazione: Contenuto: Autore */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relazione: Utente: Profilo */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Profilo: Nome */
  $handler->display->display_options['fields']['field_profile_nome_1']['id'] = 'field_profile_nome_1';
  $handler->display->display_options['fields']['field_profile_nome_1']['table'] = 'field_data_field_profile_nome';
  $handler->display->display_options['fields']['field_profile_nome_1']['field'] = 'field_profile_nome';
  $handler->display->display_options['fields']['field_profile_nome_1']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_profile_nome_1']['label'] = '';
  $handler->display->display_options['fields']['field_profile_nome_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_profile_nome_1']['element_label_colon'] = FALSE;
  /* Campo: Profilo: Cognome */
  $handler->display->display_options['fields']['field_profile_cognome_1']['id'] = 'field_profile_cognome_1';
  $handler->display->display_options['fields']['field_profile_cognome_1']['table'] = 'field_data_field_profile_cognome';
  $handler->display->display_options['fields']['field_profile_cognome_1']['field'] = 'field_profile_cognome';
  $handler->display->display_options['fields']['field_profile_cognome_1']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_profile_cognome_1']['label'] = '';
  $handler->display->display_options['fields']['field_profile_cognome_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_profile_cognome_1']['element_label_colon'] = FALSE;
  /* Campo: Realname: Real name */
  $handler->display->display_options['fields']['realname']['id'] = 'realname';
  $handler->display->display_options['fields']['realname']['table'] = 'realname';
  $handler->display->display_options['fields']['realname']['field'] = 'realname';
  $handler->display->display_options['fields']['realname']['relationship'] = 'uid';
  $handler->display->display_options['fields']['realname']['label'] = '';
  $handler->display->display_options['fields']['realname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['realname']['element_label_colon'] = FALSE;
  /* Campo: Contenuto: Data di inserimento */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd/m/Y';
  /* Campo: Profilo: Immagine profilo */
  $handler->display->display_options['fields']['field_profile_avatar']['id'] = 'field_profile_avatar';
  $handler->display->display_options['fields']['field_profile_avatar']['table'] = 'field_data_field_profile_avatar';
  $handler->display->display_options['fields']['field_profile_avatar']['field'] = 'field_profile_avatar';
  $handler->display->display_options['fields']['field_profile_avatar']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_profile_avatar']['label'] = '';
  $handler->display->display_options['fields']['field_profile_avatar']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_avatar']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_profile_avatar']['settings'] = array(
    'image_style' => 'user_thumb',
    'image_link' => 'content',
  );
  /* Campo: ([created] - [realname]) */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = '([created] - [realname])';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[realname] il <span>[created]</span> ha segnalato:';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Campo: Contenuto: Titolo */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contestuale: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['exception']['title'] = 'Tutti';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'og_context';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['gid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['gid']['validate']['type'] = 'og';
  $handler->display->display_options['arguments']['gid']['validate']['fail'] = 'ignore';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterio del filtro: Contenuto: Pubblicato */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criterio del filtro: Contenuto: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'segnalazione' => 'segnalazione',
  );
  $handler->display->display_options['path'] = 'segnalazioni/%';

  /* Display: Page: Segnalazioni */
  $handler = $view->new_display('page', 'Page: Segnalazioni', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Segnalazioni';
  $handler->display->display_options['display_description'] = 'Pagina generale con tutte le segnalazioni pubblicate sul sito.';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relazione: OG membership: OG membership from Nodo */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  /* Relazione: Contenuto: Autore */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relazione: Utente: Profilo */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Profilo: Nome */
  $handler->display->display_options['fields']['field_profile_nome_1']['id'] = 'field_profile_nome_1';
  $handler->display->display_options['fields']['field_profile_nome_1']['table'] = 'field_data_field_profile_nome';
  $handler->display->display_options['fields']['field_profile_nome_1']['field'] = 'field_profile_nome';
  $handler->display->display_options['fields']['field_profile_nome_1']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_profile_nome_1']['label'] = '';
  $handler->display->display_options['fields']['field_profile_nome_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_profile_nome_1']['element_label_colon'] = FALSE;
  /* Campo: Profilo: Cognome */
  $handler->display->display_options['fields']['field_profile_cognome_1']['id'] = 'field_profile_cognome_1';
  $handler->display->display_options['fields']['field_profile_cognome_1']['table'] = 'field_data_field_profile_cognome';
  $handler->display->display_options['fields']['field_profile_cognome_1']['field'] = 'field_profile_cognome';
  $handler->display->display_options['fields']['field_profile_cognome_1']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_profile_cognome_1']['label'] = '';
  $handler->display->display_options['fields']['field_profile_cognome_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_profile_cognome_1']['element_label_colon'] = FALSE;
  /* Campo: Realname: Real name */
  $handler->display->display_options['fields']['realname']['id'] = 'realname';
  $handler->display->display_options['fields']['realname']['table'] = 'realname';
  $handler->display->display_options['fields']['realname']['field'] = 'realname';
  $handler->display->display_options['fields']['realname']['relationship'] = 'uid';
  $handler->display->display_options['fields']['realname']['label'] = '';
  $handler->display->display_options['fields']['realname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['realname']['element_label_colon'] = FALSE;
  /* Campo: Contenuto: Data di inserimento */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd/m/Y';
  /* Campo: Profilo: Immagine profilo */
  $handler->display->display_options['fields']['field_profile_avatar']['id'] = 'field_profile_avatar';
  $handler->display->display_options['fields']['field_profile_avatar']['table'] = 'field_data_field_profile_avatar';
  $handler->display->display_options['fields']['field_profile_avatar']['field'] = 'field_profile_avatar';
  $handler->display->display_options['fields']['field_profile_avatar']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_profile_avatar']['label'] = '';
  $handler->display->display_options['fields']['field_profile_avatar']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_avatar']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_profile_avatar']['settings'] = array(
    'image_style' => 'user_thumb',
    'image_link' => 'content',
  );
  /* Campo: ([created] - [realname]) */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = '([created] - [realname])';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[realname] il <span>[created]</span> ha segnalato:';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Campo: Contenuto: Titolo */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterio del filtro: Contenuto: Pubblicato */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criterio del filtro: Contenuto: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'segnalazione' => 'segnalazione',
  );
  $handler->display->display_options['path'] = 'segnalazioni';
  $translatables['home_page_blocks'] = array(
    t('Master'),
    t('altro'),
    t('Applica'),
    t('Ripristina'),
    t('Ordina per'),
    t('Asc'),
    t('Disc'),
    t('Voci per pagina'),
    t('- Tutto -'),
    t('Scostamento'),
    t('« prima'),
    t('‹ precedente'),
    t('seguente ›'),
    t('ultima »'),
    t('Corpo'),
    t('Data di inserimento'),
    t('Immagine'),
    t('Queue - Post in evidenza'),
    t('queue'),
    t('autore'),
    t('.'),
    t('Leggi'),
    t('<header class="featured-title"><h2><i class="icon content-type-[type]"></i>[title]</h2></header>'),
    t('<div class="featured-pubinfo">
    <span class="content__pub-info-statistics">letto [totalcount] volte</span> &bull; 
    <span class="featured-pubinfo-date">pubblicato il [created]</span>
    <span class="featured-pubinfo-author">da [realname]</span>
</div>'),
    t('<p>[body] [view_node]</p>'),
    t('Homepage: post in evidenza'),
    t('Block - Segnalazioni'),
    t('Segnalazioni'),
    t('Vedi tutte le segnalazioni'),
    t('Totale con link alla pagina delle segnalazioni'),
    t('<div class="total-count">Sono presenti <a href="/segnalazioni"><span>@total</span> segnalazioni</a></div>
'),
    t('Nessuna segnalazione presente.'),
    t('Profilo'),
    t('OG membership from node'),
    t('[field_profile_nome] [field_profile_cognome]'),
    t('[realname] il <span>[created]</span> ha segnalato:'),
    t('Tutti'),
    t('HOME+OG: Ultime segnalazioni'),
    t('Block: Comunità'),
    t('Comunità'),
    t('Elenco con i loghi delle comunità'),
    t('<div class="total-count">Sono presenti <a href="/comunita"><span>@total</span> comunità</a></div>'),
    t('[field_image]'),
    t('[title]'),
    t('HOME: Elenco comunità'),
    t('Page: HOMEPAGE'),
    t('La homepage del sito'),
    t('Queue: Post in evidenza'),
    t('Relazione utente'),
    t('Utente: profilo'),
    t('[rid-role]'),
    t('<div class="teaser__user">'),
    t('<span class="icon innovatore"></span>'),
    t('Visualizza il profilo di [field_profile_nome] [field_profile_cognome]'),
    t('</div>'),
    t('<div class="teaser__content">'),
    t('<h3><span class="icon [type]"></span><a href="/node/[nid]" title="Vai a [title]">[title]</a></h3>'),
    t('<div class="teaser__content__pub-info">'),
    t('pubblicato il'),
    t('nel <a href="/blog/[uid]">blog di [field_profile_nome] [field_profile_cognome]</a>'),
    t('letto '),
    t(' volte'),
    t('Tipo'),
    t('Page: Segnalazioni OG'),
    t('La pagina con tutte le segnalazioni della comunità'),
    t('Page: Segnalazioni'),
    t('Pagina generale con tutte le segnalazioni pubblicate sul sito.'),
  );
  $export['home_page_blocks'] = $view;

  $view = new view();
  $view->name = 'user_blocks';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'profile';
  $view->human_name = 'User blocks';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Persone';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = '';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Applica';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Ripristina';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordina per';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Disc';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'block-list-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'block-list';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relazione: Profilo: Utente uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  /* Relazione: OG membership: Utente from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_user']['id'] = 'og_membership_related_user';
  $handler->display->display_options['relationships']['og_membership_related_user']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_user']['field'] = 'og_membership_related_user';
  $handler->display->display_options['relationships']['og_membership_related_user']['relationship'] = 'user';
  /* Campo: Profilo: Profilo ID */
  $handler->display->display_options['fields']['pid']['id'] = 'pid';
  $handler->display->display_options['fields']['pid']['table'] = 'profile';
  $handler->display->display_options['fields']['pid']['field'] = 'pid';
  /* Filtro contestuale: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['relationship'] = 'user';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['exception']['title'] = 'Tutti';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'og_context';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['gid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['gid']['validate']['type'] = 'og';
  $handler->display->display_options['arguments']['gid']['validate']['fail'] = 'empty';
  /* Criterio del filtro: OG membership: State */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'og_membership';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['relationship'] = 'user';
  $handler->display->display_options['filters']['state']['value'] = array(
    1 => '1',
  );
  /* Criterio del filtro: Utente: Attivo */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'user';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Block: HP User */
  $handler = $view->new_display('block', 'Block: HP User', 'block');
  $handler->display->display_options['display_description'] = 'Blocco con un anteprima degli utenti del sito. Dovrebbe mostrare gli utenti più attivi.';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '16';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Piè di pagina: Globale: Riassunto del risultato */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  $handler->display->display_options['footer']['result']['content'] = '<div class="total-count"> <a href="/persone">@total utenti</a> iscritti</div>';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: (hidden) URL profilo */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'views_entity_profile2';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['ui_name'] = '(hidden) URL profilo';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Campo: (hidden) Realname */
  $handler->display->display_options['fields']['realname']['id'] = 'realname';
  $handler->display->display_options['fields']['realname']['table'] = 'realname';
  $handler->display->display_options['fields']['realname']['field'] = 'realname';
  $handler->display->display_options['fields']['realname']['relationship'] = 'user';
  $handler->display->display_options['fields']['realname']['ui_name'] = '(hidden) Realname';
  $handler->display->display_options['fields']['realname']['label'] = '';
  $handler->display->display_options['fields']['realname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['realname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['realname']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['realname']['link_to_user'] = FALSE;
  /* Campo: Profilo: Immagine profilo */
  $handler->display->display_options['fields']['field_profile_avatar']['id'] = 'field_profile_avatar';
  $handler->display->display_options['fields']['field_profile_avatar']['table'] = 'field_data_field_profile_avatar';
  $handler->display->display_options['fields']['field_profile_avatar']['field'] = 'field_profile_avatar';
  $handler->display->display_options['fields']['field_profile_avatar']['label'] = '';
  $handler->display->display_options['fields']['field_profile_avatar']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_profile_avatar']['alter']['text'] = '[field_profile_avatar]';
  $handler->display->display_options['fields']['field_profile_avatar']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_profile_avatar']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['field_profile_avatar']['alter']['alt'] = 'Mostra il profilo di [realname]';
  $handler->display->display_options['fields']['field_profile_avatar']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_avatar']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_profile_avatar']['element_wrapper_class'] = 'block-list-item-image';
  $handler->display->display_options['fields']['field_profile_avatar']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile_avatar']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_profile_avatar']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_profile_avatar']['settings'] = array(
    'image_style' => 'user_thumb',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Criterio di ordinamento: Profilo: Data di creazione */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'profile';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterio del filtro: Utente: Attivo */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'user';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Criterio del filtro: Profilo: Immagine profilo (field_profile_avatar:fid) */
  $handler->display->display_options['filters']['field_profile_avatar_fid']['id'] = 'field_profile_avatar_fid';
  $handler->display->display_options['filters']['field_profile_avatar_fid']['table'] = 'field_data_field_profile_avatar';
  $handler->display->display_options['filters']['field_profile_avatar_fid']['field'] = 'field_profile_avatar_fid';
  $handler->display->display_options['filters']['field_profile_avatar_fid']['operator'] = 'not empty';
  $handler->display->display_options['block_description'] = 'HOME: Elenco utenti ordinati per indice di attività';

  /* Display: Block: OG User */
  $handler = $view->new_display('block', 'Block: OG User', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Persone iscritte';
  $handler->display->display_options['display_description'] = 'Blocchetto con gli utenti iscritti ad una comunità';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = '';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '16';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '3';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Voci per pagina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tutto -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Scostamento';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« prima';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ precedente';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'seguente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'ultima »';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Piè di pagina: Globale: Area di testo */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'Link altro';
  $handler->display->display_options['footer']['area']['content'] = '<div class="total-count"><a href="/node/!1/members">';
  $handler->display->display_options['footer']['area']['format'] = 'php_code';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  /* Piè di pagina: Globale: Riassunto del risultato */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  $handler->display->display_options['footer']['result']['label'] = 'Totale con chiusura link visualizza tutti';
  $handler->display->display_options['footer']['result']['content'] = '<span>@total</span> utenti</a> iscritti alla comunità</div>';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: (hidden) URL profilo */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'views_entity_profile2';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['ui_name'] = '(hidden) URL profilo';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Campo: (hidden) Realname */
  $handler->display->display_options['fields']['realname']['id'] = 'realname';
  $handler->display->display_options['fields']['realname']['table'] = 'realname';
  $handler->display->display_options['fields']['realname']['field'] = 'realname';
  $handler->display->display_options['fields']['realname']['relationship'] = 'user';
  $handler->display->display_options['fields']['realname']['ui_name'] = '(hidden) Realname';
  $handler->display->display_options['fields']['realname']['label'] = '';
  $handler->display->display_options['fields']['realname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['realname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['realname']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['realname']['link_to_user'] = FALSE;
  /* Campo: Profilo: Immagine profilo */
  $handler->display->display_options['fields']['field_profile_avatar']['id'] = 'field_profile_avatar';
  $handler->display->display_options['fields']['field_profile_avatar']['table'] = 'field_data_field_profile_avatar';
  $handler->display->display_options['fields']['field_profile_avatar']['field'] = 'field_profile_avatar';
  $handler->display->display_options['fields']['field_profile_avatar']['label'] = '';
  $handler->display->display_options['fields']['field_profile_avatar']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_profile_avatar']['alter']['text'] = '[field_profile_avatar]';
  $handler->display->display_options['fields']['field_profile_avatar']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_profile_avatar']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['field_profile_avatar']['alter']['alt'] = 'Mostra il profilo di [realname]';
  $handler->display->display_options['fields']['field_profile_avatar']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_avatar']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_profile_avatar']['element_wrapper_class'] = 'block-list-item-image';
  $handler->display->display_options['fields']['field_profile_avatar']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile_avatar']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_profile_avatar']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_profile_avatar']['settings'] = array(
    'image_style' => 'user_thumb',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Criterio di ordinamento: Profilo: Data di creazione */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'profile';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterio del filtro: OG membership: State */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'og_membership';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['relationship'] = 'user';
  $handler->display->display_options['filters']['state']['value'] = array(
    1 => '1',
  );
  /* Criterio del filtro: Utente: Attivo */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'user';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['block_description'] = 'OG: Elenco utenti ';

  /* Display: Page: OG Membri comunità */
  $handler = $view->new_display('page', 'Page: OG Membri comunità', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'Pagina con l\'elenco dei membri della comunità';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '5';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Voci per pagina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tutto -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Scostamento';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« prima';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ precedente';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'seguente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'ultima »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'teaser-profile-list-item';
  $handler->display->display_options['style_options']['class'] = 'teaser-profile-list';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser_profile';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: (hidden) Url profilo */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'views_entity_profile2';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['ui_name'] = '(hidden) Url profilo';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Campo: (hidden) Realname */
  $handler->display->display_options['fields']['realname']['id'] = 'realname';
  $handler->display->display_options['fields']['realname']['table'] = 'realname';
  $handler->display->display_options['fields']['realname']['field'] = 'realname';
  $handler->display->display_options['fields']['realname']['relationship'] = 'user';
  $handler->display->display_options['fields']['realname']['ui_name'] = '(hidden) Realname';
  $handler->display->display_options['fields']['realname']['label'] = '';
  $handler->display->display_options['fields']['realname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['realname']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['realname']['link_to_user'] = FALSE;
  /* Campo: (hidden) Ente */
  $handler->display->display_options['fields']['field_profile_ente']['id'] = 'field_profile_ente';
  $handler->display->display_options['fields']['field_profile_ente']['table'] = 'field_data_field_profile_ente';
  $handler->display->display_options['fields']['field_profile_ente']['field'] = 'field_profile_ente';
  $handler->display->display_options['fields']['field_profile_ente']['ui_name'] = '(hidden) Ente';
  $handler->display->display_options['fields']['field_profile_ente']['label'] = '';
  $handler->display->display_options['fields']['field_profile_ente']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_profile_ente']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_profile_ente']['alter']['text'] = '<h3>[field_profile_ente]</h3>';
  $handler->display->display_options['fields']['field_profile_ente']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_ente']['element_default_classes'] = FALSE;
  /* Campo: Profilo: Immagine profilo */
  $handler->display->display_options['fields']['field_profile_avatar']['id'] = 'field_profile_avatar';
  $handler->display->display_options['fields']['field_profile_avatar']['table'] = 'field_data_field_profile_avatar';
  $handler->display->display_options['fields']['field_profile_avatar']['field'] = 'field_profile_avatar';
  $handler->display->display_options['fields']['field_profile_avatar']['label'] = '';
  $handler->display->display_options['fields']['field_profile_avatar']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_profile_avatar']['alter']['text'] = '[field_profile_avatar]';
  $handler->display->display_options['fields']['field_profile_avatar']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_profile_avatar']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['field_profile_avatar']['alter']['alt'] = 'Mostra il profilo di [realname]';
  $handler->display->display_options['fields']['field_profile_avatar']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_avatar']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_profile_avatar']['element_wrapper_class'] = 'search-results-item-image';
  $handler->display->display_options['fields']['field_profile_avatar']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile_avatar']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_profile_avatar']['settings'] = array(
    'image_style' => 'search_result',
    'image_link' => 'content',
  );
  /* Campo: search-results-item-content-wr  */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'search-results-item-content-wr ';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="search-results-item-content-wr">';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  /* Campo: header: Realname - Ente */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'header: Realname - Ente';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h2><a href="[url]" title="Visualizza il profilo di [realname]">[realname]</a></h2>
[field_profile_ente]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'header';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'search-results-item-header';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Campo: Profilo: Una mia breve presentazione */
  $handler->display->display_options['fields']['field_profile_summary']['id'] = 'field_profile_summary';
  $handler->display->display_options['fields']['field_profile_summary']['table'] = 'field_data_field_profile_summary';
  $handler->display->display_options['fields']['field_profile_summary']['field'] = 'field_profile_summary';
  $handler->display->display_options['fields']['field_profile_summary']['label'] = '';
  $handler->display->display_options['fields']['field_profile_summary']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_profile_summary']['alter']['text'] = '[field_profile_summary]';
  $handler->display->display_options['fields']['field_profile_summary']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_profile_summary']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_profile_summary']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_profile_summary']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_profile_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_summary']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_profile_summary']['element_wrapper_class'] = 'search-results-item-text';
  $handler->display->display_options['fields']['field_profile_summary']['element_default_classes'] = FALSE;
  /* Campo: /search-result-item-content-wr */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = '/search-result-item-content-wr';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '</div>';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Criterio di ordinamento: Profilo: Data di creazione */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'profile';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contestuale: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['relationship'] = 'user';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['exception']['title'] = 'Tutti';
  $handler->display->display_options['arguments']['gid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['gid']['title'] = 'Utenti della comunità %1 ';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'og_context';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['gid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['gid']['validate']['type'] = 'og';
  $handler->display->display_options['arguments']['gid']['validate']['fail'] = 'empty';
  $handler->display->display_options['path'] = 'node/%/members';
  $handler->display->display_options['menu']['title'] = 'Utenti';
  $handler->display->display_options['menu']['description'] = 'Utenti appartenenti alla community';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['user_blocks'] = array(
    t('Master'),
    t('Persone'),
    t('Applica'),
    t('Ripristina'),
    t('Ordina per'),
    t('Asc'),
    t('Disc'),
    t('Utente'),
    t('user from OG membership'),
    t('Profilo ID'),
    t('.'),
    t(','),
    t('Tutti'),
    t('Block: HP User'),
    t('Blocco con un anteprima degli utenti del sito. Dovrebbe mostrare gli utenti più attivi.'),
    t('altro'),
    t('<div class="total-count"> <a href="/persone">@total utenti</a> iscritti</div>'),
    t('[field_profile_avatar]'),
    t('Mostra il profilo di [realname]'),
    t('HOME: Elenco utenti ordinati per indice di attività'),
    t('Block: OG User'),
    t('Persone iscritte'),
    t('Blocchetto con gli utenti iscritti ad una comunità'),
    t('Voci per pagina'),
    t('- Tutto -'),
    t('Scostamento'),
    t('« prima'),
    t('‹ precedente'),
    t('seguente ›'),
    t('ultima »'),
    t('Link altro'),
    t('<div class="total-count"><a href="/node/!1/members">'),
    t('Totale con chiusura link visualizza tutti'),
    t('<span>@total</span> utenti</a> iscritti alla comunità</div>'),
    t('OG: Elenco utenti '),
    t('Page: OG Membri comunità'),
    t('Pagina con l\'elenco dei membri della comunità'),
    t('<h3>[field_profile_ente]</h3>'),
    t('<div class="search-results-item-content-wr">'),
    t('<h2><a href="[url]" title="Visualizza il profilo di [realname]">[realname]</a></h2>
[field_profile_ente]'),
    t('[field_profile_summary]'),
    t('</div>'),
    t('Utenti della comunità %1 '),
  );
  $export['user_blocks'] = $view;

  return $export;
}
