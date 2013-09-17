<?php
//http://drupalcode.org/viewvc/drupal/contributions/modules/ds/ds.api.php?revision=1.1.2.4&view=markup&pathrev=DRUPAL-7--1
// from around line 122

function ds_innovatori_pa_html5_1col_stacked() {
  return array(
    'label' => t('Innovatori PA - HTML5 1 col stacked'),
    'regions' => array(
      // The key of this region name is also the variable used in
      // the template to print the content of that region.
      'user_info' => t('user avatar and name'),
      'hgroup' => t('hgroup (only h1-h6)'),
      'header' => t('header'),
      'top' => t('top'),
      'main' => t('main'), 
      'main_nowrapper' => t('main no div wrapper'), 
      'bottom' => t('bottom'),
      'attachments' => t('attachments'),
      'footer' => t('article footer'), 
      'comments_region' => t('comments'), 
    ),
    // Add this if there is a default css file.
    //'css' => TRUE,
  );
}

