<?php
 // kpr(get_defined_vars());
?>
<!-- html5 1 col stacked (innovatori-pa-html5-1col-stacked.tpl.php) -->
<article class="clearfix <?php if($classes){ print $classes; } ?>" role="article">
  <?php
    if (isset($title_suffix['contextual_links'])){
       print render($title_suffix['contextual_links']);
   }
  ?>

  <?php if ($header OR $hgroup OR $user_info): ?>
    <header <?php if($header_classes){ ?>class="<?php print $header_classes; ?>"<?php } ?>>
      <?php if ($user_info): ?>
        <div class="user-info <?php if($user_info_classes){ print $user_info_classes; } ?>">
          <?php print $user_info; ?>
        </div>
      <?php endif; ?>
      <?php if($hgroup){ ?>
        <hgroup <?php if($hgroup_classes){ ?>class="<?php print $hgroup_classes; ?>"<?php } ?>>
        <?php print $hgroup; ?>
        </hgroup>
        <?php print $header; ?>
      <?php } ?>
    </header>
  <?php endif; ?>
  
    <div class="content">

      <?php if ($top): ?>
        <div class="content-top <?php if($top_classes) { print $top_classes; } ?>">
          <?php print $top; ?>
        </div>
      <?php endif; ?>

      <?php if ($main_nowrapper): ?>
          <?php print $main_nowrapper; ?>  
      <?php endif; ?>

      <?php if ($main): ?>
        <div class="content-text clearfix<?php if($main_classes) { print $main_classes; } ?>">
          <?php print $main; ?>
        </div>
      <?php endif; ?>

      <?php if ($bottom): ?>
        <div class="content-bottom clearfix<?php if($bottom_classes) { print $bottom_classes; } ?>">
          <?php print $bottom; ?>
        </div>
      <?php endif; ?>

      <?php if ($attachments): ?>
        <div class="content-attachments <?php if($attachments_classes) { print $attachments_classes; } ?>">
          <h3><?php print t('Allegati'); ?></h3>
          <?php print $attachments; ?>
        </div>
      <?php endif; ?>
      
    </div>

  <?php if ($footer): ?>
    <footer <?php if($footer_classes){ ?>class="<?php print $footer_classes; ?>"<?php } ?>>
      <?php print $footer; ?>
    </footer>
  <?php endif; ?>
</article>

<?php if ($comments_region): ?>
    <?php print $comments_region; ?>  
<?php endif; ?>


<!--/ innovatori-pa-html5-1col-stacked.tpl.php -->