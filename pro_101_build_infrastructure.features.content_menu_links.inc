<?php
/**
 * @file
 * pro_101_build_infrastructure.features.content_menu_links.inc
 */

/**
 * Implements hook_content_menu_links_defaults().
 */
function pro_101_build_infrastructure_content_menu_links_defaults() {
  $menu_links = array();

  // Exported menu link: user-menu:admin/config/development/tadaa/status/environments
  $menu_links['user-menu:admin/config/development/tadaa/status/environments'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'admin/config/development/tadaa/status/environments',
    'router_path' => 'admin/config/development/tadaa/status/environments',
    'link_title' => 'Site Mode',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '50',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Site Mode');


  return $menu_links;
}
