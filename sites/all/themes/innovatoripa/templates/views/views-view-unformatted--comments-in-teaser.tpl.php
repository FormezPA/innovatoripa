<?php
/**
 * @file
 * Template to display a list of rows.
 */
?>
<!-- unformatted-comments -->
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php foreach ($rows as $delta => $row): ?>
  <div class="teaser__comments-item">
    <?php print $row; ?>
  </div>
<?php endforeach; ?>
<!-- end unformatted-comments -->