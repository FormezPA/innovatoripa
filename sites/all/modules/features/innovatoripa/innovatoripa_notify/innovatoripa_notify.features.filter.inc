<?php
/**
 * @file
 * innovatoripa_notify.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function innovatoripa_notify_filter_default_formats() {
  $formats = array();

  // Exported format: Simplified HTML (mailhandler+mailcomment).
  $formats['simplified_html_mailhandler_mailcomment_'] = array(
    'format' => 'simplified_html_mailhandler_mailcomment_',
    'name' => 'Simplified HTML (mailhandler+mailcomment)',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'mailhandler' => array(
        'weight' => -50,
        'status' => 1,
        'settings' => array(
          'sig_separator' => '-- ',
        ),
      ),
      'mailcomment_basic' => array(
        'weight' => -49,
        'status' => 1,
        'settings' => array(),
      ),
      'mailcomment_extra' => array(
        'weight' => -48,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_autop' => array(
        'weight' => -47,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_html' => array(
        'weight' => -46,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd> <p> <br>  <b> ',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -45,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
