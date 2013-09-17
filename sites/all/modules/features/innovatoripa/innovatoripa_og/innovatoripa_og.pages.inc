<?php

/**
 * Gruppo user autocomplete helper.
 * We need parent users from comunita
 */
function innovatoripa_og_user_autocomplete($community, $group, $string = '') {
  if ($string) {
    $query = db_select('users', 'u');
    $query->leftJoin('realname', 'rn', 'u.uid = rn.uid');
    $query->fields('u', array('uid', 'name'));
    $query->fields('rn', array('realname'));
    
    // og specific
    $query->join('og_membership', 'ogm', 'ogm.etid = u.uid');
    $query->condition('ogm.entity_type', 'user');
    $query->condition('ogm.gid', $community->nid);    

    // realname specific
    $name_like = db_or();
    $name_like->condition('rn.realname', db_like($string) . '%', 'LIKE');
    $name_like->condition('u.name', db_like($string) . '%', 'LIKE');
    $query->condition($name_like);
    $query->range(0, 10);

    //execute
    $uids = $query->execute()->fetchCol();
    $accounts = user_load_multiple($uids);
    $matches = array();

    foreach ($accounts as $account) {
      $matches[$account->name] = format_username($account);
      if ($matches[$account->name] != $account->name) {
        $matches[$account->name] .= ' (' . check_plain($account->name) . ')';
      }
    }
   
    drupal_json_output($matches);
  }
}


/**
 * List of files from nodes and comments of the group
 */
function innovatoripa_og_files($node) {
  $group_nodes = db_query("SELECT etid FROM {og_membership} WHERE entity_type = 'node' AND group_type = 'node' AND gid = :gid", 
                          array(':gid' => $node->nid));
  $ids = array();
  foreach ($group_nodes as $gnode) {
    $nid = $gnode->etid;
    // get all comments of this node
    $comments = db_query("SELECT cid FROM {comment} WHERE status = 1 AND nid = :nid", array(':nid' => $nid));
    foreach ($comments as $comment) {
      $ids[] = $comment->cid;
    }
    $ids[] = $nid;
  }

  // table header
  $header = array(
    array(
      'data' => t('File'), 
      'field' => 'f.filename'
    ),
    array(
      'data' => t('Dimensione'),
      'field' => 'f.filesize'
    ),
    array(
      'data' => t('Date'),
      'field' => 'f.timestamp', 
      'sort' => 'desc'
    ),
    'Azioni'
  );
  $rows = array();

  // get all files
  if ($ids) {
    // main query
    $query = db_select('file_managed', 'f')->extend('PagerDefault')->extend('TableSort');
    $query->leftJoin('file_usage', 'fu', 'f.fid = fu.fid');
    $query->leftJoin('field_data_field_allegato', 'fa', 'fa.field_allegato_fid = fu.fid');
    $query->fields('f', array('fid', 'filename', 'uri', 'filemime', 'filesize', 'timestamp'))
          ->fields('fu', array('id', 'type', 'module'))
          ->condition('status', 1)
          ->condition('fu.id', $ids, 'IN')
          ->condition('fu.type', array('node', 'comment'), 'IN')
          ->orderByHeader($header)
          ->limit(30);
    $query->distinct();
    $results = $query->execute();


    // table
    $rows = array();
    $mapping_name = array('node' => 'contenuto', 'comment' => 'commento');
    foreach ($results as $res) {
      // load entity
      $entity = array_pop(entity_load($res->type, array($res->id)));
      $entity_uri = entity_uri($res->type, $entity);
      $entity_link = l(t('Visualizza @title collegato', array('@title' => $mapping_name[$res->type])), $entity_uri['path'], $entity_uri['options']);

      // load file
      $file = file_load($res->fid);
      $file_url = file_create_url($file->uri); 
      $mime_icon = theme('file_icon', array('file' => $file));
      $filename = str_replace('_', ' ', truncate_utf8($file->filename, '100', false, true));
      
      if (empty($res->timestamp)) {
          $res->timestamp = filectime(drupal_realpath($file->uri));
      }
      
      // table row
      $rows[] = array(
            'data' => array( 
                array('data' => l($mime_icon . $filename, $file_url, array('attributes' => array('title' => $file->filename), 'html' => true)), 'class' => array('file-table_name')),
                array('data' => format_size($res->filesize), 'class' => array('file-table_size')), 
                array('data' => format_date($res->timestamp), 'class' => array('file-table_timestamp')),
                array('data' => $entity_link, 'class' => array('file-table_link')),
              ),
            'class' => array('file-table_row'),
        );
    }
  }
  // build output
  $output['group_files'] = array(
   '#theme' => 'table',
   '#header' => $header,
   '#rows' => $rows,
   '#empty' => '<p class="file-table_empty">' . t('Non ci sono file disponibili.') . '</p>',
  );
  $output['group_files_pager'] = array(
   '#theme' => 'pager',
  );
  return $output;
}




