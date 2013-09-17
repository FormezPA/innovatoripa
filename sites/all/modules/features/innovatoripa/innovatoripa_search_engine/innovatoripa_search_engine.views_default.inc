<?php
/**
 * @file
 * innovatoripa_search_engine.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function innovatoripa_search_engine_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'innovatori_content_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_default_node_index';
  $view->human_name = 'Innovatori: Content search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
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
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Voci per pagina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tutto -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Scostamento';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« prima';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ precedente';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'seguente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'ultima »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  /* Campo: Indexed Contenuto: ID del nodo */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Campo: Indexed Contenuto: Titolo */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Criterio di ordinamento: Indexed Contenuto: Numero commenti */
  $handler->display->display_options['sorts']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['sorts']['comment_count']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['sorts']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['sorts']['comment_count']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['comment_count']['expose']['label'] = 'Post più commentati';
  /* Criterio di ordinamento: Indexed Contenuto: Numero di accessi */
  $handler->display->display_options['sorts']['views']['id'] = 'views';
  $handler->display->display_options['sorts']['views']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['sorts']['views']['field'] = 'views';
  $handler->display->display_options['sorts']['views']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['views']['expose']['label'] = 'Post più letti';
  /* Criterio di ordinamento: Indexed Contenuto: Data di creazione */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Data di creazione';
  /* Criterio del filtro: Indexed Contenuto: Tipo di contenuto */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'blog' => 'blog',
  );
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Tipo di contenuto';
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
  $handler->display->display_options['filters']['type']['expose']['reduce'] = 0;
  /* Criterio del filtro: Cerca: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Cerca nei post';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
    'body:value' => 'body:value',
  );

  /* Display: Blog Search (Content Pane) */
  $handler = $view->new_display('panel_pane', 'Blog Search (Content Pane)', 'panel_pane_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Cerca';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Ripristina';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordina per';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Disc';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Comportamento se non ci sono risultati: Globale: Area di testo */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Mi dispiace, la tua ricerca non ha prodotto risultati';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Criterio di ordinamento: Indexed Contenuto: Data di creazione */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Post più recenti';
  /* Criterio di ordinamento: Indexed Contenuto: Numero commenti */
  $handler->display->display_options['sorts']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['sorts']['comment_count']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['sorts']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['sorts']['comment_count']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['comment_count']['expose']['label'] = 'Post più commentati';
  /* Criterio di ordinamento: Indexed Contenuto: Numero di accessi */
  $handler->display->display_options['sorts']['views']['id'] = 'views';
  $handler->display->display_options['sorts']['views']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['sorts']['views']['field'] = 'views';
  $handler->display->display_options['sorts']['views']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['views']['expose']['label'] = 'Post più letti';
  $handler->display->display_options['pane_category']['name'] = 'Innovatori Views pane';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Community Search (Content pane) */
  $handler = $view->new_display('panel_pane', 'Community Search (Content pane)', 'panel_pane_2');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'clearfix';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Cerca';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Ripristina';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordina per';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Disc';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
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
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Comportamento se non ci sono risultati: Globale: Area di testo */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Mi dispiace, la tua ricerca non ha prodotto risultati';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: (hidden) Last post nid */
  $handler->display->display_options['fields']['field_og_stats_last_post_nid']['id'] = 'field_og_stats_last_post_nid';
  $handler->display->display_options['fields']['field_og_stats_last_post_nid']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_og_stats_last_post_nid']['field'] = 'field_og_stats_last_post_nid';
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
  $handler->display->display_options['fields']['field_og_stats_last_post_date']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_og_stats_last_post_date']['field'] = 'field_og_stats_last_post_date';
  $handler->display->display_options['fields']['field_og_stats_last_post_date']['ui_name'] = '(hidden) Last post timestamp (rewrited)';
  $handler->display->display_options['fields']['field_og_stats_last_post_date']['label'] = '';
  $handler->display->display_options['fields']['field_og_stats_last_post_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_og_stats_last_post_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_og_stats_last_post_date']['alter']['text'] = 'Ultimo contenuto <a href="/node/[field_og_stats_last_post_nid]" title="Vai all\'ultimo contenuto inserito">[field_og_stats_last_post_date]</a></span> - ';
  $handler->display->display_options['fields']['field_og_stats_last_post_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_og_stats_last_post_date']['element_default_classes'] = FALSE;
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
  $handler->display->display_options['fields']['field_og_post_count']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_og_post_count']['field'] = 'field_og_post_count';
  $handler->display->display_options['fields']['field_og_post_count']['ui_name'] = '(hidden) Post count';
  $handler->display->display_options['fields']['field_og_post_count']['label'] = '';
  $handler->display->display_options['fields']['field_og_post_count']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_og_post_count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_og_post_count']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_og_post_count']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_og_post_count']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Campo: (hidden) User count */
  $handler->display->display_options['fields']['field_og_user_count']['id'] = 'field_og_user_count';
  $handler->display->display_options['fields']['field_og_user_count']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_og_user_count']['field'] = 'field_og_user_count';
  $handler->display->display_options['fields']['field_og_user_count']['ui_name'] = '(hidden) User count';
  $handler->display->display_options['fields']['field_og_user_count']['label'] = '';
  $handler->display->display_options['fields']['field_og_user_count']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_og_user_count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_og_user_count']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_og_user_count']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_og_user_count']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Campo: Indexed Contenuto: Logo */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
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
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Campo: Indexed Contenuto: Titolo */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'header';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'search-results-item-header';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Campo: Indexed Contenuto: The main body text */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['body']['field'] = 'body';
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
  /* Campo: footer info */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = 'footer info';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<div class="search-results-item-info">
   [field_og_stats_last_post_date]
   <span class="search-results-item-info_content-count"><strong>[field_og_post_count]</strong> contenuti</span> - 
   <span class="search-results-item-info_members-count"><strong>[field_og_user_count]</strong> iscritti</span>
