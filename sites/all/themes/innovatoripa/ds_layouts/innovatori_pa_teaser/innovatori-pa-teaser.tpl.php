<?php
  // kpr(get_defined_vars());
?>
<!-- Innovatori PA teaser (innovatori-pa-teaser.tpl.php) -->
<article class="clearfix <?php if($classes){ print $classes; } ?>" role="article">
  <?php
    if (isset($title_suffix['contextual_links'])) { print render($title_suffix['contextual_links']); }
  ?>
  
  <?php if ($teaser_user): ?>
    <?php if($teaser_user_classes) { print '<div class="' . $teaser_user_classes . '">'; } ?>
      <?php print $teaser_user; ?>
    <?php if($teaser_user_classes) { print '</div>'; } ?>
  <?php endif; ?>

    <div class="content">
      <?php if ($teaser_header OR $teaser_header_hgroup): ?>
        <header <?php if($teaser_header_classes){ ?>class="<?php print $teaser_header_classes; ?>"<?php } ?>>
          <?php if($teaser_header_hgroup): ?>
            <hgroup class="content-title <?php if($teaser_header_hgroup_classes){ print $teaser_header_hgroup_classes; } ?>">
                <?php print $teaser_header_hgroup; ?>
            </hgroup>
          <?php endif; ?>
            <?php print $teaser_header; ?>
        </header>
      <?php endif; ?>
      
      <?php if ($teaser_content_text): ?>
        <div class="content-text <?php if($teaser_content_text_classes){ print $teaser_content_text_classes; } ?>">
            <?php print $teaser_content_text; ?>
        </div>
      <?php endif; ?>
      
      <?php if ($teaser_content_stats): ?>
        <div class="content-stats <?php if($teaser_content_stats_classes){ print $teaser_content_stats_classes; } ?>">
            <?php print $teaser_content_stats; ?>
        </div>
      <?php endif; ?>
    </div>
  
  <?php if ($teaser_footer): ?>
    <footer <?php if($teaser_footer_classes){ ?>class="<?php print $teaser_footer_classes; ?>"<?php } ?>>
        <?php print $teaser_footer; ?>
    </footer>
  <?php endif; ?>

  <?php if ($teaser_comments): ?>
    <?php print $teaser_comments; ?>
  <?php endif; ?>
  
</article>

