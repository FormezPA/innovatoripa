<?php
// Responsive template for search panels
// 
// Classi per la presenza di una o più sidebar

if ($content['sidebar_search'] && $content['sidebar_second']) {
  $sidebar_class = 'two-sidebars';
} else if ($content['sidebar_search']) {
  $sidebar_class = 'sidebar-search';
} else if ($content['sidebar_second']) {
  $sidebar_class = 'sidebar-second';
}
?>

<div class="panel panel-search <?php print $sidebar_class; ?>" <?php if (!empty($css_id)) { print 'id=\"$css_id\"'; } ?>>

<?php if ($content['panel_head']): ?>
  <div class="panel-head"><?php print $content['panel_head']; ?></div>
<?php endif; ?>
  
<?php if ($content['sidebar_search'] || $content['main_content']): ?>  
  <div id="p-content" class="panel-column" role="main">
    
    <?php if ($content['sidebar_search']): ?>
      <div class="panel-sidebar-search"><?php print $content['sidebar_search']; ?></div>
    <?php endif; ?>
    
    <?php if ($content['main_content']): ?>
      <div class="panel-content"><?php print $content['main_content']; ?></div>
    <?php endif; ?>
      
  </div>
<?php endif; ?>

    <?php if ($content['sidebar_second']): ?>
    <aside class="sidebars">
        
      <?php if ($content['sidebar_second']): ?>
        <div class="panel-sidebar-second"><?php print $content['sidebar_second']; ?></div>
      <?php endif; ?>
        
    </aside><!-- /.sidebars -->    
  <?php endif; ?>
  
  
</div>