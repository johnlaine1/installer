<?php

$view = new view();
$view->name = 'plot_map_measurements';
$view->description = 'Plot map measurements of MHC lots';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Plot map measurements';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Plot map measurements';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['style_plugin'] = 'table';
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_mhc_lot_community_name_target_id']['id'] = 'field_mhc_lot_community_name_target_id';
$handler->display->display_options['relationships']['field_mhc_lot_community_name_target_id']['table'] = 'field_data_field_mhc_lot_community_name';
$handler->display->display_options['relationships']['field_mhc_lot_community_name_target_id']['field'] = 'field_mhc_lot_community_name_target_id';
$handler->display->display_options['relationships']['field_mhc_lot_community_name_target_id']['label'] = 'community';
/* Field: Content: Community name */
$handler->display->display_options['fields']['field_mhc_lot_community_name']['id'] = 'field_mhc_lot_community_name';
$handler->display->display_options['fields']['field_mhc_lot_community_name']['table'] = 'field_data_field_mhc_lot_community_name';
$handler->display->display_options['fields']['field_mhc_lot_community_name']['field'] = 'field_mhc_lot_community_name';
$handler->display->display_options['fields']['field_mhc_lot_community_name']['settings'] = array(
  'link' => 0,
);
/* Field: Content: Lot number */
$handler->display->display_options['fields']['field_mhc_lot_lot_num']['id'] = 'field_mhc_lot_lot_num';
$handler->display->display_options['fields']['field_mhc_lot_lot_num']['table'] = 'field_data_field_mhc_lot_lot_num';
$handler->display->display_options['fields']['field_mhc_lot_lot_num']['field'] = 'field_mhc_lot_lot_num';
$handler->display->display_options['fields']['field_mhc_lot_lot_num']['settings'] = array(
  'thousand_separator' => ' ',
  'prefix_suffix' => 1,
);
/* Field: Content: Plot map width */
$handler->display->display_options['fields']['field_mhc_lot_plot_width']['id'] = 'field_mhc_lot_plot_width';
$handler->display->display_options['fields']['field_mhc_lot_plot_width']['table'] = 'field_data_field_mhc_lot_plot_width';
$handler->display->display_options['fields']['field_mhc_lot_plot_width']['field'] = 'field_mhc_lot_plot_width';
$handler->display->display_options['fields']['field_mhc_lot_plot_width']['settings'] = array(
  'thousand_separator' => ' ',
  'decimal_separator' => '.',
  'scale' => '2',
  'prefix_suffix' => 1,
);
/* Field: Content: Plot map length */
$handler->display->display_options['fields']['field_mhc_lot_plot_length']['id'] = 'field_mhc_lot_plot_length';
$handler->display->display_options['fields']['field_mhc_lot_plot_length']['table'] = 'field_data_field_mhc_lot_plot_length';
$handler->display->display_options['fields']['field_mhc_lot_plot_length']['field'] = 'field_mhc_lot_plot_length';
$handler->display->display_options['fields']['field_mhc_lot_plot_length']['settings'] = array(
  'thousand_separator' => ' ',
  'decimal_separator' => '.',
  'scale' => '2',
  'prefix_suffix' => 1,
);
/* Sort criterion: Content: Lot number (field_mhc_lot_lot_num) */
$handler->display->display_options['sorts']['field_mhc_lot_lot_num_value']['id'] = 'field_mhc_lot_lot_num_value';
$handler->display->display_options['sorts']['field_mhc_lot_lot_num_value']['table'] = 'field_data_field_mhc_lot_lot_num';
$handler->display->display_options['sorts']['field_mhc_lot_lot_num_value']['field'] = 'field_mhc_lot_lot_num_value';
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
  'mhc_lot' => 'mhc_lot',
);
/* Filter criterion: Content: Community name (field_community_name) */
$handler->display->display_options['filters']['field_community_name_value']['id'] = 'field_community_name_value';
$handler->display->display_options['filters']['field_community_name_value']['table'] = 'field_data_field_community_name';
$handler->display->display_options['filters']['field_community_name_value']['field'] = 'field_community_name_value';
$handler->display->display_options['filters']['field_community_name_value']['relationship'] = 'field_mhc_lot_community_name_target_id';
$handler->display->display_options['filters']['field_community_name_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_community_name_value']['expose']['operator_id'] = 'field_community_name_value_op';
$handler->display->display_options['filters']['field_community_name_value']['expose']['label'] = 'Community name ';
$handler->display->display_options['filters']['field_community_name_value']['expose']['operator'] = 'field_community_name_value_op';
$handler->display->display_options['filters']['field_community_name_value']['expose']['identifier'] = 'field_community_name_value';
$handler->display->display_options['filters']['field_community_name_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  14 => 0,
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'plot-map-measurements';
