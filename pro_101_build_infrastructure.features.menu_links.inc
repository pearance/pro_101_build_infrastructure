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
    'weight' => '-50',
  );
  // Exported menu link: shortcut-set-1:admin/structure/features
  $menu_links['shortcut-set-1:admin/structure/features'] = array(
    'menu_name' => 'shortcut-set-1',
    'link_path' => 'admin/structure/features',
    'router_path' => 'admin/structure/features',
    'link_title' => 'Features',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: shortcut-set-2:admin/config/development/tadaa/status/environments
  $menu_links['shortcut-set-2:admin/config/development/tadaa/status/environments'] = array(
    'menu_name' => 'shortcut-set-2',
    'link_path' => 'admin/config/development/tadaa/status/environments',
    'router_path' => 'admin/config/development/tadaa/status/environments',
    'link_title' => 'Mode',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: shortcut-set-3:node/add/blog
  $menu_links['shortcut-set-3:node/add/blog'] = array(
    'menu_name' => 'shortcut-set-3',
    'link_path' => 'node/add/blog',
    'router_path' => 'node/add/blog',
    'link_title' => 'Create blog post',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Create blog post');
  t('Features');
  t('Mode');


  return $menu_links;
}
