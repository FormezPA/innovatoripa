<?php
/**
 * @file
 * base_frontend.box.inc
 */

/**
 * Implements hook_default_box().
 */
function base_frontend_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'login_button';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'BOX: bottone di login';
  $box->options = array(
    'body' => array(
      'value' => '<?php global $user; ?>
<?php if (!$user->uid): ?>
<p id="login-form-button"><a href="#" title="Apri la form di login"><?php print t(\'Accedi/Registrati\') ?></a></p>
<?php endif; ?>',
      'format' => 'php_code',
    ),
    'additional_classes' => '',
  );
  $export['login_button'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'mobile_menu_button';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'BOX: link menu sito in versione mobile';
  $box->options = array(
    'body' => array(
      'value' => '<p id="mobile-menu-button" class="button"><a href="#main-menu" title="Vai al menu di navigazione">Menu</a></p>
',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['mobile_menu_button'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'site_footer';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Footer del sito';
  $box->options = array(
    'body' => array(
      'value' => '<p>InnovatoriPA &egrave; un&#39;iniziativa di <a href="http://www.formez.it">Formez PA</a> e <a href="http://www.forumpa.it">Forum PA</a><br />
Questa versione di InnovatoriPA &egrave; stata finanziata dal Dipartimento della Funzione Pubblica con il progetto <a href="http://focus.formez.it/content/performance-pa">Performance PA</a></p>

<p><a href="/content/chi-siamo-0">Chi siamo</a> | <a href="/content/regole-duso">Regole d&#39;uso</a> | <a href="/content/contattaci">Segnala un problema o un abuso</a> | <a href="/content/cancellazione-account">Richiedi cancellazione account</a></p>

<p>I contenuti di questo sito sono distribuiti con una licenza <a href="http://creativecommons.org/licenses/by-nc/2.5/deed.it">Creative Commons, Attribuzione - Non commerciale, CC BY-SA 3.0 </a> compresi quelli inseriti volontariamente dagli iscritti.</p>
',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['site_footer'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'social_links';
  $box->plugin_key = 'simple';
  $box->title = 'Social network';
  $box->description = 'BOX: Link alle pagine dei social network di innovatori PA';
  $box->options = array(
    'body' => array(
      'value' => '<ul class="social-links_list clearfix">
	<li class="social-links_item-twitter"><a href="http://twitter.com/InnovatoriPA" title="Seguici su Twitter"><img src="<?php print (base_path() . drupal_get_path(\'theme\', \'innovatoripa\'));  ?>/images/social_flat/twitter-128.png" alt="Twitter logo" /></a></li>
	<li class="social-links_item-facebook"><a href="http://www.facebook.com/InnovatoriPA" title="Il gruppo su FACEBOOK"><img src="<?php print (base_path() . drupal_get_path(\'theme\', \'innovatoripa\'));  ?>/images/social_flat/facebook-128.png" alt="Facebook logo" /></a></li>
	<li class="social-links_item-linkedin"><a href="http://www.linkedin.com/groups?gid=1482197" title="LinkedIn"><img src="<?php print (base_path() . drupal_get_path(\'theme\', \'innovatoripa\'));  ?>/images/social_flat/linkedin-128.png" alt="Linkedin logo" /></a></li>
</ul>',
      'format' => 'php_code',
    ),
    'additional_classes' => '',
  );
  $export['social_links'] = $box;

  return $export;
}
