<?php
/**
 * @file
 * innovatoripa_search_engine.current_search.inc
 */

/**
 * Implements hook_current_search_default_items().
 */
function innovatoripa_search_engine_current_search_default_items() {
  $export = array();

  $item = new stdClass();
  $item->disabled = FALSE; /* Edit this to true to make a default item disabled initially */
  $item->api_version = 1;
  $item->name = 'node_search';
  $item->label = 'Node search';
  $item->settings = array(
    'items' => array(
      'active_items' => array(
        'id' => 'active',
        'label' => 'Active Items',
        'pattern' => '[facetapi_active:active-value-raw]',
        'keys' => 0,
        'css' => 0,
        'classes' => '',
        'nofollow' => 1,
        'weight' => '0',
      ),
      'results' => array(
        'id' => 'text',
        'label' => 'Results',
        'text' => 'Trovato [facetapi_results:result-count] risultato',
        'plural' => 1,
        'text_plural' => 'Trovati [facetapi_results:result-count] risultati',
        'plural_condition' => 'facetapi_results:result-count',
        'wrapper' => 0,
        'element' => '0',
        'css' => 0,
        'classes' => '',
        'weight' => '0',
      ),
    ),
    'advanced' => array(
      'empty_searches' => '3',
    ),
  );
  $export['node_search'] = $item;

  $item = new stdClass();
  $item->disabled = FALSE; /* Edit this to true to make a default item disabled initially */
  $item->api_version = 1;
  $item->name = 'user_current_search_block';
  $item->label = 'User current search block';
  $item->settings = array(
    'items' => array(
      'results' => array(
        'id' => 'text',
        'label' => 'Results',
        'text' => 'Trovato [facetapi_results:result-count] utente',
        'plural' => 1,
        'text_plural' => 'Trovati [facetapi_results:result-count] utenti',
        'plural_condition' => 'facetapi_results:result-count',
        'wrapper' => 0,
        'element' => '0',
        'css' => 0,
        'classes' => '',
        'weight' => '0',
      ),
      'active_items' => array(
        'id' => 'active',
        'label' => 'Active Items',
        'pattern' => '[facetapi_active:active-value]',
        'keys' => 0,
        'css' => 0,
        'classes' => '',
        'nofollow' => 1,
        'weight' => '0',
      ),
    ),
    'advanced' => array(
      'empty_searches' => '0',
    ),
  );
  $export['user_current_search_block'] = $item;

  $item = new stdClass();
  $item->disabled = FALSE; /* Edit this to true to make a default item disabled initially */
  $item->api_version = 1;
  $item->name = 'user_search';
  $item->label = 'User search';
  $item->settings = array(
    'items' => array(
      'results' => array(
        'id' => 'text',
        'label' => 'Results',
        'text' => 'Trovato [facetapi_results:result-count] utente',
        'plural' => 1,
        'text_plural' => 'Trovati [facetapi_results:result-count] utenti',
        'plural_condition' => 'facetapi_results:result-count',
        'wrapper' => 0,
        'element' => '0',
        'css' => 0,
        'classes' => '',
        'weight' => '0',
      ),
      'active_items' => array(
        'id' => 'active',
        'label' => 'Active Items',
        'pattern' => '[facetapi_active:active-value]',
        'keys' => 0,
        'css' => 0,
        'classes' => '',
        'nofollow' => 1,
        'weight' => '0',
      ),
    ),
    'advanced' => array(
      'empty_searches' => '3',
    ),
  );
  $export['user_search'] = $item;

  return $export;
}