</div>';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_2']['element_wrapper_type'] = 'footer';
  $handler->display->display_options['fields']['nothing_2']['element_wrapper_class'] = 'search-results-item-footer';
  $handler->display->display_options['fields']['nothing_2']['element_default_classes'] = FALSE;
  /* Campo: /search-results-item-content-wr */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = '/search-results-item-content-wr';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '</div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Criterio di ordinamento: Indexed Contenuto: Data di creazione */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Le ultime create';
  /* Criterio di ordinamento: Indexed Contenuto: Post count */
  $handler->display->display_options['sorts']['field_og_post_count']['id'] = 'field_og_post_count';
  $handler->display->display_options['sorts']['field_og_post_count']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['sorts']['field_og_post_count']['field'] = 'field_og_post_count';
  $handler->display->display_options['sorts']['field_og_post_count']['order'] = 'DESC';
  $handler->display->display_options['sorts']['field_og_post_count']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_og_post_count']['expose']['label'] = 'I più attivi';
  /* Criterio di ordinamento: Indexed Contenuto: User count */
  $handler->display->display_options['sorts']['field_og_user_count']['id'] = 'field_og_user_count';
  $handler->display->display_options['sorts']['field_og_user_count']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['sorts']['field_og_user_count']['field'] = 'field_og_user_count';
  $handler->display->display_options['sorts']['field_og_user_count']['order'] = 'DESC';
  $handler->display->display_options['sorts']['field_og_user_count']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_og_user_count']['expose']['label'] = 'I più numerosi';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterio del filtro: Indexed Contenuto: Tipo di contenuto */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'comunita' => 'comunita',
  );
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Tipo di contenuto';
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
  $handler->display->display_options['filters']['type']['expose']['reduce'] = 0;
  /* Criterio del filtro: Cerca: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Trova la comunità';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    18 => 0,
    16 => 0,
    19 => 0,
    17 => 0,
    15 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
    'title' => 'title',
    'body:value' => 'body:value',
  );
  $handler->display->display_options['pane_category']['name'] = 'Innovatori Views pane';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: General Search (Content Pane) */
  $handler = $view->new_display('panel_pane', 'General Search (Content Pane)', 'panel_pane_3');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'input_required';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Cerca';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Ripristina';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordina per';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Disc';
  $handler->display->display_options['exposed_form']['options']['text_input_required'] = 'Inserisci i termini di ricerca e clicca "Cerca" per avere risultati';
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Comportamento se non ci sono risultati: Globale: Area di testo */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Non ci sono risultati di ricerca oppure non hai inseriti termini di ricerca';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Criterio di ordinamento: Indexed Contenuto: Data di creazione */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Data di creazione';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterio del filtro: Indexed Contenuto: Tipo di contenuto */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_default_node_index';
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
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Tipo di contenuto';
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
  $handler->display->display_options['filters']['type']['expose']['reduce'] = 0;
  /* Criterio del filtro: Cerca: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Cerca tra i contenuti';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    18 => 0,
    16 => 0,
    19 => 0,
    17 => 0,
    15 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
    'title' => 'title',
    'body:value' => 'body:value',
    'body:summary' => 'body:summary',
  );
  $handler->display->display_options['pane_category']['name'] = 'Innovatori Views pane';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Groups Search (page) */
  $handler = $view->new_display('page', 'Groups Search (page)', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Groups search';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Cerca';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Ripristina';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordina per';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Disc';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relazione: Indexed Contenuto: OG memberships */
  $handler->display->display_options['relationships']['og_membership']['id'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['relationships']['og_membership']['field'] = 'og_membership';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Criterio di ordinamento: Indexed Contenuto: Numero commenti */
  $handler->display->display_options['sorts']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['sorts']['comment_count']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['sorts']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['sorts']['comment_count']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['comment_count']['expose']['label'] = 'Post più commentati';
  /* Criterio di ordinamento: Indexed Contenuto: Data di creazione */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Data di creazione';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contestuale: Indexed Contenuto: Comunità */
  $handler->display->display_options['arguments']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['arguments']['og_group_ref']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['arguments']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['arguments']['og_group_ref']['default_action'] = 'default';
  $handler->display->display_options['arguments']['og_group_ref']['exception']['title'] = 'Tutti';
  $handler->display->display_options['arguments']['og_group_ref']['breadcrumb_enable'] = TRUE;
  $handler->display->display_options['arguments']['og_group_ref']['breadcrumb'] = '%';
  $handler->display->display_options['arguments']['og_group_ref']['default_argument_type'] = 'og_context';
  $handler->display->display_options['arguments']['og_group_ref']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['og_group_ref']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['og_group_ref']['not'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterio del filtro: Indexed Contenuto: Tipo di contenuto */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'evento' => 'evento',
    'blog' => 'blog',
    'discussione' => 'discussione',
    'domanda' => 'domanda',
    'segnalazione' => 'segnalazione',
    'poll' => 'poll',
  );
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Tipo di contenuto';
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
  $handler->display->display_options['filters']['type']['expose']['reduce'] = 0;
  /* Criterio del filtro: Cerca: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Cerca nei post';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
    'body:value' => 'body:value',
  );
  $handler->display->display_options['path'] = 'groups/search/%';
  $translatables['innovatori_content_search'] = array(
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
    t('ID del nodo'),
    t('.'),
    t(','),
    t('Titolo'),
    t('Post più commentati'),
    t('Post più letti'),
    t('Data di creazione'),
    t('Tipo di contenuto'),
    t('Cerca nei post'),
    t('Blog Search (Content Pane)'),
    t('Cerca'),
    t('Mi dispiace, la tua ricerca non ha prodotto risultati'),
    t('Post più recenti'),
    t('Innovatori Views pane'),
    t('Community Search (Content pane)'),
    t('Ultimo contenuto <a href="/node/[field_og_stats_last_post_nid]" title="Vai all\'ultimo contenuto inserito">[field_og_stats_last_post_date]</a></span> - '),
    t('<div class="search-results-item-content-wr">'),
    t('<div class="search-results-item-info">
   [field_og_stats_last_post_date]
   <span class="search-results-item-info_content-count"><strong>[field_og_post_count]</strong> contenuti</span> - 
   <span class="search-results-item-info_members-count"><strong>[field_og_user_count]</strong> iscritti</span>
</div>'),
    t('</div>'),
    t('Le ultime create'),
    t('I più attivi'),
    t('I più numerosi'),
    t('Trova la comunità'),
    t('General Search (Content Pane)'),
    t('Inserisci i termini di ricerca e clicca "Cerca" per avere risultati'),
    t('Non ci sono risultati di ricerca oppure non hai inseriti termini di ricerca'),
    t('Cerca tra i contenuti'),
    t('Groups Search (page)'),
    t('Groups search'),
    t('OG memberships'),
    t('Tutti'),
    t('%'),
  );
  $export['innovatori_content_search'] = $view;

  $view = new view();
  $view->name = 'users_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_users_search';
  $view->human_name = 'Users search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'altro';
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Applica';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Ripristina';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordina per';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Disc';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relazione: Indexed Utente: Informazioni utente profile */
  $handler->display->display_options['relationships']['profile_main']['id'] = 'profile_main';
  $handler->display->display_options['relationships']['profile_main']['table'] = 'search_api_index_users_search';
  $handler->display->display_options['relationships']['profile_main']['field'] = 'profile_main';
  /* Campo: Profilo: Immagine profilo */
  $handler->display->display_options['fields']['field_profile_avatar_1']['id'] = 'field_profile_avatar_1';
  $handler->display->display_options['fields']['field_profile_avatar_1']['table'] = 'entity_profile2';
  $handler->display->display_options['fields']['field_profile_avatar_1']['field'] = 'field_profile_avatar';
  $handler->display->display_options['fields']['field_profile_avatar_1']['relationship'] = 'profile_main';
  $handler->display->display_options['fields']['field_profile_avatar_1']['label'] = '';
  $handler->display->display_options['fields']['field_profile_avatar_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_avatar_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_profile_avatar_1']['settings'] = array(
    'image_style' => 'user_thumb',
    'image_link' => 'content',
  );
  /* Campo: Informazioni utente profile: Nome (indexed) */
  $handler->display->display_options['fields']['profile_main_field_profile_nome']['id'] = 'profile_main_field_profile_nome';
  $handler->display->display_options['fields']['profile_main_field_profile_nome']['table'] = 'search_api_index_users_search';
  $handler->display->display_options['fields']['profile_main_field_profile_nome']['field'] = 'profile_main_field_profile_nome';
  $handler->display->display_options['fields']['profile_main_field_profile_nome']['label'] = '';
  $handler->display->display_options['fields']['profile_main_field_profile_nome']['element_label_colon'] = FALSE;
  /* Campo: Informazioni utente profile: Cognome (indexed) */
  $handler->display->display_options['fields']['profile_main_field_profile_cognome']['id'] = 'profile_main_field_profile_cognome';
  $handler->display->display_options['fields']['profile_main_field_profile_cognome']['table'] = 'search_api_index_users_search';
  $handler->display->display_options['fields']['profile_main_field_profile_cognome']['field'] = 'profile_main_field_profile_cognome';
  $handler->display->display_options['fields']['profile_main_field_profile_cognome']['label'] = '';
  $handler->display->display_options['fields']['profile_main_field_profile_cognome']['element_label_colon'] = FALSE;
  /* Campo: Informazioni utente profile: Ente di appartenenza (indexed) */
  $handler->display->display_options['fields']['profile_main_field_profile_ente']['id'] = 'profile_main_field_profile_ente';
  $handler->display->display_options['fields']['profile_main_field_profile_ente']['table'] = 'search_api_index_users_search';
  $handler->display->display_options['fields']['profile_main_field_profile_ente']['field'] = 'profile_main_field_profile_ente';
  $handler->display->display_options['fields']['profile_main_field_profile_ente']['label'] = '';
  $handler->display->display_options['fields']['profile_main_field_profile_ente']['element_label_colon'] = FALSE;
  /* Criterio di ordinamento: Indexed Utente: Creato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'search_api_index_users_search';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Data di iscrizione';
  /* Criterio del filtro: Cerca: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_users_search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Cerca persone';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
    'profile_main:field_profile_nome' => 'profile_main:field_profile_nome',
    'profile_main:field_profile_cognome' => 'profile_main:field_profile_cognome',
    'profile_main:field_profile_summary' => 'profile_main:field_profile_summary',
  );
  /* Criterio del filtro: Indexed Utente: Ruoli utente */
  $handler->display->display_options['filters']['roles']['id'] = 'roles';
  $handler->display->display_options['filters']['roles']['table'] = 'search_api_index_users_search';
  $handler->display->display_options['filters']['roles']['field'] = 'roles';
  $handler->display->display_options['filters']['roles']['operator'] = '<>';
  $handler->display->display_options['filters']['roles']['value'] = array(
    1 => '1',
  );

  /* Display: User search pane (SearchAPI) */
  $handler = $view->new_display('panel_pane', 'User search pane (SearchAPI)', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Risultati di ricerca';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Applica';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Ripristina';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordina per';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Disc';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
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
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Comportamento se non ci sono risultati: Globale: Area di testo */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Mi dispiace, la tua ricerca non ha prodotto risultati';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relazione: Indexed Utente: Informazioni utente profile */
  $handler->display->display_options['relationships']['profile_main']['id'] = 'profile_main';
  $handler->display->display_options['relationships']['profile_main']['table'] = 'search_api_index_users_search';
  $handler->display->display_options['relationships']['profile_main']['field'] = 'profile_main';
  /* Relazione: Profilo: Utente */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'entity_profile2';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['relationships']['user']['relationship'] = 'profile_main';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: (hidden) Url profilo */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_users_search';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['ui_name'] = '(hidden) Url profilo';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Campo: (hidden) Utente uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'search_api_index_users_search';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['ui_name'] = '(hidden) Utente uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['separator'] = '';
  $handler->display->display_options['fields']['uid']['link_to_entity'] = 0;
  /* Campo: (hidden) Ruoli utente */
  $handler->display->display_options['fields']['roles']['id'] = 'roles';
  $handler->display->display_options['fields']['roles']['table'] = 'search_api_index_users_search';
  $handler->display->display_options['fields']['roles']['field'] = 'roles';
  $handler->display->display_options['fields']['roles']['ui_name'] = '(hidden) Ruoli utente';
  $handler->display->display_options['fields']['roles']['label'] = '';
  $handler->display->display_options['fields']['roles']['exclude'] = TRUE;
  $handler->display->display_options['fields']['roles']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['roles']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['roles']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['roles']['format_name'] = 1;
  /* Campo: (hidden) Nome */
  $handler->display->display_options['fields']['profile_main_field_profile_nome']['id'] = 'profile_main_field_profile_nome';
  $handler->display->display_options['fields']['profile_main_field_profile_nome']['table'] = 'search_api_index_users_search';
  $handler->display->display_options['fields']['profile_main_field_profile_nome']['field'] = 'profile_main_field_profile_nome';
  $handler->display->display_options['fields']['profile_main_field_profile_nome']['ui_name'] = '(hidden) Nome';
  $handler->display->display_options['fields']['profile_main_field_profile_nome']['label'] = '';
  $handler->display->display_options['fields']['profile_main_field_profile_nome']['exclude'] = TRUE;
  $handler->display->display_options['fields']['profile_main_field_profile_nome']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['profile_main_field_profile_nome']['element_default_classes'] = FALSE;
  /* Campo: (hidden) Cognome */
  $handler->display->display_options['fields']['profile_main_field_profile_cognome']['id'] = 'profile_main_field_profile_cognome';
  $handler->display->display_options['fields']['profile_main_field_profile_cognome']['table'] = 'search_api_index_users_search';
  $handler->display->display_options['fields']['profile_main_field_profile_cognome']['field'] = 'profile_main_field_profile_cognome';
  $handler->display->display_options['fields']['profile_main_field_profile_cognome']['ui_name'] = '(hidden) Cognome';
  $handler->display->display_options['fields']['profile_main_field_profile_cognome']['label'] = '';
  $handler->display->display_options['fields']['profile_main_field_profile_cognome']['exclude'] = TRUE;
  $handler->display->display_options['fields']['profile_main_field_profile_cognome']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['profile_main_field_profile_cognome']['element_default_classes'] = FALSE;
  /* Campo: (hidden) Ente */
  $handler->display->display_options['fields']['profile_main_field_profile_ente']['id'] = 'profile_main_field_profile_ente';
  $handler->display->display_options['fields']['profile_main_field_profile_ente']['table'] = 'search_api_index_users_search';
  $handler->display->display_options['fields']['profile_main_field_profile_ente']['field'] = 'profile_main_field_profile_ente';
  $handler->display->display_options['fields']['profile_main_field_profile_ente']['ui_name'] = '(hidden) Ente';
  $handler->display->display_options['fields']['profile_main_field_profile_ente']['label'] = '';
  $handler->display->display_options['fields']['profile_main_field_profile_ente']['exclude'] = TRUE;
  $handler->display->display_options['fields']['profile_main_field_profile_ente']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['profile_main_field_profile_ente']['alter']['text'] = '<h3>[profile_main_field_profile_ente]</h3>';
  $handler->display->display_options['fields']['profile_main_field_profile_ente']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['profile_main_field_profile_ente']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['profile_main_field_profile_ente']['hide_empty'] = TRUE;
  /* Campo: Profilo: Immagine profilo */
  $handler->display->display_options['fields']['field_profile_avatar_1']['id'] = 'field_profile_avatar_1';
  $handler->display->display_options['fields']['field_profile_avatar_1']['table'] = 'entity_profile2';
  $handler->display->display_options['fields']['field_profile_avatar_1']['field'] = 'field_profile_avatar';
  $handler->display->display_options['fields']['field_profile_avatar_1']['relationship'] = 'profile_main';
  $handler->display->display_options['fields']['field_profile_avatar_1']['label'] = '';
  $handler->display->display_options['fields']['field_profile_avatar_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_avatar_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_profile_avatar_1']['element_wrapper_class'] = 'search-results-item-image';
  $handler->display->display_options['fields']['field_profile_avatar_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile_avatar_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_profile_avatar_1']['settings'] = array(
    'image_style' => 'search_result',
    'image_link' => 'content',
  );
  /* Campo: div class=search-results-item-content-wr */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'div class=search-results-item-content-wr';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="search-results-item-content-wr">';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Campo: header: Nome Cognome - Ente */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'header: Nome Cognome - Ente';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h2><a href="[url]">[profile_main_field_profile_nome] [profile_main_field_profile_cognome]</a></h2>
[profile_main_field_profile_ente]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'header';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'search-results-item-header';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Campo: Informazioni utente profile: Una mia breve presentazione (indexed) */
  $handler->display->display_options['fields']['profile_main_field_profile_summary']['id'] = 'profile_main_field_profile_summary';
  $handler->display->display_options['fields']['profile_main_field_profile_summary']['table'] = 'search_api_index_users_search';
  $handler->display->display_options['fields']['profile_main_field_profile_summary']['field'] = 'profile_main_field_profile_summary';
  $handler->display->display_options['fields']['profile_main_field_profile_summary']['label'] = '';
  $handler->display->display_options['fields']['profile_main_field_profile_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['profile_main_field_profile_summary']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['profile_main_field_profile_summary']['element_wrapper_class'] = 'search-results-item-text';
  $handler->display->display_options['fields']['profile_main_field_profile_summary']['element_default_classes'] = FALSE;
  /* Campo: /div */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = '/div';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '</div>';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Criterio di ordinamento: Indexed Utente: Creato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'search_api_index_users_search';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Data di iscrizione';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterio del filtro: Cerca: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_users_search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Cerca persone';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
    'profile_main:field_profile_nome' => 'profile_main:field_profile_nome',
    'profile_main:field_profile_cognome' => 'profile_main:field_profile_cognome',
    'profile_main:field_profile_summary' => 'profile_main:field_profile_summary',
  );
  /* Criterio del filtro: Indexed Utente: Ruoli utente */
  $handler->display->display_options['filters']['roles']['id'] = 'roles';
  $handler->display->display_options['filters']['roles']['table'] = 'search_api_index_users_search';
  $handler->display->display_options['filters']['roles']['field'] = 'roles';
  $handler->display->display_options['filters']['roles']['operator'] = '<>';
  $handler->display->display_options['filters']['roles']['value'] = array(
    1 => '1',
  );
  /* Criterio del filtro: Indexed Utente: Stato */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_users_search';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['pane_title'] = 'Users search';
  $handler->display->display_options['pane_description'] = 'View pane user search';
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: OpenLayers Data Overlay */
  $handler = $view->new_display('openlayers', 'OpenLayers Data Overlay', 'openlayers_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '700';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'wkt',
    'other_lat' => 'name',
    'other_lon' => 'name',
    'wkt' => 'field_profile_geofield',
    'other_top' => 'name',
    'other_right' => 'name',
    'other_bottom' => 'name',
    'other_left' => 'name',
    'name_field' => 'name',
    'description_field' => '',
    'style_field' => '',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Indexed Utente: Nome */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'search_api_index_users_search';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_entity'] = 1;
  /* Campo: Profilo: Geofield */
  $handler->display->display_options['fields']['field_profile_geofield']['id'] = 'field_profile_geofield';
  $handler->display->display_options['fields']['field_profile_geofield']['table'] = 'entity_profile2';
  $handler->display->display_options['fields']['field_profile_geofield']['field'] = 'field_profile_geofield';
  $handler->display->display_options['fields']['field_profile_geofield']['relationship'] = 'profile_main';
  $handler->display->display_options['fields']['field_profile_geofield']['label'] = '';
  $handler->display->display_options['fields']['field_profile_geofield']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_geofield']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_profile_geofield']['settings'] = array(
    'data' => 'full',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterio del filtro: Cerca: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_users_search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Cerca persone';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
    'profile_main:field_profile_nome' => 'profile_main:field_profile_nome',
    'profile_main:field_profile_cognome' => 'profile_main:field_profile_cognome',
    'profile_main:field_profile_summary' => 'profile_main:field_profile_summary',
  );
  /* Criterio del filtro: Indexed Utente: Ruoli utente */
  $handler->display->display_options['filters']['roles']['id'] = 'roles';
  $handler->display->display_options['filters']['roles']['table'] = 'search_api_index_users_search';
  $handler->display->display_options['filters']['roles']['field'] = 'roles';
  $handler->display->display_options['filters']['roles']['operator'] = '<>';
  $handler->display->display_options['filters']['roles']['value'] = array(
    1 => '1',
  );
  /* Criterio del filtro: Indexed Utente: Stato */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_users_search';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );

  /* Display: User search map (SearchAPI) */
  $handler = $view->new_display('panel_pane', 'User search map (SearchAPI)', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['map'] = 'persone_map';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Comportamento se non ci sono risultati: Globale: Area di testo */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Mi dispiace, la tua ricerca non ha prodotto risultati';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Profilo: Immagine profilo */
  $handler->display->display_options['fields']['field_profile_avatar_1']['id'] = 'field_profile_avatar_1';
  $handler->display->display_options['fields']['field_profile_avatar_1']['table'] = 'entity_profile2';
  $handler->display->display_options['fields']['field_profile_avatar_1']['field'] = 'field_profile_avatar';
  $handler->display->display_options['fields']['field_profile_avatar_1']['relationship'] = 'profile_main';
  $handler->display->display_options['fields']['field_profile_avatar_1']['label'] = '';
  $handler->display->display_options['fields']['field_profile_avatar_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_profile_avatar_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_avatar_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_profile_avatar_1']['settings'] = array(
    'image_style' => 'user_thumb',
    'image_link' => 'content',
  );
  /* Campo: Informazioni utente profile: Nome (indexed) */
  $handler->display->display_options['fields']['profile_main_field_profile_nome']['id'] = 'profile_main_field_profile_nome';
  $handler->display->display_options['fields']['profile_main_field_profile_nome']['table'] = 'search_api_index_users_search';
  $handler->display->display_options['fields']['profile_main_field_profile_nome']['field'] = 'profile_main_field_profile_nome';
  $handler->display->display_options['fields']['profile_main_field_profile_nome']['label'] = '';
  $handler->display->display_options['fields']['profile_main_field_profile_nome']['element_label_colon'] = FALSE;
  /* Campo: Informazioni utente profile: Cognome (indexed) */
  $handler->display->display_options['fields']['profile_main_field_profile_cognome']['id'] = 'profile_main_field_profile_cognome';
  $handler->display->display_options['fields']['profile_main_field_profile_cognome']['table'] = 'search_api_index_users_search';
  $handler->display->display_options['fields']['profile_main_field_profile_cognome']['field'] = 'profile_main_field_profile_cognome';
  $handler->display->display_options['fields']['profile_main_field_profile_cognome']['label'] = '';
  $handler->display->display_options['fields']['profile_main_field_profile_cognome']['element_label_colon'] = FALSE;
  /* Campo: Informazioni utente profile: Ente di appartenenza (indexed) */
  $handler->display->display_options['fields']['profile_main_field_profile_ente']['id'] = 'profile_main_field_profile_ente';
  $handler->display->display_options['fields']['profile_main_field_profile_ente']['table'] = 'search_api_index_users_search';
  $handler->display->display_options['fields']['profile_main_field_profile_ente']['field'] = 'profile_main_field_profile_ente';
  $handler->display->display_options['fields']['profile_main_field_profile_ente']['label'] = '';
  $handler->display->display_options['fields']['profile_main_field_profile_ente']['element_label_colon'] = FALSE;
  $handler->display->display_options['pane_title'] = 'User search map';
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Users GeoJSON search */
  $handler = $view->new_display('page', 'Users GeoJSON search', 'users_geo_json_search');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Users GeoJSON search';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['search_api_bypass_access'] = 1;
  $handler->display->display_options['query']['options']['entity_access'] = 0;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '400';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_geojson';
  $handler->display->display_options['style_options']['data_source']['value'] = 'latlon';
  $handler->display->display_options['style_options']['data_source']['latitude'] = 'field_profile_geofield_lat';
  $handler->display->display_options['style_options']['data_source']['longitude'] = 'field_profile_geofield_lon';
  $handler->display->display_options['style_options']['data_source']['name_field'] = 'nothing';
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Indexed Utente: Nome */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'search_api_index_users_search';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['link_to_entity'] = 1;
  /* Campo: Profilo: Geofield » Latitude */
  $handler->display->display_options['fields']['field_profile_geofield_lat']['id'] = 'field_profile_geofield_lat';
  $handler->display->display_options['fields']['field_profile_geofield_lat']['table'] = 'entity_profile2';
  $handler->display->display_options['fields']['field_profile_geofield_lat']['field'] = 'field_profile_geofield_lat';
  $handler->display->display_options['fields']['field_profile_geofield_lat']['relationship'] = 'profile_main';
  /* Campo: Profilo: Geofield » Longitude */
  $handler->display->display_options['fields']['field_profile_geofield_lon']['id'] = 'field_profile_geofield_lon';
  $handler->display->display_options['fields']['field_profile_geofield_lon']['table'] = 'entity_profile2';
  $handler->display->display_options['fields']['field_profile_geofield_lon']['field'] = 'field_profile_geofield_lon';
  $handler->display->display_options['fields']['field_profile_geofield_lon']['relationship'] = 'profile_main';
  $handler->display->display_options['fields']['field_profile_geofield_lon']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_profile_geofield_lon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_geofield_lon']['precision'] = '0';
  $handler->display->display_options['fields']['field_profile_geofield_lon']['link_to_entity'] = 0;
  /* Campo: Profilo: Immagine profilo */
  $handler->display->display_options['fields']['field_profile_avatar']['id'] = 'field_profile_avatar';
  $handler->display->display_options['fields']['field_profile_avatar']['table'] = 'entity_profile2';
  $handler->display->display_options['fields']['field_profile_avatar']['field'] = 'field_profile_avatar';
  $handler->display->display_options['fields']['field_profile_avatar']['relationship'] = 'profile_main';
  $handler->display->display_options['fields']['field_profile_avatar']['label'] = '';
  $handler->display->display_options['fields']['field_profile_avatar']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_profile_avatar']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_avatar']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_profile_avatar']['settings'] = array(
    'image_style' => 'user_thumb',
    'image_link' => 'content',
  );
  /* Campo: Globale: Testo personalizzato */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="user-popup">
[name]
[field_profile_avatar]
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterio del filtro: Cerca: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_users_search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Cerca persone';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
    'profile_main:field_profile_nome' => 'profile_main:field_profile_nome',
    'profile_main:field_profile_cognome' => 'profile_main:field_profile_cognome',
    'profile_main:field_profile_summary' => 'profile_main:field_profile_summary',
  );
  /* Criterio del filtro: Indexed Utente: Ruoli utente */
  $handler->display->display_options['filters']['roles']['id'] = 'roles';
  $handler->display->display_options['filters']['roles']['table'] = 'search_api_index_users_search';
  $handler->display->display_options['filters']['roles']['field'] = 'roles';
  $handler->display->display_options['filters']['roles']['operator'] = '<>';
  $handler->display->display_options['filters']['roles']['value'] = array(
    1 => '1',
  );
  /* Criterio del filtro: Indexed Utente: Stato */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_users_search';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'users/geojsonsearch';
  $translatables['users_search'] = array(
    t('Master'),
    t('altro'),
    t('Applica'),
    t('Ripristina'),
    t('Ordina per'),
    t('Asc'),
    t('Disc'),
    t('Informazioni utente profile'),
    t('Data di iscrizione'),
    t('Cerca persone'),
    t('User search pane (SearchAPI)'),
    t('Risultati di ricerca'),
    t('Voci per pagina'),
    t('- Tutto -'),
    t('Scostamento'),
    t('« prima'),
    t('‹ precedente'),
    t('seguente ›'),
    t('ultima »'),
    t('Mi dispiace, la tua ricerca non ha prodotto risultati'),
    t('Utente'),
    t('.'),
    t('<h3>[profile_main_field_profile_ente]</h3>'),
    t('<div class="search-results-item-content-wr">'),
    t('<h2><a href="[url]">[profile_main_field_profile_nome] [profile_main_field_profile_cognome]</a></h2>
[profile_main_field_profile_ente]'),
    t('</div>'),
    t('Users search'),
    t('View pane user search'),
    t('View panes'),
    t('OpenLayers Data Overlay'),
    t('User search map (SearchAPI)'),
    t('User search map'),
    t('Users GeoJSON search'),
    t('Nome'),
    t('Geofield » Latitude'),
    t(','),
    t('Geofield » Longitude'),
    t('<div class="user-popup">
[name]
[field_profile_avatar]
</div>'),
  );
  $export['users_search'] = $view;

  return $export;
}
