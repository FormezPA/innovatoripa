<?php
/**
 * @file
 * innovatoripa_notify.mailhandler_mailbox.inc
 */

/**
 * Implements hook_default_mailhandler_mailbox().
 */
function innovatoripa_notify_default_mailhandler_mailbox() {
  $export = array();

  $mailbox = new stdClass();
  $mailbox->disabled = FALSE; /* Edit this to true to make a default mailbox disabled initially */
  $mailbox->api_version = 2;
  $mailbox->mail = 'casella_di_posta_innovatoripa_twinbit_it';
  $mailbox->admin_title = 'Casella di posta innovatoripa@twinbit.it';
  $mailbox->settings = array(
    'type' => 'imap',
    'folder' => 'INBOX',
    'domain' => 'imap.gmail.com',
    'port' => '993',
    'name' => 'innovatoripa@twinbit.it',
    'pass' => 'innovatoripa!',
    'extraimap' => '/ssl',
    'limit' => '0',
    'encoding' => 'UTF-8',
    'flag_after_read' => 1,
    'delete_after_read' => 0,
    'fromheader' => 'From',
    'security' => '0',
    'replies' => '0',
    'retrieve' => 'MailhandlerPhpImapRetrieve',
  );
  $export['casella_di_posta_innovatoripa_twinbit_it'] = $mailbox;

  $mailbox = new stdClass();
  $mailbox->disabled = FALSE; /* Edit this to true to make a default mailbox disabled initially */
  $mailbox->api_version = 2;
  $mailbox->mail = 'casella_di_posta_notification_innovatoripa_it';
  $mailbox->admin_title = 'Casella di posta notifications@innovatoripa.it';
  $mailbox->settings = array(
    'type' => 'imap',
    'folder' => 'INBOX',
    'domain' => 'imap.innovatoripa.it',
    'port' => '993',
    'name' => 'notifications@innovatoripa.it',
    'pass' => 'Vy4lf-w9hV',
    'extraimap' => '/imap4rev1/ssl/novalidate-cert',
    'limit' => '0',
    'encoding' => 'UTF-8',
    'flag_after_read' => 1,
    'delete_after_read' => 0,
    'fromheader' => 'From',
    'security' => '0',
    'replies' => '0',
    'retrieve' => 'MailhandlerPhpImapRetrieve',
  );
  $export['casella_di_posta_notification_innovatoripa_it'] = $mailbox;

  $mailbox = new stdClass();
  $mailbox->disabled = FALSE; /* Edit this to true to make a default mailbox disabled initially */
  $mailbox->api_version = 2;
  $mailbox->mail = 'imap_impresa_semplice';
  $mailbox->admin_title = 'Imap impresa semplice';
  $mailbox->settings = array(
    'type' => 'imap',
    'folder' => 'INBOX',
    'domain' => 'imap.impresasemplice.it',
    'port' => '143',
    'name' => 'innovatoripa',
    'pass' => 'mko3adg6',
    'extraimap' => '/notls',
    'limit' => '5',
    'encoding' => 'UTF-8',
    'flag_after_read' => 1,
    'delete_after_read' => 0,
    'fromheader' => 'From',
    'security' => '0',
    'replies' => '0',
    'retrieve' => 'MailhandlerPhpImapRetrieve',
  );
  $export['imap_impresa_semplice'] = $mailbox;

  return $export;
}
