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
      0 => 'assistant',
      1 => 'authenticated user',
      2 => 'developer',
      3 => 'professional',
      4 => 'support',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: administer features.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'features',
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
    ),
    'module' => 'features',
  );

  // Exported permission: use tadaa.
  $permissions['use tadaa'] = array(
    'name' => 'use tadaa',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'tadaa',
  );

  return $permissions;
}
