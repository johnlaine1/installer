<?php

$view = new view();
$view->name = 'title_service';
$view->description = 'A list of homes that title work has or is being performed for. Multiple content panes with different content.';
$view->tag = 'Title service';
$view->base_table = 'node';
$view->human_name = 'Title service';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Title services';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'role';
$handler->display->display_options['access']['role'] = array(
  15 => '15',
);
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'field_title_service_invoice' => 'field_title_service_invoice',
  'field_title_service_community' => 'field_title_service_community',
  'field_title_service_lot_num' => 'field_title_service_lot_num',
  'title' => 'title',
  'field_title_service_title_status' => 'field_title_service_title_status',
  'field_title_service_poa_' => 'field_title_service_poa_',
  'field_title_service_taxes_owed' => 'field_title_service_taxes_owed',
  'field_title_service_bond_cost' => 'field_title_service_bond_cost',
  'field_title_service_invoice_amt' => 'field_title_service_invoice_amt',
  'field_title_service_inv_status' => 'field_title_service_inv_status',
  'field_title_service_invoice_date' => 'field_title_service_invoice_date',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'field_title_service_invoice' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_title_service_community' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_title_service_lot_num' => array(
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
  'field_title_service_title_status' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_title_service_poa_' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_title_service_taxes_owed' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_title_service_bond_cost' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_title_service_invoice_amt' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_title_service_inv_status' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_title_service_invoice_date' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
/* Footer: Global: Text area */
$handler->display->display_options['footer']['area']['id'] = 'area';
$handler->display->display_options['footer']['area']['table'] = 'views';
$handler->display->display_options['footer']['area']['field'] = 'area';
$handler->display->display_options['footer']['area']['label'] = 'Download table';
$handler->display->display_options['footer']['area']['content'] = 'Download this table as a Excel or Word file by clicking one of the links below.';
$handler->display->display_options['footer']['area']['format'] = 'filtered_html';
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_title_service_mh_unit_target_id']['id'] = 'field_title_service_mh_unit_target_id';
$handler->display->display_options['relationships']['field_title_service_mh_unit_target_id']['table'] = 'field_data_field_title_service_mh_unit';
$handler->display->display_options['relationships']['field_title_service_mh_unit_target_id']['field'] = 'field_title_service_mh_unit_target_id';
$handler->display->display_options['relationships']['field_title_service_mh_unit_target_id']['label'] = 'mh_unit';
/* Field: Content: Invoice */
$handler->display->display_options['fields']['field_title_service_invoice']['id'] = 'field_title_service_invoice';
$handler->display->display_options['fields']['field_title_service_invoice']['table'] = 'field_data_field_title_service_invoice';
$handler->display->display_options['fields']['field_title_service_invoice']['field'] = 'field_title_service_invoice';
$handler->display->display_options['fields']['field_title_service_invoice']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_title_service_invoice']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_title_service_invoice']['type'] = 'file_url_plain';
/* Field: Content: Community */
$handler->display->display_options['fields']['field_title_service_community']['id'] = 'field_title_service_community';
$handler->display->display_options['fields']['field_title_service_community']['table'] = 'field_data_field_title_service_community';
$handler->display->display_options['fields']['field_title_service_community']['field'] = 'field_title_service_community';
$handler->display->display_options['fields']['field_title_service_community']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_title_service_community']['settings'] = array(
  'link' => 0,
);
/* Field: Content: Lot number */
$handler->display->display_options['fields']['field_title_service_lot_num']['id'] = 'field_title_service_lot_num';
$handler->display->display_options['fields']['field_title_service_lot_num']['table'] = 'field_data_field_title_service_lot_num';
$handler->display->display_options['fields']['field_title_service_lot_num']['field'] = 'field_title_service_lot_num';
$handler->display->display_options['fields']['field_title_service_lot_num']['label'] = 'Lot';
$handler->display->display_options['fields']['field_title_service_lot_num']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_title_service_lot_num']['settings'] = array(
  'thousand_separator' => '',
  'prefix_suffix' => 1,
);
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = 'Unit';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Field: Content: Title job status */
$handler->display->display_options['fields']['field_title_service_title_status']['id'] = 'field_title_service_title_status';
$handler->display->display_options['fields']['field_title_service_title_status']['table'] = 'field_data_field_title_service_title_status';
$handler->display->display_options['fields']['field_title_service_title_status']['field'] = 'field_title_service_title_status';
$handler->display->display_options['fields']['field_title_service_title_status']['label'] = 'Job status';
$handler->display->display_options['fields']['field_title_service_title_status']['type'] = 'taxonomy_term_reference_plain';
/* Field: Content: POA Received? */
$handler->display->display_options['fields']['field_title_service_poa_']['id'] = 'field_title_service_poa_';
$handler->display->display_options['fields']['field_title_service_poa_']['table'] = 'field_data_field_title_service_poa_';
$handler->display->display_options['fields']['field_title_service_poa_']['field'] = 'field_title_service_poa_';
$handler->display->display_options['fields']['field_title_service_poa_']['label'] = 'Have POA?';
$handler->display->display_options['fields']['field_title_service_poa_']['element_label_colon'] = FALSE;
/* Field: Content: Taxes owed */
$handler->display->display_options['fields']['field_title_service_taxes_owed']['id'] = 'field_title_service_taxes_owed';
$handler->display->display_options['fields']['field_title_service_taxes_owed']['table'] = 'field_data_field_title_service_taxes_owed';
$handler->display->display_options['fields']['field_title_service_taxes_owed']['field'] = 'field_title_service_taxes_owed';
$handler->display->display_options['fields']['field_title_service_taxes_owed']['settings'] = array(
  'thousand_separator' => ',',
  'decimal_separator' => '.',
  'scale' => '2',
  'prefix_suffix' => 1,
);
/* Field: Content: Bond cost */
$handler->display->display_options['fields']['field_title_service_bond_cost']['id'] = 'field_title_service_bond_cost';
$handler->display->display_options['fields']['field_title_service_bond_cost']['table'] = 'field_data_field_title_service_bond_cost';
$handler->display->display_options['fields']['field_title_service_bond_cost']['field'] = 'field_title_service_bond_cost';
$handler->display->display_options['fields']['field_title_service_bond_cost']['settings'] = array(
  'thousand_separator' => ',',
  'decimal_separator' => '.',
  'scale' => '2',
  'prefix_suffix' => 1,
);
/* Field: Content: Invoice amount */
$handler->display->display_options['fields']['field_title_service_invoice_amt']['id'] = 'field_title_service_invoice_amt';
$handler->display->display_options['fields']['field_title_service_invoice_amt']['table'] = 'field_data_field_title_service_invoice_amt';
$handler->display->display_options['fields']['field_title_service_invoice_amt']['field'] = 'field_title_service_invoice_amt';
$handler->display->display_options['fields']['field_title_service_invoice_amt']['group_type'] = 'min';
$handler->display->display_options['fields']['field_title_service_invoice_amt']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['field_title_service_invoice_amt']['alter']['path'] = '[field_title_service_invoice]';
$handler->display->display_options['fields']['field_title_service_invoice_amt']['settings'] = array(
  'thousand_separator' => ' ',
  'decimal_separator' => '.',
  'scale' => '2',
  'prefix_suffix' => 1,
);
$handler->display->display_options['fields']['field_title_service_invoice_amt']['group_column'] = 'entity_id';
/* Field: Content: Invoice status */
$handler->display->display_options['fields']['field_title_service_inv_status']['id'] = 'field_title_service_inv_status';
$handler->display->display_options['fields']['field_title_service_inv_status']['table'] = 'field_data_field_title_service_inv_status';
$handler->display->display_options['fields']['field_title_service_inv_status']['field'] = 'field_title_service_inv_status';
$handler->display->display_options['fields']['field_title_service_inv_status']['type'] = 'taxonomy_term_reference_plain';
/* Field: Content: Invoice date */
$handler->display->display_options['fields']['field_title_service_invoice_date']['id'] = 'field_title_service_invoice_date';
$handler->display->display_options['fields']['field_title_service_invoice_date']['table'] = 'field_data_field_title_service_invoice_date';
$handler->display->display_options['fields']['field_title_service_invoice_date']['field'] = 'field_title_service_invoice_date';
$handler->display->display_options['fields']['field_title_service_invoice_date']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_title_service_invoice_date']['settings'] = array(
  'format_type' => 'short_date_only',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
);
/* Sort criterion: Content: Title */
$handler->display->display_options['sorts']['title']['id'] = 'title';
$handler->display->display_options['sorts']['title']['table'] = 'node';
$handler->display->display_options['sorts']['title']['field'] = 'title';
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
  'title_service' => 'title_service',
);
/* Filter criterion: Content: Title job status (field_title_service_title_status) */
$handler->display->display_options['filters']['field_title_service_title_status_tid']['id'] = 'field_title_service_title_status_tid';
$handler->display->display_options['filters']['field_title_service_title_status_tid']['table'] = 'field_data_field_title_service_title_status';
$handler->display->display_options['filters']['field_title_service_title_status_tid']['field'] = 'field_title_service_title_status_tid';
$handler->display->display_options['filters']['field_title_service_title_status_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_title_service_title_status_tid']['expose']['operator_id'] = 'field_title_service_title_status_tid_op';
$handler->display->display_options['filters']['field_title_service_title_status_tid']['expose']['label'] = 'Job status';
$handler->display->display_options['filters']['field_title_service_title_status_tid']['expose']['operator'] = 'field_title_service_title_status_tid_op';
$handler->display->display_options['filters']['field_title_service_title_status_tid']['expose']['identifier'] = 'field_title_service_title_status_tid';
$handler->display->display_options['filters']['field_title_service_title_status_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  14 => 0,
);
$handler->display->display_options['filters']['field_title_service_title_status_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_title_service_title_status_tid']['vocabulary'] = 'title_status';

