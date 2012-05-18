<?php
/**
 * @file
 * pro_101_build_infrastructure.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pro_101_build_infrastructure_user_default_permissions() {
  $permissions = array();

  // Exported permission: access administration menu.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: access record feature.
  $permissions['access record feature'] = array(
    'name' => 'access record feature',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'record_feature',
  );

  // Exported permission: administer administration menu select.
  $permissions['administer administration menu select'] = array(
    'name' => 'administer administration menu select',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'admin_select',
  );

  // Exported permission: administer features.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'features',
  );

  // Exported permission: administer module filter.
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'module_filter',
  );

  // Exported permission: administer uuid.
  $permissions['administer uuid'] = array(
    'name' => 'administer uuid',
    'roles' => array(),
    'module' => 'uuid',
  );

  // Exported permission: display drupal links.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: edit node machine name.
  $permissions['edit node machine name'] = array(
    'name' => 'edit node machine name',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'defaultcontent',
  );

  // Exported permission: execute unlink files.
  $permissions['execute unlink files'] = array(
    'name' => 'execute unlink files',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'features_tools',
  );

  // Exported permission: flush caches.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: manage features.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'features',
  );

  // Exported permission: select administration menu.
  $permissions['select administration menu'] = array(
    'name' => 'select administration menu',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'admin_select',
  );

  // Exported permission: use admin toolbar.
  $permissions['use admin toolbar'] = array(
    'name' => 'use admin toolbar',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'admin',
  );

  return $permissions;
}
