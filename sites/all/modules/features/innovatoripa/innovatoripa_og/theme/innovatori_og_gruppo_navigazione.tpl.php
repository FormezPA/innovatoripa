<?php if ($gid) : ?>
  <div class="group-nav-shadow-mask"></div>
  <div class="group-nav-info">
    <?php if (!empty($group_logo_small)) : ?>
      <a href="<?php print $group_url; ?>" title="Torna alla home del gruppo">
        <?php print $group_logo_small ?>
      </a>
    <?php endif; ?>
    <h2><?php print $group_name; ?></h2>
  </div>
  <ul class="group-nav_menu clearfix">
    <!-- <li class="group-nav_menu-leaf"><?php print l('<i class="icon group"></i>' . t('Home'), "node/{$gid}", array('html' => TRUE)) ?></li> -->
    <li class="group-nav_menu-leaf"><?php print l('<i class="icon discussions"></i>' . t('Discussioni'), "node/{$gid}", array('html' => TRUE)) ?></li>
    <li class="group-nav_menu-leaf"><?php print l('<i class="icon files"></i>' . t('Files'), "node/{$gid}/files", array('html' => TRUE)) ?></li>
  </ul>
<?php endif; ?>
