<?php
/**
 * @file
 * innovatoripa_og.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function innovatoripa_og_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'innovatoripa_community';
  $context->description = 'Gestisce il posizionamento dei blocchi nelle pagine della comunità';
  $context->tag = 'og';
  $context->conditions = array(
    'context_og_condition_group_type' => array(
      'values' => array(
        'comunita' => 'comunita',
      ),
      'options' => array(
        'node_form' => 0,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'innovatoripa_og-innovatori_og_comunita_nav' => array(
          'module' => 'innovatoripa_og',
          'delta' => 'innovatori_og_comunita_nav',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
        'views-72c14f13e6bf7cfb6d5c464b772d0d63' => array(
          'module' => 'views',
          'delta' => '72c14f13e6bf7cfb6d5c464b772d0d63',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'innovatoripa_og-innovatori_og_admin_user_list' => array(
          'module' => 'innovatoripa_og',
          'delta' => 'innovatori_og_admin_user_list',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-home_page_blocks-segnalazioni' => array(
          'module' => 'views',
          'delta' => 'home_page_blocks-segnalazioni',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'views-52d6e21b694640b7acb161e4c9d695f2' => array(
          'module' => 'views',
          'delta' => '52d6e21b694640b7acb161e4c9d695f2',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
        'views-user_blocks-block_1' => array(
          'module' => 'views',
          'delta' => 'user_blocks-block_1',
          'region' => 'sidebar_second',
          'weight' => '-6',
        ),
        'views-683988b6625417f237fb9253aa9a02c4' => array(
          'module' => 'views',
          'delta' => '683988b6625417f237fb9253aa9a02c4',
          'region' => 'sidebar_second',
          'weight' => '-4',
        ),
        'ds_extras-ds_block_community_social_links' => array(
          'module' => 'ds_extras',
          'delta' => 'ds_block_community_social_links',
          'region' => 'sidebar_second',
          'weight' => '-3',
        ),
      ),
      'layout' => 'community',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Gestisce il posizionamento dei blocchi nelle pagine della comunità');
  t('og');
  $export['innovatoripa_community'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'innovatoripa_community_home';
  $context->description = 'Gestisce il posizionamento dei blocchi aggiuntivi nella sola home page della comunità';
  $context->tag = 'og';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'comunita' => 'comunita',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'ds_extras-ds_block_community_full' => array(
          'module' => 'ds_extras',
          'delta' => 'ds_block_community_full',
          'region' => 'top',
          'weight' => '-8',
        ),
      ),
      'layout' => 'community',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Gestisce il posizionamento dei blocchi aggiuntivi nella sola home page della comunità');
  t('og');
  $export['innovatoripa_community_home'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'innovatoripa_group';
  $context->description = 'Contesto che si attiva quando siamo all\'interno di un CT gruppo';
  $context->tag = 'og';
  $context->conditions = array(
    'context_og_condition_group_type' => array(
      'values' => array(
        'gruppo' => 'gruppo',
      ),
      'options' => array(
        'node_form' => 0,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'ds_extras-ds_block_group_full' => array(
          'module' => 'ds_extras',
          'delta' => 'ds_block_group_full',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
        'innovatoripa_og-innovatori_og_gruppo_nav' => array(
          'module' => 'innovatoripa_og',
          'delta' => 'innovatori_og_gruppo_nav',
          'region' => 'highlighted',
          'weight' => '-8',
        ),
        'innovatoripa_og-innovatori_og_comunita_nav' => array(
          'module' => 'innovatoripa_og',
          'delta' => 'innovatori_og_comunita_nav',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-user_blocks-block_1' => array(
          'module' => 'views',
          'delta' => 'user_blocks-block_1',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
      ),
      'layout' => 'community',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Contesto che si attiva quando siamo all\'interno di un CT gruppo');
  t('og');
  $export['innovatoripa_group'] = $context;

  return $export;
}
