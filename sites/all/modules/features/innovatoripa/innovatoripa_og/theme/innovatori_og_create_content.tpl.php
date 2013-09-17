<?php // dsm(get_defined_vars()); ?>
<?php if ($items) : ?>
  <?php // $rendered_list already rendered var using theme('item_list') ?>
  <ul class="create-menu">
  <?php foreach ($items as $item) : ?>
    <li class="create-menu-item"><?php print $item ?></li>
  <?php endforeach; ?>
  </ul>
<?php endif; ?>