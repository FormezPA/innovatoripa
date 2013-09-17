<?php

/**
 * @file
 * Contains the theme's functions to manipulate Drupal's default markup.
 *
 * A QUICK OVERVIEW OF DRUPAL THEMING
 *
 *   The default HTML for all of Drupal's markup is specified by its modules.
 *   For example, the comment.module provides the default HTML markup and CSS
 *   styling that is wrapped around each comment. Fortunately, each piece of
 *   markup can optionally be overridden by the theme.
 *
 *   Drupal deals with each chunk of content using a "theme hook". The raw
 *   content is placed in PHP variables and passed through the theme hook, which
 *   can either be a template file (which you should already be familiary with)
 *   or a theme function. For example, the "comment" theme hook is implemented
 *   with a comment.tpl.php template file, but the "breadcrumb" theme hooks is
 *   implemented with a theme_breadcrumb() theme function. Regardless if the
 *   theme hook uses a template file or theme function, the template or function
 *   does the same kind of work; it takes the PHP variables passed to it and
 *   wraps the raw content with the desired HTML markup.
 *
 *   Most theme hooks are implemented with template files. Theme hooks that use
 *   theme functions do so for performance reasons - theme_field() is faster
 *   than a field.tpl.php - or for legacy reasons - theme_breadcrumb() has "been
 *   that way forever."
 *
 *   The variables used by theme functions or template files come from a handful
 *   of sources:
 *   - the contents of other theme hooks that have already been rendered into
 *     HTML. For example, the HTML from theme_breadcrumb() is put into the
 *     $breadcrumb variable of the page.tpl.php template file.
 *   - raw data provided directly by a module (often pulled from a database)
 *   - a "render element" provided directly by a module. A render element is a
 *     nested PHP array which contains both content and meta data with hints on
 *     how the content should be rendered. If a variable in a template file is a
 *     render element, it needs to be rendered with the render() function and
 *     then printed using:
 *       <?php print render($variable); ?>
 *
 * ABOUT THE TEMPLATE.PHP FILE
 *
 *   The template.php file is one of the most useful files when creating or
 *   modifying Drupal themes. With this file you can do three things:
 *   - Modify any theme hooks variables or add your own variables, using
 *     preprocess or process functions.
 *   - Override any theme function. That is, replace a module's default theme
 *     function with one you write.
 *   - Call hook_*_alter() functions which allow you to alter various parts of
 *     Drupal's internals, including the render elements in forms. The most
 *     useful of which include hook_form_alter(), hook_form_FORM_ID_alter(),
 *     and hook_page_alter(). See api.drupal.org for more information about
 *     _alter functions.
 *
 * OVERRIDING THEME FUNCTIONS
 *
 *   If a theme hook uses a theme function, Drupal will use the default theme
 *   function unless your theme overrides it. To override a theme function, you
 *   have to first find the theme function that generates the output. (The
 *   api.drupal.org website is a good place to find which file contains which
 *   function.) Then you can copy the original function in its entirety and
 *   paste it in this template.php file, changing the prefix from theme_ to
 *   innovatoripa_. For example:
 *
 *     original, found in modules/field/field.module: theme_field()
 *     theme override, found in template.php: innovatoripa_field()
 *
 *   where innovatoripa is the name of your sub-theme. For example, the
 *   zen_classic theme would define a zen_classic_field() function.
 *
 *   Note that base themes can also override theme functions. And those
 *   overrides will be used by sub-themes unless the sub-theme chooses to
 *   override again.
 *
 *   Zen core only overrides one theme function. If you wish to override it, you
 *   should first look at how Zen core implements this function:
 *     theme_breadcrumbs()      in zen/template.php
 *
 *   For more information, please visit the Theme Developer's Guide on
 *   Drupal.org: http://drupal.org/node/173880
 *
 * CREATE OR MODIFY VARIABLES FOR YOUR THEME
 *
 *   Each tpl.php template file has several variables which hold various pieces
 *   of content. You can modify those variables (or add new ones) before they
 *   are used in the template files by using preprocess functions.
 *
 *   This makes THEME_preprocess_HOOK() functions the most powerful functions
 *   available to themers.
 *
 *   It works by having one preprocess function for each template file or its
 *   derivatives (called theme hook suggestions). For example:
 *     THEME_preprocess_page    alters the variables for page.tpl.php
 *     THEME_preprocess_node    alters the variables for node.tpl.php or
 *                              for node--forum.tpl.php
 *     THEME_preprocess_comment alters the variables for comment.tpl.php
 *     THEME_preprocess_block   alters the variables for block.tpl.php
 *
 *   For more information on preprocess functions and theme hook suggestions,
 *   please visit the Theme Developer's Guide on Drupal.org:
 *   http://drupal.org/node/223440 and http://drupal.org/node/1089656
 */
