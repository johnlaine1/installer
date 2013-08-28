<?php
/**
 * @file
 * installer_test.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function installer_test_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  // Exported role: kingsley.
  $roles['kingsley'] = array(
    'name' => 'kingsley',
    'weight' => 4,
  );

  // Exported role: western ventures.
  $roles['western ventures'] = array(
    'name' => 'western ventures',
    'weight' => 3,
  );

  return $roles;
}
