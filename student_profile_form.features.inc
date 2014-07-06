<?php
/**
 * @file
 * student_profile_form.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function student_profile_form_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function student_profile_form_node_info() {
  $items = array(
    'student_profile' => array(
      'name' => t('Student profile'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Full name'),
      'help' => '',
    ),
  );
  return $items;
}