/* Add theme path to the Drupal.settings JS object */
drupal_add_js(array(
  'themePath' => drupal_get_path('theme', 'innovatoripa'),
  'siteURL' => 'http://' . $_SERVER['HTTP_HOST'],
    ), 'setting');


/* ---------------------------------------- *
 * A function to update some js libraries that comes wit Drupal
 * 
 * Implementation of hook_js_alter
 * ---------------------------------------- */

function innovatoripa_js_alter(&$scripts) {
  $theme_path = drupal_get_path('theme', 'innovatoripa');
  // dpm($scripts, 'BEFORE');
  foreach ($scripts as $path => $lib) {
    // dpm ($lib, $path);
    // Upgrade jquery.form.js for 1.7+ jquery compatibility
    if ($path === 'misc/jquery.js') {
      // $new_path = $theme_path . '/js/misc/jquery-1.9.1.min.js';
      // jQuery 1.9.1 ha rimosso $.browser quindi non funzionano 
      // diversi javascript di Drupal. Meglio restare sul branch 1.8
      $new_path = $theme_path . '/js/misc/jquery-1.8.3.min.js';
      $scripts[$path]['version'] = '1.8.3';
      $scripts[$path]['data'] = $new_path;
      continue;
    }
    elseif ($path === 'misc/states.js') {
      $new_path = $theme_path . '/js/misc/states.js';
      $scripts[$path]['data'] = $new_path;
      continue;
    }
    elseif ($path === 'misc/jquery.form.js') {
      $new_path = $theme_path . '/js/misc/jquery.form.min.js';
      $scripts[$path]['version'] = '2.69';
      $scripts[$path]['data'] = $new_path;
      continue;
    }
    elseif (strstr($path, 'misc/ui/jquery.ui')) {
      $new_path = str_replace('misc', $theme_path . '/js', $path);
      $scripts[$new_path] = $scripts[$path];
      $scripts[$new_path]['version'] = '1.8.24';
      $scripts[$new_path]['data'] = $new_path;
      unset($scripts[$path]);
      continue;
    }
    elseif (strstr($path, 'misc/ui/jquery.effects')) {
      // dpm ($lib, $path);
      $new_path = str_replace('misc', $theme_path . '/js', $path);
      $scripts[$new_path] = $scripts[$path];
      $scripts[$new_path]['version'] = '1.8.24';
      $scripts[$new_path]['data'] = $new_path;
      unset($scripts[$path]);
      continue;
    }
  }
  // dpm($scripts, 'AFTER');
}

/* ---------------------------------------- *
 * A function to upgrade jQuery UI CSS
 * implementation of hook_css_alter
 * ---------------------------------------- */

function innovatoripa_css_alter(&$css) {
  $theme_path = drupal_get_path('theme', 'innovatoripa');
  foreach ($css as $path => $lib) {
    if (strstr($path, 'misc/ui/jquery.ui')) {
      $new_path = str_replace('misc', $theme_path . '/css', $path);
      $css[$new_path] = $css[$path];
      $css[$new_path]['version'] = '1.8.24';
      $css[$new_path]['data'] = $new_path;
      unset($css[$path]);
    }
  }
}

/*
 * template_preprocess
 * 
 * Aggiungo i poot themers helpers per la stilizzazione (codice estratto da mothership)
 */
