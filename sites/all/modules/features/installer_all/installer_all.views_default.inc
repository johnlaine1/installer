<?php
/**
 * @file
 * installer_all.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function installer_all_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'clone_of_home_install_list';
  $view->description = 'A list of Manufactured Homes that have been installed.';
  $view->tag = 'installation';
  $view->base_table = 'node';
  $view->human_name = 'Clone of Home install list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Manufactured Home Installations';
  $handler->display->display_options['css_class'] = 'mh-install-list';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_community_name',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'nid_1' => 'nid_1',
    'field_mh_install_id' => 'field_mh_install_id',
    'field_community_name' => 'field_community_name',
    'field_mh_install_lot_num' => 'field_mh_install_lot_num',
    'field_mh_install_unit' => 'field_mh_install_unit',
    'field_mh_unit_year' => 'field_mh_unit_year',
    'field_mh_unit_width' => 'field_mh_unit_width',
    'field_mh_unit_length' => 'field_mh_unit_width',
    'field_mh_unit_beds' => 'field_mh_unit_beds',
    'field_mh_unit_baths' => 'field_mh_unit_baths',
    'field_mh_install_invoice_amount' => 'field_mh_install_invoice_amount',
    'field_mh_install_status' => 'field_mh_install_status',
    'field_mh_install_date' => 'field_mh_install_date',
    'nothing' => 'nothing',
    'nothing_1' => 'nothing_1',
    'nothing_2' => 'nothing_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mh_install_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_community_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mh_install_lot_num' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mh_install_unit' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mh_unit_year' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mh_unit_width' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '  X  ',
      'empty_column' => 0,
    ),
    'field_mh_unit_length' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mh_unit_beds' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mh_unit_baths' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mh_install_invoice_amount' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mh_install_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mh_install_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_1' => array(
      'align' => '',
      'separator' => '     /     ',
      'empty_column' => 0,
    ),
    'nothing_2' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = 'A total of @total installations were found.';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Click on an ID number for more information about an installation. 
Click on Documents for documents related to an installation.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Relationship: MH Unit */
  $handler->display->display_options['relationships']['field_mh_install_unit_target_id']['id'] = 'field_mh_install_unit_target_id';
  $handler->display->display_options['relationships']['field_mh_install_unit_target_id']['table'] = 'field_data_field_mh_install_unit';
  $handler->display->display_options['relationships']['field_mh_install_unit_target_id']['field'] = 'field_mh_install_unit_target_id';
  $handler->display->display_options['relationships']['field_mh_install_unit_target_id']['ui_name'] = 'MH Unit';
  $handler->display->display_options['relationships']['field_mh_install_unit_target_id']['label'] = 'mh_unit';
  /* Relationship: MH Community */
  $handler->display->display_options['relationships']['field_mh_install_mhc_name_target_id']['id'] = 'field_mh_install_mhc_name_target_id';
  $handler->display->display_options['relationships']['field_mh_install_mhc_name_target_id']['table'] = 'field_data_field_mh_install_mhc_name';
  $handler->display->display_options['relationships']['field_mh_install_mhc_name_target_id']['field'] = 'field_mh_install_mhc_name_target_id';
  $handler->display->display_options['relationships']['field_mh_install_mhc_name_target_id']['ui_name'] = 'MH Community';
  $handler->display->display_options['relationships']['field_mh_install_mhc_name_target_id']['label'] = 'mh_community';
  /* Field: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['ui_name'] = 'Nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Installation ID */
  $handler->display->display_options['fields']['field_mh_install_id']['id'] = 'field_mh_install_id';
  $handler->display->display_options['fields']['field_mh_install_id']['table'] = 'field_data_field_mh_install_id';
  $handler->display->display_options['fields']['field_mh_install_id']['field'] = 'field_mh_install_id';
  $handler->display->display_options['fields']['field_mh_install_id']['ui_name'] = 'Installation ID';
  $handler->display->display_options['fields']['field_mh_install_id']['label'] = 'ID';
  $handler->display->display_options['fields']['field_mh_install_id']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_mh_install_id']['alter']['path'] = 'install-info-panels/[nid]';
  /* Field: Community name */
  $handler->display->display_options['fields']['field_community_name']['id'] = 'field_community_name';
  $handler->display->display_options['fields']['field_community_name']['table'] = 'field_data_field_community_name';
  $handler->display->display_options['fields']['field_community_name']['field'] = 'field_community_name';
  $handler->display->display_options['fields']['field_community_name']['relationship'] = 'field_mh_install_mhc_name_target_id';
  $handler->display->display_options['fields']['field_community_name']['ui_name'] = 'Community name';
  $handler->display->display_options['fields']['field_community_name']['label'] = 'Community';
  /* Field: Lot number */
  $handler->display->display_options['fields']['field_mh_install_lot_num']['id'] = 'field_mh_install_lot_num';
  $handler->display->display_options['fields']['field_mh_install_lot_num']['table'] = 'field_data_field_mh_install_lot_num';
  $handler->display->display_options['fields']['field_mh_install_lot_num']['field'] = 'field_mh_install_lot_num';
  $handler->display->display_options['fields']['field_mh_install_lot_num']['ui_name'] = 'Lot number';
  $handler->display->display_options['fields']['field_mh_install_lot_num']['label'] = 'Lot';
  $handler->display->display_options['fields']['field_mh_install_lot_num']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Vin */
  $handler->display->display_options['fields']['field_mh_install_unit']['id'] = 'field_mh_install_unit';
  $handler->display->display_options['fields']['field_mh_install_unit']['table'] = 'field_data_field_mh_install_unit';
  $handler->display->display_options['fields']['field_mh_install_unit']['field'] = 'field_mh_install_unit';
  $handler->display->display_options['fields']['field_mh_install_unit']['ui_name'] = 'Vin';
  $handler->display->display_options['fields']['field_mh_install_unit']['label'] = 'VIN';
  $handler->display->display_options['fields']['field_mh_install_unit']['settings'] = array(
    'link' => 0,
  );
  /* Field: Year */
  $handler->display->display_options['fields']['field_mh_unit_year']['id'] = 'field_mh_unit_year';
  $handler->display->display_options['fields']['field_mh_unit_year']['table'] = 'field_data_field_mh_unit_year';
  $handler->display->display_options['fields']['field_mh_unit_year']['field'] = 'field_mh_unit_year';
  $handler->display->display_options['fields']['field_mh_unit_year']['relationship'] = 'field_mh_install_unit_target_id';
  $handler->display->display_options['fields']['field_mh_unit_year']['ui_name'] = 'Year';
  $handler->display->display_options['fields']['field_mh_unit_year']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Width */
  $handler->display->display_options['fields']['field_mh_unit_width']['id'] = 'field_mh_unit_width';
  $handler->display->display_options['fields']['field_mh_unit_width']['table'] = 'field_data_field_mh_unit_width';
  $handler->display->display_options['fields']['field_mh_unit_width']['field'] = 'field_mh_unit_width';
  $handler->display->display_options['fields']['field_mh_unit_width']['relationship'] = 'field_mh_install_unit_target_id';
  $handler->display->display_options['fields']['field_mh_unit_width']['ui_name'] = 'Width';
  $handler->display->display_options['fields']['field_mh_unit_width']['label'] = 'Size';
  $handler->display->display_options['fields']['field_mh_unit_width']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Length */
  $handler->display->display_options['fields']['field_mh_unit_length']['id'] = 'field_mh_unit_length';
  $handler->display->display_options['fields']['field_mh_unit_length']['table'] = 'field_data_field_mh_unit_length';
  $handler->display->display_options['fields']['field_mh_unit_length']['field'] = 'field_mh_unit_length';
  $handler->display->display_options['fields']['field_mh_unit_length']['relationship'] = 'field_mh_install_unit_target_id';
  $handler->display->display_options['fields']['field_mh_unit_length']['ui_name'] = 'Length';
  $handler->display->display_options['fields']['field_mh_unit_length']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Bedrooms */
  $handler->display->display_options['fields']['field_mh_unit_beds']['id'] = 'field_mh_unit_beds';
  $handler->display->display_options['fields']['field_mh_unit_beds']['table'] = 'field_data_field_mh_unit_beds';
  $handler->display->display_options['fields']['field_mh_unit_beds']['field'] = 'field_mh_unit_beds';
  $handler->display->display_options['fields']['field_mh_unit_beds']['relationship'] = 'field_mh_install_unit_target_id';
  $handler->display->display_options['fields']['field_mh_unit_beds']['ui_name'] = 'Bedrooms';
  $handler->display->display_options['fields']['field_mh_unit_beds']['label'] = 'Bed';
  /* Field: Bathrooms */
  $handler->display->display_options['fields']['field_mh_unit_baths']['id'] = 'field_mh_unit_baths';
  $handler->display->display_options['fields']['field_mh_unit_baths']['table'] = 'field_data_field_mh_unit_baths';
  $handler->display->display_options['fields']['field_mh_unit_baths']['field'] = 'field_mh_unit_baths';
  $handler->display->display_options['fields']['field_mh_unit_baths']['relationship'] = 'field_mh_install_unit_target_id';
  $handler->display->display_options['fields']['field_mh_unit_baths']['ui_name'] = 'Bathrooms';
  $handler->display->display_options['fields']['field_mh_unit_baths']['label'] = 'Bath';
  /* Field: Invoice amount */
  $handler->display->display_options['fields']['field_mh_install_invoice_amount']['id'] = 'field_mh_install_invoice_amount';
  $handler->display->display_options['fields']['field_mh_install_invoice_amount']['table'] = 'field_data_field_mh_install_invoice_amount';
  $handler->display->display_options['fields']['field_mh_install_invoice_amount']['field'] = 'field_mh_install_invoice_amount';
  $handler->display->display_options['fields']['field_mh_install_invoice_amount']['ui_name'] = 'Invoice amount';
  $handler->display->display_options['fields']['field_mh_install_invoice_amount']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Status */
  $handler->display->display_options['fields']['field_mh_install_status']['id'] = 'field_mh_install_status';
  $handler->display->display_options['fields']['field_mh_install_status']['table'] = 'field_data_field_mh_install_status';
  $handler->display->display_options['fields']['field_mh_install_status']['field'] = 'field_mh_install_status';
  $handler->display->display_options['fields']['field_mh_install_status']['ui_name'] = 'Status';
  $handler->display->display_options['fields']['field_mh_install_status']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Installation date */
  $handler->display->display_options['fields']['field_mh_install_date']['id'] = 'field_mh_install_date';
  $handler->display->display_options['fields']['field_mh_install_date']['table'] = 'field_data_field_mh_install_date';
  $handler->display->display_options['fields']['field_mh_install_date']['field'] = 'field_mh_install_date';
  $handler->display->display_options['fields']['field_mh_install_date']['settings'] = array(
    'format_type' => 'short_date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Link to documents */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Link to documents';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Documents';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'install-docs/[nid]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Lot number (field_mh_install_lot_num) */
  $handler->display->display_options['sorts']['field_mh_install_lot_num_value']['id'] = 'field_mh_install_lot_num_value';
  $handler->display->display_options['sorts']['field_mh_install_lot_num_value']['table'] = 'field_data_field_mh_install_lot_num';
  $handler->display->display_options['sorts']['field_mh_install_lot_num_value']['field'] = 'field_mh_install_lot_num_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'mh_installation' => 'mh_installation',
  );
  /* Filter criterion: Content: Status (field_mh_install_status) */
  $handler->display->display_options['filters']['field_mh_install_status_tid']['id'] = 'field_mh_install_status_tid';
  $handler->display->display_options['filters']['field_mh_install_status_tid']['table'] = 'field_data_field_mh_install_status';
  $handler->display->display_options['filters']['field_mh_install_status_tid']['field'] = 'field_mh_install_status_tid';
  $handler->display->display_options['filters']['field_mh_install_status_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_mh_install_status_tid']['expose']['operator_id'] = 'field_mh_install_status_tid_op';
  $handler->display->display_options['filters']['field_mh_install_status_tid']['expose']['label'] = 'Status ';
  $handler->display->display_options['filters']['field_mh_install_status_tid']['expose']['operator'] = 'field_mh_install_status_tid_op';
  $handler->display->display_options['filters']['field_mh_install_status_tid']['expose']['identifier'] = 'field_mh_install_status_tid';
  $handler->display->display_options['filters']['field_mh_install_status_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_mh_install_status_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_mh_install_status_tid']['vocabulary'] = 'mh_install_status';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_community_name',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'field_mh_install_id' => 'field_mh_install_id',
    'field_community_name' => 'field_community_name',
    'field_mh_install_lot_num' => 'field_mh_install_lot_num',
    'field_mh_install_unit' => 'field_mh_install_unit',
    'field_mh_unit_year' => 'field_mh_unit_year',
    'field_mh_unit_width' => 'field_mh_unit_width',
    'field_mh_unit_length' => 'field_mh_unit_length',
    'field_mh_unit_beds' => 'field_mh_unit_beds',
    'field_mh_unit_baths' => 'field_mh_unit_baths',
    'field_mh_install_invoice_amount' => 'field_mh_install_invoice_amount',
    'field_mh_install_status' => 'field_mh_install_status',
    'field_mh_install_date' => 'field_mh_install_date',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mh_install_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_community_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mh_install_lot_num' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mh_install_unit' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mh_unit_year' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mh_unit_width' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mh_unit_length' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mh_unit_beds' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mh_unit_baths' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mh_install_invoice_amount' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mh_install_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mh_install_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'mh_installation' => 'mh_installation',
  );
  /* Filter criterion: Content: Status (field_mh_install_status) */
  $handler->display->display_options['filters']['field_mh_install_status_tid']['id'] = 'field_mh_install_status_tid';
  $handler->display->display_options['filters']['field_mh_install_status_tid']['table'] = 'field_data_field_mh_install_status';
  $handler->display->display_options['filters']['field_mh_install_status_tid']['field'] = 'field_mh_install_status_tid';
  $handler->display->display_options['filters']['field_mh_install_status_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_mh_install_status_tid']['expose']['operator_id'] = 'field_mh_install_status_tid_op';
  $handler->display->display_options['filters']['field_mh_install_status_tid']['expose']['label'] = 'Status ';
  $handler->display->display_options['filters']['field_mh_install_status_tid']['expose']['operator'] = 'field_mh_install_status_tid_op';
  $handler->display->display_options['filters']['field_mh_install_status_tid']['expose']['identifier'] = 'field_mh_install_status_tid';
  $handler->display->display_options['filters']['field_mh_install_status_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_mh_install_status_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_mh_install_status_tid']['vocabulary'] = 'mh_install_status';
  $handler->display->display_options['path'] = 'home-install-list-test/%';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Install List';
  $handler->display->display_options['menu']['description'] = 'A list of Manufactured Homes that have been installed';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Admin page */
  $handler = $view->new_display('page', 'Admin page', 'page_1');
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['ui_name'] = 'Nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: mh_unit_nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'field_mh_install_unit_target_id';
  $handler->display->display_options['fields']['nid_1']['ui_name'] = 'mh_unit_nid';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  /* Field: Installation ID */
  $handler->display->display_options['fields']['field_mh_install_id']['id'] = 'field_mh_install_id';
  $handler->display->display_options['fields']['field_mh_install_id']['table'] = 'field_data_field_mh_install_id';
  $handler->display->display_options['fields']['field_mh_install_id']['field'] = 'field_mh_install_id';
  $handler->display->display_options['fields']['field_mh_install_id']['ui_name'] = 'Installation ID';
  $handler->display->display_options['fields']['field_mh_install_id']['label'] = 'ID';
  $handler->display->display_options['fields']['field_mh_install_id']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_mh_install_id']['alter']['path'] = 'install-info-panels/[nid]';
  /* Field: Community name */
  $handler->display->display_options['fields']['field_community_name']['id'] = 'field_community_name';
  $handler->display->display_options['fields']['field_community_name']['table'] = 'field_data_field_community_name';
  $handler->display->display_options['fields']['field_community_name']['field'] = 'field_community_name';
  $handler->display->display_options['fields']['field_community_name']['relationship'] = 'field_mh_install_mhc_name_target_id';
  $handler->display->display_options['fields']['field_community_name']['ui_name'] = 'Community name';
  $handler->display->display_options['fields']['field_community_name']['label'] = 'Community';
  $handler->display->display_options['fields']['field_community_name']['exclude'] = TRUE;
  /* Field: Lot number */
  $handler->display->display_options['fields']['field_mh_install_lot_num']['id'] = 'field_mh_install_lot_num';
  $handler->display->display_options['fields']['field_mh_install_lot_num']['table'] = 'field_data_field_mh_install_lot_num';
  $handler->display->display_options['fields']['field_mh_install_lot_num']['field'] = 'field_mh_install_lot_num';
  $handler->display->display_options['fields']['field_mh_install_lot_num']['ui_name'] = 'Lot number';
  $handler->display->display_options['fields']['field_mh_install_lot_num']['label'] = 'Lot';
  $handler->display->display_options['fields']['field_mh_install_lot_num']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Vin */
  $handler->display->display_options['fields']['field_mh_install_unit']['id'] = 'field_mh_install_unit';
  $handler->display->display_options['fields']['field_mh_install_unit']['table'] = 'field_data_field_mh_install_unit';
  $handler->display->display_options['fields']['field_mh_install_unit']['field'] = 'field_mh_install_unit';
  $handler->display->display_options['fields']['field_mh_install_unit']['ui_name'] = 'Vin';
  $handler->display->display_options['fields']['field_mh_install_unit']['label'] = 'VIN';
  $handler->display->display_options['fields']['field_mh_install_unit']['settings'] = array(
    'link' => 0,
  );
  /* Field: Year */
  $handler->display->display_options['fields']['field_mh_unit_year']['id'] = 'field_mh_unit_year';
  $handler->display->display_options['fields']['field_mh_unit_year']['table'] = 'field_data_field_mh_unit_year';
  $handler->display->display_options['fields']['field_mh_unit_year']['field'] = 'field_mh_unit_year';
  $handler->display->display_options['fields']['field_mh_unit_year']['relationship'] = 'field_mh_install_unit_target_id';
  $handler->display->display_options['fields']['field_mh_unit_year']['ui_name'] = 'Year';
  $handler->display->display_options['fields']['field_mh_unit_year']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Width */
  $handler->display->display_options['fields']['field_mh_unit_width']['id'] = 'field_mh_unit_width';
  $handler->display->display_options['fields']['field_mh_unit_width']['table'] = 'field_data_field_mh_unit_width';
  $handler->display->display_options['fields']['field_mh_unit_width']['field'] = 'field_mh_unit_width';
  $handler->display->display_options['fields']['field_mh_unit_width']['relationship'] = 'field_mh_install_unit_target_id';
  $handler->display->display_options['fields']['field_mh_unit_width']['ui_name'] = 'Width';
  $handler->display->display_options['fields']['field_mh_unit_width']['label'] = 'Size';
  $handler->display->display_options['fields']['field_mh_unit_width']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Length */
  $handler->display->display_options['fields']['field_mh_unit_length']['id'] = 'field_mh_unit_length';
  $handler->display->display_options['fields']['field_mh_unit_length']['table'] = 'field_data_field_mh_unit_length';
  $handler->display->display_options['fields']['field_mh_unit_length']['field'] = 'field_mh_unit_length';
  $handler->display->display_options['fields']['field_mh_unit_length']['relationship'] = 'field_mh_install_unit_target_id';
  $handler->display->display_options['fields']['field_mh_unit_length']['ui_name'] = 'Length';
  $handler->display->display_options['fields']['field_mh_unit_length']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Bedrooms */
  $handler->display->display_options['fields']['field_mh_unit_beds']['id'] = 'field_mh_unit_beds';
  $handler->display->display_options['fields']['field_mh_unit_beds']['table'] = 'field_data_field_mh_unit_beds';
  $handler->display->display_options['fields']['field_mh_unit_beds']['field'] = 'field_mh_unit_beds';
  $handler->display->display_options['fields']['field_mh_unit_beds']['relationship'] = 'field_mh_install_unit_target_id';
  $handler->display->display_options['fields']['field_mh_unit_beds']['ui_name'] = 'Bedrooms';
  $handler->display->display_options['fields']['field_mh_unit_beds']['label'] = 'Bed';
  /* Field: Bathrooms */
  $handler->display->display_options['fields']['field_mh_unit_baths']['id'] = 'field_mh_unit_baths';
  $handler->display->display_options['fields']['field_mh_unit_baths']['table'] = 'field_data_field_mh_unit_baths';
  $handler->display->display_options['fields']['field_mh_unit_baths']['field'] = 'field_mh_unit_baths';
  $handler->display->display_options['fields']['field_mh_unit_baths']['relationship'] = 'field_mh_install_unit_target_id';
  $handler->display->display_options['fields']['field_mh_unit_baths']['ui_name'] = 'Bathrooms';
  $handler->display->display_options['fields']['field_mh_unit_baths']['label'] = 'Bath';
  /* Field: Invoice amount */
  $handler->display->display_options['fields']['field_mh_install_invoice_amount']['id'] = 'field_mh_install_invoice_amount';
  $handler->display->display_options['fields']['field_mh_install_invoice_amount']['table'] = 'field_data_field_mh_install_invoice_amount';
  $handler->display->display_options['fields']['field_mh_install_invoice_amount']['field'] = 'field_mh_install_invoice_amount';
  $handler->display->display_options['fields']['field_mh_install_invoice_amount']['ui_name'] = 'Invoice amount';
  $handler->display->display_options['fields']['field_mh_install_invoice_amount']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Status */
  $handler->display->display_options['fields']['field_mh_install_status']['id'] = 'field_mh_install_status';
  $handler->display->display_options['fields']['field_mh_install_status']['table'] = 'field_data_field_mh_install_status';
  $handler->display->display_options['fields']['field_mh_install_status']['field'] = 'field_mh_install_status';
  $handler->display->display_options['fields']['field_mh_install_status']['ui_name'] = 'Status';
  $handler->display->display_options['fields']['field_mh_install_status']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Installation date */
  $handler->display->display_options['fields']['field_mh_install_date']['id'] = 'field_mh_install_date';
  $handler->display->display_options['fields']['field_mh_install_date']['table'] = 'field_data_field_mh_install_date';
  $handler->display->display_options['fields']['field_mh_install_date']['field'] = 'field_mh_install_date';
  $handler->display->display_options['fields']['field_mh_install_date']['settings'] = array(
    'format_type' => 'short_date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Link to documents */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Link to documents';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Documents';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'install-docs/[nid]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Edit install node */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Edit install node';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Edit nodes';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Install';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'node/[nid]/edit';
  /* Field: Edit unit nodes */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = 'Edit unit nodes';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = 'unit';
  $handler->display->display_options['fields']['nothing_2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['path'] = 'node/[nid_1]/edit';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'admin-install-list';

  /* Display: Context */
  $handler = $view->new_display('ctools_context', 'Context', 'ctools_context_1');
  $handler->display->display_options['style_plugin'] = 'ctools_context';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'mh_installation' => 'mh_installation',
  );
  $export['clone_of_home_install_list'] = $view;

  $view = new view();
  $view->name = 'homes_installed';
  $view->description = 'A list of Manufactured Homes that have been installed.';
  $view->tag = 'installation';
  $view->base_table = 'node';
  $view->human_name = 'Home install list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Manufactured Home Installations';
  $handler->display->display_options['css_class'] = 'mh-install-list';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_community_name',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'nid_1' => 'nid_1',
    'field_mh_install_id' => 'field_mh_install_id',
    'field_community_name' => 'field_community_name',
    'field_mh_install_lot_num' => 'field_mh_install_lot_num',
    'field_mh_install_unit' => 'field_mh_install_unit',
    'field_mh_unit_year' => 'field_mh_unit_year',
    'field_mh_unit_width' => 'field_mh_unit_width',
    'field_mh_unit_length' => 'field_mh_unit_width',
    'field_mh_unit_beds' => 'field_mh_unit_beds',
    'field_mh_unit_baths' => 'field_mh_unit_baths',
    'field_mh_install_invoice_amount' => 'field_mh_install_invoice_amount',
    'field_mh_install_status' => 'field_mh_install_status',
    'field_mh_install_date' => 'field_mh_install_date',
    'nothing' => 'nothing',
    'nothing_1' => 'nothing_1',
    'nothing_2' => 'nothing_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mh_install_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_community_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mh_install_lot_num' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mh_install_unit' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mh_unit_year' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mh_unit_width' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '  X  ',
      'empty_column' => 0,
    ),
    'field_mh_unit_length' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mh_unit_beds' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mh_unit_baths' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mh_install_invoice_amount' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mh_install_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mh_install_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_1' => array(
      'align' => '',
      'separator' => '     /     ',
      'empty_column' => 0,
    ),
    'nothing_2' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = 'A total of @total installations were found.';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Click on an ID number for more information about an installation. 
