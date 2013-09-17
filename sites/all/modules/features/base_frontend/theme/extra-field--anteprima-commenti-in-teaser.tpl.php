<?php if ($items): ?>
<!-- extra-field--anteprima-commenti-in-teaser -->
<div class="teaser__comments">
    <?php foreach ($items as $delta => $item): ?>
        <div class="teaser__comments-item">
            <div class="teaser__comments-item">
      
                <div class="teaser__comments-item-avatar">
                    <?php print $item['user_avatar'];?>
                </div>  
                <div class="teaser__comments-item-text">
                    <?php print $item['user_name'];?>
                    <em> il <span><?php print $item['comment_date'];?></span> ha scritto </em>    
                    <span><?php print $item['comment_body'];?></span>  
                    <?php print $item['comment_link'];?>
                </div>    
            </div>
        </div>
    <?php endforeach; ?>
</div>
<?php endif; ?>
<!-- ! extra-field--anteprima-commenti-in-teaser -->