function innovatoripa_preprocess(&$variables, $hook) {
  // dsm($variables);
  
  //http://api.drupal.org/api/drupal/includes--theme.inc/function/template_preprocess_html/7
  $variables['innovatoripa_poorthemers_helper'] = "";

  /* Go through all the hooks of drupal and give em epic love */
  if ($hook == "html") {
    // =======================================| HTML |========================================
  }  elseif ($hook == "page") {
    // =======================================| PAGE |========================================
    //
    //New template suggestions
    // page--nodetype.tpl.php
    if (isset($variables['node'])) {
      $variables['theme_hook_suggestions'][] = 'page__' . $variables['node']->type;
    }

    //custom 404/404
    $headers = drupal_get_http_header();
    if (isset($headers['status'])) {
      if ($headers['status'] == '404 Not Found') {
        $variables['theme_hook_suggestions'][] = 'page__404';
      }
    }
  } elseif ($hook == "region") {
    // =======================================| region |========================================
  } elseif ($hook == "block") {
    // =======================================| block |========================================
    // 
    //add a theme suggestion to block--menu.tpl so we dont have create a ton of blocks with <nav>
    if (
        ($variables['elements']['#block']->module == "system" AND $variables['elements']['#block']->delta == "navigation") OR
        ($variables['elements']['#block']->module == "system" AND $variables['elements']['#block']->delta == "main-menu") OR
        ($variables['elements']['#block']->module == "system" AND $variables['elements']['#block']->delta == "user-menu") OR
        ($variables['elements']['#block']->module == "admin" AND $variables['elements']['#block']->delta == "menu") OR
        $variables['elements']['#block']->module == "menu_block"
    ) {
      $variables['theme_hook_suggestions'][] = 'block__menu';
    }

    // add a theme hook suggestion to the bean so its combinated with its region
    if ($variables['elements']['#block']->module == "bean" AND $variables['elements']['bean']) {
      $variables['theme_hook_suggestions'][] = 'block__bean_' . $variables['elements']['#block']->region;
    }

    // add specific theme suggestion for views:
    // block--views--INTERNAL-NAME.tpl 
    // block--views--VIEW-NAME.tpl 
    // block--views--VIEW-NAME--INTERNAL-NAME.tpl 
    if ($variables['elements']['#block']->module == "views" && isset($variables['elements']['content']['#views_contextual_links_info'])) {
      // dsm($variables);
      // dsm($variables['elements']);
      $view_name = $variables['elements']['content']['#views_contextual_links_info']['views_ui']['view_name'];
      $view_display_id = $variables['elements']['content']['#views_contextual_links_info']['views_ui']['view_display_id'];
      
      $variables['theme_hook_suggestions'][] = 'block__views__' . $view_display_id;
      $variables['theme_hook_suggestions'][] = 'block__views__' . $view_name;
      $variables['theme_hook_suggestions'][] = 'block__views__' . $view_name . '__' . $view_display_id;
      
      // dsm($variables['theme_hook_suggestions']);
    }
    
  } elseif ($hook == "node") {
    // =======================================| NODE |========================================
    // kpr($variables);
    //Template suggestions
    //add new theme hook suggestions based on type & wiewmode
    // a default catch all theaser are set op as node--nodeteaser.tpl.php
    //kpr($variables['theme_hook_suggestions']);
    //one unified node teaser template
    if ($variables['view_mode'] == "teaser") {
      $variables['theme_hook_suggestions'][] = 'node__nodeteaser';
    }

    if ($variables['view_mode'] == "teaser" AND $variables['promote']) {
      $variables['theme_hook_suggestions'][] = 'node__nodeteaser__promote';
    }

    if ($variables['view_mode'] == "teaser" AND $variables['sticky']) {
      $variables['theme_hook_suggestions'][] = 'node__nodeteaser__sticky';
    }

    if ($variables['view_mode'] == "teaser" AND $variables['is_front']) {
      $variables['theme_hook_suggestions'][] = 'node__nodeteaser__front';
    }

    //$variables['theme_hook_suggestions'][] = 'node__' . $variables['type'] ;
    //fx node--gallery--teaser.tpl
    $variables['theme_hook_suggestions'][] = 'node__' . $variables['type'] . '__' . $variables['view_mode'];

    //add a noderef to the list
    if (isset($variables['referencing_field'])) {
      $variables['theme_hook_suggestions'][] = 'node__noderef';
      $variables['theme_hook_suggestions'][] = 'node__noderef__' . $variables['type'];
      $variables['theme_hook_suggestions'][] = 'node__noderef__' . $variables['type'] . '__' . $variables['view_mode'];
    }

    //HELPERS
    //print out all the fields that we can hide/render
    if (theme_get_setting('zen_rebuild_registry')) {
      $variables['innovatoripa_poorthemers_helper'] .= " ";
      //foreach ($variables['theme_hook_suggestions'] as $key => $value){
      // $value = str_replace('_','-',$value);
      //$variables['innovatoripa_poorthemers_helper'] .= "<!-- * " . $value . ".tpl.php -->\n" ;
      //}

      foreach ($variables['content'] as $key => $value) {
        $variables['innovatoripa_poorthemers_helper'] .= "\n <!-- hide(\$content['" . $key . "']); --> \n";
        $variables['innovatoripa_poorthemers_helper'] .= "\n <!-- render(\$content['" . $key . "']); --> \n";
      }
    }

  } elseif ($hook == "comment_wrapper") {
    // =======================================| COMMENT |========================================
    
    // Add a theme hook suggestion 
    $variables['theme_hook_suggestions'][] = 'comment_wrapper__' . $variables['node']->type;
    
  } elseif ($hook == "comment") {
    // =======================================| COMMENT |========================================
    if (isset($variables['elements']['#comment']->new)) {
      $variables['classes_array'][] = ' new';
    }

    if ($variables['status'] == "comment-unpublished") {
      $variables['classes_array'][] = ' unpublished';
    }
    
    // Add a theme hook suggestion 
    $variables['theme_hook_suggestions'][] = 'comment__' . $variables['node']->type;
    
  } elseif ($hook == "field") {
    // =======================================| FIELD |========================================
  
  } elseif ($hook == "maintenance_page") {
    // =======================================| MAINTENANCE PAGE |========================================
  }

//--- POOR THEMERS HELPER
  if (theme_get_setting('zen_rebuild_registry')) {
    $variables['innovatoripa_poorthemers_helper'] .= "";
    //theme hook suggestions
    $variables['innovatoripa_poorthemers_helper'] .= "\n <!-- theme hook suggestions: -->";
    $variables['innovatoripa_poorthemers_helper'] .= "\n <!-- hook:" . $hook . " --> \n  ";
    foreach ($variables['theme_hook_suggestions'] as $key => $value) {
      $value = str_replace('_', '-', $value);
      $variables['innovatoripa_poorthemers_helper'] .= "<!-- TPL:* " . $value . ".tpl.php -->\n";
    }

    $variables['innovatoripa_poorthemers_helper'] .= "";
  }
  else {
    $variables['innovatoripa_poorthemers_helper'] = "";
  }
}



