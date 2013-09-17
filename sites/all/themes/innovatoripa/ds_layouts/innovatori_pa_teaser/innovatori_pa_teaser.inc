<?php
//http://drupalcode.org/viewvc/drupal/contributions/modules/ds/ds.api.php?revision=1.1.2.4&view=markup&pathrev=DRUPAL-7--1
// from around line 122

function ds_innovatori_pa_teaser() {
  return array(
    'label' => t('Innovatori PA - HTML5 teaser'),
    'regions' => array(
      // The key of this region name is also the variable used in
      // the template to print the content of that region.
      'teaser_user' => t('user avatar and name'),
      'teaser_header_hgroup' => t('header titles (only h1-h6)'),
      'teaser_header' => t('header content'),
      'teaser_content_text' => t('content text'),
      'teaser_content_stats' => t('content stats'),
      'teaser_footer' => t('teaser footer'),
      'teaser_comments' => t('teaser comments preview'), 
    ),
    // Add this if there is a default css file.
    //'css' => TRUE,
  );
}