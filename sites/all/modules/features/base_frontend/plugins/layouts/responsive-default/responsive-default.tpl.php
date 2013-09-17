<?php
// DEFAULT responsive template
// Ricalca il comportamento di page.tpl.php
// 
// Classi per la presenza di una o più sidebar

if ($content['sidebar_first'] && $content['sidebar_second']) {
  $sidebar_class = 'two-sidebars';
} else if ($content['sidebar_first']) {
  $sidebar_class = 'sidebar-first';
} else if ($content['sidebar_second']) {
  $sidebar_class = 'sidebar-second';
} else {
  $sidebar_class = 'no-sidebars';
}
?>

<div class="panel panel-default <?php print $sidebar_class . ' ' . $classes; ?>" <?php if (!empty($css_id)) { print 'id=\"$css_id\"'; } ?>>

<?php if ($content['panel_head']): ?>
  <div class="panel-head"><?php print $content['panel_head']; ?></div>
<?php endif; ?>
  
<?php if ($content['highlighted'] || $content['main_content']): ?>  
  <div id="content" class="panel-column" role="main">
    
    <?php if ($content['highlighted']): ?>
      <div class="panel-highlighted"><?php print $content['highlighted']; ?></div>
    <?php endif; ?>
    
    <?php if ($content['main_content']): ?>
      <div class="panel-content"><?php print $content['main_content']; ?></div>
    <?php endif; ?>
      
  </div>
<?php endif; ?>
  
  <?php if ($content['sidebar_first'] || $content['sidebar_second']): ?>
    <aside class="sidebars">
      
      <?php if ($content['sidebar_first']): ?>
        <div class="panel-sidebar-first"><?php print $content['sidebar_first']; ?></div>
      <?php endif; ?>
        
      <?php if ($content['sidebar_second']): ?>
        <div class="panel-sidebar-second"><?php print $content['sidebar_second']; ?></div>
      <?php endif; ?>
        
    </aside><!-- /.sidebars -->    
  <?php endif; ?>
    
</div>