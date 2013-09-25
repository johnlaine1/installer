<?php
/**
 * @file
 * installer_access_config.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function installer_access_config_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  // Exported role: mh buyer.
  $roles['mh buyer'] = array(
    'name' => 'mh buyer',
    'weight' => 3,
  );

  return $roles;
}