/* Display: List */
$handler = $view->new_display('page', 'List', 'page_1');
$handler->display->display_options['defaults']['exposed_form'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'field_title_service_invoice' => 'field_title_service_invoice',
  'field_title_service_community' => 'field_title_service_community',
  'field_title_service_lot_num' => 'field_title_service_lot_num',
  'title' => 'title',
  'field_title_service_title_status' => 'field_title_service_title_status',
  'field_title_service_poa_' => 'field_title_service_poa_',
  'field_title_service_taxes_owed' => 'field_title_service_taxes_owed',
  'field_title_service_bond_cost' => 'field_title_service_bond_cost',
  'field_title_service_invoice_amt' => 'field_title_service_invoice_amt',
  'field_title_service_inv_status' => 'field_title_service_inv_status',
  'field_title_service_invoice_date' => 'field_title_service_invoice_date',
);
$handler->display->display_options['style_options']['default'] = 'field_title_service_community';
$handler->display->display_options['style_options']['info'] = array(
  'field_title_service_invoice' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_title_service_community' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_title_service_lot_num' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'title' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_title_service_title_status' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_title_service_poa_' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_title_service_taxes_owed' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_title_service_bond_cost' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_title_service_invoice_amt' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_title_service_inv_status' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_title_service_invoice_date' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Global: Text area */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['label'] = 'Instructions';
$handler->display->display_options['header']['area']['content'] = '<ul>
  <li>Click on a \'Unit\' name for more information about that unit.</li>
  <li>Click on an \'Invoice Amount\' to view a copy of the invoice.</li>
  <li>Click on a column title to sort by that column.</li>
  <li>Use the filters below to limit the results displayed.</li>
</ul>';
$handler->display->display_options['header']['area']['format'] = 'filtered_html';
$handler->display->display_options['defaults']['footer'] = FALSE;
/* Footer: Global: Text area */
$handler->display->display_options['footer']['area']['id'] = 'area';
$handler->display->display_options['footer']['area']['table'] = 'views';
$handler->display->display_options['footer']['area']['field'] = 'area';
$handler->display->display_options['footer']['area']['label'] = 'Download instructions';
$handler->display->display_options['footer']['area']['content'] = 'Download this table as a Excel or Word file by clicking one of the links below.';
$handler->display->display_options['footer']['area']['format'] = 'filtered_html';
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_title_service_mh_unit_target_id']['id'] = 'field_title_service_mh_unit_target_id';
$handler->display->display_options['relationships']['field_title_service_mh_unit_target_id']['table'] = 'field_data_field_title_service_mh_unit';
$handler->display->display_options['relationships']['field_title_service_mh_unit_target_id']['field'] = 'field_title_service_mh_unit_target_id';
$handler->display->display_options['relationships']['field_title_service_mh_unit_target_id']['label'] = 'mh_unit';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Invoice */
$handler->display->display_options['fields']['field_title_service_invoice']['id'] = 'field_title_service_invoice';
$handler->display->display_options['fields']['field_title_service_invoice']['table'] = 'field_data_field_title_service_invoice';
$handler->display->display_options['fields']['field_title_service_invoice']['field'] = 'field_title_service_invoice';
$handler->display->display_options['fields']['field_title_service_invoice']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_title_service_invoice']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_title_service_invoice']['type'] = 'file_url_plain';
/* Field: Content: Community */
$handler->display->display_options['fields']['field_title_service_community']['id'] = 'field_title_service_community';
$handler->display->display_options['fields']['field_title_service_community']['table'] = 'field_data_field_title_service_community';
$handler->display->display_options['fields']['field_title_service_community']['field'] = 'field_title_service_community';
$handler->display->display_options['fields']['field_title_service_community']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_title_service_community']['settings'] = array(
  'link' => 0,
);
/* Field: Content: Lot number */
$handler->display->display_options['fields']['field_title_service_lot_num']['id'] = 'field_title_service_lot_num';
$handler->display->display_options['fields']['field_title_service_lot_num']['table'] = 'field_data_field_title_service_lot_num';
$handler->display->display_options['fields']['field_title_service_lot_num']['field'] = 'field_title_service_lot_num';
$handler->display->display_options['fields']['field_title_service_lot_num']['label'] = 'Lot';
$handler->display->display_options['fields']['field_title_service_lot_num']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_title_service_lot_num']['settings'] = array(
  'thousand_separator' => '',
  'prefix_suffix' => 1,
);
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = 'Unit';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Field: Content: Title job status */
$handler->display->display_options['fields']['field_title_service_title_status']['id'] = 'field_title_service_title_status';
$handler->display->display_options['fields']['field_title_service_title_status']['table'] = 'field_data_field_title_service_title_status';
$handler->display->display_options['fields']['field_title_service_title_status']['field'] = 'field_title_service_title_status';
$handler->display->display_options['fields']['field_title_service_title_status']['label'] = 'Job status';
$handler->display->display_options['fields']['field_title_service_title_status']['type'] = 'taxonomy_term_reference_plain';
/* Field: Content: POA Received? */
$handler->display->display_options['fields']['field_title_service_poa_']['id'] = 'field_title_service_poa_';
$handler->display->display_options['fields']['field_title_service_poa_']['table'] = 'field_data_field_title_service_poa_';
$handler->display->display_options['fields']['field_title_service_poa_']['field'] = 'field_title_service_poa_';
$handler->display->display_options['fields']['field_title_service_poa_']['label'] = 'POA';
$handler->display->display_options['fields']['field_title_service_poa_']['element_label_colon'] = FALSE;
/* Field: Content: Taxes owed */
$handler->display->display_options['fields']['field_title_service_taxes_owed']['id'] = 'field_title_service_taxes_owed';
$handler->display->display_options['fields']['field_title_service_taxes_owed']['table'] = 'field_data_field_title_service_taxes_owed';
$handler->display->display_options['fields']['field_title_service_taxes_owed']['field'] = 'field_title_service_taxes_owed';
$handler->display->display_options['fields']['field_title_service_taxes_owed']['label'] = 'Taxes';
$handler->display->display_options['fields']['field_title_service_taxes_owed']['settings'] = array(
  'thousand_separator' => ',',
  'decimal_separator' => '.',
  'scale' => '2',
  'prefix_suffix' => 1,
);
/* Field: Content: Bond cost */
$handler->display->display_options['fields']['field_title_service_bond_cost']['id'] = 'field_title_service_bond_cost';
$handler->display->display_options['fields']['field_title_service_bond_cost']['table'] = 'field_data_field_title_service_bond_cost';
$handler->display->display_options['fields']['field_title_service_bond_cost']['field'] = 'field_title_service_bond_cost';
$handler->display->display_options['fields']['field_title_service_bond_cost']['label'] = 'Bond';
$handler->display->display_options['fields']['field_title_service_bond_cost']['settings'] = array(
  'thousand_separator' => ',',
  'decimal_separator' => '.',
  'scale' => '2',
  'prefix_suffix' => 1,
);
/* Field: Content: Service fee */
$handler->display->display_options['fields']['field_title_service_service_fee']['id'] = 'field_title_service_service_fee';
$handler->display->display_options['fields']['field_title_service_service_fee']['table'] = 'field_data_field_title_service_service_fee';
$handler->display->display_options['fields']['field_title_service_service_fee']['field'] = 'field_title_service_service_fee';
$handler->display->display_options['fields']['field_title_service_service_fee']['settings'] = array(
  'thousand_separator' => ' ',
  'decimal_separator' => '.',
  'scale' => '2',
  'prefix_suffix' => 1,
);
/* Field: Content: Invoice amount */
$handler->display->display_options['fields']['field_title_service_invoice_amt']['id'] = 'field_title_service_invoice_amt';
$handler->display->display_options['fields']['field_title_service_invoice_amt']['table'] = 'field_data_field_title_service_invoice_amt';
$handler->display->display_options['fields']['field_title_service_invoice_amt']['field'] = 'field_title_service_invoice_amt';
$handler->display->display_options['fields']['field_title_service_invoice_amt']['group_type'] = 'min';
$handler->display->display_options['fields']['field_title_service_invoice_amt']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['field_title_service_invoice_amt']['alter']['path'] = '[field_title_service_invoice]';
$handler->display->display_options['fields']['field_title_service_invoice_amt']['settings'] = array(
  'thousand_separator' => ' ',
  'decimal_separator' => '.',
  'scale' => '2',
  'prefix_suffix' => 1,
);
$handler->display->display_options['fields']['field_title_service_invoice_amt']['group_column'] = 'entity_id';
/* Field: Content: Invoice status */
$handler->display->display_options['fields']['field_title_service_inv_status']['id'] = 'field_title_service_inv_status';
$handler->display->display_options['fields']['field_title_service_inv_status']['table'] = 'field_data_field_title_service_inv_status';
$handler->display->display_options['fields']['field_title_service_inv_status']['field'] = 'field_title_service_inv_status';
$handler->display->display_options['fields']['field_title_service_inv_status']['type'] = 'taxonomy_term_reference_plain';
/* Field: Content: Invoice date */
$handler->display->display_options['fields']['field_title_service_invoice_date']['id'] = 'field_title_service_invoice_date';
$handler->display->display_options['fields']['field_title_service_invoice_date']['table'] = 'field_data_field_title_service_invoice_date';
$handler->display->display_options['fields']['field_title_service_invoice_date']['field'] = 'field_title_service_invoice_date';
$handler->display->display_options['fields']['field_title_service_invoice_date']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_title_service_invoice_date']['settings'] = array(
  'format_type' => 'short_date_only',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
);
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
  'title_service' => 'title_service',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Title job status (field_title_service_title_status) */
