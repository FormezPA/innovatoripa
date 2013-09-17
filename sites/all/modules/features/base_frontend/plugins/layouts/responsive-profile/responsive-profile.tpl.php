<?php
// Responsive template for profile pages
// 
// Classi per la presenza di una o più sidebar

if ($content['content_sidebar'] && $content['sidebar_first']) {
  $sidebar_class = 'two-sidebars';
} else if ($content['content_sidebar']) {
  $sidebar_class = 'content-sidebar';
} else if ($content['sidebar_first']) {
  $sidebar_class = 'sidebar-first';
} else {
  $sidebar_class = 'no-sidebars';
}
?>

<div class="panel panel-profile <?php print $sidebar_class . ' ' . $classes; ?>" <?php if (!empty($css_id)) { print 'id=\"$css_id\"'; } ?>>

  <?php if ($content['panel_head']): ?>
    <div class="panel-head"><?php print $content['panel_head']; ?></div>
  <?php endif; ?>

  <?php if($content['main_content'] || $content['secondary_content'] || $content['content_sidebar']): ?>
    <div id="content" class="panel-column" role="main">

      <?php if ($content['main_content']): ?>
        <div class="panel-content"><?php print $content['main_content']; ?></div>
      <?php endif; ?>

      <?php if ($content['secondary_content']): ?>
        <div class="panel-content-secondary"><?php print $content['secondary_content']; ?></div>
      <?php endif; ?>

      <?php if ($content['content_sidebar']): ?>
        <div class="panel-content-sidebar"><?php print $content['content_sidebar']; ?></div>
      <?php endif; ?>

    </div>
  <?php endif; ?>

  <?php if ($content['sidebar_first']): ?>
    <aside class="sidebars">
      <?php if ($content['sidebar_first']): ?>
        <div class="panel-sidebar-first"><?php print $content['sidebar_first']; ?></div>
      <?php endif; ?>
    </aside><!-- /.sidebars -->    
  <?php endif; ?>
  
  
</div>