<?php
/**
 * @file
 * student_profile_form.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function student_profile_form_user_default_permissions() {
  $permissions = array();

  // Exported permission: create student_profile content.
  $permissions['create student_profile content'] = array(
    'name' => 'create student_profile content',
    'roles' => array(
      0 => 'admin',
      1 => 'anonymous user',
      2 => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own student_profile content.
  $permissions['edit own student_profile content'] = array(
    'name' => 'edit own student_profile content',
    'roles' => array(
      0 => 'admin',
      1 => 'anonymous user',
      2 => 'site admin',
    ),
    'module' => 'node',
  );

  return $permissions;
}
