<?php
 // kpr(get_defined_vars());
?>
<!-- innovatori-pa-user-profile.tpl.php -->
<article class="user-profile clearfix <?php if ($classes) { print $classes; } ?>" role="article">
  <?php if (isset($title_suffix['contextual_links'])) { print render($title_suffix['contextual_links']); } ?>

    <div class="user-profile-top clearfix">

      <?php if ($user_avatar): ?>
        <div class="user-profile-top-avatar <?php if($user_avatar_classes) { print $user_avatar_classes; } ?>">
          <?php print $user_avatar; ?>
        </div>
      <?php endif; ?>

      <?php if ($user_main_info): ?>
        <div class="user-profile-top-main <?php if($user_main_info_classes) { print $user_main_info_classes; } ?>">
          <?php print $user_main_info; ?>
        </div>
      <?php endif; ?>
    </div>
  
  <?php if ($user_other_details): ?>
    <div class="user-profile-details clearfix <?php if ($user_other_details_classes) { print $user_other_details_classes; } ?>">
      <div class="user-profile-details-inner-wr">
        <?php print $user_other_details; ?>
      <?php if ($user_socials): ?>
        <div class="user-profile-datails-socials">
          <div class="user-profile-datails-socials-inner">
            <?php print $user_socials; ?>
          </div>
        </div>
      <?php endif; ?>
      </div>
    </div>
  <?php endif; ?>

    <footer class="user-profile-footer clearfix <?php if($user_footer_classes){ print $user_footer_classes; } ?>">
      <?php print $user_footer; ?>
    </footer>
</article>
<!-- innovatori-pa-user-profile.tpl.php -->