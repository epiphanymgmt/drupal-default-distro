<?php
/**
 * @file
 * emg_repository_features.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function emg_repository_features_user_default_roles() {
  $roles = array();

  // Exported role: Sub Admin.
  $roles['Sub Admin'] = array(
    'name' => 'Sub Admin',
    'weight' => 3,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  return $roles;
}
