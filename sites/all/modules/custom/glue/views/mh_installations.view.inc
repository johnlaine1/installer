<?php

$view = new view();
$view->name = 'mh_installations';
$view->description = 'Lists of mobile homes that have been or are being installed';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'MH Installations';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['grouping'] = array(
  0 => array(
    'field' => 'field_mh_install_mhc_name',
    'rendered' => 1,
    'rendered_strip' => 0,
  ),
);
$handler->display->display_options['style_options']['columns'] = array(
  'field_mh_install_mhc_name' => 'field_mh_install_mhc_name',
  'nid' => 'nid',
  'field_mh_unit_width' => 'field_mh_unit_width',
  'field_mh_unit_length' => 'field_mh_unit_length',
  'field_mh_install_lot_num' => 'field_mh_install_lot_num',
  'title' => 'title',
  'field_mh_unit_vin' => 'field_mh_unit_vin',
  'field_mh_unit_year' => 'field_mh_unit_year',
  'nothing' => 'nothing',
  'field_mh_unit_beds' => 'field_mh_unit_beds',
  'field_mh_unit_baths' => 'field_mh_unit_baths',
  'field_mh_install_status' => 'field_mh_install_status',
  'field_mh_install_date' => 'field_mh_install_date',
  'field_mh_install_invoice_status' => 'field_mh_install_invoice_status',
  'field_mh_install_invoice_amount' => 'field_mh_install_invoice_amount',
  'nothing_1' => 'nothing_1',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'field_mh_install_mhc_name' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'nid' => array(
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
  'field_mh_install_lot_num' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'title' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_mh_unit_vin' => array(
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
  'nothing' => array(
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
  'field_mh_install_status' => array(
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
  'field_mh_install_invoice_status' => array(
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
  'nothing_1' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
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
/* Field: Content: Community name */
$handler->display->display_options['fields']['field_mh_install_mhc_name']['id'] = 'field_mh_install_mhc_name';
$handler->display->display_options['fields']['field_mh_install_mhc_name']['table'] = 'field_data_field_mh_install_mhc_name';
$handler->display->display_options['fields']['field_mh_install_mhc_name']['field'] = 'field_mh_install_mhc_name';
$handler->display->display_options['fields']['field_mh_install_mhc_name']['label'] = '';
$handler->display->display_options['fields']['field_mh_install_mhc_name']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_mh_install_mhc_name']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_mh_install_mhc_name']['settings'] = array(
  'link' => 0,
);
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
/* Field: Content: Width */
$handler->display->display_options['fields']['field_mh_unit_width']['id'] = 'field_mh_unit_width';
$handler->display->display_options['fields']['field_mh_unit_width']['table'] = 'field_data_field_mh_unit_width';
$handler->display->display_options['fields']['field_mh_unit_width']['field'] = 'field_mh_unit_width';
$handler->display->display_options['fields']['field_mh_unit_width']['relationship'] = 'field_mh_install_unit_target_id';
$handler->display->display_options['fields']['field_mh_unit_width']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_mh_unit_width']['settings'] = array(
  'thousand_separator' => ' ',
  'prefix_suffix' => 1,
);
/* Field: Content: Length */
$handler->display->display_options['fields']['field_mh_unit_length']['id'] = 'field_mh_unit_length';
$handler->display->display_options['fields']['field_mh_unit_length']['table'] = 'field_data_field_mh_unit_length';
$handler->display->display_options['fields']['field_mh_unit_length']['field'] = 'field_mh_unit_length';
$handler->display->display_options['fields']['field_mh_unit_length']['relationship'] = 'field_mh_install_unit_target_id';
$handler->display->display_options['fields']['field_mh_unit_length']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_mh_unit_length']['settings'] = array(
  'thousand_separator' => ' ',
  'prefix_suffix' => 1,
);
/* Field: Content: Lot number */
$handler->display->display_options['fields']['field_mh_install_lot_num']['id'] = 'field_mh_install_lot_num';
$handler->display->display_options['fields']['field_mh_install_lot_num']['table'] = 'field_data_field_mh_install_lot_num';
$handler->display->display_options['fields']['field_mh_install_lot_num']['field'] = 'field_mh_install_lot_num';
$handler->display->display_options['fields']['field_mh_install_lot_num']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_mh_install_lot_num']['settings'] = array(
  'thousand_separator' => ' ',
  'prefix_suffix' => 1,
);
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = 'Unit';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content: VIN */
$handler->display->display_options['fields']['field_mh_unit_vin']['id'] = 'field_mh_unit_vin';
$handler->display->display_options['fields']['field_mh_unit_vin']['table'] = 'field_data_field_mh_unit_vin';
$handler->display->display_options['fields']['field_mh_unit_vin']['field'] = 'field_mh_unit_vin';
$handler->display->display_options['fields']['field_mh_unit_vin']['relationship'] = 'field_mh_install_unit_target_id';
$handler->display->display_options['fields']['field_mh_unit_vin']['delta_offset'] = '0';
/* Field: Content: Year */
$handler->display->display_options['fields']['field_mh_unit_year']['id'] = 'field_mh_unit_year';
$handler->display->display_options['fields']['field_mh_unit_year']['table'] = 'field_data_field_mh_unit_year';
$handler->display->display_options['fields']['field_mh_unit_year']['field'] = 'field_mh_unit_year';
$handler->display->display_options['fields']['field_mh_unit_year']['relationship'] = 'field_mh_install_unit_target_id';
$handler->display->display_options['fields']['field_mh_unit_year']['settings'] = array(
  'format_type' => 'long',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
);
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = 'Size';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_mh_unit_width]x[field_mh_unit_length]';
$handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['nothing']['hide_alter_empty'] = TRUE;
/* Field: Content: Bedrooms */
$handler->display->display_options['fields']['field_mh_unit_beds']['id'] = 'field_mh_unit_beds';
$handler->display->display_options['fields']['field_mh_unit_beds']['table'] = 'field_data_field_mh_unit_beds';
$handler->display->display_options['fields']['field_mh_unit_beds']['field'] = 'field_mh_unit_beds';
$handler->display->display_options['fields']['field_mh_unit_beds']['relationship'] = 'field_mh_install_unit_target_id';
$handler->display->display_options['fields']['field_mh_unit_beds']['label'] = 'Beds';
/* Field: Content: Bathrooms */
$handler->display->display_options['fields']['field_mh_unit_baths']['id'] = 'field_mh_unit_baths';
$handler->display->display_options['fields']['field_mh_unit_baths']['table'] = 'field_data_field_mh_unit_baths';
$handler->display->display_options['fields']['field_mh_unit_baths']['field'] = 'field_mh_unit_baths';
$handler->display->display_options['fields']['field_mh_unit_baths']['relationship'] = 'field_mh_install_unit_target_id';
$handler->display->display_options['fields']['field_mh_unit_baths']['label'] = 'Baths';
/* Field: Content: Installation Status */
$handler->display->display_options['fields']['field_mh_install_status']['id'] = 'field_mh_install_status';
$handler->display->display_options['fields']['field_mh_install_status']['table'] = 'field_data_field_mh_install_status';
$handler->display->display_options['fields']['field_mh_install_status']['field'] = 'field_mh_install_status';
$handler->display->display_options['fields']['field_mh_install_status']['label'] = 'Status';
$handler->display->display_options['fields']['field_mh_install_status']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_mh_install_status']['delta_offset'] = '0';
/* Field: Content: Installation date */
$handler->display->display_options['fields']['field_mh_install_date']['id'] = 'field_mh_install_date';
$handler->display->display_options['fields']['field_mh_install_date']['table'] = 'field_data_field_mh_install_date';
$handler->display->display_options['fields']['field_mh_install_date']['field'] = 'field_mh_install_date';
$handler->display->display_options['fields']['field_mh_install_date']['label'] = 'Completion date';
$handler->display->display_options['fields']['field_mh_install_date']['settings'] = array(
  'format_type' => 'short_date_only',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
);
/* Field: Content: Invoice Status */
$handler->display->display_options['fields']['field_mh_install_invoice_status']['id'] = 'field_mh_install_invoice_status';
$handler->display->display_options['fields']['field_mh_install_invoice_status']['table'] = 'field_data_field_mh_install_invoice_status';
$handler->display->display_options['fields']['field_mh_install_invoice_status']['field'] = 'field_mh_install_invoice_status';
$handler->display->display_options['fields']['field_mh_install_invoice_status']['type'] = 'taxonomy_term_reference_plain';
/* Field: Content: Invoice amount */
$handler->display->display_options['fields']['field_mh_install_invoice_amount']['id'] = 'field_mh_install_invoice_amount';
$handler->display->display_options['fields']['field_mh_install_invoice_amount']['table'] = 'field_data_field_mh_install_invoice_amount';
$handler->display->display_options['fields']['field_mh_install_invoice_amount']['field'] = 'field_mh_install_invoice_amount';
$handler->display->display_options['fields']['field_mh_install_invoice_amount']['settings'] = array(
  'thousand_separator' => ' ',
  'decimal_separator' => '.',
  'scale' => '2',
  'prefix_suffix' => 1,
);
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
$handler->display->display_options['fields']['nothing_1']['table'] = 'views';
$handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing_1']['label'] = 'Documents';
$handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Documents';
$handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'install-docs/[nid]';
/* Sort criterion: Content: Lot number (field_mh_install_lot_num) */
$handler->display->display_options['sorts']['field_mh_install_lot_num_value']['id'] = 'field_mh_install_lot_num_value';
$handler->display->display_options['sorts']['field_mh_install_lot_num_value']['table'] = 'field_data_field_mh_install_lot_num';
$handler->display->display_options['sorts']['field_mh_install_lot_num_value']['field'] = 'field_mh_install_lot_num_value';
$handler->display->display_options['sorts']['field_mh_install_lot_num_value']['expose']['label'] = 'Lot number (field_mh_install_lot_num)';
/* Sort criterion: Content: Community name (field_mh_install_mhc_name) */
$handler->display->display_options['sorts']['field_mh_install_mhc_name_target_id']['id'] = 'field_mh_install_mhc_name_target_id';
$handler->display->display_options['sorts']['field_mh_install_mhc_name_target_id']['table'] = 'field_data_field_mh_install_mhc_name';
$handler->display->display_options['sorts']['field_mh_install_mhc_name_target_id']['field'] = 'field_mh_install_mhc_name_target_id';
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

