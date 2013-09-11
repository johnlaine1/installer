<?php
/**
 * @file
 * mh_unit_content_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function mh_unit_content_type_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mh_features|node|mh_unit|form';
  $field_group->group_name = 'group_mh_features';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mh_unit';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_test';
  $field_group->data = array(
    'label' => 'Features',
    'weight' => '8',
    'children' => array(
      0 => 'field_mh_unit_ac_type',
      1 => 'field_mh_unit_heat_type',
      2 => 'field_mh_unit_evap_cooler',
      3 => 'field_mh_unit_gas_app',
      4 => 'field_mh_unit_appliances',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-mh-features field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_mh_features|node|mh_unit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mh_location|node|mh_unit|form';
  $field_group->group_name = 'group_mh_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mh_unit';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_test';
  $field_group->data = array(
    'label' => 'Original Location',
    'weight' => '5',
    'children' => array(
      0 => 'field_mh_unit_address_orig',
      1 => 'field_mh_unit_mhc_name',
      2 => 'field_mh_unit_lot_num',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Original Location',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-mh-location field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_mh_location|node|mh_unit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mh_pics|node|mh_unit|form';
  $field_group->group_name = 'group_mh_pics';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mh_unit';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_test';
  $field_group->data = array(
    'label' => 'Pictures',
    'weight' => '15',
    'children' => array(
      0 => 'field_mh_unit_pic_front',
      1 => 'field_mh_unit_pic_other',
      2 => 'field_mh_unit_pic_right',
      3 => 'field_mh_unit_pic_left',
      4 => 'field_mh_unit_pic_kitchen',
      5 => 'field_mh_unit_pic_lr',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-mh-pics field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_mh_pics|node|mh_unit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mh_run_gear|node|mh_unit|form';
  $field_group->group_name = 'group_mh_run_gear';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mh_unit';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_test';
  $field_group->data = array(
    'label' => 'Running gear',
    'weight' => '12',
    'children' => array(
      0 => 'field_mh_unit_hitch',
      1 => 'field_mh_unit_axles_required',
      2 => 'field_mh_unit_axle_status',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-mh-run-gear field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_mh_run_gear|node|mh_unit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mh_title_info|node|mh_unit|form';
  $field_group->group_name = 'group_mh_title_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mh_unit';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_test';
  $field_group->data = array(
    'label' => 'Specifications',
    'weight' => '7',
    'children' => array(
      0 => 'field_mh_unit_beds',
      1 => 'field_mh_unit_baths',
      2 => 'field_mh_unit_width_actual',
      3 => 'field_mh_unit_length_actual',
      4 => 'field_mh_unit_amps',
      5 => 'field_mh_unit_door_location',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Specifications',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-mh-title-info field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_mh_title_info|node|mh_unit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mh_unit_awning|node|mh_unit|form';
  $field_group->group_name = 'group_mh_unit_awning';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mh_unit';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_test';
  $field_group->data = array(
    'label' => 'Awning',
    'weight' => '10',
    'children' => array(
      0 => 'field_mh_unit_awning',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-mh-unit-awning field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_mh_unit_awning|node|mh_unit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mh_unit_docs|node|mh_unit|form';
  $field_group->group_name = 'group_mh_unit_docs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mh_unit';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_test';
  $field_group->data = array(
    'label' => 'Documents',
    'weight' => '14',
    'children' => array(
      0 => 'field_mh_unit_docs',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-mh-unit-docs field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_mh_unit_docs|node|mh_unit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mh_unit_notes|node|mh_unit|form';
  $field_group->group_name = 'group_mh_unit_notes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mh_unit';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_test';
  $field_group->data = array(
    'label' => 'Notes',
    'weight' => '13',
    'children' => array(
      0 => 'field_mh_unit_defects',
      1 => 'field_mh_unit_notes',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-mh-unit-notes field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_mh_unit_notes|node|mh_unit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mh_unit_roof|node|mh_unit|form';
  $field_group->group_name = 'group_mh_unit_roof';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mh_unit';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_test';
  $field_group->data = array(
    'label' => 'Roof',
    'weight' => '9',
    'children' => array(
      0 => 'field_mh_unit_roof_type',
      1 => 'field_mh_unit_roof_cond',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-mh-unit-roof field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_mh_unit_roof|node|mh_unit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mh_unit_shed|node|mh_unit|form';
  $field_group->group_name = 'group_mh_unit_shed';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mh_unit';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_test';
  $field_group->data = array(
    'label' => 'Shed',
    'weight' => '11',
    'children' => array(
      0 => 'field_mh_unit_shed',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-mh-unit-shed field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_mh_unit_shed|node|mh_unit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mh_unit_title|node|mh_unit|form';
  $field_group->group_name = 'group_mh_unit_title';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mh_unit';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_test';
  $field_group->data = array(
    'label' => 'Title Information',
    'weight' => '6',
    'children' => array(
      0 => 'field_mh_unit_year',
      1 => 'field_mh_unit_vin',
      2 => 'field_mh_unit_parcel_num',
      3 => 'field_mh_unit_width',
      4 => 'field_mh_unit_length',
      5 => 'field_mh_unit_make',
      6 => 'field_mh_unit_manufact',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-mh-unit-title field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_mh_unit_title|node|mh_unit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_test|node|mh_unit|form';
  $field_group->group_name = 'group_test';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mh_unit';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'MH Unit',
    'weight' => '2',
    'children' => array(
      0 => 'group_mh_location',
      1 => 'group_mh_unit_roof',
      2 => 'group_mh_title_info',
      3 => 'group_mh_features',
      4 => 'group_mh_run_gear',
      5 => 'group_mh_pics',
      6 => 'group_mh_unit_notes',
      7 => 'group_mh_unit_shed',
      8 => 'group_mh_unit_awning',
      9 => 'group_mh_unit_title',
      10 => 'group_mh_unit_docs',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'label' => 'MH Unit',
      'instance_settings' => array(
        'classes' => ' group-test field-group-tabs',
      ),
    ),
  );
  $export['group_test|node|mh_unit|form'] = $field_group;

  return $export;
}
