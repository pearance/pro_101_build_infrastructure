<?php
/**
 * @file
 * pro_101_build_infrastructure.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function pro_101_build_infrastructure_user_default_roles() {
  $roles = array();

  // Exported role: assistant.
  $roles['assistant'] = array(
    'name' => 'assistant',
    'weight' => '2',
    'machine_name' => 'assistant',
  );

  // Exported role: developer.
  $roles['developer'] = array(
    'name' => 'developer',
    'weight' => '5',
    'machine_name' => 'developer',
  );

  // Exported role: professional.
  $roles['professional'] = array(
    'name' => 'professional',
    'weight' => '3',
    'machine_name' => 'professional',
  );

  // Exported role: support.
  $roles['support'] = array(
    'name' => 'support',
    'weight' => '4',
    'machine_name' => 'support',
  );

  return $roles;
}
