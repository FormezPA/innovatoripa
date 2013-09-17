<?php
/**
 * @file
 * Drush integration for the feeds module.
 */

/**
 * Implements hook_drush_command().
 */
function drush_feeds_import_drush_command() {

  $items['feeds-import'] = array(
    'description' => dt('Enable to run a specific feed import'),
    'options' => array(
      'feed-id' => array(
        'description' => dt('Feed ID to import.'),
      ),
    ),
    'examples' => array(
      'drush feeds-import --feed-id=feed_importer_1' => "Define the feed-id to process in background.\nIf feed is not configured to run in background will be skipped.",
    ),
  );

  $items['feeds-import-all'] = array(
    'description' => dt('Import all feeds available'),
  );

  $items['feeds-list'] = array(
    'description' => dt('Get a list of all feeds available'),
  );

  return $items;
}

/**
 * Import a individual feed.
 */
function _feed_import($id) {
  $feed = db_query("SELECT feed_nid FROM {feeds_source} WHERE id = :id", array(':id' => $id))->fetchObject();
  $feed_obj = feeds_source($id, $feed->feed_nid);
  $feed_config = $feed_obj->importer->getConfig();
  if ($feed_config['process_in_background']) {
    $feed_obj->startImport();
  }
  else {
    drush_log(dt('Feed @id is not enabled to Run in Background', array('@id' => $id)), 'error');
  }
}

/**
 * A command callback.
 */
function drush_drush_feeds_import_feeds_import_all() {
  $feeds = db_query("SELECT * FROM {feeds_source}");

  foreach ($feeds as $feed) {
    _feed_import($feed->id);
  }
}

/**
 * A command callback.
 */
function drush_drush_feeds_import_feeds_import() {
  $id = drush_get_option('feed-id');
  if ($id) {
    _feed_import($id);
  }
  else {
    drush_log(dt('Feed ID is required. Usage: drush feeds-import #ID.'), 'error');
  }
}

/**
 * A command callback.
 */
function drush_drush_feeds_import_feeds_list() {
  $rows[] = array(dt('ID'), dt('Feed NID'),dt('Process in Background'));
  $feeds = db_query("SELECT * FROM {feeds_source}");

  foreach ($feeds as $feed) {
    $feed_config = feeds_source($feed->id, $feed->feed_nid)->importer->getConfig();
    $rows[] = array($feed->id,
      $feed->feed_nid,
      ($feed_config['process_in_background'])?'TRUE' : 'FALSE',
    );
  }

  drush_print_table($rows, TRUE);
}
