<?php
// $Id: three_four.inc,v 1.1 2010/08/23 22:07:12 bdziewierz Exp $

/**
 * Plugin definition
 * Implementation of the four columns / six rows fluid flexible layout
 */
$plugin = array(
  'title' => t('Modello pagine ricerca'),
  'category' => t('Responsive'),
  'icon' => 'responsive-search.png',
  'theme' => 'responsive_search',
  'admin theme' => 'responsive_search_admin',
  'css' => 'responsive-search.css',
  'admin css' => 'responsive-search-admin.css',
  'regions' => array(
    'panel_head' => t('Testata della pagina'),
    'main_content' => t('Risultati di ricerca'),
    'sidebar_search' => t('Sidebar filtri ricerca'),
    'sidebar_second' => t('Sidebar secondaria'),
  ),
);