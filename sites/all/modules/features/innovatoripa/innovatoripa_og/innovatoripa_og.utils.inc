<?php 

/**
 * Get group members of node
 */
function innovatoripa_og_get_groups_by_node($node) {
  $og_memberships = og_get_entity_groups('node', $node);
  return $og_memberships;
}

/**
 * Get group post count by gid
 */
function innovatoripa_og_get_post_count_by_gid($gid) {
    $result = db_select('og_membership', 'ogm')
              ->fields('ogm')
              ->condition('gid', $gid, '=')
              ->condition('entity_type', 'node', '=')
              ->condition('field_name', 'og_group_ref', '=')
              ->execute();
    $count = $result->rowCount();
    return $count;
}

/**
 * Get group vid by gid
 * Just the first one (groups can't have more than one vocab)
 */
function innovatoripa_og_get_vid_by_gid($gid) {
  $query = db_select('og_vocab_relation', 'ogr')
            ->fields('ogr', array('vid'))
            ->condition('gid', $gid, '=')
            ->range(0, 1)
            ->execute();

  // get single value
  $res = $query->fetchColumn();
  return $res;
}

/**
 * Return first found forum term
 */
function innovatoripa_og_get_default_forum_term($nid) {
  $vid = innovatoripa_og_get_vid_by_gid($nid);
  $tree = taxonomy_get_tree($vid);
  if (!$tree) {
    return false;
  }
  $default_term_name = variable_get('innovatoripa_og_forum_default_term_name', 'Forum generale');
  foreach ($tree as $term) {
    if ($term->name === $default_term_name) {
      return $term;
    }
  }
}



/**
 * Get group gid by vid
 */
function innovatoripa_og_get_gid_by_vid($vid) {
  $query = db_select('og_vocab_relation', 'ogr')
            ->fields('ogr', array('gid'))
            ->condition('vid', $vid, '=')
            ->range(0, 1)
            ->execute();

  // get single value
  $res = $query->fetchColumn();
  return $res;
}


/**
 * Return a form element with crafted links to create nodes for a group.
 *
 * @param $group_type
 *   The entity type of the group.
 * @param $gid
 *   The group ID.
 * @param $field_name
 *   The group audience field name.
 * @param $destination
 *   Optional; The destiantion after a node is created. Defaults to the
 *   destination passed in the URL if exists, otherwise back to the current
 *   page.
 * @param $types
 *   Optional; An array of type names. Restrict the created links to the given
 *   types.
 */
function innovatoripa_og_node_create_links($group_type, $gid, $field_name, $destination = NULL, $types = NULL) {
  if (!og_is_group($group_type, $gid)) {
    return;
  }

  $types = isset($types) ? $types : array_keys(node_type_get_types());
  
  
  // per controllare se è un amministratore uso questo permesso
  $is_admin = og_user_access($group_type, $gid, "update group");
  
  // se questa variabile è impostata vengono mostrati solo i link di creazione 
  // dei contenuti per i quali l'utente ha i permessi di sistema ignorando i permessi
  // impostati nell'og
  $ipa_strict_og_permission = variable_get('ipa_strict_og_permission', FALSE);
  if ($ipa_strict_og_permission) {
      $is_admin = FALSE;
  }
  
  foreach ($types as $type_name) {
    //if (!og_is_group_content_type('node', $type_name) || !og_user_access($group_type, $gid, "create $type_name content")) {
    if (!og_is_group_content_type('node', $type_name) || !og_user_access($group_type, $gid, "create $type_name content") || (!user_access("create $type_name content") && !$is_admin)) {
      continue;
    }

    $instance = field_info_instance('node', $field_name, $type_name);
    if (empty($instance['settings']['behaviors']['prepopulate']['status'])) {
      // Instance doesn't allow prepopulating.
      continue;
    }
    $names[$type_name] = node_type_get_name($type_name);
  }

  if (empty($names)) {
    return;
  }

  // Sort names.
  asort($names);

  // Build links.
  $options  = array(
    'query' => array($field_name => $gid),
  );

  if ($destination) {
    $options['query']['destination'] = $destination;
  }


  $items = array();
  foreach ($names as $type => $name) {
    // theme_item_list's 'data' items isn't a render element, so use l().
    // http://drupal.org/node/891112
    $items[] = array('data' => l($name, 'node/add/' . str_replace('_', '-', $type), $options));
  }

  $element = array();
  $element['og_node_create_links'] = array(
    '#theme' => 'item_list',
    '#items' => $items,
  );

  return $element;
}

