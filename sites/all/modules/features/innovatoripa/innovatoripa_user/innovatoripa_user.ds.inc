<?php
/**
 * @file
 * innovatoripa_user.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function innovatoripa_user_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'profile2|main|account';
  $ds_fieldsetting->entity_type = 'profile2';
  $ds_fieldsetting->bundle = 'main';
  $ds_fieldsetting->view_mode = 'account';
  $ds_fieldsetting->settings = array(
    'ds_code_twitter_link' => array(
      'weight' => '19',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'ds_code_ente_citta' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'h4',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'ds_code_nome_e_cognome' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'h1',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'ds_code_ruolo' => array(
      'weight' => '16',
      'label' => 'inline',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Ruolo su InnovatoriPA',
        ),
      ),
    ),
    'field_profile_topics' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field user-profile-details-arguments field-label-above',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fis' => TRUE,
          'fis-el' => 'ul',
          'fis-cl' => 'field-items',
          'fis-at' => '',
          'fis-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'li',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_profile_avatar' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_profile_chi_sono' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'h3',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
  );
  $export['profile2|main|account'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'profile2|main|public_profile';
  $ds_fieldsetting->entity_type = 'profile2';
  $ds_fieldsetting->bundle = 'main';
  $ds_fieldsetting->view_mode = 'public_profile';
  $ds_fieldsetting->settings = array(
    'ds_code_twitter_link' => array(
      'weight' => '15',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'ds_code_ente_citta' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'h4',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'ds_code_nome_e_cognome' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'h1',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'ds_code_ruolo' => array(
      'weight' => '12',
      'label' => 'inline',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Ruolo su InnovatoriPA',
        ),
      ),
    ),
    'ds_code_ruolo_ente' => array(
      'weight' => '24',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'h3',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_profile_summary' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Una sua breve presentazione',
        ),
      ),
    ),
    'field_profile_education' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'I suoi studi e di cosa si occupa',
        ),
      ),
    ),
    'field_profile_topics' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Temi che gli interessano',
        ),
      ),
    ),
    'field_profile_avatar' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_profile_chi_sono' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'h3',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
  );
  $export['profile2|main|public_profile'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'profile2|main|teaser_profile';
  $ds_fieldsetting->entity_type = 'profile2';
  $ds_fieldsetting->bundle = 'main';
  $ds_fieldsetting->view_mode = 'teaser_profile';
  $ds_fieldsetting->settings = array(
    'ds_code_nome_cognome_linked' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'h2',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'ds_code_ruolo_ente' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'h3',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_profile_summary' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'teaser-profile-item-text',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_profile_avatar' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'teaser-profile-item-image',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['profile2|main|teaser_profile'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function innovatoripa_user_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'ds_code_blog_link';
  $ds_field->label = 'DS CODE: blog link';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'profile2' => 'profile2',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php
// dsm($entity);
$user_id = $entity->uid;
// Carico l\'utente (mi serve per il ruolo)
$user = user_load($user_id);
$nome = $user->realname;
// dsm($user, \'USER\');
// dsm($user->roles, \'$user->roles\');
// Controllo se l\'utente ha i privilegi per avere un blog
$user_has_blog = 0;
if (in_array(\'Innovatore attivo\', $user->roles) || in_array(\'Innovatore esperto\', $user->roles)) {
  $user_has_blog = 1;
}
$blog_url = base_path() . \'blog/\' . $entity->uid;
$blog_displayed_url = strtolower(\'blog/\' . $entity->field_profile_nome[LANGUAGE_NONE][0][\'safe_value\'] . $entity->field_profile_cognome[LANGUAGE_NONE][0][\'safe_value\']);
// dsm($user_has_blog, \'$user_has_blog\');
?>
<?php if ($user_has_blog): // Stampo qualcosa solo se il ruolo utente è superiore od uguale ad innovatore attivo ?>
  <a href="<?php print $blog_url; ?>" title="Vai al blog di <?php print $nome; ?>"><?php print $blog_displayed_url; ?></a>
<?php endif; ?>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['ds_code_blog_link'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'ds_code_debug_profile';
  $ds_field->label = 'DS CODE: DEBUG PROFILE';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'profile2' => 'profile2',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php dsm($entity, \'ENTITY\') ?>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['ds_code_debug_profile'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'ds_code_ente_citta';
  $ds_field->label = 'DS CODE: Ente, Città';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'profile2' => 'profile2',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '[profile2:field-profile-ente]<?php if (isset($entity->field_profile_location[LANGUAGE_NONE]) && $entity->field_profile_location[LANGUAGE_NONE][0][locality]) : ?>, [profile2:field-profile-location:locality]<?php endif; ?>',
      'format' => 'ds_code',
    ),
    'use_token' => 1,
  );
  $export['ds_code_ente_citta'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'ds_code_nome_cognome_linked';
  $ds_field->label = 'DS CODE: Nome Cognome (Linked)';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'profile2' => 'profile2',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<a href="[profile2:user:url]" title="Vai al profilo di [profile2:field-profile-nome] [profile2:field-profile-cognome]">[profile2:field-profile-nome] [profile2:field-profile-cognome]</a>',
      'format' => 'ds_code',
    ),
    'use_token' => 1,
  );
  $export['ds_code_nome_cognome_linked'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'ds_code_nome_e_cognome';
  $ds_field->label = 'DS CODE: Nome Cognome';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'profile2' => 'profile2',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '[profile2:field-profile-nome] [profile2:field-profile-cognome]',
      'format' => 'ds_code',
    ),
    'use_token' => 1,
  );
  $export['ds_code_nome_e_cognome'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'ds_code_ruolo';
  $ds_field->label = 'DS CODE: ruolo su InnovatoriPA';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'profile2' => 'profile2',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php
  $user_id = $entity->uid;
  // Carico l\'utente (mi serve per il ruolo)
  $user = user_load($user_id);
  // dsm($user, \'USER\');
  $user_realname = $user->realname;
  // dsm($user->roles, $user_realname);
  // Controllo in ordine crescente di ruolo, in caso contrario 
  // l\'utente non è un innovatore e non stampo nulla.
  $user_role_class = \'undefined\';
  $user_role = false;
  if (in_array(\'Innovatore\', $user->roles)) {
    $user_role_class = \'innovatore\';
    $user_role = \'Innovatore\';
  }
  if (in_array(\'Innovatore attivo\', $user->roles)) {
    $user_role_class = \'innovatore-attivo\';
    $user_role = \'Innovatore attivo\';
  }
  if (in_array(\'Innovatore esperto\', $user->roles)) {
    $user_role_class = \'innovatore-esperto\';
    $user_role = \'Innovatore esperto\';
  }
?>
<?php if ($user_role): ?>
<i class="icon role-<?php print $user_role_class; ?>" title="<?php print $user_role; ?>"></i><?php print $user_role; ?>
<?php endif; ?>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['ds_code_ruolo'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'ds_code_ruolo_ente';
  $ds_field->label = 'DS CODE: Ruolo | Ente';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'profile2' => 'profile2',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php if (isset($entity->field_profile_ruolo[\'und\'])) : ?>[profile2:field-profile-ruolo] | <?php endif; ?>[profile2:field-profile-ente]',
      'format' => 'ds_code',
    ),
    'use_token' => 1,
  );
  $export['ds_code_ruolo_ente'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function innovatoripa_user_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'profile2|main|account';
  $ds_layout->entity_type = 'profile2';
  $ds_layout->bundle = 'main';
  $ds_layout->view_mode = 'account';
  $ds_layout->layout = 'innovatori_pa_user_profile';
  $ds_layout->settings = array(
    'regions' => array(
      'user_avatar' => array(
        0 => 'field_profile_avatar',
      ),
      'user_main_info' => array(
        1 => 'ds_code_nome_e_cognome',
        2 => 'field_profile_chi_sono',
        3 => 'ds_code_ente_citta',
      ),
      'user_other_details' => array(
        4 => 'field_profile_summary',
        5 => 'field_profile_education',
        6 => 'field_profile_pa_type',
        7 => 'field_profile_qualifica',
        8 => 'field_profile_unit',
        9 => 'field_profile_topics',
        10 => 'field_profile_location',
        11 => 'field_profile_telefono',
        12 => 'field_profile_cellulare',
        13 => 'field_profile_birthplace',
        14 => 'field_profile_birthdate',
        15 => 'field_profile_studies',
        16 => 'ds_code_ruolo',
      ),
      'user_socials' => array(
        17 => 'field_profile_site',
        18 => 'ds_code_twitter_link',
        19 => 'field_profile_linkedin',
        20 => 'field_profile_slideshare',
        21 => 'field_profile_flickr',
        22 => 'field_profile_google',
        23 => 'field_profile_skype',
        24 => 'field_profile_gtalk',
        25 => 'field_profile_porting_general_im',
        26 => 'field_profile_feed_rss',
      ),
    ),
    'fields' => array(
      'field_profile_avatar' => 'user_avatar',
      'ds_code_nome_e_cognome' => 'user_main_info',
      'field_profile_chi_sono' => 'user_main_info',
      'ds_code_ente_citta' => 'user_main_info',
      'field_profile_summary' => 'user_other_details',
      'field_profile_education' => 'user_other_details',
      'field_profile_pa_type' => 'user_other_details',
      'field_profile_qualifica' => 'user_other_details',
      'field_profile_unit' => 'user_other_details',
      'field_profile_topics' => 'user_other_details',
      'field_profile_location' => 'user_other_details',
      'field_profile_telefono' => 'user_other_details',
      'field_profile_cellulare' => 'user_other_details',
      'field_profile_birthplace' => 'user_other_details',
      'field_profile_birthdate' => 'user_other_details',
      'field_profile_studies' => 'user_other_details',
      'ds_code_ruolo' => 'user_other_details',
      'field_profile_site' => 'user_socials',
      'ds_code_twitter_link' => 'user_socials',
      'field_profile_linkedin' => 'user_socials',
      'field_profile_slideshare' => 'user_socials',
      'field_profile_flickr' => 'user_socials',
      'field_profile_google' => 'user_socials',
      'field_profile_skype' => 'user_socials',
      'field_profile_gtalk' => 'user_socials',
      'field_profile_porting_general_im' => 'user_socials',
      'field_profile_feed_rss' => 'user_socials',
    ),
    'classes' => array(),
    'wrappers' => array(
      'user_avatar' => 'div',
      'user_main_info' => 'div',
      'user_other_details' => 'div',
      'user_socials' => 'div',
      'user_footer' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['profile2|main|account'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'profile2|main|public_profile';
  $ds_layout->entity_type = 'profile2';
  $ds_layout->bundle = 'main';
  $ds_layout->view_mode = 'public_profile';
  $ds_layout->layout = 'innovatori_pa_user_profile';
  $ds_layout->settings = array(
    'regions' => array(
      'user_avatar' => array(
        0 => 'field_profile_avatar',
      ),
      'user_main_info' => array(
        1 => 'ds_code_nome_e_cognome',
        2 => 'field_profile_chi_sono',
        3 => 'ds_code_ente_citta',
      ),
      'user_other_details' => array(
        4 => 'field_profile_summary',
        5 => 'field_profile_education',
        6 => 'field_profile_pa_type',
        7 => 'field_profile_topics',
        8 => 'field_profile_location',
        9 => 'field_profile_telefono',
        10 => 'field_profile_cellulare',
        11 => 'field_profile_birthdate',
        12 => 'ds_code_ruolo',
      ),
      'user_socials' => array(
        13 => 'field_profile_site',
        14 => 'ds_code_twitter_link',
        15 => 'field_profile_linkedin',
        16 => 'field_profile_slideshare',
        17 => 'field_profile_flickr',
        18 => 'field_profile_google',
        19 => 'field_profile_skype',
        20 => 'field_profile_gtalk',
        21 => 'field_profile_porting_general_im',
        22 => 'field_profile_feed_rss',
      ),
      'ds_hidden' => array(
        23 => 'ds_code_ruolo_ente',
      ),
    ),
    'fields' => array(
      'field_profile_avatar' => 'user_avatar',
      'ds_code_nome_e_cognome' => 'user_main_info',
      'field_profile_chi_sono' => 'user_main_info',
      'ds_code_ente_citta' => 'user_main_info',
      'field_profile_summary' => 'user_other_details',
      'field_profile_education' => 'user_other_details',
      'field_profile_pa_type' => 'user_other_details',
      'field_profile_topics' => 'user_other_details',
      'field_profile_location' => 'user_other_details',
      'field_profile_telefono' => 'user_other_details',
      'field_profile_cellulare' => 'user_other_details',
      'field_profile_birthdate' => 'user_other_details',
      'ds_code_ruolo' => 'user_other_details',
      'field_profile_site' => 'user_socials',
      'ds_code_twitter_link' => 'user_socials',
      'field_profile_linkedin' => 'user_socials',
      'field_profile_slideshare' => 'user_socials',
      'field_profile_flickr' => 'user_socials',
      'field_profile_google' => 'user_socials',
      'field_profile_skype' => 'user_socials',
      'field_profile_gtalk' => 'user_socials',
      'field_profile_porting_general_im' => 'user_socials',
      'field_profile_feed_rss' => 'user_socials',
      'ds_code_ruolo_ente' => 'ds_hidden',
    ),
    'classes' => array(),
    'wrappers' => array(
      'user_avatar' => 'div',
      'user_main_info' => 'div',
      'user_other_details' => 'div',
      'user_socials' => 'div',
      'user_footer' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['profile2|main|public_profile'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'profile2|main|teaser_profile';
  $ds_layout->entity_type = 'profile2';
  $ds_layout->bundle = 'main';
  $ds_layout->view_mode = 'teaser_profile';
  $ds_layout->layout = 'innovatori_pa_teaser';
  $ds_layout->settings = array(
    'regions' => array(
      'teaser_user' => array(
        0 => 'field_profile_avatar',
      ),
      'teaser_header_hgroup' => array(
        1 => 'ds_code_nome_cognome_linked',
        2 => 'ds_code_ruolo_ente',
      ),
      'teaser_content_text' => array(
        3 => 'field_profile_summary',
      ),
    ),
    'fields' => array(
      'field_profile_avatar' => 'teaser_user',
      'ds_code_nome_cognome_linked' => 'teaser_header_hgroup',
      'ds_code_ruolo_ente' => 'teaser_header_hgroup',
      'field_profile_summary' => 'teaser_content_text',
    ),
    'classes' => array(),
    'wrappers' => array(
      'teaser_user' => 'div',
      'teaser_header_hgroup' => 'div',
      'teaser_header' => 'div',
      'teaser_content_text' => 'div',
      'teaser_content_stats' => 'div',
      'teaser_footer' => 'div',
      'teaser_comments' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['profile2|main|teaser_profile'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function innovatoripa_user_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'public_profile';
  $ds_view_mode->label = 'Public profile';
  $ds_view_mode->entities = array(
    'profile2' => 'profile2',
  );
  $export['public_profile'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'teaser_profile';
  $ds_view_mode->label = 'Teaser profile';
  $ds_view_mode->entities = array(
    'profile2' => 'profile2',
  );
  $export['teaser_profile'] = $ds_view_mode;

  return $export;
}
