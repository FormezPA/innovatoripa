<?php if ($items): ?>
<!-- extra-field--anteprima-commento-piu-votato -->
<div class="teaser__comments">
    <?php foreach ($items as $delta => $item): ?>
        <div class="teaser__comments-item">
            <div class="teaser__comments-item">
      
                <div class="teaser__comments-item-avatar">
                    <?php print $item['user_avatar'];?>
                </div>  
                
                <div class="teaser__comments-item-text">    
                    <div class="average-vote">        
                        <div>
                            <div class="rate-widget-1 rate-widget clear-block rate-average rate-widget-number_up_down">

                                <div class="rate-number-up-down-rating <?php print $item['comment_rating_class'];?>"><?php print $item['comment_rating'];?></div>

                            </div>
                        </div>  
                    </div>  
                    <span><?php print $item['comment_body'];?></span>  
                    <?php print $item['comment_link'];?>
                    <span class="info">(risposta inserita da <?php print $item['user_name'];?> <em> il <span><?php print $item['comment_date'];?></span></em>)</span>    
                </div>
            </div>
        </div>
    <?php endforeach; ?>
</div>
<?php endif; ?>

<!-- ! extra-field--anteprima-commento-piu-votato -->

