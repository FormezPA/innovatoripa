<?php
/*
 * Questo blocco genera due markup differenti a seconda che io sia all'interno della comunità
 * dove genera il menu di navigazione della comunità, o all'interno di un gruppo della comunità
 * dove genera il blocchetto in sidebar con le info della comunità cui il gruppo appartiene.
 */

// dsm(get_defined_vars());

if($is_group) {
  $class = 'in-group';
} else {
  $class = 'in-community';
}

?>
<?php if ($gid) : ?>
<div class="<?php print $class; ?>">
  <div class="community-nav-shadow-mask"></div>
  <div class="community-nav-info">
    <?php if (!empty($community_logo_small)) : ?>
      <a href="<?php print $community_url; ?>" title="Vai alla homepage della comunità">
        <?php print $community_logo_small ?>
      </a>
    <?php endif; ?>
    <?php if(!$is_group): ?>
      <h2><?php print $community_name; ?></h2>
    <?php else: ?>
      <h3>Questo gruppo è inserito nella comunità <a href="<?php print $community_url; ?>" title="Vai alla homepage della comunità"><?php print $community_name; ?></a></h3>
    <?php endif; ?>
  </div>
  <?php if(!$is_group) : // il menu viene gnerato solo quando non siamo all'interno di un gruppo '?>
  <ul class="community-nav_menu clearfix">
    <li class="community-nav_menu-leaf home-leaf"><?php print l('<i class="icon community"></i>' . t('Home'), "node/{$gid}", array('html' => TRUE)) ?></li>
    <li class="community-nav_menu-leaf groups-leaf"><?php print l('<i class="icon groups"></i>' . t('Gruppi'), "node/{$gid}/gruppi", array('html' => TRUE)) ?></li>
    <li class="community-nav_menu-leaf discussions-leaf"><?php print l('<i class="icon discussions"></i>' . t('Forum'), "node/{$gid}/discussioni", array('html' => TRUE)) ?></li>
    <li class="community-nav_menu-leaf wiki-leaf"><?php print l('<i class="icon wiki"></i>' . t('Wiki'), "node/{$gid}/wiki", array('html' => TRUE)) ?></li>
    <li class="community-nav_menu-leaf questions-leaf"><?php print l('<i class="icon questions"></i>' . t('Domande e Risposte'), "node/{$gid}/domande", array('html' => TRUE)) ?></li>
    <li class="community-nav_menu-leaf files-leaf"><?php print l('<i class="icon files"></i>' . t('Files'), "node/{$gid}/files", array('html' => TRUE)) ?></li>
    <li class="community-nav_menu-leaf blog-leaf"><?php print l('<i class="icon blog"></i>' . t('Blog'), "node/{$gid}/blog", array('html' => TRUE)) ?></li>
    <li class="community-nav_menu-leaf appointments-leaf"><?php print l('<i class="icon appointments"></i>' . t('Appuntamenti'), "node/{$gid}/appuntamenti", array('html' => TRUE)) ?></li>
    <li class="community-nav_menu-leaf reports-leaf"><?php print l('<i class="icon reports"></i>' . t('Segnalazioni'), "node/{$gid}/segnalazioni", array('html' => TRUE)) ?></li>
    <li class="community-nav_menu-leaf polls-leaf"><?php print l('<i class="icon polls"></i>' . t('Sondaggi'), "node/{$gid}/sondaggi", array('html' => TRUE)) ?></li>
    <li class="community-nav_menu-leaf webforms-leaf"><?php print l('<i class="icon webforms"></i>' . t('Questionari'), "node/{$gid}/questionari", array('html' => TRUE)) ?></li>
    <li class="community-nav_menu-leaf stats-leaf"><?php print l('<i class="icon stats"></i>' . t('Statistiche'), "node/{$gid}/stats", array('html' => TRUE)) ?></li>
  </ul>
  <?php endif; ?>
</div>
<?php endif; ?>