/**
 * Override or insert variables into the maintenance page template.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("maintenance_page" in this case.)
 */
/* -- Delete this line if you want to use this function
  function innovatoripa_preprocess_maintenance_page(&$variables, $hook) {
  // When a variable is manipulated or added in preprocess_html or
  // preprocess_page, that same work is probably needed for the maintenance page
  // as well, so we can just re-use those functions to do that work here.
  innovatoripa_preprocess_html($variables, $hook);
  innovatoripa_preprocess_page($variables, $hook);
  }
  // */

/**
 * Override or insert variables into the html templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("html" in this case.)
 */
//* -- Delete this line if you want to use this function
function innovatoripa_preprocess_html(&$variables, $hook) {
  // dsm($variables, '$variables');
  // Aggiungo la libreria jQuery Formalize (definita in base_frontend)
  drupal_add_library('base_frontend', 'formalize', TRUE);

  $active_contexts = context_get();
  // dsm($contexts, '$contexts');
  // $variables['sample_variable'] = t('Lorem ipsum.');

  /*
   * Se sto utilizzando il template page-panel-container.tpl.php,
   * ovvero è attivo il contesto panels_pages, devo eliminare dal
   * body le classi indicative dello stato delle sidebar. Tali classi
   * sono gestite dal template del pannello.
   */
  if (isset($active_contexts['context']['panels_pages'])) {
    $variables['classes_array'] = array_diff($variables['classes_array'], array('two-sidebars', 'no-sidebars', 'one-sidebar', 'sidebar-first', 'sidebar-second'));
  }

  // The body tag's classes are controlled by the $classes_array variable. To
  // remove a class from $classes_array, use array_diff().
  //$variables['classes_array'] = array_diff($variables['classes_array'], array('class-to-remove'));
}

// */

/**
 * Override or insert variables into the page templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("page" in this case.)
 */
/* -- Delete this line if you want to use this function
  function innovatoripa_preprocess_page(&$variables, $hook) {
    // $variables['test'] = 'value';
    // dsm($variables, 'preprocess_page variables');
    // dsm($variables['node'], 'preprocess_page node');
  }

// */

/**
 * Override or insert variables into the node templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("node" in this case.)
 */
