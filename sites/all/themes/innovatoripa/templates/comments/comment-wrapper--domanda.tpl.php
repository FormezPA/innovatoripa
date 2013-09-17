<?php
// dsm(get_defined_vars());
// dsm($node, 'NODE');

// Render the comments and form first to see if we need headings.
$comments = render($content['comments']);
$comment_form = render($content['comment_form']);
/*
 * IL SEGUENTE CODICE NON VA, non sostituisce Comment con Risposta
dsm($content['comment_form']);
$content['comment_form']['comment_body'][LANGUAGE_NONE]['#title'] = t('Risposta');
$content['comment_form']['comment_body'][LANGUAGE_NONE][0]['#title'] = t('Risposta');
dsm($content['comment_form']);
str_replace('Comment', 'Risposta', $comment_form);
*/
// dsm($comment_form);

// Comment counts
$comment_count = $node->comment_count;
$comment_section_title = ($comment_count == 1) ? $comment_count . ' ' . t('risposta') : $comment_count . ' ' . t('risposte');

?>
<?php if(theme_get_setting('zen_rebuild_registry')): ?>
<!-- comment-wrapper.tpl.php -->
<?php print $innovatoripa_poorthemers_helper;  ?>
<?php endif; ?>

<section class="comments answers <?php print $classes; ?>"<?php print $attributes; ?>>
  <?php print render($title_prefix); ?>
  <?php if ($comments): ?>
    <h2 class="title"><?php print $comment_section_title; ?></h2>
  <?php endif; ?>
  <?php print render($title_suffix); ?>

  <?php print $comments; ?>

  <?php if ($comment_form): ?>
    <h2 class="title comment-form"><?php print t('Aggiungi una risposta'); ?></h2>
    <?php print $comment_form; ?>
  <?php endif; ?>
</section>
<?php if(theme_get_setting('zen_rebuild_registry')): ?>
<!-- / comment-wrapper.tpl.php -->
<?php endif; ?>