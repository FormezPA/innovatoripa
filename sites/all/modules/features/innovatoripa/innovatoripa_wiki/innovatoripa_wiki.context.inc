<?php
/**
 * @file
 * innovatoripa_wiki.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function innovatoripa_wiki_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'innovatoripa_book_pages';
  $context->description = 'Setta il blocco di navigazione del book nelle pagine dello stesso.';
  $context->tag = 'og';
  $context->conditions = array(
    'bookroot' => array(
      'values' => array(
        'book' => 'book',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'book-navigation' => array(
          'module' => 'book',
          'delta' => 'navigation',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Setta il blocco di navigazione del book nelle pagine dello stesso.');
  t('og');
  $export['innovatoripa_book_pages'] = $context;

  return $export;
}
