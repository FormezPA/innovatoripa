<?php
/**
 * @file
 * MailcommentAuthenticate class.
 */

$plugin = array(
  'name' => 'Mailcomment Authentication',
  'description' => 'Authenticate mail based on message parameters and secret key.',
  'handler' => array(
    'class' => 'MailcommentAuthenticate',
    'parent' => 'MailhandlerAuthenticate',
  ),
  'file' => 'MailcommentAuthenticate.class.php',
);
