<?php
/**
 * @file
 * innovatoripa_activity_streams.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function innovatoripa_activity_streams_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'up_attivita_dalla_mia_rete';
  $view->description = 'Activity stream';
  $view->tag = 'default';
  $view->base_table = 'message';
  $view->human_name = 'UP: Attività dalla mia rete';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'test';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'altro';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Applica';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Ripristina';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordina per';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Disc';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
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
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'block-list-item clearfix';
  $handler->display->display_options['style_options']['class'] = 'block-list';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relazione: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_node_ref_target_id']['id'] = 'field_node_ref_target_id';
  $handler->display->display_options['relationships']['field_node_ref_target_id']['table'] = 'field_data_field_node_ref';
  $handler->display->display_options['relationships']['field_node_ref_target_id']['field'] = 'field_node_ref_target_id';
  $handler->display->display_options['relationships']['field_node_ref_target_id']['label'] = 'Content entity referenced from field_node_ref';
  /* Relazione: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_comment_ref_target_id']['id'] = 'field_comment_ref_target_id';
  $handler->display->display_options['relationships']['field_comment_ref_target_id']['table'] = 'field_data_field_comment_ref';
  $handler->display->display_options['relationships']['field_comment_ref_target_id']['field'] = 'field_comment_ref_target_id';
  $handler->display->display_options['relationships']['field_comment_ref_target_id']['label'] = 'Comment entity referenced from field_comment_ref';
  /* Campo: Messaggio: Messaggio ID */
  $handler->display->display_options['fields']['mid']['id'] = 'mid';
  $handler->display->display_options['fields']['mid']['table'] = 'message';
  $handler->display->display_options['fields']['mid']['field'] = 'mid';
  /* Campo: Messaggio: Rendered Messaggio */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_message';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'full';
  /* Campo: Contenuto: Titolo */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_test_refernce_target_id';
  /* Campo: Messaggio: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'message';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = 'Tipo';
  /* Criterio del filtro: Messaggio: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'message';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'all' => 'all',
    'innovatori_create_comment' => 'innovatori_create_comment',
    'innovatori_create_node' => 'innovatori_create_node',
    'innovatori_og_post_in_group' => 'innovatori_og_post_in_group',
    'innovatori_og_user_membership' => 'innovatori_og_user_membership',
    'innovatori_user_follow' => 'innovatori_user_follow',
  );

  /* Display: UP: Attività della mia rete */
  $handler = $view->new_display('panel_pane', 'UP: Attività della mia rete', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Attività dalla mia rete';
  $handler->display->display_options['display_description'] = 'Activity Stream della mie rete';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Comportamento se non ci sono risultati: Globale: Area di testo */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'La tua rete non ha prodotto ancora nessun contenuto';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relazione: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_node_ref_target_id']['id'] = 'field_node_ref_target_id';
  $handler->display->display_options['relationships']['field_node_ref_target_id']['table'] = 'field_data_field_node_ref';
  $handler->display->display_options['relationships']['field_node_ref_target_id']['field'] = 'field_node_ref_target_id';
  $handler->display->display_options['relationships']['field_node_ref_target_id']['label'] = 'Content entity referenced from field_node_ref';
  /* Relazione: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_comment_ref_target_id']['id'] = 'field_comment_ref_target_id';
  $handler->display->display_options['relationships']['field_comment_ref_target_id']['table'] = 'field_data_field_comment_ref';
  $handler->display->display_options['relationships']['field_comment_ref_target_id']['field'] = 'field_comment_ref_target_id';
  $handler->display->display_options['relationships']['field_comment_ref_target_id']['label'] = 'Comment entity referenced from field_comment_ref';
  /* Relazione: Messaggio: Utente uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'message';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  /* Relazione: Flag: friend */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['relationship'] = 'user';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'friend';
  /* Relazione: Utente: Profilo */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'user';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Profilo: Immagine profilo */
  $handler->display->display_options['fields']['field_profile_avatar']['id'] = 'field_profile_avatar';
  $handler->display->display_options['fields']['field_profile_avatar']['table'] = 'field_data_field_profile_avatar';
  $handler->display->display_options['fields']['field_profile_avatar']['field'] = 'field_profile_avatar';
  $handler->display->display_options['fields']['field_profile_avatar']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_profile_avatar']['label'] = '';
  $handler->display->display_options['fields']['field_profile_avatar']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_avatar']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_profile_avatar']['element_wrapper_class'] = 'block-list-item-image';
  $handler->display->display_options['fields']['field_profile_avatar']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile_avatar']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_profile_avatar']['settings'] = array(
    'image_style' => 'user_thumb',
    'image_link' => 'content',
  );
  /* Campo: Messaggio: Rendered Messaggio */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_message';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'full';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Criterio di ordinamento: Messaggio: Timestamp */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'message';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterio del filtro: Messaggio: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'message';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'all' => 'all',
    'innovatori_create_comment' => 'innovatori_create_comment',
    'innovatori_create_node' => 'innovatori_create_node',
    'innovatori_og_post_in_group' => 'innovatori_og_post_in_group',
    'innovatori_og_user_membership' => 'innovatori_og_user_membership',
    'innovatori_user_follow' => 'innovatori_user_follow',
  );

  /* Display: UP: Le mie attività */
  $handler = $view->new_display('panel_pane', 'UP: Le mie attività', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Personal activity stream';
  $handler->display->display_options['display_description'] = 'Activity Stream personale';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
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
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Comportamento se non ci sono risultati: Globale: Area di testo */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Non hai nessuna attività';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relazione: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_node_ref_target_id']['id'] = 'field_node_ref_target_id';
  $handler->display->display_options['relationships']['field_node_ref_target_id']['table'] = 'field_data_field_node_ref';
  $handler->display->display_options['relationships']['field_node_ref_target_id']['field'] = 'field_node_ref_target_id';
  $handler->display->display_options['relationships']['field_node_ref_target_id']['label'] = 'Content entity referenced from field_node_ref';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Messaggio: Rendered Messaggio */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_message';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'full';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Criterio di ordinamento: Messaggio: Timestamp */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'message';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contestuale: Messaggio: Utente uid */
  $handler->display->display_options['arguments']['user']['id'] = 'user';
  $handler->display->display_options['arguments']['user']['table'] = 'message';
  $handler->display->display_options['arguments']['user']['field'] = 'user';
  $handler->display->display_options['arguments']['user']['default_action'] = 'default';
  $handler->display->display_options['arguments']['user']['exception']['title'] = 'Tutti';
  $handler->display->display_options['arguments']['user']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['user']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['user']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['user']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['user']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterio del filtro: Messaggio: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'message';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'all' => 'all',
    'innovatori_create_comment' => 'innovatori_create_comment',
    'innovatori_create_node' => 'innovatori_create_node',
    'innovatori_og_post_in_group' => 'innovatori_og_post_in_group',
    'innovatori_og_user_membership' => 'innovatori_og_user_membership',
    'innovatori_user_follow' => 'innovatori_user_follow',
  );
  $translatables['up_attivita_dalla_mia_rete'] = array(
    t('Master'),
    t('test'),
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
    t('Content entity referenced from field_node_ref'),
    t('Comment entity referenced from field_comment_ref'),
    t('Messaggio ID'),
    t('.'),
    t(','),
    t('Titolo'),
    t('Tipo'),
    t('UP: Attività della mia rete'),
    t('Attività dalla mia rete'),
    t('Activity Stream della mie rete'),
    t('La tua rete non ha prodotto ancora nessun contenuto'),
    t('Utente'),
    t('flag'),
    t('Profilo'),
    t('View panes'),
    t('UP: Le mie attività'),
    t('Personal activity stream'),
    t('Activity Stream personale'),
    t('Non hai nessuna attività'),
    t('Tutti'),
  );
  $export['up_attivita_dalla_mia_rete'] = $view;

  return $export;
}
