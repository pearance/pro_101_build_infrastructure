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

  // Exported menu link: shortcut-set-1:admin/config/development/tadaa/status/environments
  $menu_links['shortcut-set-1:admin/config/development/tadaa/status/environments'] = array(
    'menu_name' => 'shortcut-set-1',
    'link_path' => 'admin/config/development/tadaa/status/environments',
    'router_path' => 'admin/config/development/tadaa/status/environments',
    'link_title' => 'Mode',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Mode');


  return $menu_links;
}