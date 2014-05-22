<?php
/**
 * @file
 * emg_repository_features.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function emg_repository_features_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_home:<front>
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: management_administration-menu:admin/config/administration/admin_menu
  $menu_links['management_administration-menu:admin/config/administration/admin_menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/administration/admin_menu',
    'router_path' => 'admin/config/administration/admin_menu',
    'link_title' => 'Administration menu',
    'options' => array(
      'attributes' => array(
        'title' => 'Adjust administration menu settings.',
      ),
      'identifier' => 'management_administration-menu:admin/config/administration/admin_menu',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_administration:admin/config/administration',
  );
  // Exported menu link: management_main-menu:admin/structure/menu/manage/main-menu
  $menu_links['management_main-menu:admin/structure/menu/manage/main-menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/main-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Main menu',
    'options' => array(
      'identifier' => 'management_main-menu:admin/structure/menu/manage/main-menu',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_management:admin/structure/menu/manage/management
  $menu_links['management_management:admin/structure/menu/manage/management'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/management',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Management',
    'options' => array(
      'identifier' => 'management_management:admin/structure/menu/manage/management',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_navigation:admin/structure/menu/manage/navigation
  $menu_links['management_navigation:admin/structure/menu/manage/navigation'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/navigation',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Navigation',
    'options' => array(
      'identifier' => 'management_navigation:admin/structure/menu/manage/navigation',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_node-export:admin/config/content/node_export
  $menu_links['management_node-export:admin/config/content/node_export'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/node_export',
    'router_path' => 'admin/config/content/node_export',
    'link_title' => 'Node export',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure the settings for Node export.',
      ),
      'identifier' => 'management_node-export:admin/config/content/node_export',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_content-authoring:admin/config/content',
  );
  // Exported menu link: management_profiler-builder:admin/config/development/profiler_builder
  $menu_links['management_profiler-builder:admin/config/development/profiler_builder'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/profiler_builder',
    'router_path' => 'admin/config/development/profiler_builder',
    'link_title' => 'Profiler Builder',
    'options' => array(
      'attributes' => array(
        'title' => 'Build distribution files from current settings',
      ),
      'identifier' => 'management_profiler-builder:admin/config/development/profiler_builder',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_development:admin/config/development',
  );
  // Exported menu link: management_user-menu:admin/structure/menu/manage/user-menu
  $menu_links['management_user-menu:admin/structure/menu/manage/user-menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/user-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'User menu',
    'options' => array(
      'identifier' => 'management_user-menu:admin/structure/menu/manage/user-menu',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: navigation_chaos-tools-ajax-demo:ctools_ajax_sample
  $menu_links['navigation_chaos-tools-ajax-demo:ctools_ajax_sample'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'ctools_ajax_sample',
    'router_path' => 'ctools_ajax_sample',
    'link_title' => 'Chaos Tools AJAX Demo',
    'options' => array(
      'identifier' => 'navigation_chaos-tools-ajax-demo:ctools_ajax_sample',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: navigation_node-export-import:node/add/node_export
  $menu_links['navigation_node-export-import:node/add/node_export'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/node_export',
    'router_path' => 'node/add/node_export',
    'link_title' => 'Node export: import',
    'options' => array(
      'attributes' => array(
        'title' => 'Import content using <em>Node export</em>.',
      ),
      'identifier' => 'navigation_node-export-import:node/add/node_export',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_successful-jumping:ctools_ajax_sample/jumped
  $menu_links['navigation_successful-jumping:ctools_ajax_sample/jumped'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'ctools_ajax_sample/jumped',
    'router_path' => 'ctools_ajax_sample/jumped',
    'link_title' => 'Successful Jumping',
    'options' => array(
      'identifier' => 'navigation_successful-jumping:ctools_ajax_sample/jumped',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_chaos-tools-ajax-demo:ctools_ajax_sample',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Administration menu');
  t('Chaos Tools AJAX Demo');
  t('Home');
  t('Main menu');
  t('Management');
  t('Navigation');
  t('Node export');
  t('Node export: import');
  t('Profiler Builder');
  t('Successful Jumping');
  t('User menu');


  return $menu_links;
}
