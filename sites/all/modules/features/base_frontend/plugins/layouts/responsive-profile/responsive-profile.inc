<?php
// $Id: three_four.inc,v 1.1 2010/08/23 22:07:12 bdziewierz Exp $

/**
 * Plugin definition
 * Implementation of the four columns / six rows fluid flexible layout
 */
$plugin = array(
  'title' => t('Modello pagine profilo'),
  'category' => t('Responsive'),
  'icon' => 'responsive-profile.png',
  'theme' => 'responsive_profile',
  'admin theme' => 'responsive_profile_admin',
  'css' => 'responsive-profile.css',
  'admin css' => 'responsive-profile-admin.css',
  'regions' => array(
    'panel_head' => t('Testata della pagina'),
    'main_content' => t('Contenuto principale'),
    'secondary_content' => t('Contenuto secondario'),
    'content_sidebar' => t('Sidebar del contenuto'),
    'sidebar_first' => t('Sidebar primaria'),
  ),
);