$handler->display->display_options['filters']['field_title_service_title_status_tid']['id'] = 'field_title_service_title_status_tid';
$handler->display->display_options['filters']['field_title_service_title_status_tid']['table'] = 'field_data_field_title_service_title_status';
$handler->display->display_options['filters']['field_title_service_title_status_tid']['field'] = 'field_title_service_title_status_tid';
$handler->display->display_options['filters']['field_title_service_title_status_tid']['group'] = 1;
$handler->display->display_options['filters']['field_title_service_title_status_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_title_service_title_status_tid']['expose']['operator_id'] = 'field_title_service_title_status_tid_op';
$handler->display->display_options['filters']['field_title_service_title_status_tid']['expose']['label'] = 'Job status';
$handler->display->display_options['filters']['field_title_service_title_status_tid']['expose']['operator'] = 'field_title_service_title_status_tid_op';
$handler->display->display_options['filters']['field_title_service_title_status_tid']['expose']['identifier'] = 'field_title_service_title_status_tid';
$handler->display->display_options['filters']['field_title_service_title_status_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  14 => 0,
);
$handler->display->display_options['filters']['field_title_service_title_status_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_title_service_title_status_tid']['vocabulary'] = 'title_status';
/* Filter criterion: Content: Invoice status (field_title_service_inv_status) */
$handler->display->display_options['filters']['field_title_service_inv_status_tid']['id'] = 'field_title_service_inv_status_tid';
$handler->display->display_options['filters']['field_title_service_inv_status_tid']['table'] = 'field_data_field_title_service_inv_status';
$handler->display->display_options['filters']['field_title_service_inv_status_tid']['field'] = 'field_title_service_inv_status_tid';
$handler->display->display_options['filters']['field_title_service_inv_status_tid']['group'] = 1;
$handler->display->display_options['filters']['field_title_service_inv_status_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_title_service_inv_status_tid']['expose']['operator_id'] = 'field_title_service_inv_status_tid_op';
$handler->display->display_options['filters']['field_title_service_inv_status_tid']['expose']['label'] = 'Invoice status';
$handler->display->display_options['filters']['field_title_service_inv_status_tid']['expose']['operator'] = 'field_title_service_inv_status_tid_op';
$handler->display->display_options['filters']['field_title_service_inv_status_tid']['expose']['identifier'] = 'field_title_service_inv_status_tid';
$handler->display->display_options['filters']['field_title_service_inv_status_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  14 => 0,
);
$handler->display->display_options['filters']['field_title_service_inv_status_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_title_service_inv_status_tid']['vocabulary'] = 'mh_invoice_status';
/* Filter criterion: Content: POA Received? (field_title_service_poa_) */
$handler->display->display_options['filters']['field_title_service_poa__value']['id'] = 'field_title_service_poa__value';
$handler->display->display_options['filters']['field_title_service_poa__value']['table'] = 'field_data_field_title_service_poa_';
$handler->display->display_options['filters']['field_title_service_poa__value']['field'] = 'field_title_service_poa__value';
$handler->display->display_options['filters']['field_title_service_poa__value']['group'] = 1;
$handler->display->display_options['filters']['field_title_service_poa__value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_title_service_poa__value']['expose']['operator_id'] = 'field_title_service_poa__value_op';
$handler->display->display_options['filters']['field_title_service_poa__value']['expose']['label'] = 'POA Received?';
$handler->display->display_options['filters']['field_title_service_poa__value']['expose']['operator'] = 'field_title_service_poa__value_op';
$handler->display->display_options['filters']['field_title_service_poa__value']['expose']['identifier'] = 'field_title_service_poa__value';
$handler->display->display_options['filters']['field_title_service_poa__value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  14 => 0,
);
$handler->display->display_options['path'] = 'title-service';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'Title service';
$handler->display->display_options['menu']['weight'] = '10';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

