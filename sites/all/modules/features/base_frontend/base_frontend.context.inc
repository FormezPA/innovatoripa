<?php
/**
 * @file
 * base_frontend.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function base_frontend_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blocchi_generali';
  $context->description = 'Blocchi fuori dai contesti gruppo';
  $context->tag = 'blocks';
  $context->conditions = array(
    'context_og_condition_group_type' => array(
      'values' => array(
        '_none_' => '_none_',
      ),
      'options' => array(
        'node_form' => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'quicktabs-hp_tabs_segnalazioni_discussioni' => array(
          'module' => 'quicktabs',
          'delta' => 'hp_tabs_segnalazioni_discussioni',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views-home_page_blocks-comunita' => array(
          'module' => 'views',
          'delta' => 'home_page_blocks-comunita',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'views-user_blocks-block' => array(
          'module' => 'views',
          'delta' => 'user_blocks-block',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'views-test_tag_cloud-tagcloud_block' => array(
          'module' => 'views',
          'delta' => 'test_tag_cloud-tagcloud_block',
          'region' => 'sidebar_first',
          'weight' => '-6',
        ),
        'boxes-social_links' => array(
          'module' => 'boxes',
          'delta' => 'social_links',
          'region' => 'sidebar_first',
          'weight' => '-5',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocchi fuori dai contesti gruppo');
  t('blocks');
  $export['blocchi_generali'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'homepage';
  $context->description = 'Contesto attivo nella homepage del sito';
  $context->tag = 'path';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-home_page_blocks-evidenza' => array(
          'module' => 'views',
          'delta' => 'home_page_blocks-evidenza',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
        'views-user_blocks-block' => array(
          'module' => 'views',
          'delta' => 'user_blocks-block',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'views-home_page_blocks-comunita' => array(
          'module' => 'views',
          'delta' => 'home_page_blocks-comunita',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Contesto attivo nella homepage del sito');
  t('path');
  $export['homepage'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'panels_pages';
  $context->description = 'Attiva il layout specifico sulle pagine da utilizzare con Panels';
  $context->tag = 'layout';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'user' => 'user',
        'user/*' => 'user/*',
        '~user/*/notification-settings' => '~user/*/notification-settings',
        '~user/*/messages' => '~user/*/messages',
        'users' => 'users',
        'users/*' => 'users/*',
        'blog' => 'blog',
        'blog/*' => 'blog/*',
        'community' => 'community',
        'comunita' => 'comunita',
        'persone' => 'persone',
        'persone/map' => 'persone/map',
        'ricerca' => 'ricerca',
        'ricerca/*' => 'ricerca/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
      'layout' => 'panel_container',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Attiva il layout specifico sulle pagine da utilizzare con Panels');
  t('layout');
  $export['panels_pages'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide_blocks';
  $context->description = 'Contesto che setta i blocchi di default estesi a tutto il sito';
  $context->tag = 'blocks';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'header',
          'weight' => '-10',
        ),
        'innovatoripa_og-innovatori_og_create_content' => array(
          'module' => 'innovatoripa_og',
          'delta' => 'innovatori_og_create_content',
          'region' => 'header',
          'weight' => '-9',
        ),
        'boxes-mobile_menu_button' => array(
          'module' => 'boxes',
          'delta' => 'mobile_menu_button',
          'region' => 'header',
          'weight' => '-8',
        ),
        'user-login' => array(
          'module' => 'user',
          'delta' => 'login',
          'region' => 'login_form',
          'weight' => '-10',
        ),
        'system-help' => array(
          'module' => 'system',
          'delta' => 'help',
          'region' => 'help',
          'weight' => '-10',
        ),
        'boxes-site_footer' => array(
          'module' => 'boxes',
          'delta' => 'site_footer',
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Contesto che setta i blocchi di default estesi a tutto il sito');
  t('blocks');
  $export['sitewide_blocks'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'user_login_button';
  $context->description = 'Inserisce i blocchi di user login in caso l\'utente non sia loggato';
  $context->tag = 'blocks';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'anonymous user' => 'anonymous user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'formezauth-formezauth_login' => array(
          'module' => 'formezauth',
          'delta' => 'formezauth_login',
          'region' => 'login_form',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Inserisce i blocchi di user login in caso l\'utente non sia loggato');
  t('blocks');
  $export['user_login_button'] = $context;

  return $export;
}