/* -- Delete this line if you want to use this function
  function innovatoripa_preprocess_node(&$variables, $hook) {
    // $variables['sample_variable'] = t('Lorem ipsum.');
    // dsm(get_defined_vars());
    // Optionally, run node-type-specific preprocess functions, like
    // innovatoripa_preprocess_node_page() or innovatoripa_preprocess_node_story().
    // $function = __FUNCTION__ . '_' . $variables['node']->type;
    // if (function_exists($function)) {
    //  $function($variables, $hook);
    // }
    if (($variables['type'] === 'comunita' || $variables['type'] === 'gruppo') && $variables['view_mode'] === 'full') {
      dsm($variables, 'PREPROCESS');
      // dsm($variables['node']);
    }
  }
// */

/**
 * Override or insert variables into the comment templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("comment" in this case.)
 */
  function innovatoripa_preprocess_comment(&$variables, $hook) {
    // dsm(get_defined_vars());

    $comment = $variables['comment'];
    // dsm($comment, 'COMMENT');

    // Carico il profilo utente (mi serve per l'avatar)
    $user_id = $comment->uid;
    $user_profile = profile2_load_by_user($user_id);
    // dsm($user_profile, 'USER PROFILE');
    $variables['user_avatar_url'] = '';
    $user_name = 'profilo';
    $user_surname = 'vuoto';
    
    if (isset($user_profile['main'])) {
       $avatar = field_view_field('profile2', $user_profile['main'], 'field_profile_avatar', array(
          'type' => 'image',
          'settings' => array('image_style' => 'user_thumb'),
        ));
      $variables['user_avatar_url'] = image_style_url('user_thumb', $avatar['#items'][0]['uri']);
    }
    
    if (isset($user_profile['main']->field_profile_nome[LANGUAGE_NONE])) {
      $user_name = $user_profile['main']->field_profile_nome[LANGUAGE_NONE][0]['safe_value'];
    }
    
    if (isset($user_profile['main']->field_profile_cognome[LANGUAGE_NONE])) {
      $user_surname = $user_profile['main']->field_profile_cognome[LANGUAGE_NONE][0]['safe_value'];
    }
    
    $variables['user_name_and_surname'] = $user_name . ' ' . $user_surname;
    $variables['user_profile_path'] = base_path() . 'user/' . $user_id;
    $variables['linked_username'] = '<a href="' . $variables['user_profile_path'] . '" title="Visualizza il profilo di ' . $variables['user_name_and_surname'] . '">' . $variables['user_name_and_surname'] . '</a>';
    
    $comment_pub_date = format_date($comment->created, 'short');
    $comment_update_date = format_date($comment->changed, 'short');
    $variables['comment_date_infos'] = ($comment->created === $comment->changed) ? $comment_pub_date : $comment_pub_date . ' (aggiornato ' . $comment_update_date . ')';
    
  }

/**
 * Override or insert variables into the region templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("region" in this case.)
 */
/* -- Delete this line if you want to use this function
  function innovatoripa_preprocess_region(&$variables, $hook) {
  // Don't use Zen's region--sidebar.tpl.php template for sidebars.
  //if (strpos($variables['region'], 'sidebar_') === 0) {
  //  $variables['theme_hook_suggestions'] = array_diff($variables['theme_hook_suggestions'], array('region__sidebar'));
  //}
  }
  // */

/**
 * Override or insert variables into the block templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("block" in this case.)
 */
/* -- Delete this line if you want to use this function
  function innovatoripa_preprocess_block(&$variables, $hook) {
  // Add a count to all the blocks in the region.
  // $variables['classes_array'][] = 'count-' . $variables['block_id'];

  // By default, Zen will use the block--no-wrapper.tpl.php for the main
  // content. This optional bit of code undoes that:
  //if ($variables['block_html_id'] == 'block-system-main') {
  //  $variables['theme_hook_suggestions'] = array_diff($variables['theme_hook_suggestions'], array('block__no_wrapper'));
  //}
  }
  // */

  /*
   * Implements hook_preprocess_field
   */  
  /*
  function innovatoripa_preprocess_field(&$variables, $hook) {
    // dsm($variables, $hook);
  }
  */

  
  