/* Display: Data export-xls */
$handler = $view->new_display('views_data_export', 'Data export-xls', 'views_data_export_1');
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['style_plugin'] = 'views_data_export_xls';
$handler->display->display_options['style_options']['attach_text'] = 'Download as an Excel file';
$handler->display->display_options['style_options']['provide_file'] = 1;
$handler->display->display_options['style_options']['parent_sort'] = 0;
$handler->display->display_options['path'] = 'title-service/export/xls';
$handler->display->display_options['displays'] = array(
  'page_1' => 'page_1',
  'default' => 0,
);

/* Display: Data export-doc */
$handler = $view->new_display('views_data_export', 'Data export-doc', 'views_data_export_2');
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['style_plugin'] = 'views_data_export_doc';
$handler->display->display_options['style_options']['attach_text'] = 'Download as a Word file';
$handler->display->display_options['style_options']['provide_file'] = 1;
$handler->display->display_options['style_options']['parent_sort'] = 0;
$handler->display->display_options['path'] = 'title-service/export/doc';
$handler->display->display_options['displays'] = array(
  'page_1' => 'page_1',
  'default' => 0,
);

/* Display: Sum test */
$handler = $view->new_display('page', 'Sum test', 'page_2');
$handler->display->display_options['defaults']['group_by'] = FALSE;
$handler->display->display_options['path'] = 'title-service/sum-test';

