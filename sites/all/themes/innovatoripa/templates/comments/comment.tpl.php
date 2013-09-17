<?php
/**
 * @file
 * Default theme implementation for comments.
 *
 * Available variables:
 * - $author: Comment author. Can be link or plain text.
 * - $content: An array of comment items. Use render($content) to print them all, or
 *   print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $created: Formatted date and time for when the comment was created.
 *   Preprocess functions can reformat it by calling format_date() with the
 *   desired parameters on the $comment->created variable.
 * - $changed: Formatted date and time for when the comment was last changed.
 *   Preprocess functions can reformat it by calling format_date() with the
 *   desired parameters on the $comment->changed variable.
 * - $new: New comment marker.
 * - $permalink: Comment permalink.
 * - $submitted: Submission information created from $author and $created during
 *   template_preprocess_comment().
 * - $picture: Authors picture.
 * - $signature: Authors signature.
 * - $status: Comment status. Possible values are:
 *   comment-unpublished, comment-published or comment-preview.
 * - $title: Linked title.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the following:
 *   - comment: The current template type, i.e., "theming hook".
 *   - comment-by-anonymous: Comment by an unregistered user.
 *   - comment-by-node-author: Comment by the author of the parent node.
 *   - comment-preview: When previewing a new or edited comment.
 *   The following applies only to viewers who are registered users:
 *   - comment-unpublished: An unpublished comment visible only to administrators.
 *   - comment-by-viewer: Comment by the user currently viewing the page.
 *   - comment-new: New comment since last the visit.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * These two variables are provided for context:
 * - $comment: Full comment object.
 * - $node: Node object the comments are attached to.
 *
 * Other variables:
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 *
 * @see template_preprocess()
 * @see template_preprocess_comment()
 * @see template_process()
 * @see theme_comment()
 *
 * @ingroup themeable
 */
  // dsm(get_defined_vars());
  // dsm($comment, 'COMMENT');

?>

<?php if(theme_get_setting('zen_rebuild_registry')): ?>
<!-- comment.tpl.php -->
<?php print $innovatoripa_poorthemers_helper;  ?>
<?php endif; ?>

<div class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <a class="comment-user-avatar" href="<?php print $user_profile_path; ?>" title="Visualizza il profilo di <?php print $user_name_and_surname; ?>">
    <img src="<?php print $user_avatar_url ?>" alt="<?php print $user_name_and_surname; ?>" />
  </a>

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
<!-- / comment.tpl.php -->
<?php endif; ?>