/**
 * Implements hook_preprocess_privatemsg_view().
 */
  function innovatoripa_preprocess_privatemsg_view(&$variables, $hook) {
    $message_author = $variables['message']->author;
    $logged_user = $variables['message']->user;
    
    if ($message_author->uid == $logged_user->uid) {
      $variables['message_classes'][] = 'is-my-message';
    }
    // dsm($variables);
    
    if (isset($message_author->realname)) {
      $message_author_name = $message_author->realname;
    } else {
      $message_author_name = $message_author->name;
    }
    
    $profile = profile2_load_by_user($message_author->uid);
    
    $avatar = field_view_field('profile2', $profile['main'], 'field_profile_avatar', array(
      'type' => 'image',
      'settings' => array('image_style' => 'user_thumb'),
    ));
    // dsm ($avatar);
    $avatar_html = render($avatar[0]);
    $variables['linked_avatar'] = l($avatar_html, "user/{$message_author->uid}", array('attributes' => array('title' => $message_author_name), 'html' => TRUE));
  }  

  // Views preprocess
  function innovatoripa_preprocess_views_view_table(&$vars) {
    $vars['classes_array'][] = 'responsive';
  }
  
  
 // ----------------------------------------------------
 // --------- PROCESS ----------------------------------
 // ----------------------------------------------------
  