/* Display: Invoice info */
$handler = $view->new_display('panel_pane', 'Invoice info', 'panel_pane_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Invoice';
$handler->display->display_options['defaults']['access'] = FALSE;
$handler->display->display_options['access']['type'] = 'role';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['footer'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Invoice */
$handler->display->display_options['fields']['field_title_service_invoice']['id'] = 'field_title_service_invoice';
$handler->display->display_options['fields']['field_title_service_invoice']['table'] = 'field_data_field_title_service_invoice';
$handler->display->display_options['fields']['field_title_service_invoice']['field'] = 'field_title_service_invoice';
$handler->display->display_options['fields']['field_title_service_invoice']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_title_service_invoice']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_title_service_invoice']['type'] = 'file_url_plain';
/* Field: Content: Invoice status */
$handler->display->display_options['fields']['field_title_service_inv_status']['id'] = 'field_title_service_inv_status';
$handler->display->display_options['fields']['field_title_service_inv_status']['table'] = 'field_data_field_title_service_inv_status';
$handler->display->display_options['fields']['field_title_service_inv_status']['field'] = 'field_title_service_inv_status';
$handler->display->display_options['fields']['field_title_service_inv_status']['label'] = 'Status';
$handler->display->display_options['fields']['field_title_service_inv_status']['element_type'] = 'span';
$handler->display->display_options['fields']['field_title_service_inv_status']['element_label_type'] = 'strong';
$handler->display->display_options['fields']['field_title_service_inv_status']['type'] = 'taxonomy_term_reference_plain';
/* Field: Content: Invoice number */
$handler->display->display_options['fields']['field_title_service_invoice_num']['id'] = 'field_title_service_invoice_num';
$handler->display->display_options['fields']['field_title_service_invoice_num']['table'] = 'field_data_field_title_service_invoice_num';
$handler->display->display_options['fields']['field_title_service_invoice_num']['field'] = 'field_title_service_invoice_num';
$handler->display->display_options['fields']['field_title_service_invoice_num']['label'] = 'Number';
$handler->display->display_options['fields']['field_title_service_invoice_num']['element_type'] = 'span';
$handler->display->display_options['fields']['field_title_service_invoice_num']['element_label_type'] = 'strong';
$handler->display->display_options['fields']['field_title_service_invoice_num']['settings'] = array(
  'thousand_separator' => '',
  'prefix_suffix' => 1,
);
/* Field: Content: Invoice date */
$handler->display->display_options['fields']['field_title_service_invoice_date']['id'] = 'field_title_service_invoice_date';
$handler->display->display_options['fields']['field_title_service_invoice_date']['table'] = 'field_data_field_title_service_invoice_date';
$handler->display->display_options['fields']['field_title_service_invoice_date']['field'] = 'field_title_service_invoice_date';
$handler->display->display_options['fields']['field_title_service_invoice_date']['label'] = 'Date';
$handler->display->display_options['fields']['field_title_service_invoice_date']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_title_service_invoice_date']['element_type'] = 'span';
$handler->display->display_options['fields']['field_title_service_invoice_date']['element_label_type'] = 'strong';
$handler->display->display_options['fields']['field_title_service_invoice_date']['settings'] = array(
  'format_type' => 'short_date_only',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
);
/* Field: Content: Taxes owed */
$handler->display->display_options['fields']['field_title_service_taxes_owed']['id'] = 'field_title_service_taxes_owed';
$handler->display->display_options['fields']['field_title_service_taxes_owed']['table'] = 'field_data_field_title_service_taxes_owed';
$handler->display->display_options['fields']['field_title_service_taxes_owed']['field'] = 'field_title_service_taxes_owed';
$handler->display->display_options['fields']['field_title_service_taxes_owed']['element_type'] = 'span';
$handler->display->display_options['fields']['field_title_service_taxes_owed']['element_label_type'] = 'strong';
$handler->display->display_options['fields']['field_title_service_taxes_owed']['settings'] = array(
  'thousand_separator' => ',',
  'decimal_separator' => '.',
  'scale' => '2',
  'prefix_suffix' => 1,
);
/* Field: Content: Bond cost */
$handler->display->display_options['fields']['field_title_service_bond_cost']['id'] = 'field_title_service_bond_cost';
$handler->display->display_options['fields']['field_title_service_bond_cost']['table'] = 'field_data_field_title_service_bond_cost';
$handler->display->display_options['fields']['field_title_service_bond_cost']['field'] = 'field_title_service_bond_cost';
$handler->display->display_options['fields']['field_title_service_bond_cost']['element_type'] = 'span';
$handler->display->display_options['fields']['field_title_service_bond_cost']['element_label_type'] = 'strong';
$handler->display->display_options['fields']['field_title_service_bond_cost']['settings'] = array(
  'thousand_separator' => ',',
  'decimal_separator' => '.',
  'scale' => '2',
  'prefix_suffix' => 1,
);
/* Field: Content: Service fee */
$handler->display->display_options['fields']['field_title_service_service_fee']['id'] = 'field_title_service_service_fee';
$handler->display->display_options['fields']['field_title_service_service_fee']['table'] = 'field_data_field_title_service_service_fee';
$handler->display->display_options['fields']['field_title_service_service_fee']['field'] = 'field_title_service_service_fee';
$handler->display->display_options['fields']['field_title_service_service_fee']['element_type'] = 'span';
$handler->display->display_options['fields']['field_title_service_service_fee']['element_label_type'] = 'strong';
$handler->display->display_options['fields']['field_title_service_service_fee']['element_wrapper_type'] = 'span';
$handler->display->display_options['fields']['field_title_service_service_fee']['settings'] = array(
  'thousand_separator' => ' ',
  'decimal_separator' => '.',
  'scale' => '2',
  'prefix_suffix' => 1,
);
/* Field: Content: Invoice amount */
$handler->display->display_options['fields']['field_title_service_invoice_amt']['id'] = 'field_title_service_invoice_amt';
$handler->display->display_options['fields']['field_title_service_invoice_amt']['table'] = 'field_data_field_title_service_invoice_amt';
$handler->display->display_options['fields']['field_title_service_invoice_amt']['field'] = 'field_title_service_invoice_amt';
$handler->display->display_options['fields']['field_title_service_invoice_amt']['group_type'] = 'min';
$handler->display->display_options['fields']['field_title_service_invoice_amt']['label'] = 'Invoice total';
$handler->display->display_options['fields']['field_title_service_invoice_amt']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['field_title_service_invoice_amt']['alter']['path'] = '[field_title_service_invoice]';
$handler->display->display_options['fields']['field_title_service_invoice_amt']['element_type'] = 'span';
$handler->display->display_options['fields']['field_title_service_invoice_amt']['element_label_type'] = 'strong';
$handler->display->display_options['fields']['field_title_service_invoice_amt']['settings'] = array(
  'thousand_separator' => ' ',
  'decimal_separator' => '.',
  'scale' => '2',
  'prefix_suffix' => 1,
);
$handler->display->display_options['fields']['field_title_service_invoice_amt']['group_column'] = 'entity_id';
/* Field: File: Invoice */
$handler->display->display_options['fields']['field_title_service_invoice_1']['id'] = 'field_title_service_invoice_1';
$handler->display->display_options['fields']['field_title_service_invoice_1']['table'] = 'field_data_field_title_service_invoice';
$handler->display->display_options['fields']['field_title_service_invoice_1']['field'] = 'field_title_service_invoice';
$handler->display->display_options['fields']['field_title_service_invoice_1']['ui_name'] = 'File: Invoice';
$handler->display->display_options['fields']['field_title_service_invoice_1']['label'] = '';
$handler->display->display_options['fields']['field_title_service_invoice_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_title_service_invoice_1']['click_sort_column'] = 'fid';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Content: Nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
  'title_service' => 'title_service',
);
$handler->display->display_options['allow']['use_pager'] = 0;
$handler->display->display_options['allow']['items_per_page'] = 0;
$handler->display->display_options['allow']['offset'] = 0;
$handler->display->display_options['allow']['link_to_view'] = 0;
$handler->display->display_options['allow']['more_link'] = 0;
$handler->display->display_options['allow']['path_override'] = 0;
$handler->display->display_options['allow']['title_override'] = 'title_override';
$handler->display->display_options['allow']['exposed_form'] = 0;
$handler->display->display_options['allow']['fields_override'] = 0;
$handler->display->display_options['argument_input'] = array(
  'nid' => array(
    'type' => 'context',
    'context' => 'entity:node.nid',
    'context_optional' => 0,
    'panel' => '0',
    'fixed' => '',
    'label' => 'Content: Nid',
  ),
);

