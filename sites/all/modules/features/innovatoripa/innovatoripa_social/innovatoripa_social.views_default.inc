<?php
/**
 * @file
 * innovatoripa_social.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function innovatoripa_social_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'communities_of_user';
  $view->description = 'Nel profilo utente mostra le comunità cui l\'utente è iscritto';
  $view->tag = 'og';
  $view->base_table = 'og_membership';
  $view->human_name = 'Utente: comunità cui è iscritto';
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
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Applica';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Ripristina';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordina per';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Disc';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Voci per pagina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tutto -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Scostamento';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« prima';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ precedente';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'seguente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'ultima »';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'block-list-item';
  $handler->display->display_options['style_options']['class'] = 'block-list';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Comportamento se non ci sono risultati: Globale: Area di testo */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'L\'utente non è iscritto ancora a nessuna comunità.';
  /* Relazione: OG membership: Group Nodo from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  /* Campo: (hidden) Nome della comunità */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title']['ui_name'] = '(hidden) Nome della comunità';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Campo: (hidden) Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['nid']['ui_name'] = '(hidden) Nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Campo: (hidden) tempo fa */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'og_membership';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['ui_name'] = '(hidden) tempo fa';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'raw time ago';
  /* Campo: Contenuto: Logo */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['text'] = '[field_image]';
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_image']['alter']['alt'] = '[title] - Membro da [created]';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_image']['element_wrapper_class'] = 'block-list-item-image';
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'community_preview',
    'image_link' => '',
  );
  /* Criterio di ordinamento: Contenuto: Titolo */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'og_membership_related_node_group';
  /* Filtro contestuale: We pass the user ID as the Entity ID. */
  $handler->display->display_options['arguments']['etid']['id'] = 'etid';
  $handler->display->display_options['arguments']['etid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['etid']['field'] = 'etid';
  $handler->display->display_options['arguments']['etid']['ui_name'] = 'We pass the user ID as the Entity ID.';
  $handler->display->display_options['arguments']['etid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['etid']['exception']['title'] = 'Tutti';
  $handler->display->display_options['arguments']['etid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['etid']['title'] = '%1 groups';
  $handler->display->display_options['arguments']['etid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['etid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['etid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['etid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['etid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['etid']['validate']['type'] = 'user';
  /* Criterio del filtro: OG membership: State */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'og_membership';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['relationship'] = 'og_membership';
  $handler->display->display_options['filters']['state']['value'] = array(
    1 => '1',
  );
  /* Criterio del filtro: Contenuto: Pubblicato */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Criterio del filtro: OG membership: Entity_type */
  $handler->display->display_options['filters']['entity_type']['id'] = 'entity_type';
  $handler->display->display_options['filters']['entity_type']['table'] = 'og_membership';
  $handler->display->display_options['filters']['entity_type']['field'] = 'entity_type';
  $handler->display->display_options['filters']['entity_type']['value'] = 'user';
  /* Criterio del filtro: Contenuto: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['type']['value'] = array(
    'comunita' => 'comunita',
  );

  /* Display: Content Pane: Blocco */
  $handler = $view->new_display('panel_pane', 'Content Pane: Blocco', 'panel_pane_1');
  $handler->display->display_options['display_description'] = 'Blocco in sidebar con le comunità cui l\'utente è iscritto';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Piè di pagina: Globale: Area di testo */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'Link altro';
  $handler->display->display_options['footer']['area']['content'] = '<div class="total-count">Iscritto a <a href="/users/!1/comunita">';
  $handler->display->display_options['footer']['area']['format'] = 'php_code';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  /* Piè di pagina: Globale: Riassunto del risultato */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  $handler->display->display_options['footer']['result']['label'] = 'Totale + chiusura link';
  $handler->display->display_options['footer']['result']['content'] = '<span>@total</span> comunità</a></div>';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 'link_to_view';
  $handler->display->display_options['allow']['more_link'] = 'more_link';
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'etid' => array(
      'type' => 'context',
      'context' => 'entity:user.uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'We pass to the &quot;Entity ID&quot; the User ID.',
    ),
  );

  /* Display: Content Pane: Page */
  $handler = $view->new_display('panel_pane', 'Content Pane: Page', 'panel_pane_2');
  $handler->display->display_options['display_description'] = 'Contenuto della pagina con l\'elenco di tutte le comunità cui l\'utente è iscritto';
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
  $handler->display->display_options['style_options']['row_class'] = 'search-results-item';
  $handler->display->display_options['style_options']['class'] = 'search-results';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: (hidden) Last post nid */
  $handler->display->display_options['fields']['field_og_stats_last_post_nid']['id'] = 'field_og_stats_last_post_nid';
  $handler->display->display_options['fields']['field_og_stats_last_post_nid']['table'] = 'field_data_field_og_stats_last_post_nid';
  $handler->display->display_options['fields']['field_og_stats_last_post_nid']['field'] = 'field_og_stats_last_post_nid';
  $handler->display->display_options['fields']['field_og_stats_last_post_nid']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['field_og_stats_last_post_nid']['ui_name'] = '(hidden) Last post nid';
  $handler->display->display_options['fields']['field_og_stats_last_post_nid']['label'] = '';
  $handler->display->display_options['fields']['field_og_stats_last_post_nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_og_stats_last_post_nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_og_stats_last_post_nid']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Campo: (hidden) Last post timestamp (rewrited) */
  $handler->display->display_options['fields']['field_og_stats_last_post_date']['id'] = 'field_og_stats_last_post_date';
  $handler->display->display_options['fields']['field_og_stats_last_post_date']['table'] = 'field_data_field_og_stats_last_post_date';
  $handler->display->display_options['fields']['field_og_stats_last_post_date']['field'] = 'field_og_stats_last_post_date';
  $handler->display->display_options['fields']['field_og_stats_last_post_date']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['field_og_stats_last_post_date']['ui_name'] = '(hidden) Last post timestamp (rewrited)';
  $handler->display->display_options['fields']['field_og_stats_last_post_date']['label'] = '';
  $handler->display->display_options['fields']['field_og_stats_last_post_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_og_stats_last_post_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_og_stats_last_post_date']['alter']['text'] = '<span class="search-result-items-info_data">Ultimo contenuto <a href="/node/[field_og_stats_last_post_nid]" title="Vai all\'ultimo contenuto inserito">[field_og_stats_last_post_date]</a></span> - ';
  $handler->display->display_options['fields']['field_og_stats_last_post_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_og_stats_last_post_date']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_og_stats_last_post_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Campo: (hidden) Post count */
  $handler->display->display_options['fields']['field_og_post_count']['id'] = 'field_og_post_count';
  $handler->display->display_options['fields']['field_og_post_count']['table'] = 'field_data_field_og_post_count';
  $handler->display->display_options['fields']['field_og_post_count']['field'] = 'field_og_post_count';
  $handler->display->display_options['fields']['field_og_post_count']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['field_og_post_count']['ui_name'] = '(hidden) Post count';
  $handler->display->display_options['fields']['field_og_post_count']['label'] = '';
  $handler->display->display_options['fields']['field_og_post_count']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_og_post_count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_og_post_count']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Campo: (hidden) User count */
  $handler->display->display_options['fields']['field_og_user_count']['id'] = 'field_og_user_count';
  $handler->display->display_options['fields']['field_og_user_count']['table'] = 'field_data_field_og_user_count';
  $handler->display->display_options['fields']['field_og_user_count']['field'] = 'field_og_user_count';
  $handler->display->display_options['fields']['field_og_user_count']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['field_og_user_count']['ui_name'] = '(hidden) User count';
  $handler->display->display_options['fields']['field_og_user_count']['label'] = '';
  $handler->display->display_options['fields']['field_og_user_count']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_og_user_count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_og_user_count']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Campo: (hidden) Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['nid']['ui_name'] = '(hidden) Nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Campo: (hidden) tempo fa */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'og_membership';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['ui_name'] = '(hidden) tempo fa';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'raw time ago';
  /* Campo: Contenuto: Logo */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['text'] = '[field_image]';
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_image']['alter']['alt'] = '[title] - Membro da [created]';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_image']['element_wrapper_class'] = 'search-results-item-image';
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'community_preview',
    'image_link' => 'content',
  );
  /* Campo: search-results-item-content-wr */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'search-results-item-content-wr';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="search-results-item-content-wr">';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Campo: Contenuto: Titolo */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'header';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'search-results-item-header';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Campo: Contenuto: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '230';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '<p>';
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_wrapper_class'] = 'search-results-item-text';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '230',
  );
  /* Campo: footer info */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = 'footer info';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<div class="search-results-membership-infos">
   Membro da <span>[created]</span>
</div>
<div class="search-results-item-info">
   [field_og_stats_last_post_date]
   <span class="search-results-item-info_content-count"><strong>[field_og_post_count]</strong> contenuti</span> - 
   <span class="search-results-item-info_members-count"><strong>[field_og_user_count]</strong> iscritti</span>
</div>
';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_2']['element_wrapper_type'] = 'footer';
  $handler->display->display_options['fields']['nothing_2']['element_wrapper_class'] = 'search-results-item-footer';
  $handler->display->display_options['fields']['nothing_2']['element_default_classes'] = FALSE;
  /* Campo: /search-result-item-content-wr */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = '/search-result-item-content-wr';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '</div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'etid' => array(
      'type' => 'context',
      'context' => 'entity:user.uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'We pass to the &quot;Entity ID&quot; the User ID.',
    ),
  );
  $translatables['communities_of_user'] = array(
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
    t('L\'utente non è iscritto ancora a nessuna comunità.'),
    t('Group node from OG membership'),
    t('[field_image]'),
    t('[title] - Membro da [created]'),
    t('Tutti'),
    t('%1 groups'),
    t('Content Pane: Blocco'),
    t('Blocco in sidebar con le comunità cui l\'utente è iscritto'),
    t('Link altro'),
    t('<div class="total-count">Iscritto a <a href="/users/!1/comunita">'),
    t('Totale + chiusura link'),
    t('<span>@total</span> comunità</a></div>'),
    t('View panes'),
    t('Content Pane: Page'),
    t('Contenuto della pagina con l\'elenco di tutte le comunità cui l\'utente è iscritto'),
    t('<span class="search-result-items-info_data">Ultimo contenuto <a href="/node/[field_og_stats_last_post_nid]" title="Vai all\'ultimo contenuto inserito">[field_og_stats_last_post_date]</a></span> - '),
    t('<div class="search-results-item-content-wr">'),
    t('<div class="search-results-membership-infos">
   Membro da <span>[created]</span>
</div>
<div class="search-results-item-info">
   [field_og_stats_last_post_date]
   <span class="search-results-item-info_content-count"><strong>[field_og_post_count]</strong> contenuti</span> - 
   <span class="search-results-item-info_members-count"><strong>[field_og_user_count]</strong> iscritti</span>
</div>
'),
    t('</div>'),
  );
  $export['communities_of_user'] = $view;

  $view = new view();
  $view->name = 'groups_taxonomy_term';
  $view->description = 'A view to emulate Drupal core\'s handling of taxonomy/term.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Groups Taxonomy term';
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
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
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
  $handler->display->display_options['row_plugin'] = 'node';
  /* Relazione: OG membership: OG membership from Nodo */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  /* Relazione: OG membership: Group Nodo from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['relationship'] = 'og_membership_rel';
  /* Criterio di ordinamento: Contenuto: Sempre in cima */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
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
  $handler->display->display_options['arguments']['gid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['gid']['validate']['type'] = 'og';
  /* Filtro contestuale: Contenuto: Ha un termine di tassonomia (o uno dei suoi figli) identificato dall'ID */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['term_node_tid_depth']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['exception']['title'] = 'Tutti';
  $handler->display->display_options['arguments']['term_node_tid_depth']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['title'] = '%1';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['vocabularies'] = array(
    'argomenti' => 'argomenti',
  );
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['break_phrase'] = TRUE;
  /* Criterio del filtro: Contenuto: Pubblicato o in amministrazione */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 0;
  $handler->display->display_options['filters']['status_extra']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'node/%/argomenti/%';
  $translatables['groups_taxonomy_term'] = array(
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
    t('%1'),
    t('Page'),
  );
  $export['groups_taxonomy_term'] = $view;

  $view = new view();
  $view->name = 'node_social_blocks';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Node social blocks';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Le mie comunità';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relazione: OG membership: Group Nodo from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  /* Relazione: OG membership: Group Utente from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_user_group']['id'] = 'og_membership_related_user_group';
  $handler->display->display_options['relationships']['og_membership_related_user_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_user_group']['field'] = 'og_membership_related_user_group';
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

  /* Display: UP: Comunità utente */
  $handler = $view->new_display('block', 'UP: Comunità utente', 'block');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Voci per pagina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tutto -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Scostamento';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« prima';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ precedente';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'seguente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'ultima »';
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
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Comportamento se non ci sono risultati: Globale: Area di testo */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'L\'utente non è iscritto a nessuna community';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relazione: OG membership: Group Nodo from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  /* Relazione: Contenuto: Autore */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenuto: Logo */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_image']['element_wrapper_class'] = 'block-list-item-image';
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'community_thumb',
    'image_link' => 'content',
  );
  /* Campo: Contenuto: Titolo */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'block-list-item-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Campo: Contenuto: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_class'] = 'block-list-item-description';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contestuale: Utente: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Tutti';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['block_description'] = 'USER PAGE: Le mie comunità';

  /* Display: UP: Attività sui miei contenuti */
  $handler = $view->new_display('block', 'UP: Attività sui miei contenuti', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Attività sui miei contenuti';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Voci per pagina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tutto -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Scostamento';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« prima';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ precedente';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'seguente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'ultima »';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Criterio di ordinamento: Contenuto: Ora dell'ultimo commento */
  $handler->display->display_options['sorts']['last_comment_timestamp']['id'] = 'last_comment_timestamp';
  $handler->display->display_options['sorts']['last_comment_timestamp']['table'] = 'node_comment_statistics';
  $handler->display->display_options['sorts']['last_comment_timestamp']['field'] = 'last_comment_timestamp';
  $handler->display->display_options['sorts']['last_comment_timestamp']['order'] = 'DESC';
  /* Criterio di ordinamento: Contenuto: Data di inserimento */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contestuale: Contenuto: Identificativo uid dell'autore */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Tutti';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
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
    'comunita' => 'comunita',
    'evento' => 'evento',
    'forum' => 'forum',
    'segnalazione' => 'segnalazione',
  );
  $handler->display->display_options['block_description'] = 'USER PAGE: Attività sui miei contenuti';

  /* Display: UP Public: I miei ultimi contenuti */
  $handler = $view->new_display('panel_pane', 'UP Public: I miei ultimi contenuti', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
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
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser_simplified';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contestuale: Contenuto: Identificativo uid dell'autore */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Tutti';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
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
    'segnalazione' => 'segnalazione',
  );
  $handler->display->display_options['pane_category']['name'] = 'Innovatori Views pane';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $translatables['node_social_blocks'] = array(
    t('Master'),
    t('Le mie comunità'),
    t('altro'),
    t('Applica'),
    t('Ripristina'),
    t('Ordina per'),
    t('Asc'),
    t('Disc'),
    t('Group node from OG membership'),
    t('Group user from OG membership'),
    t('UP: Comunità utente'),
    t('Voci per pagina'),
    t('- Tutto -'),
    t('Scostamento'),
    t('« prima'),
    t('‹ precedente'),
    t('seguente ›'),
    t('ultima »'),
    t('L\'utente non è iscritto a nessuna community'),
    t('autore'),
    t('Tutti'),
    t('USER PAGE: Le mie comunità'),
    t('UP: Attività sui miei contenuti'),
    t('Attività sui miei contenuti'),
    t('USER PAGE: Attività sui miei contenuti'),
    t('UP Public: I miei ultimi contenuti'),
    t('Innovatori Views pane'),
  );
  $export['node_social_blocks'] = $view;

  $view = new view();
  $view->name = 'tag_clouds';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Tag Clouds';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Tag Cloud';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'altro';
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Applica';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Ripristina';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordina per';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Disc';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '40';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'tagadelic';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['style_options']['count_field'] = 'tid';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'name' => 'name',
    'tid' => 'tid',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relazione: Contenuto: Termini di tassonomia nel contenuto */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'argomenti' => 'argomenti',
    'forums' => 0,
    'forum_gruppo_standardsperimentazione_aou_federico_ii_comparto_e_irccs_pascale_dirigenza' => 0,
    'forum_gruppo_standardaccessibilit_dei_siti_web' => 0,
    'forum_gruppo_standardaccessibilit_e_usabilit' => 0,
    'forum_gruppo_standardada_regione_calabria' => 0,
    'forum_gruppo_standardalumni_ripam' => 0,
    'forum_gruppo_standardamministrazione_2_0' => 0,
    'forum_gruppo_standardappalti_pubblici' => 0,
    'forum_gruppo_standardarea_2_di_test' => 0,
    'forum_gruppo_standardarea_di_coordinamento' => 0,
    'forum_gruppo_standardarea_di_lavoro_di_test' => 0,
    'forum_gruppo_standardarea_di_lavoro_regione_calabria' => 0,
    'forum_gruppo_standardarea_di_lavoro_regione_campania' => 0,
    'forum_gruppo_standardarea_di_lavoro_regione_puglia' => 0,
    'forum_gruppo_standardarea_di_lavoro_regione_siciliana' => 0,
    'forum_gruppo_standardarea_di_test' => 0,
    'forum_gruppo_standardassistenza_utenti_innovatoripa' => 0,
    'forum_gruppo_standardattivazione_servizi_online_per_disabili_e_categorie_protette_provincia_di_salerno' => 0,
    'forum_gruppo_standardattivita_negoziale' => 0,
    'forum_gruppo_standardbarcamp_innovatoripa' => 0,
    'forum_gruppo_standardbarometro_della_trasparenza' => 0,
    'forum_gruppo_standardcambio_posto_da_domani' => 0,
    'forum_gruppo_standardcampania' => 0,
    'forum_gruppo_standardcapacit_istituzionale_tavolo_tecnico_di_confronto' => 0,
    'forum_gruppo_standardcapacity_sud' => 0,
    'forum_gruppo_standardcataloghi_regionali' => 0,
    'forum_gruppo_standardcatalogo_innovazioni_copi' => 0,
    'forum_gruppo_standardcentro_di_competenza' => 0,
    'forum_gruppo_standardcloud4pa' => 0,
    'forum_gruppo_standardcloud4pa1' => 0,
    'forum_gruppo_standardcomitato_di_indirizzo' => 0,
    'forum_gruppo_standardcompetenze_in_rete_per_capacity_sud' => 0,
    'forum_gruppo_standardcompetenze1' => 0,
    'forum_gruppo_standardcomunicazione_e_conflitti' => 0,
    'forum_gruppo_standardcomunicazione_pubblica_e_riforma_brunetta' => 0,
    'forum_gruppo_standardcomunit_di_pratiche_e_reti_sociali' => 0,
    'forum_gruppo_standardcomunit_protezione_civile' => 0,
    'forum_gruppo_standarddati_aperti_open_data' => 0,
    'forum_gruppo_standarddomini_webpa' => 0,
    'forum_gruppo_standardesperienze_2_0' => 0,
    'forum_gruppo_standardesperienze_trasferibili_best' => 0,
    'forum_gruppo_standardetica' => 0,
    'forum_gruppo_standardetica_e_trasparenza' => 0,
    'forum_gruppo_standardformatori_sanit' => 0,
    'forum_gruppo_standardformazione_gea_sismica' => 0,
    'forum_gruppo_standardformiur' => 0,
    'forum_gruppo_standardfrontofficechiavinmano_bologna' => 0,
    'forum_gruppo_standardgestione_del_progetto' => 0,
    'forum_gruppo_standardgovernance_dei_servizi_per_il_lavoro_provincia_di_caserta' => 0,
    'forum_gruppo_standardgruppo_di_test' => 0,
    'forum_gruppo_standard' => 0,
    'forum_gruppo_standardi_centri_per_l_impiego_e_le_imprese_provincia_di_cosenza' => 0,
    'forum_gruppo_standardi_social_media_per_comunicare_e_offrire_servizi_nella_pa' => 0,
    'forum_gruppo_standardil_difensore_digitale' => 0,
    'forum_gruppo_standardinchiesta_pa' => 0,
    'forum_gruppo_standardinnovare' => 0,
    'forum_gruppo_standardintegrazione_delle_banche_dati_provincia_di_napoli' => 0,
    'forum_gruppo_standardinter_agendo_provincia_di_taranto' => 0,
    'forum_gruppo_standardinterregionale_autorit_di_audit' => 0,
    'forum_gruppo_standardinterventi_in_rete_per_lo_sviluppo_degli_spi_provincia_di_catanzaro' => 0,
    'forum_gruppo_standarditalian_open_data_licence' => 0,
    'forum_gruppo_standardl_inclusione_sociale_con_il_progetto_diesis' => 0,
    'forum_gruppo_standardl_incontralavoro_provincia_di_barletta_andria_e_trani' => 0,
    'forum_gruppo_standardla_bacheca_del_controllore' => 0,
    'forum_gruppo_standardla_comunicazione_interna' => 0,
    'forum_gruppo_standardla_p_a_innovativa_aggiungi_un_tassello_al_puzzle_redazione_del_decalogo_digitale' => 0,
    'forum_gruppo_standardlaboratori_tematici_calabria_pubblicit_rendicontazione_e_tenuta_della_documentazione' => 0,
    'forum_gruppo_standardlaboratorio_tematici_bandi_di_gara_e_appalti_pubblici' => 0,
    'forum_gruppo_standardlaboratorio_tematico_pcm_calabria' => 0,
    'forum_gruppo_standardlegge_1502000_stato_dell_arte_e_prospettive' => 0,
    'forum_gruppo_standardlinea_amica_network' => 0,
    'forum_gruppo_standardlinee_guida_web_pa' => 0,
    'forum_gruppo_standardlo_sportello_multi_ente' => 0,
    'forum_gruppo_standardmatrice_del_rischio' => 0,
    'forum_gruppo_standardministero_dell_ambiente_attivit_formative' => 0,
    'forum_gruppo_standardmobbing_nella_pubblica_amministrazione_una_malattia_silenziosa' => 0,
    'forum_gruppo_standardmobilit_del_personale_performancepa_linea_2' => 0,
    'forum_gruppo_standardnetwork_lavoro_e_formazione_professionale_provincia_di_benevento' => 0,
    'forum_gruppo_standardnuova_area_di_lavoro' => 0,
    'forum_gruppo_standardorizzonti_e_learning' => 0,
    'forum_gruppo_standardparla_al_controllore' => 0,
    'forum_gruppo_standardpartecipazione' => 0,
    'forum_gruppo_standardpast' => 0,
    'forum_gruppo_standardper_un_osservatorio_delle_intranet_della_pa' => 0,
    'forum_gruppo_standardperformancepa_linea_2' => 0,
    'forum_gruppo_standardperformancepa_universit' => 0,
    'forum_gruppo_standardpoat' => 0,
    'forum_gruppo_standardpolitiche_europee' => 0,
    'forum_gruppo_standardprocesso_alla_pa_digitale' => 0,
    'forum_gruppo_standardprogetto_servizi_innovativi_obiettivo_convergenza' => 0,
    'forum_gruppo_standardproject_cycle_management' => 0,
    'forum_gruppo_standardqualit_organizzativa_nel_processo_di_lavoro_dell_ada_puglia' => 0,
    'forum_gruppo_standardquota100' => 0,
    'forum_gruppo_standardr_inno_va_linea_comuni' => 0,
    'forum_gruppo_standardr_inno_va_linea_province' => 0,
    'forum_gruppo_standardradar_web_pa' => 0,
    'forum_gruppo_standardradar_web_1' => 0,
    'forum_gruppo_standardreferenti_formativi_regione_siciliana' => 0,
    'forum_gruppo_standardregione_calabria' => 0,
    'forum_gruppo_standardregione_calabria_laboratorio_sulla_valutazione_delle_performance_nelle_aziende_sanitarie' => 0,
    'forum_gruppo_standardregione_campania' => 0,
    'forum_gruppo_standardregione_campania_controlli_di_i_livello' => 0,
    'forum_gruppo_standardregione_puglia' => 0,
    'forum_gruppo_standardregione_puglia_laboratorio_sulla_valutazione_delle_performance_nelle_aziende_sanitarie' => 0,
    'forum_gruppo_standardregione_sicilia' => 0,
    'forum_gruppo_standardrendicontazione_sociale' => 0,
    'forum_gruppo_standardrequisiti_minimi' => 0,
    'forum_gruppo_standardrete_degli_osservatori' => 0,
    'forum_gruppo_standardreti_di_conoscenza_per_l_apprendistato' => 0,
    'forum_gruppo_standardservizi_on_line' => 0,
    'forum_gruppo_standardservizi_per_l_impiego' => 0,
    'forum_gruppo_standardsocial_learning' => 0,
    'forum_gruppo_standardsocialpa' => 0,
    'forum_gruppo_standardstub' => 0,
    'forum_gruppo_standardstub1' => 0,
    'forum_gruppo_standardstub12' => 0,
    'forum_gruppo_standardstub123' => 0,
    'forum_gruppo_standardstub1234' => 0,
    'forum_gruppo_standardstub12345' => 0,
    'forum_gruppo_standardstub123456' => 0,
    'forum_gruppo_standardstub1234567' => 0,
    'forum_gruppo_standardstub1234568' => 0,
    'forum_gruppo_standardstub1234569' => 0,
    'forum_gruppo_standardstub1234510' => 0,
    'forum_gruppo_standardstub1234511' => 0,
    'forum_gruppo_standardstub1234512' => 0,
    'forum_gruppo_standardstub1234513' => 0,
    'forum_gruppo_standardstub1234514' => 0,
    'forum_gruppo_standardstub1234515' => 0,
    'forum_gruppo_standardstub1234516' => 0,
    'forum_gruppo_standardstub1234517' => 0,
    'forum_gruppo_standardstub1234518' => 0,
    'forum_gruppo_standardstub1234519' => 0,
    'forum_gruppo_standardstub1234520' => 0,
    'forum_gruppo_standardstub1234521' => 0,
    'forum_gruppo_standardstub1234522' => 0,
    'forum_gruppo_standardstub1234523' => 0,
    'forum_gruppo_standardstub1234524' => 0,
    'forum_gruppo_standardstub1234525' => 0,
    'forum_gruppo_standardstub1234526' => 0,
    'forum_gruppo_standardstub1234527' => 0,
    'forum_gruppo_standardstub1234528' => 0,
    'forum_gruppo_standardstub1234529' => 0,
    'forum_gruppo_standardstub1234530' => 0,
    'forum_gruppo_standardstub1234531' => 0,
    'forum_gruppo_standardstub1234532' => 0,
    'forum_gruppo_standardstub1234533' => 0,
    'forum_gruppo_standardstub1234534' => 0,
    'forum_gruppo_standardstub1234535' => 0,
    'forum_gruppo_standardstub1234536' => 0,
    'forum_gruppo_standardstub1234537' => 0,
    'forum_gruppo_standardstub1234538' => 0,
    'forum_gruppo_standardstub1234539' => 0,
    'forum_gruppo_standardstub1234540' => 0,
    'forum_gruppo_standardstub1234541' => 0,
    'forum_gruppo_standardstub1234542' => 0,
    'forum_gruppo_standardstub1234543' => 0,
    'forum_gruppo_standardstub1234544' => 0,
    'forum_gruppo_standardstub1234545' => 0,
    'forum_gruppo_standardstub1234546' => 0,
    'forum_gruppo_standardstub1234547' => 0,
    'forum_gruppo_standardstub1234548' => 0,
    'forum_gruppo_standardstub1234549' => 0,
    'forum_gruppo_standardstub1234550' => 0,
    'forum_gruppo_standardstub1234551' => 0,
    'forum_gruppo_standardstub1234552' => 0,
    'forum_gruppo_standardstub1234553' => 0,
    'forum_gruppo_standardstub1234554' => 0,
    'forum_gruppo_standardstub1234555' => 0,
    'forum_gruppo_standardstub1234556' => 0,
    'forum_gruppo_standardstub1234557' => 0,
    'forum_gruppo_standardstub1234558' => 0,
    'forum_gruppo_standardstub1234559' => 0,
    'forum_gruppo_standardsviluppo_innovatoripa' => 0,
    'forum_gruppo_standardsviluppo_locale' => 0,
    'forum_gruppo_standardt_r_e_management' => 0,
    'forum_gruppo_standardtask_forces_servizi_innovativi_per_il_lavoro' => 0,
    'forum_gruppo_standardtavolo_del_partenariato_regionale_della_campania' => 0,
    'forum_gruppo_standardtest' => 0,
    'forum_gruppo_standardtraspar_enza_siti_web_p_a' => 0,
    'forum_gruppo_standardtrasparenza_e_dati_aperti' => 0,
    'forum_gruppo_standardtrasparenza_nelle_procedure_di_procurement_laboratori_tematici_bandi_di_gara_e_appalti_pubblici' => 0,
    'forum_gruppo_standardtrasparenza_nelle_procedure_di_procurement_percorso_di_assistenza_ai_controller_di_i_livello_adg_fesr' => 0,
    'forum_gruppo_standarduna_griglia_per_analizzare_i_testi_dei_siti_web_della_pa_un_progetto_di_monitoraggio' => 0,
    'forum_gruppo_standardvalore_dei_contenuti' => 0,
    'forum_gruppo_standardvalutare_salute_bp' => 0,
    'forum_gruppo_standardvalutare_salute_valuoc' => 0,
    'forum_gruppo_standardwebpa_formez' => 0,
    'user_topics' => 0,
    'userpoints' => 0,
  );
  /* Relazione: OG membership: OG membership from Nodo */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  /* Campo: Termine della tassonomia: Nome */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Campo: COUNT(Termine della tassonomia: ID Termine) */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['tid']['group_type'] = 'count';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  $handler->display->display_options['fields']['tid']['prefix'] = '(';
  $handler->display->display_options['fields']['tid']['suffix'] = ')';
  /* Criterio di ordinamento: Globale: Casuale */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Filtro contestuale: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['exception']['title'] = 'Tutti';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['gid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['gid']['validate']['type'] = 'og';
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
  );
  /* Criterio del filtro: Termine della tassonomia: Nome */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['name']['operator'] = 'longerthan';
  $handler->display->display_options['filters']['name']['value'] = '1';

  /* Display: Tag cloud */
  $handler = $view->new_display('block', 'Tag cloud', 'block');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relazione: Contenuto: Termini di tassonomia nel contenuto */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'argomenti' => 'argomenti',
    'forums' => 0,
    'forum_gruppo_standardsperimentazione_aou_federico_ii_comparto_e_irccs_pascale_dirigenza' => 0,
    'forum_gruppo_standardaccessibilit_dei_siti_web' => 0,
    'forum_gruppo_standardaccessibilit_e_usabilit' => 0,
    'forum_gruppo_standardada_regione_calabria' => 0,
    'forum_gruppo_standardalumni_ripam' => 0,
    'forum_gruppo_standardamministrazione_2_0' => 0,
    'forum_gruppo_standardappalti_pubblici' => 0,
    'forum_gruppo_standardarea_2_di_test' => 0,
    'forum_gruppo_standardarea_di_coordinamento' => 0,
    'forum_gruppo_standardarea_di_lavoro_di_test' => 0,
    'forum_gruppo_standardarea_di_lavoro_regione_calabria' => 0,
    'forum_gruppo_standardarea_di_lavoro_regione_campania' => 0,
    'forum_gruppo_standardarea_di_lavoro_regione_puglia' => 0,
    'forum_gruppo_standardarea_di_lavoro_regione_siciliana' => 0,
    'forum_gruppo_standardarea_di_test' => 0,
    'forum_gruppo_standardassistenza_utenti_innovatoripa' => 0,
    'forum_gruppo_standardattivazione_servizi_online_per_disabili_e_categorie_protette_provincia_di_salerno' => 0,
    'forum_gruppo_standardattivita_negoziale' => 0,
    'forum_gruppo_standardbarcamp_innovatoripa' => 0,
    'forum_gruppo_standardbarometro_della_trasparenza' => 0,
    'forum_gruppo_standardcambio_posto_da_domani' => 0,
    'forum_gruppo_standardcampania' => 0,
    'forum_gruppo_standardcapacit_istituzionale_tavolo_tecnico_di_confronto' => 0,
    'forum_gruppo_standardcapacity_sud' => 0,
    'forum_gruppo_standardcataloghi_regionali' => 0,
    'forum_gruppo_standardcatalogo_innovazioni_copi' => 0,
    'forum_gruppo_standardcentro_di_competenza' => 0,
    'forum_gruppo_standardcloud4pa' => 0,
    'forum_gruppo_standardcloud4pa1' => 0,
    'forum_gruppo_standardcomitato_di_indirizzo' => 0,
    'forum_gruppo_standardcompetenze_in_rete_per_capacity_sud' => 0,
    'forum_gruppo_standardcompetenze1' => 0,
    'forum_gruppo_standardcomunicazione_e_conflitti' => 0,
    'forum_gruppo_standardcomunicazione_pubblica_e_riforma_brunetta' => 0,
    'forum_gruppo_standardcomunit_di_pratiche_e_reti_sociali' => 0,
    'forum_gruppo_standardcomunit_protezione_civile' => 0,
    'forum_gruppo_standarddati_aperti_open_data' => 0,
    'forum_gruppo_standarddomini_webpa' => 0,
    'forum_gruppo_standardesperienze_2_0' => 0,
    'forum_gruppo_standardesperienze_trasferibili_best' => 0,
    'forum_gruppo_standardetica' => 0,
    'forum_gruppo_standardetica_e_trasparenza' => 0,
    'forum_gruppo_standardformatori_sanit' => 0,
    'forum_gruppo_standardformazione_gea_sismica' => 0,
    'forum_gruppo_standardformiur' => 0,
    'forum_gruppo_standardfrontofficechiavinmano_bologna' => 0,
    'forum_gruppo_standardgestione_del_progetto' => 0,
    'forum_gruppo_standardgovernance_dei_servizi_per_il_lavoro_provincia_di_caserta' => 0,
    'forum_gruppo_standardgruppo_di_test' => 0,
    'forum_gruppo_standard' => 0,
    'forum_gruppo_standardi_centri_per_l_impiego_e_le_imprese_provincia_di_cosenza' => 0,
    'forum_gruppo_standardi_social_media_per_comunicare_e_offrire_servizi_nella_pa' => 0,
    'forum_gruppo_standardil_difensore_digitale' => 0,
    'forum_gruppo_standardinchiesta_pa' => 0,
    'forum_gruppo_standardinnovare' => 0,
    'forum_gruppo_standardintegrazione_delle_banche_dati_provincia_di_napoli' => 0,
    'forum_gruppo_standardinter_agendo_provincia_di_taranto' => 0,
    'forum_gruppo_standardinterregionale_autorit_di_audit' => 0,
    'forum_gruppo_standardinterventi_in_rete_per_lo_sviluppo_degli_spi_provincia_di_catanzaro' => 0,
    'forum_gruppo_standarditalian_open_data_licence' => 0,
    'forum_gruppo_standardl_inclusione_sociale_con_il_progetto_diesis' => 0,
    'forum_gruppo_standardl_incontralavoro_provincia_di_barletta_andria_e_trani' => 0,
    'forum_gruppo_standardla_bacheca_del_controllore' => 0,
    'forum_gruppo_standardla_comunicazione_interna' => 0,
    'forum_gruppo_standardla_p_a_innovativa_aggiungi_un_tassello_al_puzzle_redazione_del_decalogo_digitale' => 0,
    'forum_gruppo_standardlaboratori_tematici_calabria_pubblicit_rendicontazione_e_tenuta_della_documentazione' => 0,
    'forum_gruppo_standardlaboratorio_tematici_bandi_di_gara_e_appalti_pubblici' => 0,
    'forum_gruppo_standardlaboratorio_tematico_pcm_calabria' => 0,
    'forum_gruppo_standardlegge_1502000_stato_dell_arte_e_prospettive' => 0,
    'forum_gruppo_standardlinea_amica_network' => 0,
    'forum_gruppo_standardlinee_guida_web_pa' => 0,
    'forum_gruppo_standardlo_sportello_multi_ente' => 0,
    'forum_gruppo_standardmatrice_del_rischio' => 0,
    'forum_gruppo_standardministero_dell_ambiente_attivit_formative' => 0,
    'forum_gruppo_standardmobbing_nella_pubblica_amministrazione_una_malattia_silenziosa' => 0,
    'forum_gruppo_standardmobilit_del_personale_performancepa_linea_2' => 0,
    'forum_gruppo_standardnetwork_lavoro_e_formazione_professionale_provincia_di_benevento' => 0,
    'forum_gruppo_standardnuova_area_di_lavoro' => 0,
    'forum_gruppo_standardorizzonti_e_learning' => 0,
    'forum_gruppo_standardparla_al_controllore' => 0,
    'forum_gruppo_standardpartecipazione' => 0,
    'forum_gruppo_standardpast' => 0,
    'forum_gruppo_standardper_un_osservatorio_delle_intranet_della_pa' => 0,
    'forum_gruppo_standardperformancepa_linea_2' => 0,
    'forum_gruppo_standardperformancepa_universit' => 0,
    'forum_gruppo_standardpoat' => 0,
    'forum_gruppo_standardpolitiche_europee' => 0,
    'forum_gruppo_standardprocesso_alla_pa_digitale' => 0,
    'forum_gruppo_standardprogetto_servizi_innovativi_obiettivo_convergenza' => 0,
    'forum_gruppo_standardproject_cycle_management' => 0,
    'forum_gruppo_standardqualit_organizzativa_nel_processo_di_lavoro_dell_ada_puglia' => 0,
    'forum_gruppo_standardquota100' => 0,
    'forum_gruppo_standardr_inno_va_linea_comuni' => 0,
    'forum_gruppo_standardr_inno_va_linea_province' => 0,
    'forum_gruppo_standardradar_web_pa' => 0,
    'forum_gruppo_standardradar_web_1' => 0,
    'forum_gruppo_standardreferenti_formativi_regione_siciliana' => 0,
    'forum_gruppo_standardregione_calabria' => 0,
    'forum_gruppo_standardregione_calabria_laboratorio_sulla_valutazione_delle_performance_nelle_aziende_sanitarie' => 0,
    'forum_gruppo_standardregione_campania' => 0,
    'forum_gruppo_standardregione_campania_controlli_di_i_livello' => 0,
    'forum_gruppo_standardregione_puglia' => 0,
    'forum_gruppo_standardregione_puglia_laboratorio_sulla_valutazione_delle_performance_nelle_aziende_sanitarie' => 0,
    'forum_gruppo_standardregione_sicilia' => 0,
    'forum_gruppo_standardrendicontazione_sociale' => 0,
    'forum_gruppo_standardrequisiti_minimi' => 0,
    'forum_gruppo_standardrete_degli_osservatori' => 0,
    'forum_gruppo_standardreti_di_conoscenza_per_l_apprendistato' => 0,
    'forum_gruppo_standardservizi_on_line' => 0,
    'forum_gruppo_standardservizi_per_l_impiego' => 0,
    'forum_gruppo_standardsocial_learning' => 0,
    'forum_gruppo_standardsocialpa' => 0,
    'forum_gruppo_standardstub' => 0,
    'forum_gruppo_standardstub1' => 0,
    'forum_gruppo_standardstub12' => 0,
    'forum_gruppo_standardstub123' => 0,
    'forum_gruppo_standardstub1234' => 0,
    'forum_gruppo_standardstub12345' => 0,
    'forum_gruppo_standardstub123456' => 0,
    'forum_gruppo_standardstub1234567' => 0,
    'forum_gruppo_standardstub1234568' => 0,
    'forum_gruppo_standardstub1234569' => 0,
    'forum_gruppo_standardstub1234510' => 0,
    'forum_gruppo_standardstub1234511' => 0,
    'forum_gruppo_standardstub1234512' => 0,
    'forum_gruppo_standardstub1234513' => 0,
    'forum_gruppo_standardstub1234514' => 0,
    'forum_gruppo_standardstub1234515' => 0,
    'forum_gruppo_standardstub1234516' => 0,
    'forum_gruppo_standardstub1234517' => 0,
    'forum_gruppo_standardstub1234518' => 0,
    'forum_gruppo_standardstub1234519' => 0,
    'forum_gruppo_standardstub1234520' => 0,
    'forum_gruppo_standardstub1234521' => 0,
    'forum_gruppo_standardstub1234522' => 0,
    'forum_gruppo_standardstub1234523' => 0,
    'forum_gruppo_standardstub1234524' => 0,
    'forum_gruppo_standardstub1234525' => 0,
    'forum_gruppo_standardstub1234526' => 0,
    'forum_gruppo_standardstub1234527' => 0,
    'forum_gruppo_standardstub1234528' => 0,
    'forum_gruppo_standardstub1234529' => 0,
    'forum_gruppo_standardstub1234530' => 0,
    'forum_gruppo_standardstub1234531' => 0,
    'forum_gruppo_standardstub1234532' => 0,
    'forum_gruppo_standardstub1234533' => 0,
    'forum_gruppo_standardstub1234534' => 0,
    'forum_gruppo_standardstub1234535' => 0,
    'forum_gruppo_standardstub1234536' => 0,
    'forum_gruppo_standardstub1234537' => 0,
    'forum_gruppo_standardstub1234538' => 0,
    'forum_gruppo_standardstub1234539' => 0,
    'forum_gruppo_standardstub1234540' => 0,
    'forum_gruppo_standardstub1234541' => 0,
    'forum_gruppo_standardstub1234542' => 0,
    'forum_gruppo_standardstub1234543' => 0,
    'forum_gruppo_standardstub1234544' => 0,
    'forum_gruppo_standardstub1234545' => 0,
    'forum_gruppo_standardstub1234546' => 0,
    'forum_gruppo_standardstub1234547' => 0,
    'forum_gruppo_standardstub1234548' => 0,
    'forum_gruppo_standardstub1234549' => 0,
    'forum_gruppo_standardstub1234550' => 0,
    'forum_gruppo_standardstub1234551' => 0,
    'forum_gruppo_standardstub1234552' => 0,
    'forum_gruppo_standardstub1234553' => 0,
    'forum_gruppo_standardstub1234554' => 0,
    'forum_gruppo_standardstub1234555' => 0,
    'forum_gruppo_standardstub1234556' => 0,
    'forum_gruppo_standardstub1234557' => 0,
    'forum_gruppo_standardstub1234558' => 0,
    'forum_gruppo_standardstub1234559' => 0,
    'forum_gruppo_standardsviluppo_innovatoripa' => 0,
    'forum_gruppo_standardsviluppo_locale' => 0,
    'forum_gruppo_standardt_r_e_management' => 0,
    'forum_gruppo_standardtask_forces_servizi_innovativi_per_il_lavoro' => 0,
    'forum_gruppo_standardtavolo_del_partenariato_regionale_della_campania' => 0,
    'forum_gruppo_standardtest' => 0,
    'forum_gruppo_standardtraspar_enza_siti_web_p_a' => 0,
    'forum_gruppo_standardtrasparenza_e_dati_aperti' => 0,
    'forum_gruppo_standardtrasparenza_nelle_procedure_di_procurement_laboratori_tematici_bandi_di_gara_e_appalti_pubblici' => 0,
    'forum_gruppo_standardtrasparenza_nelle_procedure_di_procurement_percorso_di_assistenza_ai_controller_di_i_livello_adg_fesr' => 0,
    'forum_gruppo_standarduna_griglia_per_analizzare_i_testi_dei_siti_web_della_pa_un_progetto_di_monitoraggio' => 0,
    'forum_gruppo_standardvalore_dei_contenuti' => 0,
    'forum_gruppo_standardvalutare_salute_bp' => 0,
    'forum_gruppo_standardvalutare_salute_valuoc' => 0,
    'forum_gruppo_standardwebpa_formez' => 0,
    'user_topics' => 0,
    'userpoints' => 0,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Criterio di ordinamento: COUNT(Termine della tassonomia: ID Termine) */
  $handler->display->display_options['sorts']['tid']['id'] = 'tid';
  $handler->display->display_options['sorts']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['tid']['field'] = 'tid';
  $handler->display->display_options['sorts']['tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['sorts']['tid']['group_type'] = 'count';
  $handler->display->display_options['sorts']['tid']['order'] = 'DESC';
  /* Criterio di ordinamento: Globale: Casuale */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';

  /* Display: OG: Tag cloud */
  $handler = $view->new_display('block', 'OG: Tag cloud', 'block_1');
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Criterio di ordinamento: COUNT(Termine della tassonomia: ID Termine) */
  $handler->display->display_options['sorts']['tid']['id'] = 'tid';
  $handler->display->display_options['sorts']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['tid']['field'] = 'tid';
  $handler->display->display_options['sorts']['tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['sorts']['tid']['group_type'] = 'count';
  $handler->display->display_options['sorts']['tid']['order'] = 'DESC';
  /* Criterio di ordinamento: Globale: Casuale */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
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
  $translatables['tag_clouds'] = array(
    t('Master'),
    t('Tag Cloud'),
    t('altro'),
    t('Applica'),
    t('Ripristina'),
    t('Ordina per'),
    t('Asc'),
    t('Disc'),
    t('termine'),
    t('OG membership from node'),
    t('.'),
    t('('),
    t(')'),
    t('Tutti'),
    t('Tag cloud'),
    t('OG: Tag cloud'),
  );
  $export['tag_clouds'] = $view;

  $view = new view();
  $view->name = 'test_tag_cloud';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Tag Cloud NEW';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'test_tag_cloud';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'altro';
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Applica';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Ripristina';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordina per';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Disc';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '40';
  $handler->display->display_options['style_plugin'] = 'tagadelic';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['style_options']['count_field'] = 'tid';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relazione: Termine della tassonomia: Contenuto che usa Argomenti */
  $handler->display->display_options['relationships']['reverse_field_blog_tags_node']['id'] = 'reverse_field_blog_tags_node';
  $handler->display->display_options['relationships']['reverse_field_blog_tags_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_blog_tags_node']['field'] = 'reverse_field_blog_tags_node';
  /* Relazione: OG membership: Group Nodo from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['relationship'] = 'reverse_field_blog_tags_node';
  /* Campo: Termine della tassonomia: Nome */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Campo: COUNT(Termine della tassonomia: ID Termine) */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['group_type'] = 'count';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  $handler->display->display_options['fields']['tid']['prefix'] = '(';
  $handler->display->display_options['fields']['tid']['suffix'] = ')';
  /* Criterio di ordinamento: COUNT(Termine della tassonomia: ID Termine) */
  $handler->display->display_options['sorts']['tid']['id'] = 'tid';
  $handler->display->display_options['sorts']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['tid']['field'] = 'tid';
  $handler->display->display_options['sorts']['tid']['group_type'] = 'count';
  $handler->display->display_options['sorts']['tid']['order'] = 'DESC';
  /* Filtro contestuale: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['relationship'] = 'reverse_field_blog_tags_node';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['exception']['title'] = 'Tutti';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'og_context';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['gid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['gid']['validate']['type'] = 'og';
  /* Criterio del filtro: Vocabolario della tassonomia: Nome ad uso interno */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'argomenti' => 'argomenti',
  );
  /* Criterio del filtro: Contenuto: Pubblicato */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'reverse_field_blog_tags_node';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Criterio del filtro: COUNT(Termine della tassonomia: ID Termine) */
  $handler->display->display_options['filters']['tid_raw']['id'] = 'tid_raw';
  $handler->display->display_options['filters']['tid_raw']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['tid_raw']['field'] = 'tid_raw';
  $handler->display->display_options['filters']['tid_raw']['group_type'] = 'count';
  $handler->display->display_options['filters']['tid_raw']['operator'] = '>';
  $handler->display->display_options['filters']['tid_raw']['value']['value'] = '1';

  /* Display: OG Tagcloud Block NEW */
  $handler = $view->new_display('block', 'OG Tagcloud Block NEW', 'og_tagcloud_block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Tag Cloud';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: OG membership: Group ID */
  $handler->display->display_options['fields']['gid']['id'] = 'gid';
  $handler->display->display_options['fields']['gid']['table'] = 'og_membership';
  $handler->display->display_options['fields']['gid']['field'] = 'gid';
  $handler->display->display_options['fields']['gid']['relationship'] = 'reverse_field_blog_tags_node';
  $handler->display->display_options['fields']['gid']['label'] = '';
  $handler->display->display_options['fields']['gid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['gid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['gid']['separator'] = '';
  /* Campo: Termine della tassonomia: Nome */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'node/[gid]/argomenti/[name]';
  $handler->display->display_options['fields']['name']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name']['hide_empty'] = TRUE;
  /* Campo: COUNT(Termine della tassonomia: ID Termine) */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['group_type'] = 'count';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  $handler->display->display_options['fields']['tid']['prefix'] = '(';
  $handler->display->display_options['fields']['tid']['suffix'] = ')';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterio del filtro: Vocabolario della tassonomia: Nome ad uso interno */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'argomenti' => 'argomenti',
  );
  /* Criterio del filtro: Contenuto: Pubblicato */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'reverse_field_blog_tags_node';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Criterio del filtro: COUNT(Termine della tassonomia: ID Termine) */
  $handler->display->display_options['filters']['tid_raw']['id'] = 'tid_raw';
  $handler->display->display_options['filters']['tid_raw']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['tid_raw']['field'] = 'tid_raw';
  $handler->display->display_options['filters']['tid_raw']['group_type'] = 'count';
  $handler->display->display_options['filters']['tid_raw']['operator'] = '>';
  $handler->display->display_options['filters']['tid_raw']['value']['value'] = '0';

  /* Display: Tagcloud Block NEW */
  $handler = $view->new_display('block', 'Tagcloud Block NEW', 'tagcloud_block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Tag Cloud';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relazione: Termine della tassonomia: Contenuto che usa Argomenti */
  $handler->display->display_options['relationships']['reverse_field_blog_tags_node']['id'] = 'reverse_field_blog_tags_node';
  $handler->display->display_options['relationships']['reverse_field_blog_tags_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_blog_tags_node']['field'] = 'reverse_field_blog_tags_node';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterio del filtro: Vocabolario della tassonomia: Nome ad uso interno */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'argomenti' => 'argomenti',
  );
  $handler->display->display_options['filters']['machine_name']['group'] = 1;
  /* Criterio del filtro: Contenuto: Pubblicato */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'reverse_field_blog_tags_node';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Criterio del filtro: COUNT(Termine della tassonomia: ID Termine) */
  $handler->display->display_options['filters']['tid_raw']['id'] = 'tid_raw';
  $handler->display->display_options['filters']['tid_raw']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['tid_raw']['field'] = 'tid_raw';
  $handler->display->display_options['filters']['tid_raw']['group_type'] = 'count';
  $handler->display->display_options['filters']['tid_raw']['operator'] = '>';
  $handler->display->display_options['filters']['tid_raw']['value']['value'] = '1';
  $translatables['test_tag_cloud'] = array(
    t('Master'),
    t('test_tag_cloud'),
    t('altro'),
    t('Applica'),
    t('Ripristina'),
    t('Ordina per'),
    t('Asc'),
    t('Disc'),
    t('field_blog_tags'),
    t('Group node from OG membership'),
    t('.'),
    t('('),
    t(')'),
    t('Tutti'),
    t('OG Tagcloud Block NEW'),
    t('Tag Cloud'),
    t('Tagcloud Block NEW'),
  );
  $export['test_tag_cloud'] = $view;

  $view = new view();
  $view->name = 'up_attivit_sui_miei_contenuti';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'comment';
  $view->human_name = 'UP: Attività sui miei contenuti';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Attività sui miei contenuti';
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
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'comment';
  /* Relazione: Commento: Contenuto */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'comment';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['required'] = TRUE;
  /* Campo: Commento: Titolo */
  $handler->display->display_options['fields']['subject']['id'] = 'subject';
  $handler->display->display_options['fields']['subject']['table'] = 'comment';
  $handler->display->display_options['fields']['subject']['field'] = 'subject';
  $handler->display->display_options['fields']['subject']['label'] = '';
  $handler->display->display_options['fields']['subject']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['subject']['alter']['ellipsis'] = FALSE;
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

  /* Display: UP: Attività sui miei contenuti */
  $handler = $view->new_display('block', 'UP: Attività sui miei contenuti', 'block');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'block-list-item';
  $handler->display->display_options['style_options']['class'] = 'block-list';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Comportamento se non ci sono risultati: Globale: Area di testo */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Non ci sono attività presenti';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relazione: Commento: Autore */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'comment';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['label'] = 'autore commento';
  /* Relazione: Utente: Profilo */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'main' => 'main',
  );
  /* Relazione: Commento: Contenuto */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'comment';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  /* Relazione: Contenuto: Autore */
  $handler->display->display_options['relationships']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['relationships']['uid_1']['table'] = 'node';
  $handler->display->display_options['relationships']['uid_1']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid_1']['relationship'] = 'nid';
  $handler->display->display_options['relationships']['uid_1']['label'] = 'Contenuto autore';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Campo: (hidden) Titolo commento */
  $handler->display->display_options['fields']['subject']['id'] = 'subject';
  $handler->display->display_options['fields']['subject']['table'] = 'comment';
  $handler->display->display_options['fields']['subject']['field'] = 'subject';
  $handler->display->display_options['fields']['subject']['ui_name'] = '(hidden) Titolo commento';
  $handler->display->display_options['fields']['subject']['label'] = '';
  $handler->display->display_options['fields']['subject']['exclude'] = TRUE;
  $handler->display->display_options['fields']['subject']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['subject']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['subject']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['subject']['element_default_classes'] = FALSE;
  /* Campo: (hidden) Data di inserimento */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'comment';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['ui_name'] = '(hidden) Data di inserimento';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Campo: (hidden) Titolo contenuto commentato */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'nid';
  $handler->display->display_options['fields']['title']['ui_name'] = '(hidden) Titolo contenuto commentato';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
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
  /* Campo: printed markup */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'printed markup';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="block-list-item-description"><span class="realname">[realname]</span> ha scritto <span class="subject">[subject]</span> il <span class="created">[created]</span> sul tuo contenuto <span class="title">[title]</span></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contestuale: Utente: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid_1';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Tutti';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
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
    'forum' => 'forum',
    'blog' => 'blog',
    'discussione' => 'discussione',
    'evento' => 'evento',
    'segnalazione' => 'segnalazione',
  );
  $handler->display->display_options['block_description'] = 'UP: Attività sui miei contenuti';
  $translatables['up_attivit_sui_miei_contenuti'] = array(
    t('Master'),
    t('Attività sui miei contenuti'),
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
    t('Contenuto'),
    t('UP: Attività sui miei contenuti'),
    t('Non ci sono attività presenti'),
    t('autore commento'),
    t('Profilo'),
    t('Contenuto autore'),
    t('<div class="block-list-item-description"><span class="realname">[realname]</span> ha scritto <span class="subject">[subject]</span> il <span class="created">[created]</span> sul tuo contenuto <span class="title">[title]</span></div>'),
    t('Tutti'),
  );
  $export['up_attivit_sui_miei_contenuti'] = $view;

  $view = new view();
  $view->name = 'user_social_blocks';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'User social blocks';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'altro';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Applica';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Ripristina';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordina per';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Disc';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '16';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Voci per pagina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tutto -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Scostamento';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« prima';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ precedente';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'seguente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'ultima »';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'block-list-item';
  $handler->display->display_options['style_options']['class'] = 'block-list';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Campo: Utente: Nome */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  /* Criterio di ordinamento: Utente: Data creazione */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Criterio del filtro: Utente: Attivo */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: HP Community Members */
  $handler = $view->new_display('panel_pane', 'HP Community Members', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Membri della comunità';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Comportamento se non ci sono risultati: Globale: Area di testo */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Non ci sono ancora utenti in questa comunità';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relazione: OG membership: OG membership from Utente */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  /* Relazione: Utente: Profilo */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: (hidden) Url profilo */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'views_entity_profile2';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['relationship'] = 'profile';
  $handler->display->display_options['fields']['url']['ui_name'] = '(hidden) Url profilo';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Campo: (hidden) Realname */
  $handler->display->display_options['fields']['realname']['id'] = 'realname';
  $handler->display->display_options['fields']['realname']['table'] = 'realname';
  $handler->display->display_options['fields']['realname']['field'] = 'realname';
  $handler->display->display_options['fields']['realname']['ui_name'] = '(hidden) Realname';
  $handler->display->display_options['fields']['realname']['label'] = '';
  $handler->display->display_options['fields']['realname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['realname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['realname']['link_to_user'] = FALSE;
  /* Campo: Profilo: Immagine profilo */
  $handler->display->display_options['fields']['field_profile_avatar']['id'] = 'field_profile_avatar';
  $handler->display->display_options['fields']['field_profile_avatar']['table'] = 'field_data_field_profile_avatar';
  $handler->display->display_options['fields']['field_profile_avatar']['field'] = 'field_profile_avatar';
  $handler->display->display_options['fields']['field_profile_avatar']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_profile_avatar']['label'] = '';
  $handler->display->display_options['fields']['field_profile_avatar']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_profile_avatar']['alter']['text'] = 'field_profile_avatar]';
  $handler->display->display_options['fields']['field_profile_avatar']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_profile_avatar']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['field_profile_avatar']['alter']['alt'] = 'Mostra il profilo di [realname]';
  $handler->display->display_options['fields']['field_profile_avatar']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_avatar']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_profile_avatar']['settings'] = array(
    'image_style' => 'user_thumb',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contestuale: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['gid']['exception']['title'] = 'Tutti';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['gid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['gid']['validate']['type'] = 'og';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterio del filtro: Utente: Attivo */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criterio del filtro: OG membership: State */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'og_membership';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['filters']['state']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['pane_title'] = 'COMMUNITY PAGE: Menbri della comunità';

  /* Display: UP: Rete utente (Following)  */
  $handler = $view->new_display('panel_pane', 'UP: Rete utente (Following) ', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Following';
  $handler->display->display_options['display_description'] = 'Sidebar block';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Vedi tutti gli utenti';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Piè di pagina: Globale: Area di testo */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'Link altro';
  $handler->display->display_options['footer']['area']['content'] = '<div class="total-count">Following: <a href="/users/!1/following">';
  $handler->display->display_options['footer']['area']['format'] = 'php_code';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  /* Piè di pagina: Globale: Riassunto del risultato */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  $handler->display->display_options['footer']['result']['label'] = 'Followers totali';
  $handler->display->display_options['footer']['result']['content'] = '<span>@total</span> persone</a></div>';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Comportamento se non ci sono risultati: Globale: Area di testo */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Nessun utente nella rete';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relazione: Flag: friend */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'friend';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Relazione: Utente: Profilo */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'main' => 'main',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: (hidden) Realname */
  $handler->display->display_options['fields']['realname']['id'] = 'realname';
  $handler->display->display_options['fields']['realname']['table'] = 'realname';
  $handler->display->display_options['fields']['realname']['field'] = 'realname';
  $handler->display->display_options['fields']['realname']['ui_name'] = '(hidden) Realname';
  $handler->display->display_options['fields']['realname']['label'] = '';
  $handler->display->display_options['fields']['realname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['realname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['realname']['link_to_user'] = FALSE;
  /* Campo: (hidden) Url profilo */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'views_entity_profile2';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['relationship'] = 'profile';
  $handler->display->display_options['fields']['url']['ui_name'] = '(hidden) Url profilo';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Campo: Profilo: Immagine profilo */
  $handler->display->display_options['fields']['field_profile_avatar']['id'] = 'field_profile_avatar';
  $handler->display->display_options['fields']['field_profile_avatar']['table'] = 'field_data_field_profile_avatar';
  $handler->display->display_options['fields']['field_profile_avatar']['field'] = 'field_profile_avatar';
  $handler->display->display_options['fields']['field_profile_avatar']['relationship'] = 'profile';
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
  $handler->display->display_options['fields']['field_profile_avatar']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_profile_avatar']['settings'] = array(
    'image_style' => 'user_preview',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contestuale: Flag: User uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'flag_content';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Tutti';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['pane_category']['name'] = 'Innovatori Views pane';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'panel',
      'context' => 'entity:search_api_autocomplete_search.enabled',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Flag: User uid',
    ),
  );

  /* Display: UP: Rete utente (Followers) */
  $handler = $view->new_display('panel_pane', 'UP: Rete utente (Followers)', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Followers';
  $handler->display->display_options['display_description'] = 'Sidebar block';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Mostra tutti';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_2';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Piè di pagina: Globale: Area di testo */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'Link altro';
  $handler->display->display_options['footer']['area']['content'] = '<div class="total-count">Followers: <a href="/users/!1/followers">';
  $handler->display->display_options['footer']['area']['format'] = 'php_code';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  /* Piè di pagina: Globale: Riassunto del risultato */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  $handler->display->display_options['footer']['result']['label'] = 'Counter + chiusura link';
  $handler->display->display_options['footer']['result']['content'] = '<span>@total</span> persone</a></div>';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Comportamento se non ci sono risultati: Globale: Area di testo */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Nessun utente nella rete';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relazione: Flag: friend */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'friend';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Relazione: Flag: Utente */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'flag_content';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Relazione: Utente: Profilo */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: (hidden) Realname */
  $handler->display->display_options['fields']['realname']['id'] = 'realname';
  $handler->display->display_options['fields']['realname']['table'] = 'realname';
  $handler->display->display_options['fields']['realname']['field'] = 'realname';
  $handler->display->display_options['fields']['realname']['relationship'] = 'uid';
  $handler->display->display_options['fields']['realname']['ui_name'] = '(hidden) Realname';
  $handler->display->display_options['fields']['realname']['label'] = '';
  $handler->display->display_options['fields']['realname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['realname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['realname']['link_to_user'] = FALSE;
  /* Campo: (hidden) Url profilo */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'views_entity_profile2';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['relationship'] = 'profile';
  $handler->display->display_options['fields']['url']['ui_name'] = '(hidden) Url profilo';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Campo: Profilo: Immagine profilo */
  $handler->display->display_options['fields']['field_profile_avatar']['id'] = 'field_profile_avatar';
  $handler->display->display_options['fields']['field_profile_avatar']['table'] = 'field_data_field_profile_avatar';
  $handler->display->display_options['fields']['field_profile_avatar']['field'] = 'field_profile_avatar';
  $handler->display->display_options['fields']['field_profile_avatar']['relationship'] = 'profile';
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
  $handler->display->display_options['fields']['field_profile_avatar']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_profile_avatar']['settings'] = array(
    'image_style' => 'user_preview',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contestuale: Flag: ID contenuto */
  $handler->display->display_options['arguments']['content_id']['id'] = 'content_id';
  $handler->display->display_options['arguments']['content_id']['table'] = 'flag_content';
  $handler->display->display_options['arguments']['content_id']['field'] = 'content_id';
  $handler->display->display_options['arguments']['content_id']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['arguments']['content_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['content_id']['exception']['title'] = 'Tutti';
  $handler->display->display_options['arguments']['content_id']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['content_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['content_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['content_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['content_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['content_id']['validate']['type'] = 'flag_flaggable_user';
  $handler->display->display_options['pane_category']['name'] = 'Innovatori Views pane';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'content_id' => array(
      'type' => 'panel',
      'context' => 'entity:search_api_autocomplete_search.enabled',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Flag: ID contenuto',
    ),
  );

  /* Display: UP: Rete utente (Followers Page) */
  $handler = $view->new_display('panel_pane', 'UP: Rete utente (Followers Page)', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Followers';
  $handler->display->display_options['display_description'] = 'Contenuto della pagina con l\'elenco di tutte le persone che seguono l\'utente';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Mostra tutti';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_2';
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
  $handler->display->display_options['style_options']['row_class'] = 'search-results-item';
  $handler->display->display_options['style_options']['class'] = 'search-results';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Comportamento se non ci sono risultati: Globale: Area di testo */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Nessun utente nella rete';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relazione: Flag: friend */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'friend';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Relazione: Flag: Utente */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'flag_content';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Relazione: Utente: Profilo */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: (hidden) Url profilo */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'views_entity_profile2';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['relationship'] = 'profile';
  $handler->display->display_options['fields']['url']['ui_name'] = '(hidden) Url profilo';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
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
  $handler->display->display_options['fields']['realname']['link_to_user'] = FALSE;
  /* Campo: (hidden) Ente */
  $handler->display->display_options['fields']['field_profile_ente']['id'] = 'field_profile_ente';
  $handler->display->display_options['fields']['field_profile_ente']['table'] = 'field_data_field_profile_ente';
  $handler->display->display_options['fields']['field_profile_ente']['field'] = 'field_profile_ente';
  $handler->display->display_options['fields']['field_profile_ente']['relationship'] = 'profile';
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
  $handler->display->display_options['fields']['field_profile_avatar']['relationship'] = 'profile';
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
  /* Campo: search-results-item-content-wr */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'search-results-item-content-wr';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="search-results-item-content-wr">';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Campo: header: Realname - Ente */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = 'header: Realname - Ente';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<h2><a href="[url]" title="Visualizza il profilo di [realname]">[realname]</a></h2>
[field_profile_ente]';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_2']['element_wrapper_type'] = 'header';
  $handler->display->display_options['fields']['nothing_2']['element_wrapper_class'] = 'search-results-item-header';
  $handler->display->display_options['fields']['nothing_2']['element_default_classes'] = FALSE;
  /* Campo: Profilo: Una mia breve presentazione */
  $handler->display->display_options['fields']['field_profile_summary']['id'] = 'field_profile_summary';
  $handler->display->display_options['fields']['field_profile_summary']['table'] = 'field_data_field_profile_summary';
  $handler->display->display_options['fields']['field_profile_summary']['field'] = 'field_profile_summary';
  $handler->display->display_options['fields']['field_profile_summary']['relationship'] = 'profile';
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
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = '/search-result-item-content-wr';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '</div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contestuale: Flag: ID contenuto */
  $handler->display->display_options['arguments']['content_id']['id'] = 'content_id';
  $handler->display->display_options['arguments']['content_id']['table'] = 'flag_content';
  $handler->display->display_options['arguments']['content_id']['field'] = 'content_id';
  $handler->display->display_options['arguments']['content_id']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['arguments']['content_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['content_id']['exception']['title'] = 'Tutti';
  $handler->display->display_options['arguments']['content_id']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['content_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['content_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['content_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['content_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['content_id']['validate']['type'] = 'flag_flaggable_user';
  $handler->display->display_options['pane_category']['name'] = 'Innovatori Views pane';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'content_id' => array(
      'type' => 'panel',
      'context' => 'entity:search_api_autocomplete_search.enabled',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Flag: ID contenuto',
    ),
  );

  /* Display: UP: Rete utente (Following Page)  */
  $handler = $view->new_display('panel_pane', 'UP: Rete utente (Following Page) ', 'panel_pane_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Following';
  $handler->display->display_options['display_description'] = 'Contenuto della pagina con l\'elenco di tutte le persone che l\'utente sta seguendo';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Vedi tutti gli utenti';
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
  $handler->display->display_options['style_options']['row_class'] = 'search-results-item';
  $handler->display->display_options['style_options']['class'] = 'search-results';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Comportamento se non ci sono risultati: Globale: Area di testo */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Nessun utente nella rete';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relazione: Flag: friend */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'friend';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Relazione: Utente: Profilo */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'main' => 'main',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: (hidden) Url profilo */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'views_entity_profile2';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['relationship'] = 'profile';
  $handler->display->display_options['fields']['url']['ui_name'] = '(hidden) Url profilo';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Campo: (hidden) Realname */
  $handler->display->display_options['fields']['realname']['id'] = 'realname';
  $handler->display->display_options['fields']['realname']['table'] = 'realname';
  $handler->display->display_options['fields']['realname']['field'] = 'realname';
  $handler->display->display_options['fields']['realname']['ui_name'] = '(hidden) Realname';
  $handler->display->display_options['fields']['realname']['label'] = '';
  $handler->display->display_options['fields']['realname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['realname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['realname']['link_to_user'] = FALSE;
  /* Campo: (hidden) Ente */
  $handler->display->display_options['fields']['field_profile_ente']['id'] = 'field_profile_ente';
  $handler->display->display_options['fields']['field_profile_ente']['table'] = 'field_data_field_profile_ente';
  $handler->display->display_options['fields']['field_profile_ente']['field'] = 'field_profile_ente';
  $handler->display->display_options['fields']['field_profile_ente']['relationship'] = 'profile';
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
  $handler->display->display_options['fields']['field_profile_avatar']['relationship'] = 'profile';
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
  /* Campo: search-results-item-content-wr */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'search-results-item-content-wr';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="search-results-item-content-wr">';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Campo: header: Realname - Ente */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = 'header: Realname - Ente';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<h2><a href="[url]" title="Visualizza il profilo di [realname]">[realname]</a></h2>
[field_profile_ente]';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_2']['element_wrapper_type'] = 'header';
  $handler->display->display_options['fields']['nothing_2']['element_wrapper_class'] = 'search-results-item-header';
  $handler->display->display_options['fields']['nothing_2']['element_default_classes'] = FALSE;
  /* Campo: Profilo: Una mia breve presentazione */
  $handler->display->display_options['fields']['field_profile_summary']['id'] = 'field_profile_summary';
  $handler->display->display_options['fields']['field_profile_summary']['table'] = 'field_data_field_profile_summary';
  $handler->display->display_options['fields']['field_profile_summary']['field'] = 'field_profile_summary';
  $handler->display->display_options['fields']['field_profile_summary']['relationship'] = 'profile';
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
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = '/search-result-item-content-wr';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '</div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contestuale: Flag: User uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'flag_content';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Tutti';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['pane_category']['name'] = 'Innovatori Views pane';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'panel',
      'context' => 'entity:search_api_autocomplete_search.enabled',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Flag: User uid',
    ),
  );
  $translatables['user_social_blocks'] = array(
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
    t('Nome'),
    t('HP Community Members'),
    t('Membri della comunità'),
    t('Non ci sono ancora utenti in questa comunità'),
    t('OG membership from user'),
    t('Profilo'),
    t('field_profile_avatar]'),
    t('Mostra il profilo di [realname]'),
    t('Tutti'),
    t('COMMUNITY PAGE: Menbri della comunità'),
    t('View panes'),
    t('UP: Rete utente (Following) '),
    t('Following'),
    t('Sidebar block'),
    t('Vedi tutti gli utenti'),
    t('Link altro'),
    t('<div class="total-count">Following: <a href="/users/!1/following">'),
    t('Followers totali'),
    t('<span>@total</span> persone</a></div>'),
    t('Nessun utente nella rete'),
    t('flag'),
    t('[field_profile_avatar]'),
    t('Innovatori Views pane'),
    t('UP: Rete utente (Followers)'),
    t('Followers'),
    t('Mostra tutti'),
    t('<div class="total-count">Followers: <a href="/users/!1/followers">'),
    t('Counter + chiusura link'),
    t('Flag user'),
    t('UP: Rete utente (Followers Page)'),
    t('Contenuto della pagina con l\'elenco di tutte le persone che seguono l\'utente'),
    t('<h3>[field_profile_ente]</h3>'),
    t('<div class="search-results-item-content-wr">'),
    t('<h2><a href="[url]" title="Visualizza il profilo di [realname]">[realname]</a></h2>
[field_profile_ente]'),
    t('[field_profile_summary]'),
    t('</div>'),
    t('UP: Rete utente (Following Page) '),
    t('Contenuto della pagina con l\'elenco di tutte le persone che l\'utente sta seguendo'),
  );
  $export['user_social_blocks'] = $view;

  return $export;
}
