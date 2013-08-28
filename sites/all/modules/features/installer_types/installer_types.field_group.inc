<?php
/**
 * @file
 * installer_types.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function installer_types_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_install_info|node|mh_installation|form';
  $field_group->group_name = 'group_install_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mh_installation';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Install Info',
    'weight' => '1',
    'children' => array(
      0 => 'group_install_location',
      1 => 'group_mh_install_pics',
      2 => 'group_mh_install_docs',
      3 => 'group_mh_install_invoice',
      4 => 'group_mh_install_permits',
      5 => 'group_mh_install_status',
      6 => 'group_mh_install_unit_id',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_install_info|node|mh_installation|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_install_location|node|mh_installation|form';
  $field_group->group_name = 'group_install_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mh_installation';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_install_info';
  $field_group->data = array(
    'label' => 'Install location',
    'weight' => '17',
    'children' => array(
      0 => 'field_mh_install_address',
      1 => 'field_mh_install_mhc_name',
      2 => 'field_mh_install_lot_num',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_install_location|node|mh_installation|form'] = $field_group;

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
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_mh_features|node|mh_unit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mh_install_docs|node|mh_installation|form';
  $field_group->group_name = 'group_mh_install_docs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mh_installation';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_install_info';
  $field_group->data = array(
    'label' => 'Documents',
    'weight' => '20',
    'children' => array(
      0 => 'field_mh_install_docs',
      1 => 'field_mh_install_docs_private',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_mh_install_docs|node|mh_installation|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mh_install_invoice|node|mh_installation|form';
  $field_group->group_name = 'group_mh_install_invoice';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mh_installation';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_install_info';
  $field_group->data = array(
    'label' => 'Invoice',
    'weight' => '19',
    'children' => array(
      0 => 'field_mh_install_invoice_amount',
      1 => 'field_mh_install_inv_num',
      2 => 'field_mh_install_inv_sent',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_mh_install_invoice|node|mh_installation|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mh_install_permits|node|mh_installation|form';
  $field_group->group_name = 'group_mh_install_permits';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mh_installation';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_install_info';
  $field_group->data = array(
    'label' => 'Permits',
    'weight' => '18',
    'children' => array(
      0 => 'field_mh_install_city_permit',
      1 => 'field_mh_install_state_permit',
      2 => 'field_mh_install_cert_num',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_mh_install_permits|node|mh_installation|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mh_install_pics|node|mh_installation|form';
  $field_group->group_name = 'group_mh_install_pics';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mh_installation';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_install_info';
  $field_group->data = array(
    'label' => 'Pictures',
    'weight' => '21',
    'children' => array(
      0 => 'field_mh_install_pics',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_mh_install_pics|node|mh_installation|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mh_install_status|node|mh_installation|form';
  $field_group->group_name = 'group_mh_install_status';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mh_installation';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_install_info';
  $field_group->data = array(
    'label' => 'Status',
    'weight' => '16',
    'children' => array(
      0 => 'field_mh_install_status',
      1 => 'field_mh_install_date',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_mh_install_status|node|mh_installation|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mh_install_unit_id|node|mh_installation|form';
  $field_group->group_name = 'group_mh_install_unit_id';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mh_installation';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_install_info';
  $field_group->data = array(
    'label' => 'Unit ID',
    'weight' => '15',
    'children' => array(
      0 => 'field_mh_install_id',
      1 => 'field_mh_install_customer',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_mh_install_unit_id|node|mh_installation|form'] = $field_group;

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
        'classes' => '',
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
      0 => 'field_mh_unit_pictures',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
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
        'classes' => '',
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
        'classes' => '',
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
        'classes' => '',
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
        'classes' => '',
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
        'classes' => '',
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
        'classes' => '',
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
        'classes' => '',
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
        'classes' => '',
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
        'classes' => '',
      ),
    ),
  );
  $export['group_test|node|mh_unit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_unit|node|mh_installation|form';
  $field_group->group_name = 'group_unit';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mh_installation';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Unit',
    'weight' => '2',
    'children' => array(
      0 => 'field_mh_install_unit',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_unit|node|mh_installation|form'] = $field_group;

  return $export;
}
