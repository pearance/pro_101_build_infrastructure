<?php
/**
 * @file
 * pro_101_build_infrastructure.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function pro_101_build_infrastructure_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management:admin/config/development/tadaa/status/environments
  $menu_links['management:admin/config/development/tadaa/status/environments'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/tadaa/status/environments',
    'router_path' => 'admin/config/development/tadaa/status/environments',
    'link_title' => 'Change environment',
    'options' => array(),
    'module' => 'system',
    'hidden' => '-1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '2',
    'parent_path' => 'admin/config/development/tadaa/status',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Change environment');


  return $menu_links;
}