/* Display: Install list */
$handler = $view->new_display('panel_pane', 'Install list', 'panel_pane_1');
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Community name */
$handler->display->display_options['fields']['field_mh_install_mhc_name']['id'] = 'field_mh_install_mhc_name';
$handler->display->display_options['fields']['field_mh_install_mhc_name']['table'] = 'field_data_field_mh_install_mhc_name';
$handler->display->display_options['fields']['field_mh_install_mhc_name']['field'] = 'field_mh_install_mhc_name';
$handler->display->display_options['fields']['field_mh_install_mhc_name']['label'] = '';
$handler->display->display_options['fields']['field_mh_install_mhc_name']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_mh_install_mhc_name']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_mh_install_mhc_name']['settings'] = array(
  'link' => 0,
);
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
/* Field: Content: Width */
$handler->display->display_options['fields']['field_mh_unit_width']['id'] = 'field_mh_unit_width';
$handler->display->display_options['fields']['field_mh_unit_width']['table'] = 'field_data_field_mh_unit_width';
$handler->display->display_options['fields']['field_mh_unit_width']['field'] = 'field_mh_unit_width';
$handler->display->display_options['fields']['field_mh_unit_width']['relationship'] = 'field_mh_install_unit_target_id';
$handler->display->display_options['fields']['field_mh_unit_width']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_mh_unit_width']['settings'] = array(
  'thousand_separator' => ' ',
  'prefix_suffix' => 1,
);
/* Field: Content: Length */
$handler->display->display_options['fields']['field_mh_unit_length']['id'] = 'field_mh_unit_length';
$handler->display->display_options['fields']['field_mh_unit_length']['table'] = 'field_data_field_mh_unit_length';
$handler->display->display_options['fields']['field_mh_unit_length']['field'] = 'field_mh_unit_length';
$handler->display->display_options['fields']['field_mh_unit_length']['relationship'] = 'field_mh_install_unit_target_id';
$handler->display->display_options['fields']['field_mh_unit_length']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_mh_unit_length']['settings'] = array(
  'thousand_separator' => ' ',
  'prefix_suffix' => 1,
);
/* Field: Content: Lot number */
$handler->display->display_options['fields']['field_mh_install_lot_num']['id'] = 'field_mh_install_lot_num';
$handler->display->display_options['fields']['field_mh_install_lot_num']['table'] = 'field_data_field_mh_install_lot_num';
$handler->display->display_options['fields']['field_mh_install_lot_num']['field'] = 'field_mh_install_lot_num';
$handler->display->display_options['fields']['field_mh_install_lot_num']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_mh_install_lot_num']['settings'] = array(
  'thousand_separator' => ' ',
  'prefix_suffix' => 1,
);
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = 'Unit';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content: VIN */
$handler->display->display_options['fields']['field_mh_unit_vin']['id'] = 'field_mh_unit_vin';
$handler->display->display_options['fields']['field_mh_unit_vin']['table'] = 'field_data_field_mh_unit_vin';
$handler->display->display_options['fields']['field_mh_unit_vin']['field'] = 'field_mh_unit_vin';
$handler->display->display_options['fields']['field_mh_unit_vin']['relationship'] = 'field_mh_install_unit_target_id';
$handler->display->display_options['fields']['field_mh_unit_vin']['delta_offset'] = '0';
/* Field: Content: Year */
$handler->display->display_options['fields']['field_mh_unit_year']['id'] = 'field_mh_unit_year';
$handler->display->display_options['fields']['field_mh_unit_year']['table'] = 'field_data_field_mh_unit_year';
$handler->display->display_options['fields']['field_mh_unit_year']['field'] = 'field_mh_unit_year';
$handler->display->display_options['fields']['field_mh_unit_year']['relationship'] = 'field_mh_install_unit_target_id';
$handler->display->display_options['fields']['field_mh_unit_year']['settings'] = array(
  'format_type' => 'long',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
);
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = 'Size';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_mh_unit_width]x[field_mh_unit_length]';
$handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['nothing']['hide_alter_empty'] = TRUE;
/* Field: Content: Bedrooms */
$handler->display->display_options['fields']['field_mh_unit_beds']['id'] = 'field_mh_unit_beds';
$handler->display->display_options['fields']['field_mh_unit_beds']['table'] = 'field_data_field_mh_unit_beds';
$handler->display->display_options['fields']['field_mh_unit_beds']['field'] = 'field_mh_unit_beds';
$handler->display->display_options['fields']['field_mh_unit_beds']['relationship'] = 'field_mh_install_unit_target_id';
$handler->display->display_options['fields']['field_mh_unit_beds']['label'] = 'Beds';
/* Field: Content: Bathrooms */
$handler->display->display_options['fields']['field_mh_unit_baths']['id'] = 'field_mh_unit_baths';
$handler->display->display_options['fields']['field_mh_unit_baths']['table'] = 'field_data_field_mh_unit_baths';
$handler->display->display_options['fields']['field_mh_unit_baths']['field'] = 'field_mh_unit_baths';
$handler->display->display_options['fields']['field_mh_unit_baths']['relationship'] = 'field_mh_install_unit_target_id';
$handler->display->display_options['fields']['field_mh_unit_baths']['label'] = 'Baths';
/* Field: Content: Installation Status */
$handler->display->display_options['fields']['field_mh_install_status']['id'] = 'field_mh_install_status';
$handler->display->display_options['fields']['field_mh_install_status']['table'] = 'field_data_field_mh_install_status';
$handler->display->display_options['fields']['field_mh_install_status']['field'] = 'field_mh_install_status';
$handler->display->display_options['fields']['field_mh_install_status']['label'] = 'Status';
$handler->display->display_options['fields']['field_mh_install_status']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_mh_install_status']['delta_offset'] = '0';
/* Field: Content: Installation date */
$handler->display->display_options['fields']['field_mh_install_date']['id'] = 'field_mh_install_date';
$handler->display->display_options['fields']['field_mh_install_date']['table'] = 'field_data_field_mh_install_date';
$handler->display->display_options['fields']['field_mh_install_date']['field'] = 'field_mh_install_date';
$handler->display->display_options['fields']['field_mh_install_date']['label'] = 'Completion date';
$handler->display->display_options['fields']['field_mh_install_date']['settings'] = array(
  'format_type' => 'short_date_only',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
);
/* Field: Content: Invoice Status */
$handler->display->display_options['fields']['field_mh_install_invoice_status']['id'] = 'field_mh_install_invoice_status';
$handler->display->display_options['fields']['field_mh_install_invoice_status']['table'] = 'field_data_field_mh_install_invoice_status';
$handler->display->display_options['fields']['field_mh_install_invoice_status']['field'] = 'field_mh_install_invoice_status';
$handler->display->display_options['fields']['field_mh_install_invoice_status']['type'] = 'taxonomy_term_reference_plain';
/* Field: Content: Invoice amount */
$handler->display->display_options['fields']['field_mh_install_invoice_amount']['id'] = 'field_mh_install_invoice_amount';
$handler->display->display_options['fields']['field_mh_install_invoice_amount']['table'] = 'field_data_field_mh_install_invoice_amount';
$handler->display->display_options['fields']['field_mh_install_invoice_amount']['field'] = 'field_mh_install_invoice_amount';
$handler->display->display_options['fields']['field_mh_install_invoice_amount']['settings'] = array(
  'thousand_separator' => ' ',
  'decimal_separator' => '.',
  'scale' => '2',
  'prefix_suffix' => 1,
);
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
$handler->display->display_options['fields']['nothing_1']['table'] = 'views';
$handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing_1']['label'] = 'Documents';
$handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Documents';
$handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'install-docs/[nid]';
$handler->display->display_options['allow']['use_pager'] = 0;
$handler->display->display_options['allow']['items_per_page'] = 0;
$handler->display->display_options['allow']['offset'] = 0;
$handler->display->display_options['allow']['link_to_view'] = 0;
$handler->display->display_options['allow']['more_link'] = 0;
$handler->display->display_options['allow']['path_override'] = 0;
$handler->display->display_options['allow']['title_override'] = 'title_override';
$handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
$handler->display->display_options['allow']['fields_override'] = 'fields_override';
$handler->display->display_options['inherit_panels_path'] = '1';

/* Display: Document list */
$handler = $view->new_display('panel_pane', 'Document list', 'panel_pane_2');
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Documents */
$handler->display->display_options['fields']['field_mh_install_docs']['id'] = 'field_mh_install_docs';
$handler->display->display_options['fields']['field_mh_install_docs']['table'] = 'field_data_field_mh_install_docs';
$handler->display->display_options['fields']['field_mh_install_docs']['field'] = 'field_mh_install_docs';
$handler->display->display_options['fields']['field_mh_install_docs']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_mh_install_docs']['delta_offset'] = '0';
$handler->display->display_options['fields']['field_mh_install_docs']['separator'] = '</br>';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Content: Nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['default_action'] = 'empty';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['argument_input'] = array(
  'nid' => array(
    'type' => 'panel',
    'context' => 'entity:node.nid',
    'context_optional' => 0,
    'panel' => '0',
    'fixed' => '',
    'label' => 'Content: Nid',
  ),
);
$handler->display->display_options['inherit_panels_path'] = '1';