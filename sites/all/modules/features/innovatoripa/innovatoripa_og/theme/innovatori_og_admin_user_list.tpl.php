<?php // dsm($users); ?>
<?php if ($users) : ?>
  <ul class="community-referents clearfix">
    <?php foreach ($users as $account) : ?>
      <li class="referent">
        <?php print $account['avatar']; ?>
      </li>
    <?php endforeach; ?>
  </ul>
<?php endif; ?>