/**
 * Override or insert variables into the page templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("region" in this case.)
 */
  function innovatoripa_process_page(&$variables, $hook) {
    // dsm($variables, 'process_page variables');
    if (isset($variables['page']['content']['system_main']['comment_parent']['#bundle']) &&
      $variables['page']['content']['system_main']['comment_parent']['#bundle'] === 'comment_node_domanda') {
        $old_title = $variables['title'];
        $new_title = 'Aggiungi una riposta';
        $variables['breadcrumb'] = str_replace($old_title, $new_title, $variables['breadcrumb']);
        $variables['title'] = t($new_title);
    }
  }

  /**
  * Override or insert variables into the node templates.
  *
  * @param $variables
  *   An array of variables to pass to the theme template.
  * @param $hook
  *   The name of the template being rendered ("region" in this case.)
  */
  function innovatoripa_process_node(&$variables, $hook) {
    // dsm($variables);
    // nei teaser rimuovo i tag html diversi da <p> ed <a>
    if (($variables['teaser'] || $variables['view_mode'] == 'teaser_simplified') && isset($variables['teaser_content_text'])) {
      $variables['teaser_content_text'] = strip_tags($variables['teaser_content_text'], '<p><a>');
    }
    /*
    if (($variables['type'] === 'comunita' || $variables['type'] === 'gruppo') && $variables['view_mode'] === 'full') {
      // unset($variables['content']['links']['flag']);
      // unset($variables['elements']['links']['flag']);
      // dsm($variables, 'PROCESS');
      // dsm($variables['node']);
    }
    //*/
  }
  
  /**
  * Override or insert variables into the comment templates.
  *
  * @param $variables
  *   An array of variables to pass to the theme template.
  * @param $hook
  *   The name of the template being rendered ("region" in this case.)
  */
  /*
  function innovatoripa_process_comment(&$variables, $hook) {
    // dsm($variables, 'innovatoripa_process_comment');
  }
  // */
    
 
 // ----------------------------------------------------
 // --------- THEMING FUNCTIONS ------------------------
 // ----------------------------------------------------
  
  /*
   * Override theming function for 
   */
  /*
  function innovatoripa_field__minimal__field_allegato(&$variables) {
      // dsm($variables);
  }
  */

  function innovatoripa_table($variables) {
    // dsm($variables);
    
    $header = $variables['header'];
    $rows = $variables['rows'];
    $attributes = $variables['attributes'];
    $caption = $variables['caption'];
    $colgroups = $variables['colgroups'];
    $sticky = $variables['sticky'];
    $empty = $variables['empty'];
    
    // Add responsive class to all Drupal generated tables
    $attributes['class'][] = 'responsive';    
    
    // Add sticky headers, if applicable.
    if (count($header) && $sticky) {
      drupal_add_js('misc/tableheader.js');
      // Add 'sticky-enabled' class to the table to identify it for JS.
      // This is needed to target tables constructed by this function.
      $attributes['class'][] = 'sticky-enabled';
    }

    $output = '<table' . drupal_attributes($attributes) . ">\n";

    if (isset($caption)) {
      $output .= '<caption>' . $caption . "</caption>\n";
    }

    // Format the table columns:
    if (count($colgroups)) {
      foreach ($colgroups as $number => $colgroup) {
        $attributes = array();

        // Check if we're dealing with a simple or complex column
        if (isset($colgroup['data'])) {
          foreach ($colgroup as $key => $value) {
            if ($key == 'data') {
              $cols = $value;
            }
            else {
              $attributes[$key] = $value;
            }
          }
        }
        else {
          $cols = $colgroup;
        }

        // Build colgroup
        if (is_array($cols) && count($cols)) {
          $output .= ' <colgroup' . drupal_attributes($attributes) . '>';
          $i = 0;
          foreach ($cols as $col) {
            $output .= ' <col' . drupal_attributes($col) . ' />';
          }
          $output .= " </colgroup>\n";
        }
        else {
          $output .= ' <colgroup' . drupal_attributes($attributes) . " />\n";
        }
      }
    }

    // Add the 'empty' row message if available.
    if (!count($rows) && $empty) {
      $header_count = 0;
      foreach ($header as $header_cell) {
        if (is_array($header_cell)) {
          $header_count += isset($header_cell['colspan']) ? $header_cell['colspan'] : 1;
        }
        else {
          $header_count++;
        }
      }
      $rows[] = array(array(
        'data' => $empty,
        'colspan' => $header_count,
        'class' => array('empty', 'message'),
      ));
    }

    // Format the table header:
    if (count($header)) {
      $ts = tablesort_init($header);
      // HTML requires that the thead tag has tr tags in it followed by tbody
      // tags. Using ternary operator to check and see if we have any rows.
      $output .= (count($rows) ? ' <thead><tr>' : ' <tr>');
      foreach ($header as $cell) {
        $cell = tablesort_header($cell, $header, $ts);
        $output .= _theme_table_cell($cell, TRUE);
      }
      // Using ternary operator to close the tags based on whether or not there are rows
      $output .= (count($rows) ? " </tr></thead>\n" : "</tr>\n");
    }
    else {
      $ts = array();
    }

    // Format the table rows:
    if (count($rows)) {
      $output .= "<tbody>\n";
      $flip = array(
        'even' => 'odd',
        'odd' => 'even',
      );
      $class = 'even';
      foreach ($rows as $number => $row) {
        $attributes = array();

        // Check if we're dealing with a simple or complex row
        if (isset($row['data'])) {
          foreach ($row as $key => $value) {
            if ($key == 'data') {
              $cells = $value;
            }
            else {
              $attributes[$key] = $value;
            }
          }
        }
        else {
          $cells = $row;
        }
        if (count($cells)) {
          // Add odd/even class
          if (empty($row['no_striping'])) {
            $class = $flip[$class];
            $attributes['class'][] = $class;
          }

          // Build row
          $output .= ' <tr' . drupal_attributes($attributes) . '>';
          $i = 0;
          foreach ($cells as $cell) {
            $cell = tablesort_cell($cell, $header, $ts, $i++);
            $output .= _theme_table_cell($cell);
          }
          $output .= " </tr>\n";
        }
      }
      $output .= "</tbody>\n";
    }

    $output .= "</table>\n";
    return $output;
  }
  
  
 
 // ----------------------------------------------------
 // --------- FORM ALTERS AND THEMING-------------------
 // ----------------------------------------------------
  
 /*
  * Add an HTML5 placeholder to text field
  */
  function innovatoripa_form_alter(&$form, &$form_state, $form_id) {
    // dsm(form());
    // HTML5 placeholder attribute
    if ($form_id == 'search_block_form') {
      $context = og_context();
      $search_text = t('Cerca nel sito...');
      if ($context) {
        $og = node_load($context['gid']);
        $search_text = (($og->type == 'comunita') ? t('Cerca in @title', array('@title' => $og->title)) : t('Cerca nel gruppo'));
        $form['search_block_form']['#size'] = strlen($og->title) + 10;
      }
      $form['search_block_form']['#attributes']['placeholder'] = $search_text;
    }
  }
  
  /*
  Alternative to drupals login block
  Register link before the login form
  password forgotten link is placed after the password field
*/

function innovatoripa_form_user_login_block_alter(&$form, &$form_state, $form_id) {
  //set placeholders
  $form['name']['#attributes']['placeholder'] = $form['name']['#title'];
  $form['pass']['#attributes']['placeholder'] = $form['pass']['#title'];
}