Click on Documents for documents related to an installation.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Relationship: MH Unit */
  $handler->display->display_options['relationships']['field_mh_install_unit_target_id']['id'] = 'field_mh_install_unit_target_id';
  $handler->display->display_options['relationships']['field_mh_install_unit_target_id']['table'] = 'field_data_field_mh_install_unit';
  $handler->display->display_options['relationships']['field_mh_install_unit_target_id']['field'] = 'field_mh_install_unit_target_id';
  $handler->display->display_options['relationships']['field_mh_install_unit_target_id']['ui_name'] = 'MH Unit';
  $handler->display->display_options['relationships']['field_mh_install_unit_target_id']['label'] = 'mh_unit';
  /* Relationship: MH Community */
  $handler->display->display_options['relationships']['field_mh_install_mhc_name_target_id']['id'] = 'field_mh_install_mhc_name_target_id';
  $handler->display->display_options['relationships']['field_mh_install_mhc_name_target_id']['table'] = 'field_data_field_mh_install_mhc_name';
  $handler->display->display_options['relationships']['field_mh_install_mhc_name_target_id']['field'] = 'field_mh_install_mhc_name_target_id';
  $handler->display->display_options['relationships']['field_mh_install_mhc_name_target_id']['ui_name'] = 'MH Community';
  $handler->display->display_options['relationships']['field_mh_install_mhc_name_target_id']['label'] = 'mh_community';
  /* Field: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['ui_name'] = 'Nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Installation ID */
  $handler->display->display_options['fields']['field_mh_install_id']['id'] = 'field_mh_install_id';
  $handler->display->display_options['fields']['field_mh_install_id']['table'] = 'field_data_field_mh_install_id';
  $handler->display->display_options['fields']['field_mh_install_id']['field'] = 'field_mh_install_id';
  $handler->display->display_options['fields']['field_mh_install_id']['ui_name'] = 'Installation ID';
  $handler->display->display_options['fields']['field_mh_install_id']['label'] = 'ID';
  $handler->display->display_options['fields']['field_mh_install_id']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_mh_install_id']['alter']['path'] = 'install-info-panels/[nid]';
  /* Field: Community name */
  $handler->display->display_options['fields']['field_community_name']['id'] = 'field_community_name';
  $handler->display->display_options['fields']['field_community_name']['table'] = 'field_data_field_community_name';
  $handler->display->display_options['fields']['field_community_name']['field'] = 'field_community_name';
  $handler->display->display_options['fields']['field_community_name']['relationship'] = 'field_mh_install_mhc_name_target_id';
  $handler->display->display_options['fields']['field_community_name']['ui_name'] = 'Community name';
  $handler->display->display_options['fields']['field_community_name']['label'] = 'Community';
  /* Field: Lot number */
  $handler->display->display_options['fields']['field_mh_install_lot_num']['id'] = 'field_mh_install_lot_num';
  $handler->display->display_options['fields']['field_mh_install_lot_num']['table'] = 'field_data_field_mh_install_lot_num';
  $handler->display->display_options['fields']['field_mh_install_lot_num']['field'] = 'field_mh_install_lot_num';
  $handler->display->display_options['fields']['field_mh_install_lot_num']['ui_name'] = 'Lot number';
  $handler->display->display_options['fields']['field_mh_install_lot_num']['label'] = 'Lot';
  $handler->display->display_options['fields']['field_mh_install_lot_num']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Vin */
  $handler->display->display_options['fields']['field_mh_install_unit']['id'] = 'field_mh_install_unit';
  $handler->display->display_options['fields']['field_mh_install_unit']['table'] = 'field_data_field_mh_install_unit';
  $handler->display->display_options['fields']['field_mh_install_unit']['field'] = 'field_mh_install_unit';
  $handler->display->display_options['fields']['field_mh_install_unit']['ui_name'] = 'Vin';
  $handler->display->display_options['fields']['field_mh_install_unit']['label'] = 'VIN';
  $handler->display->display_options['fields']['field_mh_install_unit']['settings'] = array(
    'link' => 0,
  );
  /* Field: Year */
  $handler->display->display_options['fields']['field_mh_unit_year']['id'] = 'field_mh_unit_year';
  $handler->display->display_options['fields']['field_mh_unit_year']['table'] = 'field_data_field_mh_unit_year';
  $handler->display->display_options['fields']['field_mh_unit_year']['field'] = 'field_mh_unit_year';
  $handler->display->display_options['fields']['field_mh_unit_year']['relationship'] = 'field_mh_install_unit_target_id';
  $handler->display->display_options['fields']['field_mh_unit_year']['ui_name'] = 'Year';
  $handler->display->display_options['fields']['field_mh_unit_year']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Width */
  $handler->display->display_options['fields']['field_mh_unit_width']['id'] = 'field_mh_unit_width';
  $handler->display->display_options['fields']['field_mh_unit_width']['table'] = 'field_data_field_mh_unit_width';
  $handler->display->display_options['fields']['field_mh_unit_width']['field'] = 'field_mh_unit_width';
  $handler->display->display_options['fields']['field_mh_unit_width']['relationship'] = 'field_mh_install_unit_target_id';
  $handler->display->display_options['fields']['field_mh_unit_width']['ui_name'] = 'Width';
  $handler->display->display_options['fields']['field_mh_unit_width']['label'] = 'Size';
  $handler->display->display_options['fields']['field_mh_unit_width']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Length */
  $handler->display->display_options['fields']['field_mh_unit_length']['id'] = 'field_mh_unit_length';
  $handler->display->display_options['fields']['field_mh_unit_length']['table'] = 'field_data_field_mh_unit_length';
  $handler->display->display_options['fields']['field_mh_unit_length']['field'] = 'field_mh_unit_length';
  $handler->display->display_options['fields']['field_mh_unit_length']['relationship'] = 'field_mh_install_unit_target_id';
  $handler->display->display_options['fields']['field_mh_unit_length']['ui_name'] = 'Length';
  $handler->display->display_options['fields']['field_mh_unit_length']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Bedrooms */
  $handler->display->display_options['fields']['field_mh_unit_beds']['id'] = 'field_mh_unit_beds';
  $handler->display->display_options['fields']['field_mh_unit_beds']['table'] = 'field_data_field_mh_unit_beds';
  $handler->display->display_options['fields']['field_mh_unit_beds']['field'] = 'field_mh_unit_beds';
  $handler->display->display_options['fields']['field_mh_unit_beds']['relationship'] = 'field_mh_install_unit_target_id';
  $handler->display->display_options['fields']['field_mh_unit_beds']['ui_name'] = 'Bedrooms';
  $handler->display->display_options['fields']['field_mh_unit_beds']['label'] = 'Bed';
  /* Field: Bathrooms */
  $handler->display->display_options['fields']['field_mh_unit_baths']['id'] = 'field_mh_unit_baths';
  $handler->display->display_options['fields']['field_mh_unit_baths']['table'] = 'field_data_field_mh_unit_baths';
  $handler->display->display_options['fields']['field_mh_unit_baths']['field'] = 'field_mh_unit_baths';
  $handler->display->display_options['fields']['field_mh_unit_baths']['relationship'] = 'field_mh_install_unit_target_id';
  $handler->display->display_options['fields']['field_mh_unit_baths']['ui_name'] = 'Bathrooms';
  $handler->display->display_options['fields']['field_mh_unit_baths']['label'] = 'Bath';
  /* Field: Invoice amount */
  $handler->display->display_options['fields']['field_mh_install_invoice_amount']['id'] = 'field_mh_install_invoice_amount';
  $handler->display->display_options['fields']['field_mh_install_invoice_amount']['table'] = 'field_data_field_mh_install_invoice_amount';
  $handler->display->display_options['fields']['field_mh_install_invoice_amount']['field'] = 'field_mh_install_invoice_amount';
  $handler->display->display_options['fields']['field_mh_install_invoice_amount']['ui_name'] = 'Invoice amount';
  $handler->display->display_options['fields']['field_mh_install_invoice_amount']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Status */
  $handler->display->display_options['fields']['field_mh_install_status']['id'] = 'field_mh_install_status';
  $handler->display->display_options['fields']['field_mh_install_status']['table'] = 'field_data_field_mh_install_status';
  $handler->display->display_options['fields']['field_mh_install_status']['field'] = 'field_mh_install_status';
  $handler->display->display_options['fields']['field_mh_install_status']['ui_name'] = 'Status';
  $handler->display->display_options['fields']['field_mh_install_status']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Installation date */
  $handler->display->display_options['fields']['field_mh_install_date']['id'] = 'field_mh_install_date';
  $handler->display->display_options['fields']['field_mh_install_date']['table'] = 'field_data_field_mh_install_date';
  $handler->display->display_options['fields']['field_mh_install_date']['field'] = 'field_mh_install_date';
  $handler->display->display_options['fields']['field_mh_install_date']['settings'] = array(
    'format_type' => 'short_date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Link to documents */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Link to documents';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Documents';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'install-docs/[nid]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Lot number (field_mh_install_lot_num) */
  $handler->display->display_options['sorts']['field_mh_install_lot_num_value']['id'] = 'field_mh_install_lot_num_value';
  $handler->display->display_options['sorts']['field_mh_install_lot_num_value']['table'] = 'field_data_field_mh_install_lot_num';
  $handler->display->display_options['sorts']['field_mh_install_lot_num_value']['field'] = 'field_mh_install_lot_num_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'mh_installation' => 'mh_installation',
  );
  /* Filter criterion: Content: Status (field_mh_install_status) */
  $handler->display->display_options['filters']['field_mh_install_status_tid']['id'] = 'field_mh_install_status_tid';
  $handler->display->display_options['filters']['field_mh_install_status_tid']['table'] = 'field_data_field_mh_install_status';
  $handler->display->display_options['filters']['field_mh_install_status_tid']['field'] = 'field_mh_install_status_tid';
  $handler->display->display_options['filters']['field_mh_install_status_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_mh_install_status_tid']['expose']['operator_id'] = 'field_mh_install_status_tid_op';
  $handler->display->display_options['filters']['field_mh_install_status_tid']['expose']['label'] = 'Status ';
  $handler->display->display_options['filters']['field_mh_install_status_tid']['expose']['operator'] = 'field_mh_install_status_tid_op';
  $handler->display->display_options['filters']['field_mh_install_status_tid']['expose']['identifier'] = 'field_mh_install_status_tid';
  $handler->display->display_options['filters']['field_mh_install_status_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_mh_install_status_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_mh_install_status_tid']['vocabulary'] = 'mh_install_status';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_community_name',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'field_mh_install_id' => 'field_mh_install_id',
    'field_community_name' => 'field_community_name',
    'field_mh_install_lot_num' => 'field_mh_install_lot_num',
    'field_mh_install_unit' => 'field_mh_install_unit',
    'field_mh_unit_year' => 'field_mh_unit_year',
    'field_mh_unit_width' => 'field_mh_unit_width',
    'field_mh_unit_length' => 'field_mh_unit_length',
    'field_mh_unit_beds' => 'field_mh_unit_beds',
    'field_mh_unit_baths' => 'field_mh_unit_baths',
    'field_mh_install_invoice_amount' => 'field_mh_install_invoice_amount',
    'field_mh_install_status' => 'field_mh_install_status',
    'field_mh_install_date' => 'field_mh_install_date',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mh_install_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_community_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mh_install_lot_num' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mh_install_unit' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mh_unit_year' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mh_unit_width' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mh_unit_length' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mh_unit_beds' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mh_unit_baths' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mh_install_invoice_amount' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mh_install_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mh_install_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'mh_installation' => 'mh_installation',
  );
  /* Filter criterion: Content: Status (field_mh_install_status) */
  $handler->display->display_options['filters']['field_mh_install_status_tid']['id'] = 'field_mh_install_status_tid';
  $handler->display->display_options['filters']['field_mh_install_status_tid']['table'] = 'field_data_field_mh_install_status';
  $handler->display->display_options['filters']['field_mh_install_status_tid']['field'] = 'field_mh_install_status_tid';
  $handler->display->display_options['filters']['field_mh_install_status_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_mh_install_status_tid']['expose']['operator_id'] = 'field_mh_install_status_tid_op';
  $handler->display->display_options['filters']['field_mh_install_status_tid']['expose']['label'] = 'Status ';
  $handler->display->display_options['filters']['field_mh_install_status_tid']['expose']['operator'] = 'field_mh_install_status_tid_op';
  $handler->display->display_options['filters']['field_mh_install_status_tid']['expose']['identifier'] = 'field_mh_install_status_tid';
  $handler->display->display_options['filters']['field_mh_install_status_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_mh_install_status_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_mh_install_status_tid']['vocabulary'] = 'mh_install_status';
  $handler->display->display_options['path'] = 'home-install-list';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Install List';
  $handler->display->display_options['menu']['description'] = 'A list of Manufactured Homes that have been installed';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Admin page */
  $handler = $view->new_display('page', 'Admin page', 'page_1');
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['ui_name'] = 'Nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: mh_unit_nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'field_mh_install_unit_target_id';
  $handler->display->display_options['fields']['nid_1']['ui_name'] = 'mh_unit_nid';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  /* Field: Installation ID */
  $handler->display->display_options['fields']['field_mh_install_id']['id'] = 'field_mh_install_id';
  $handler->display->display_options['fields']['field_mh_install_id']['table'] = 'field_data_field_mh_install_id';
  $handler->display->display_options['fields']['field_mh_install_id']['field'] = 'field_mh_install_id';
  $handler->display->display_options['fields']['field_mh_install_id']['ui_name'] = 'Installation ID';
  $handler->display->display_options['fields']['field_mh_install_id']['label'] = 'ID';
  $handler->display->display_options['fields']['field_mh_install_id']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_mh_install_id']['alter']['path'] = 'install-info-panels/[nid]';
  /* Field: Community name */
  $handler->display->display_options['fields']['field_community_name']['id'] = 'field_community_name';
  $handler->display->display_options['fields']['field_community_name']['table'] = 'field_data_field_community_name';
  $handler->display->display_options['fields']['field_community_name']['field'] = 'field_community_name';
  $handler->display->display_options['fields']['field_community_name']['relationship'] = 'field_mh_install_mhc_name_target_id';
  $handler->display->display_options['fields']['field_community_name']['ui_name'] = 'Community name';
  $handler->display->display_options['fields']['field_community_name']['label'] = 'Community';
  $handler->display->display_options['fields']['field_community_name']['exclude'] = TRUE;
  /* Field: Lot number */
  $handler->display->display_options['fields']['field_mh_install_lot_num']['id'] = 'field_mh_install_lot_num';
  $handler->display->display_options['fields']['field_mh_install_lot_num']['table'] = 'field_data_field_mh_install_lot_num';
  $handler->display->display_options['fields']['field_mh_install_lot_num']['field'] = 'field_mh_install_lot_num';
  $handler->display->display_options['fields']['field_mh_install_lot_num']['ui_name'] = 'Lot number';
  $handler->display->display_options['fields']['field_mh_install_lot_num']['label'] = 'Lot';
  $handler->display->display_options['fields']['field_mh_install_lot_num']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Vin */
  $handler->display->display_options['fields']['field_mh_install_unit']['id'] = 'field_mh_install_unit';
  $handler->display->display_options['fields']['field_mh_install_unit']['table'] = 'field_data_field_mh_install_unit';
  $handler->display->display_options['fields']['field_mh_install_unit']['field'] = 'field_mh_install_unit';
  $handler->display->display_options['fields']['field_mh_install_unit']['ui_name'] = 'Vin';
  $handler->display->display_options['fields']['field_mh_install_unit']['label'] = 'VIN';
  $handler->display->display_options['fields']['field_mh_install_unit']['settings'] = array(
    'link' => 0,
  );
  /* Field: Year */
  $handler->display->display_options['fields']['field_mh_unit_year']['id'] = 'field_mh_unit_year';
  $handler->display->display_options['fields']['field_mh_unit_year']['table'] = 'field_data_field_mh_unit_year';
  $handler->display->display_options['fields']['field_mh_unit_year']['field'] = 'field_mh_unit_year';
  $handler->display->display_options['fields']['field_mh_unit_year']['relationship'] = 'field_mh_install_unit_target_id';
  $handler->display->display_options['fields']['field_mh_unit_year']['ui_name'] = 'Year';
  $handler->display->display_options['fields']['field_mh_unit_year']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Width */
  $handler->display->display_options['fields']['field_mh_unit_width']['id'] = 'field_mh_unit_width';
  $handler->display->display_options['fields']['field_mh_unit_width']['table'] = 'field_data_field_mh_unit_width';
  $handler->display->display_options['fields']['field_mh_unit_width']['field'] = 'field_mh_unit_width';
  $handler->display->display_options['fields']['field_mh_unit_width']['relationship'] = 'field_mh_install_unit_target_id';
  $handler->display->display_options['fields']['field_mh_unit_width']['ui_name'] = 'Width';
  $handler->display->display_options['fields']['field_mh_unit_width']['label'] = 'Size';
  $handler->display->display_options['fields']['field_mh_unit_width']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Length */
  $handler->display->display_options['fields']['field_mh_unit_length']['id'] = 'field_mh_unit_length';
  $handler->display->display_options['fields']['field_mh_unit_length']['table'] = 'field_data_field_mh_unit_length';
  $handler->display->display_options['fields']['field_mh_unit_length']['field'] = 'field_mh_unit_length';
  $handler->display->display_options['fields']['field_mh_unit_length']['relationship'] = 'field_mh_install_unit_target_id';
  $handler->display->display_options['fields']['field_mh_unit_length']['ui_name'] = 'Length';
  $handler->display->display_options['fields']['field_mh_unit_length']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Bedrooms */
  $handler->display->display_options['fields']['field_mh_unit_beds']['id'] = 'field_mh_unit_beds';
  $handler->display->display_options['fields']['field_mh_unit_beds']['table'] = 'field_data_field_mh_unit_beds';
  $handler->display->display_options['fields']['field_mh_unit_beds']['field'] = 'field_mh_unit_beds';
  $handler->display->display_options['fields']['field_mh_unit_beds']['relationship'] = 'field_mh_install_unit_target_id';
  $handler->display->display_options['fields']['field_mh_unit_beds']['ui_name'] = 'Bedrooms';
  $handler->display->display_options['fields']['field_mh_unit_beds']['label'] = 'Bed';
  /* Field: Bathrooms */
  $handler->display->display_options['fields']['field_mh_unit_baths']['id'] = 'field_mh_unit_baths';
  $handler->display->display_options['fields']['field_mh_unit_baths']['table'] = 'field_data_field_mh_unit_baths';
  $handler->display->display_options['fields']['field_mh_unit_baths']['field'] = 'field_mh_unit_baths';
  $handler->display->display_options['fields']['field_mh_unit_baths']['relationship'] = 'field_mh_install_unit_target_id';
  $handler->display->display_options['fields']['field_mh_unit_baths']['ui_name'] = 'Bathrooms';
  $handler->display->display_options['fields']['field_mh_unit_baths']['label'] = 'Bath';
  /* Field: Invoice amount */
  $handler->display->display_options['fields']['field_mh_install_invoice_amount']['id'] = 'field_mh_install_invoice_amount';
  $handler->display->display_options['fields']['field_mh_install_invoice_amount']['table'] = 'field_data_field_mh_install_invoice_amount';
  $handler->display->display_options['fields']['field_mh_install_invoice_amount']['field'] = 'field_mh_install_invoice_amount';
  $handler->display->display_options['fields']['field_mh_install_invoice_amount']['ui_name'] = 'Invoice amount';
  $handler->display->display_options['fields']['field_mh_install_invoice_amount']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Status */
  $handler->display->display_options['fields']['field_mh_install_status']['id'] = 'field_mh_install_status';
  $handler->display->display_options['fields']['field_mh_install_status']['table'] = 'field_data_field_mh_install_status';
  $handler->display->display_options['fields']['field_mh_install_status']['field'] = 'field_mh_install_status';
  $handler->display->display_options['fields']['field_mh_install_status']['ui_name'] = 'Status';
  $handler->display->display_options['fields']['field_mh_install_status']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Installation date */
  $handler->display->display_options['fields']['field_mh_install_date']['id'] = 'field_mh_install_date';
  $handler->display->display_options['fields']['field_mh_install_date']['table'] = 'field_data_field_mh_install_date';
  $handler->display->display_options['fields']['field_mh_install_date']['field'] = 'field_mh_install_date';
  $handler->display->display_options['fields']['field_mh_install_date']['settings'] = array(
    'format_type' => 'short_date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Link to documents */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Link to documents';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Documents';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'install-docs/[nid]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Edit install node */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Edit install node';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Edit nodes';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Install';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'node/[nid]/edit';
  /* Field: Edit unit nodes */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = 'Edit unit nodes';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = 'unit';
  $handler->display->display_options['fields']['nothing_2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['path'] = 'node/[nid_1]/edit';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'admin-install-list';

  /* Display: Context */
  $handler = $view->new_display('ctools_context', 'Context', 'ctools_context_1');
  $handler->display->display_options['style_plugin'] = 'ctools_context';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'mh_installation' => 'mh_installation',
  );
  $export['homes_installed'] = $view;

  return $export;
}
