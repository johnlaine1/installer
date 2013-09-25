<?php
/**
 * @file
 * installer_access_config.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function installer_access_config_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:group:add user'
  $permissions['node:group:add user'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:group:administer group'
  $permissions['node:group:administer group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:group:approve and deny subscription'
  $permissions['node:group:approve and deny subscription'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:group:create mh_installation content'
  $permissions['node:group:create mh_installation content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:create mh_listing content'
  $permissions['node:group:create mh_listing content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:delete any mh_installation content'
  $permissions['node:group:delete any mh_installation content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:delete any mh_listing content'
  $permissions['node:group:delete any mh_listing content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:delete own mh_installation content'
  $permissions['node:group:delete own mh_installation content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:delete own mh_listing content'
  $permissions['node:group:delete own mh_listing content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:manage members'
  $permissions['node:group:manage members'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:group:manage permissions'
  $permissions['node:group:manage permissions'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:group:manage roles'
  $permissions['node:group:manage roles'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:group:subscribe'
  $permissions['node:group:subscribe'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:subscribe without approval'
  $permissions['node:group:subscribe without approval'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:unsubscribe'
  $permissions['node:group:unsubscribe'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:update any mh_installation content'
  $permissions['node:group:update any mh_installation content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:update any mh_listing content'
  $permissions['node:group:update any mh_listing content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:update group'
  $permissions['node:group:update group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:group:update own mh_installation content'
  $permissions['node:group:update own mh_installation content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:update own mh_listing content'
  $permissions['node:group:update own mh_listing content'] = array(
    'roles' => array(),
  );

  return $permissions;
}
