<?php
  // dsm(get_defined_vars());
  // dsm($comment, 'COMMENT');
?>
<?php if(theme_get_setting('zen_rebuild_registry')): ?>
<!-- comment--domanda.tpl.php -->
<?php print $innovatoripa_poorthemers_helper;  ?>
<?php endif; ?>

<div class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  
  <div class="comment-rate-avatar-wr">
    <a class="comment-user-avatar" href="<?php print $user_profile_path; ?>" title="Visualizza il profilo di <?php print $user_name_and_surname; ?>">
      <img src="<?php print $user_avatar_url ?>" alt="<?php print $user_name_and_surname; ?>" />
    </a>
    <?php print render($content['rate_qa_voti_risposte']); ?>
  </div>
  
  <div class="comment-content-wr">
    
    <header>
      <?php print render($title_prefix); ?>
      <?php if ($title): ?>
        <h3<?php print $title_attributes; ?>>
          <?php print $title ?>
          <?php if ($new): ?>
            <mark class="comment-is-new"><?php print $new; ?></mark>
          <?php endif; ?>      
        </h3>
      <?php elseif ($new): ?>
        <mark class="new"><?php print $new; ?></mark>
      <?php endif; ?>
      <?php print render($title_suffix); ?>

      <?php if ($status == 'comment-unpublished'): ?>
        <p class="unpublished"><?php print t('Unpublished'); ?></p>
      <?php endif; ?>

      <div class="comment-pub-info">
        <strong><?php print $linked_username;?></strong> &bull; <span><?php print $comment_date_infos; ?></span>
      </div>
    </header>

    <div class="comment-content"<?php print $content_attributes; ?>>
      <?php
        // We hide the comments and links now so that we can render them later.
        hide($content['links']);
        print render($content);
      ?>
      <?php if ($signature): ?>
      <div class="user-signature clearfix">
        <?php print $signature ?>
      </div>
      <?php endif; ?>
    </div>

    <?php print render($content['links']) ?>
    <!-- <?php print $permalink; ?> -->
  </div>
</div>
<?php if(theme_get_setting('zen_rebuild_registry')): ?>
<!-- / comment--domanda.tpl.php -->
<?php endif; ?>