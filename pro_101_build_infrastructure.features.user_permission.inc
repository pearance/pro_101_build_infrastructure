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
      1 => 'developer',
      2 => 'professional',
      3 => 'support',
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

  // Exported permission: administer masquerade.
  $permissions['administer masquerade'] = array(
    'name' => 'administer masquerade',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'masquerade',
  );

  // Exported permission: administer rabbit hole.
  $permissions['administer rabbit hole'] = array(
    'name' => 'administer rabbit hole',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'rabbit_hole',
  );

  // Exported permission: administer uuid.
  $permissions['administer uuid'] = array(
    'name' => 'administer uuid',
    'roles' => array(),
    'module' => 'uuid',
  );

  // Exported permission: bypass rabbit hole.
  $permissions['bypass rabbit hole'] = array(
    'name' => 'bypass rabbit hole',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'rabbit_hole',
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

  // Exported permission: masquerade as admin.
  $permissions['masquerade as admin'] = array(
    'name' => 'masquerade as admin',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'masquerade',
  );

  // Exported permission: masquerade as user.
  $permissions['masquerade as user'] = array(
    'name' => 'masquerade as user',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'masquerade',
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
