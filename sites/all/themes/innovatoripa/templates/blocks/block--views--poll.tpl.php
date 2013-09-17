<?php if(theme_get_setting('zen_rebuild_registry')): ?>
<!-- block--views--poll.tpl.php -->
<?php print $innovatoripa_poorthemers_helper;  ?>
<?php endif; ?>
<div id="sticky-poll" class="<?php print $classes; ?>"<?php print $attributes; ?>>

  <?php print render($title_prefix); ?>
  <?php if ($title): ?>
    <h2<?php print $title_attributes; ?>><?php print $title; ?></h2>
  <?php endif; ?>
  <?php print render($title_suffix); ?>

  <?php print $content; ?>

</div>
<?php if(theme_get_setting('zen_rebuild_registry')): ?>
<!--/ block--views--poll.tpl.php -->
<?php endif; ?>
