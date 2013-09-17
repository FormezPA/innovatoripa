<?php
// $Id: three_four.inc,v 1.1 2010/08/23 22:07:12 bdziewierz Exp $

/**
 * Plugin definition
 * Implementation of the four columns / six rows fluid flexible layout
 */
$plugin = array(
  'title' => t('Responsive predefinito'),
  'category' => t('Responsive'),
  'icon' => 'responsive-default.png',
  'theme' => 'responsive_default',
  'admin theme' => 'responsive_default_admin',
  'css' => 'responsive-default.css',
  'admin css' => 'responsive-default-admin.css',
  'regions' => array(
    'panel_head' => t('Testata della pagina'),
    'highlighted' => t('In evidenza'),
    'main_content' => t('Contenuto principale'),
    'sidebar_first' => t('Sidebar primaria'),
    'sidebar_second' => t('Sidebar secondaria'),
  ),
);