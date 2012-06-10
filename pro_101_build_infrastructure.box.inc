<?php
/**
 * @file
 * pro_101_build_infrastructure.box.inc
 */

/**
 * Implements hook_default_box().
 */
function pro_101_build_infrastructure_default_box() {
  $export = array();

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'developer';
  $box->plugin_key = 'simple';
  $box->title = 'Pearance Dev Box';
  $box->description = 'Developer Box';
  $box->options = array(
    'body' => array(
      'value' => '<a href="#overlay=admin/config/development/tadaa/status/environments">Site Mode</a>',
      'format' => 'plain_text',
    ),
    'additional_classes' => '',
  );
  $export['developer'] = $box;

  return $export;
}
