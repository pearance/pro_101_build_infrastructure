<?php
/**
 * @file
 * pro_101_build_infrastructure.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function pro_101_build_infrastructure_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'development';
  $context->description = '';
  $context->tag = 'Section';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'developer' => 'developer',
        'support' => 'support',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-developer' => array(
          'module' => 'boxes',
          'delta' => 'developer',
          'region' => 'sidebar_second',
          'weight' => '-24',
        ),
        'masquerade-masquerade' => array(
          'module' => 'masquerade',
          'delta' => 'masquerade',
          'region' => 'sidebar_second',
          'weight' => '-23',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Section');
  $export['development'] = $context;

  return $export;
}
