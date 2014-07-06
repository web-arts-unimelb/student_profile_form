<?php
/**
 * @file
 * student_profile_form.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function student_profile_form_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_student_admin|node|student_profile|form';
  $field_group->group_name = 'group_student_admin';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'student_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Admin',
    'weight' => '2',
    'children' => array(
      0 => 'field_student_advance_id',
      1 => 'field_student_awards',
      2 => 'field_student_internships',
      3 => 'field_student_pub',
      4 => 'field_student_flag',
      5 => 'field_student_nationality',
      6 => 'field_student_notes',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Admin',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-student-admin field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_student_admin|node|student_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_student_user|node|student_profile|form';
  $field_group->group_name = 'group_student_user';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'student_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'User',
    'weight' => '3',
    'children' => array(
      0 => 'field_student_email',
      1 => 'field_student_completion_year',
      2 => 'field_student_specialisation',
      3 => 'field_student_life_outline',
      4 => 'field_student_why_choose_program',
      5 => 'field_student_where_ugrad',
      6 => 'field_student_enjoyable_aspects',
      7 => 'field_student_biggest_challenge',
      8 => 'field_student_interest_study',
      9 => 'field_student_extracurricular',
      10 => 'field_student_enjoy_uom',
      11 => 'field_student_current_role',
      12 => 'field_student_interning',
      13 => 'field_student_career_dev',
      14 => 'field_student_anything_else',
      15 => 'field_student_study_level',
      16 => 'field_student_ugrad_program',
      17 => 'field_student_grad_program',
      18 => 'field_student_exec_program',
      19 => 'field_student_community_program',
      20 => 'field_student_preferred_name',
      21 => 'field_students_profile_image',
      22 => 'field_student_consent',
      23 => 'field_student_id',
      24 => 'title',
      25 => 'path',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'User',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-student-user field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_student_user|node|student_profile|form'] = $field_group;

  return $export;
}
