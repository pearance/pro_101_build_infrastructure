<?php
/**
 * @file
 * pro_101_build_infrastructure.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function pro_101_build_infrastructure_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'actions';
  $strongarm->value = array();
  $export['actions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_cache_client';
  $strongarm->value = 0;
  $export['admin_menu_cache_client'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_devel_modules_skip';
  $strongarm->value = array(
    'admin_devel' => 'admin_devel',
    'context_ui' => 'context_ui',
    'devel' => 'devel',
    'devel_node_access' => 'devel_node_access',
    'field_ui' => 'field_ui',
    'rules_admin' => 'rules_admin',
    'stringoverrides' => 'stringoverrides',
    'views_ui' => 'views_ui',
    'devel_themer' => 0,
  );
  $export['admin_menu_devel_modules_skip'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_margin_top';
  $strongarm->value = 1;
  $export['admin_menu_margin_top'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_position_fixed';
  $strongarm->value = 1;
  $export['admin_menu_position_fixed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_tweak_modules';
  $strongarm->value = 0;
  $export['admin_menu_tweak_modules'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_tweak_permissions';
  $strongarm->value = 0;
  $export['admin_menu_tweak_permissions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_tweak_tabs';
  $strongarm->value = 0;
  $export['admin_menu_tweak_tabs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_content_enabled';
  $strongarm->value = TRUE;
  $export['node_content_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tadaa_development_modules';
  $strongarm->value = array(
    'filter_perms' => 1,
    'context_accordion' => 0,
    'context_ui' => 1,
    'dblog' => 1,
    'field_ui' => 1,
    'devel' => 1,
    'ftools' => 1,
    'simplehtmldom' => 1,
    'masquerade_context' => 1,
    'agrcache' => 0,
    'masquerade' => 1,
    'module_filter' => 1,
    'stringoverrides' => 1,
    'pro_101_development_mode' => 1,
    'pro_101_support_mode' => 1,
    'rules_admin' => 1,
    'delta_ui' => 1,
    'omega_tools' => 0,
    'views_ui' => 1,
  );
  $export['tadaa_development_modules'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tadaa_development_variables';
  $strongarm->value = array(
    'block_cache' => 0,
    'preprocess_css' => 0,
    'maintenance_mode' => 0,
    'error_level' => '2',
    'preprocess_js' => 0,
  );
  $export['tadaa_development_variables'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tadaa_environments';
  $strongarm->value = array(
    'development' => 'Development (Offline)',
    'production' => 'Live (Online)',
    'support' => 'Support (Offline)',
  );
  $export['tadaa_environments'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tadaa_production_modules';
  $strongarm->value = array(
    'filter_perms' => 0,
    'context_accordion' => 0,
    'context_ui' => 0,
    'dblog' => 0,
    'field_ui' => 0,
    'devel' => 0,
    'ftools' => 0,
    'simplehtmldom' => 0,
    'masquerade_context' => 0,
    'agrcache' => 1,
    'masquerade' => 0,
    'module_filter' => 0,
    'stringoverrides' => 0,
    'pro_101_development_mode' => 0,
    'pro_101_support_mode' => 0,
    'rules_admin' => 0,
    'delta_ui' => 0,
    'omega_tools' => 0,
    'views_ui' => 0,
  );
  $export['tadaa_production_modules'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tadaa_production_variables';
  $strongarm->value = array(
    'block_cache' => 1,
    'preprocess_css' => 1,
    'maintenance_mode' => 0,
    'error_level' => '0',
    'preprocess_js' => 1,
  );
  $export['tadaa_production_variables'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tadaa_support_modules';
  $strongarm->value = array(
    'filter_perms' => 0,
    'context_accordion' => 1,
    'context_ui' => 1,
    'dblog' => 1,
    'field_ui' => 0,
    'devel' => 1,
    'ftools' => 0,
    'simplehtmldom' => 1,
    'masquerade_context' => 1,
    'agrcache' => 0,
    'masquerade' => 1,
    'module_filter' => 0,
    'stringoverrides' => 0,
    'pro_101_development_mode' => 0,
    'pro_101_support_mode' => 1,
    'rules_admin' => 0,
    'delta_ui' => 1,
    'omega_tools' => 1,
    'views_ui' => 0,
  );
  $export['tadaa_support_modules'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tadaa_support_variables';
  $strongarm->value = array(
    'block_cache' => '0',
    'error_level' => '2',
    'maintenance_mode' => 1,
    'preprocess_css' => 0,
    'preprocess_js' => 0,
  );
  $export['tadaa_support_variables'] = $strongarm;

  return $export;
}
