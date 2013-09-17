<?php
/**
 * @file
 * Display Suite 1 column template for a poll
 * 
 * Questo template è utilizzato per la visualizzazione "anteprima"
 * dei sondaggi, visualizzazione utilizzata dalla vista per stampare
 * il sondaggio in sidebar.
 * 
 */
?>
<!-- ds-1col--node-poll.tpl.php -->
<<?php print $ds_content_wrapper; print $layout_attributes; ?> class="<?php print $classes;?> clearfix">
  <?php if (isset($title_suffix['contextual_links'])): ?>
  <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>

  <h2 class="title"><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>

  <?php print $ds_content; ?>
</<?php print $ds_content_wrapper ?>>

<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>
<!-- ds-1col--node-poll.tpl.php -->