/* Display: Unit info */
$handler = $view->new_display('panel_pane', 'Unit info', 'panel_pane_2');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Unit';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['footer'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Width */
$handler->display->display_options['fields']['field_mh_unit_width']['id'] = 'field_mh_unit_width';
$handler->display->display_options['fields']['field_mh_unit_width']['table'] = 'field_data_field_mh_unit_width';
$handler->display->display_options['fields']['field_mh_unit_width']['field'] = 'field_mh_unit_width';
$handler->display->display_options['fields']['field_mh_unit_width']['relationship'] = 'field_title_service_mh_unit_target_id';
$handler->display->display_options['fields']['field_mh_unit_width']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_mh_unit_width']['settings'] = array(
  'thousand_separator' => '',
  'prefix_suffix' => 1,
);
/* Field: Content: Length */
$handler->display->display_options['fields']['field_mh_unit_length']['id'] = 'field_mh_unit_length';
$handler->display->display_options['fields']['field_mh_unit_length']['table'] = 'field_data_field_mh_unit_length';
$handler->display->display_options['fields']['field_mh_unit_length']['field'] = 'field_mh_unit_length';
$handler->display->display_options['fields']['field_mh_unit_length']['relationship'] = 'field_title_service_mh_unit_target_id';
$handler->display->display_options['fields']['field_mh_unit_length']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_mh_unit_length']['settings'] = array(
  'thousand_separator' => '',
  'prefix_suffix' => 1,
);
/* Field: Content: Year */
$handler->display->display_options['fields']['field_mh_unit_year']['id'] = 'field_mh_unit_year';
$handler->display->display_options['fields']['field_mh_unit_year']['table'] = 'field_data_field_mh_unit_year';
$handler->display->display_options['fields']['field_mh_unit_year']['field'] = 'field_mh_unit_year';
$handler->display->display_options['fields']['field_mh_unit_year']['relationship'] = 'field_title_service_mh_unit_target_id';
$handler->display->display_options['fields']['field_mh_unit_year']['element_type'] = 'span';
$handler->display->display_options['fields']['field_mh_unit_year']['element_label_type'] = 'strong';
$handler->display->display_options['fields']['field_mh_unit_year']['settings'] = array(
  'format_type' => 'short_date_only',
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
$handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_mh_unit_width] x [field_mh_unit_length]';
$handler->display->display_options['fields']['nothing']['element_type'] = 'span';
$handler->display->display_options['fields']['nothing']['element_label_type'] = 'strong';
/* Field: Content: VIN */
$handler->display->display_options['fields']['field_mh_unit_vin']['id'] = 'field_mh_unit_vin';
$handler->display->display_options['fields']['field_mh_unit_vin']['table'] = 'field_data_field_mh_unit_vin';
$handler->display->display_options['fields']['field_mh_unit_vin']['field'] = 'field_mh_unit_vin';
$handler->display->display_options['fields']['field_mh_unit_vin']['relationship'] = 'field_title_service_mh_unit_target_id';
$handler->display->display_options['fields']['field_mh_unit_vin']['element_type'] = 'span';
$handler->display->display_options['fields']['field_mh_unit_vin']['element_label_type'] = 'strong';
$handler->display->display_options['fields']['field_mh_unit_vin']['delta_offset'] = '0';
/* Field: Content: Make */
$handler->display->display_options['fields']['field_mh_unit_make']['id'] = 'field_mh_unit_make';
$handler->display->display_options['fields']['field_mh_unit_make']['table'] = 'field_data_field_mh_unit_make';
$handler->display->display_options['fields']['field_mh_unit_make']['field'] = 'field_mh_unit_make';
$handler->display->display_options['fields']['field_mh_unit_make']['relationship'] = 'field_title_service_mh_unit_target_id';
$handler->display->display_options['fields']['field_mh_unit_make']['element_type'] = 'span';
$handler->display->display_options['fields']['field_mh_unit_make']['element_label_type'] = 'strong';
/* Field: Content: Manufacturer */
$handler->display->display_options['fields']['field_mh_unit_manufact']['id'] = 'field_mh_unit_manufact';
$handler->display->display_options['fields']['field_mh_unit_manufact']['table'] = 'field_data_field_mh_unit_manufact';
$handler->display->display_options['fields']['field_mh_unit_manufact']['field'] = 'field_mh_unit_manufact';
$handler->display->display_options['fields']['field_mh_unit_manufact']['relationship'] = 'field_title_service_mh_unit_target_id';
$handler->display->display_options['fields']['field_mh_unit_manufact']['element_type'] = 'span';
$handler->display->display_options['fields']['field_mh_unit_manufact']['element_label_type'] = 'strong';
/* Field: Content: Parcel number */
$handler->display->display_options['fields']['field_mh_unit_parcel_num']['id'] = 'field_mh_unit_parcel_num';
$handler->display->display_options['fields']['field_mh_unit_parcel_num']['table'] = 'field_data_field_mh_unit_parcel_num';
$handler->display->display_options['fields']['field_mh_unit_parcel_num']['field'] = 'field_mh_unit_parcel_num';
$handler->display->display_options['fields']['field_mh_unit_parcel_num']['relationship'] = 'field_title_service_mh_unit_target_id';
$handler->display->display_options['fields']['field_mh_unit_parcel_num']['alter']['path'] = 'treasurer.maricopa.gov/parcels/default.asp?Parcel=[field_mh_unit_parcel_num-value]';
$handler->display->display_options['fields']['field_mh_unit_parcel_num']['alter']['external'] = TRUE;
$handler->display->display_options['fields']['field_mh_unit_parcel_num']['alter']['target'] = '_blank';
$handler->display->display_options['fields']['field_mh_unit_parcel_num']['element_type'] = 'span';
$handler->display->display_options['fields']['field_mh_unit_parcel_num']['element_label_type'] = 'strong';
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Content: Nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
  'title_service' => 'title_service',
);
$handler->display->display_options['allow']['use_pager'] = 0;
$handler->display->display_options['allow']['items_per_page'] = 0;
$handler->display->display_options['allow']['offset'] = 0;
$handler->display->display_options['allow']['link_to_view'] = 0;
$handler->display->display_options['allow']['more_link'] = 0;
$handler->display->display_options['allow']['path_override'] = 0;
$handler->display->display_options['allow']['title_override'] = 'title_override';
$handler->display->display_options['allow']['exposed_form'] = 0;
$handler->display->display_options['allow']['fields_override'] = 0;
$handler->display->display_options['argument_input'] = array(
  'nid' => array(
    'type' => 'context',
    'context' => 'entity:node.nid',
    'context_optional' => 0,
    'panel' => '0',
    'fixed' => '',
    'label' => 'Content: Nid',
  ),
);
