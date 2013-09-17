<?php
//http://drupalcode.org/viewvc/drupal/contributions/modules/ds/ds.api.php?revision=1.1.2.4&view=markup&pathrev=DRUPAL-7--1
// from around line 122

function ds_innovatori_pa_user_profile() {
  return array(
    'label' => t('Innovatori PA - User profile'),
    'regions' => array(
      // The key of this region name is also the variable used in
      // the template to print the content of that region.
      'user_avatar' => t('user avatar'),
      'user_main_info' => t('user main info'),
      'user_other_details' => t('user other details'),
      'user_socials' => t('web & social links'),
      'user_footer' => t('profile footer'), 
    ),
    // Add this if there is a default css file.
    //'css' => TRUE,
  );
}

