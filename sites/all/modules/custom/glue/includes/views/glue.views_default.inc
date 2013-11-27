<?php

function glue_views_default_views() {
  // Begin copy and paste of output from the Export tab of a view.
// START - VACANT_LOTS
$view = new view();
$view->name = 'vacant_lots';
$view->description = 'Lists of MHC lots';
$view->tag = 'lots';
$view->base_table = 'node';
$view->human_name = 'MHC lots';
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
$handler->display->display_options['style_options']['columns'] = array(
  'nid' => 'nid',
  'field_mhc_lot_lot_num' => 'field_mhc_lot_lot_num',
  'field_mhc_lot_pics' => 'field_mhc_lot_pics',
  'field_mhc_lot_plot_width' => 'field_mhc_lot_plot_width',
  'field_mhc_lot_plot_length' => 'field_mhc_lot_plot_length',
  'field_mhc_lot_build_width' => 'field_mhc_lot_build_width',
  'field_mhc_lot_build_length' => 'field_mhc_lot_build_length',
  'field_mhc_lot_width_3' => 'field_mhc_lot_width_3',
  'field_mhc_lot_gas' => 'field_mhc_lot_gas',
  'field_mhc_lot_config' => 'field_mhc_lot_config',
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
  'field_mhc_lot_lot_num' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_mhc_lot_pics' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_mhc_lot_plot_width' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_mhc_lot_plot_length' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_mhc_lot_build_width' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_mhc_lot_build_length' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_mhc_lot_width_3' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_mhc_lot_gas' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_mhc_lot_config' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
/* Header: Global: Text area */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['content'] = 'Use one or more of the following search criteria to narrow the search results.
You can also click on the column label to sort by that column.
If you would like to start over, click rest.';
$handler->display->display_options['header']['area']['format'] = 'filtered_html';
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['label'] = 'No matching lot';
$handler->display->display_options['empty']['area']['empty'] = TRUE;
$handler->display->display_options['empty']['area']['content'] = 'Sorry, there are no lots that match your search criteria.';
$handler->display->display_options['empty']['area']['format'] = 'filtered_html';
/* Field: Content: Community name */
$handler->display->display_options['fields']['field_mhc_lot_community_name']['id'] = 'field_mhc_lot_community_name';
$handler->display->display_options['fields']['field_mhc_lot_community_name']['table'] = 'field_data_field_mhc_lot_community_name';
$handler->display->display_options['fields']['field_mhc_lot_community_name']['field'] = 'field_mhc_lot_community_name';
$handler->display->display_options['fields']['field_mhc_lot_community_name']['label'] = '';
$handler->display->display_options['fields']['field_mhc_lot_community_name']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_mhc_lot_community_name']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_mhc_lot_community_name']['settings'] = array(
  'link' => 0,
);
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
/* Field: Content: Lot number */
$handler->display->display_options['fields']['field_mhc_lot_lot_num']['id'] = 'field_mhc_lot_lot_num';
$handler->display->display_options['fields']['field_mhc_lot_lot_num']['table'] = 'field_data_field_mhc_lot_lot_num';
$handler->display->display_options['fields']['field_mhc_lot_lot_num']['field'] = 'field_mhc_lot_lot_num';
$handler->display->display_options['fields']['field_mhc_lot_lot_num']['label'] = 'Lot';
$handler->display->display_options['fields']['field_mhc_lot_lot_num']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_mhc_lot_lot_num']['alter']['text'] = '[field_mhc_lot_community_name] [field_mhc_lot_lot_num]';
$handler->display->display_options['fields']['field_mhc_lot_lot_num']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['field_mhc_lot_lot_num']['alter']['path'] = 'node/[nid]';
$handler->display->display_options['fields']['field_mhc_lot_lot_num']['settings'] = array(
  'thousand_separator' => ' ',
  'prefix_suffix' => 1,
);
/* Field: Content: Pictures */
$handler->display->display_options['fields']['field_mhc_lot_pics']['id'] = 'field_mhc_lot_pics';
$handler->display->display_options['fields']['field_mhc_lot_pics']['table'] = 'field_data_field_mhc_lot_pics';
$handler->display->display_options['fields']['field_mhc_lot_pics']['field'] = 'field_mhc_lot_pics';
$handler->display->display_options['fields']['field_mhc_lot_pics']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_mhc_lot_pics']['type'] = 'colorbox';
$handler->display->display_options['fields']['field_mhc_lot_pics']['settings'] = array(
  'colorbox_node_style' => 'mini_thumbnail',
  'colorbox_image_style' => '',
  'colorbox_gallery' => 'post',
  'colorbox_gallery_custom' => '',
  'colorbox_caption' => 'auto',
  'colorbox_caption_custom' => '',
);
$handler->display->display_options['fields']['field_mhc_lot_pics']['delta_limit'] = '1';
$handler->display->display_options['fields']['field_mhc_lot_pics']['delta_offset'] = '1';
/* Field: Content: Plot map width */
$handler->display->display_options['fields']['field_mhc_lot_plot_width']['id'] = 'field_mhc_lot_plot_width';
$handler->display->display_options['fields']['field_mhc_lot_plot_width']['table'] = 'field_data_field_mhc_lot_plot_width';
$handler->display->display_options['fields']['field_mhc_lot_plot_width']['field'] = 'field_mhc_lot_plot_width';
$handler->display->display_options['fields']['field_mhc_lot_plot_width']['label'] = 'Map width';
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
$handler->display->display_options['fields']['field_mhc_lot_plot_length']['label'] = 'Map length';
$handler->display->display_options['fields']['field_mhc_lot_plot_length']['settings'] = array(
  'thousand_separator' => ' ',
  'decimal_separator' => '.',
  'scale' => '2',
  'prefix_suffix' => 1,
);
/* Field: Content: Buildable width restricted */
$handler->display->display_options['fields']['field_mhc_lot_build_width']['id'] = 'field_mhc_lot_build_width';
$handler->display->display_options['fields']['field_mhc_lot_build_width']['table'] = 'field_data_field_mhc_lot_build_width';
$handler->display->display_options['fields']['field_mhc_lot_build_width']['field'] = 'field_mhc_lot_build_width';
$handler->display->display_options['fields']['field_mhc_lot_build_width']['label'] = 'Buildable width';
$handler->display->display_options['fields']['field_mhc_lot_build_width']['settings'] = array(
  'thousand_separator' => ' ',
  'decimal_separator' => '.',
  'scale' => '2',
  'prefix_suffix' => 1,
);
/* Field: Content: Buildable length restricted */
$handler->display->display_options['fields']['field_mhc_lot_build_length']['id'] = 'field_mhc_lot_build_length';
$handler->display->display_options['fields']['field_mhc_lot_build_length']['table'] = 'field_data_field_mhc_lot_build_length';
$handler->display->display_options['fields']['field_mhc_lot_build_length']['field'] = 'field_mhc_lot_build_length';
$handler->display->display_options['fields']['field_mhc_lot_build_length']['label'] = 'Buildable length';
$handler->display->display_options['fields']['field_mhc_lot_build_length']['settings'] = array(
  'thousand_separator' => ' ',
  'decimal_separator' => '.',
  'scale' => '2',
  'prefix_suffix' => 1,
);
/* Field: Content: Width-3 */
$handler->display->display_options['fields']['field_mhc_lot_width_3']['id'] = 'field_mhc_lot_width_3';
$handler->display->display_options['fields']['field_mhc_lot_width_3']['table'] = 'field_data_field_mhc_lot_width_3';
$handler->display->display_options['fields']['field_mhc_lot_width_3']['field'] = 'field_mhc_lot_width_3';
$handler->display->display_options['fields']['field_mhc_lot_width_3']['label'] = 'Home set width';
$handler->display->display_options['fields']['field_mhc_lot_width_3']['settings'] = array(
  'thousand_separator' => ' ',
  'decimal_separator' => '.',
  'scale' => '2',
  'prefix_suffix' => 1,
);
/* Field: Content: Gas */
$handler->display->display_options['fields']['field_mhc_lot_gas']['id'] = 'field_mhc_lot_gas';
$handler->display->display_options['fields']['field_mhc_lot_gas']['table'] = 'field_data_field_mhc_lot_gas';
$handler->display->display_options['fields']['field_mhc_lot_gas']['field'] = 'field_mhc_lot_gas';
/* Field: Content: Configuration */
$handler->display->display_options['fields']['field_mhc_lot_config']['id'] = 'field_mhc_lot_config';
$handler->display->display_options['fields']['field_mhc_lot_config']['table'] = 'field_data_field_mhc_lot_config';
$handler->display->display_options['fields']['field_mhc_lot_config']['field'] = 'field_mhc_lot_config';
$handler->display->display_options['fields']['field_mhc_lot_config']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_mhc_lot_config']['delta_offset'] = '0';
/* Sort criterion: Content: Lot number (field_mhc_lot_lot_num) */
$handler->display->display_options['sorts']['field_mhc_lot_lot_num_value']['id'] = 'field_mhc_lot_lot_num_value';
$handler->display->display_options['sorts']['field_mhc_lot_lot_num_value']['table'] = 'field_data_field_mhc_lot_lot_num';
$handler->display->display_options['sorts']['field_mhc_lot_lot_num_value']['field'] = 'field_mhc_lot_lot_num_value';
/* Contextual filter: Content: Nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
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
/* Filter criterion: Content: Status (field_mhc_lot_status) */
$handler->display->display_options['filters']['field_mhc_lot_status_tid']['id'] = 'field_mhc_lot_status_tid';
$handler->display->display_options['filters']['field_mhc_lot_status_tid']['table'] = 'field_data_field_mhc_lot_status';
$handler->display->display_options['filters']['field_mhc_lot_status_tid']['field'] = 'field_mhc_lot_status_tid';
$handler->display->display_options['filters']['field_mhc_lot_status_tid']['value'] = array(
  49 => '49',
);
$handler->display->display_options['filters']['field_mhc_lot_status_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_mhc_lot_status_tid']['vocabulary'] = 'mhc_lot_status';
/* Filter criterion: Content: Gas (field_mhc_lot_gas) */
$handler->display->display_options['filters']['field_mhc_lot_gas_value']['id'] = 'field_mhc_lot_gas_value';
$handler->display->display_options['filters']['field_mhc_lot_gas_value']['table'] = 'field_data_field_mhc_lot_gas';
$handler->display->display_options['filters']['field_mhc_lot_gas_value']['field'] = 'field_mhc_lot_gas_value';
$handler->display->display_options['filters']['field_mhc_lot_gas_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_mhc_lot_gas_value']['expose']['operator_id'] = 'field_mhc_lot_gas_value_op';
$handler->display->display_options['filters']['field_mhc_lot_gas_value']['expose']['label'] = 'Gas (field_mhc_lot_gas)';
$handler->display->display_options['filters']['field_mhc_lot_gas_value']['expose']['operator'] = 'field_mhc_lot_gas_value_op';
$handler->display->display_options['filters']['field_mhc_lot_gas_value']['expose']['identifier'] = 'field_mhc_lot_gas_value';

/* Display: Table list */
$handler = $view->new_display('panel_pane', 'Table list', 'panel_pane_table_list');
$handler->display->display_options['display_description'] = 'Content pane, table format';
$handler->display->display_options['defaults']['use_ajax'] = FALSE;
$handler->display->display_options['defaults']['exposed_form'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'field_mhc_lot_community_name' => 'field_mhc_lot_community_name',
  'nid' => 'nid',
  'field_mhc_lot_lot_num' => 'field_mhc_lot_lot_num',
  'field_mhc_lot_pics' => 'field_mhc_lot_pics',
  'field_mhc_lot_build_length_2' => 'field_mhc_lot_build_length_2',
  'field_mhc_lot_build_length' => 'field_mhc_lot_build_length',
  'field_mhc_lot_build_width_2' => 'field_mhc_lot_build_width_2',
  'field_mhc_lot_width_3' => 'field_mhc_lot_width_3',
  'field_mhc_lot_gas' => 'field_mhc_lot_gas',
  'field_mhc_lot_config' => 'field_mhc_lot_config',
  'edit_node' => 'edit_node',
  'nothing' => 'edit_node',
);
$handler->display->display_options['style_options']['default'] = 'field_mhc_lot_lot_num';
$handler->display->display_options['style_options']['info'] = array(
  'field_mhc_lot_community_name' => array(
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
  'field_mhc_lot_lot_num' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => 'views-align-center',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_mhc_lot_pics' => array(
    'align' => 'views-align-center',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_mhc_lot_build_length_2' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => 'views-align-center',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_mhc_lot_build_length' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => 'views-align-center',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_mhc_lot_build_width_2' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => 'views-align-center',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_mhc_lot_width_3' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => 'views-align-center',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_mhc_lot_gas' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => 'views-align-center',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_mhc_lot_config' => array(
    'align' => 'views-align-center',
    'separator' => '',
    'empty_column' => 0,
  ),
  'edit_node' => array(
    'align' => 'views-align-center',
    'separator' => '     ',
    'empty_column' => 0,
  ),
  'nothing' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
$handler->display->display_options['style_options']['sticky'] = TRUE;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Global: Text area */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['content'] = '<ul>
<li>Narrow down the search results by selecting one or more choices below and clicking apply.</li>
<li>Click on a column label to sort by that column.</li>
<li>Click on a picture to enlarge it.</li>
<li>Click on the lot number to view more information about that lot.</li>
</ul>';
$handler->display->display_options['header']['area']['format'] = 'filtered_html';
/* Header: Global: Result summary */
$handler->display->display_options['header']['result']['id'] = 'result';
$handler->display->display_options['header']['result']['table'] = 'views';
$handler->display->display_options['header']['result']['field'] = 'result';
$handler->display->display_options['header']['result']['content'] = '<strong>Total matching lots: </strong>@total';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Lot needs grading */
$handler->display->display_options['fields']['field_mhc_lot_need_grading']['id'] = 'field_mhc_lot_need_grading';
$handler->display->display_options['fields']['field_mhc_lot_need_grading']['table'] = 'field_data_field_mhc_lot_need_grading';
$handler->display->display_options['fields']['field_mhc_lot_need_grading']['field'] = 'field_mhc_lot_need_grading';
$handler->display->display_options['fields']['field_mhc_lot_need_grading']['exclude'] = TRUE;
/* Field: Content: Has length of lot been shortened? */
$handler->display->display_options['fields']['field_mhc_lot_length_flag']['id'] = 'field_mhc_lot_length_flag';
$handler->display->display_options['fields']['field_mhc_lot_length_flag']['table'] = 'field_data_field_mhc_lot_length_flag';
$handler->display->display_options['fields']['field_mhc_lot_length_flag']['field'] = 'field_mhc_lot_length_flag';
$handler->display->display_options['fields']['field_mhc_lot_length_flag']['exclude'] = TRUE;
/* Field: Content: Community name */
$handler->display->display_options['fields']['field_mhc_lot_community_name']['id'] = 'field_mhc_lot_community_name';
$handler->display->display_options['fields']['field_mhc_lot_community_name']['table'] = 'field_data_field_mhc_lot_community_name';
$handler->display->display_options['fields']['field_mhc_lot_community_name']['field'] = 'field_mhc_lot_community_name';
$handler->display->display_options['fields']['field_mhc_lot_community_name']['label'] = '';
$handler->display->display_options['fields']['field_mhc_lot_community_name']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_mhc_lot_community_name']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_mhc_lot_community_name']['settings'] = array(
  'link' => 0,
);
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['label'] = 'nid-Hidden';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
/* Field: Content: Lot number */
$handler->display->display_options['fields']['field_mhc_lot_lot_num']['id'] = 'field_mhc_lot_lot_num';
$handler->display->display_options['fields']['field_mhc_lot_lot_num']['table'] = 'field_data_field_mhc_lot_lot_num';
$handler->display->display_options['fields']['field_mhc_lot_lot_num']['field'] = 'field_mhc_lot_lot_num';
$handler->display->display_options['fields']['field_mhc_lot_lot_num']['label'] = 'Lot ';
$handler->display->display_options['fields']['field_mhc_lot_lot_num']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_mhc_lot_lot_num']['alter']['text'] = '[field_mhc_lot_community_name] [field_mhc_lot_lot_num]';
$handler->display->display_options['fields']['field_mhc_lot_lot_num']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['field_mhc_lot_lot_num']['alter']['path'] = 'node/[nid]';
$handler->display->display_options['fields']['field_mhc_lot_lot_num']['settings'] = array(
  'thousand_separator' => ' ',
  'prefix_suffix' => 1,
);
/* Field: Content: Pictures */
$handler->display->display_options['fields']['field_mhc_lot_pics']['id'] = 'field_mhc_lot_pics';
$handler->display->display_options['fields']['field_mhc_lot_pics']['table'] = 'field_data_field_mhc_lot_pics';
$handler->display->display_options['fields']['field_mhc_lot_pics']['field'] = 'field_mhc_lot_pics';
$handler->display->display_options['fields']['field_mhc_lot_pics']['label'] = 'Picture';
$handler->display->display_options['fields']['field_mhc_lot_pics']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_mhc_lot_pics']['type'] = 'colorbox';
$handler->display->display_options['fields']['field_mhc_lot_pics']['settings'] = array(
  'colorbox_node_style' => 'mini_thumbnail',
  'colorbox_image_style' => '',
  'colorbox_gallery' => 'post',
  'colorbox_gallery_custom' => '',
  'colorbox_caption' => 'auto',
  'colorbox_caption_custom' => '',
);
$handler->display->display_options['fields']['field_mhc_lot_pics']['delta_limit'] = '1';
$handler->display->display_options['fields']['field_mhc_lot_pics']['delta_offset'] = '0';
$handler->display->display_options['fields']['field_mhc_lot_pics']['separator'] = '';
/* Field: Content: Buildable length */
$handler->display->display_options['fields']['field_mhc_lot_build_length_2']['id'] = 'field_mhc_lot_build_length_2';
$handler->display->display_options['fields']['field_mhc_lot_build_length_2']['table'] = 'field_data_field_mhc_lot_build_length_2';
$handler->display->display_options['fields']['field_mhc_lot_build_length_2']['field'] = 'field_mhc_lot_build_length_2';
$handler->display->display_options['fields']['field_mhc_lot_build_length_2']['settings'] = array(
  'thousand_separator' => ' ',
  'decimal_separator' => '.',
  'scale' => '2',
  'prefix_suffix' => 1,
);
/* Field: Content: Buildable length restricted */
$handler->display->display_options['fields']['field_mhc_lot_build_length']['id'] = 'field_mhc_lot_build_length';
$handler->display->display_options['fields']['field_mhc_lot_build_length']['table'] = 'field_data_field_mhc_lot_build_length';
$handler->display->display_options['fields']['field_mhc_lot_build_length']['field'] = 'field_mhc_lot_build_length';
$handler->display->display_options['fields']['field_mhc_lot_build_length']['settings'] = array(
  'thousand_separator' => ' ',
  'decimal_separator' => '.',
  'scale' => '2',
  'prefix_suffix' => 1,
);
/* Field: Content: Buildable width fixed */
$handler->display->display_options['fields']['field_mhc_lot_build_width_2']['id'] = 'field_mhc_lot_build_width_2';
$handler->display->display_options['fields']['field_mhc_lot_build_width_2']['table'] = 'field_data_field_mhc_lot_build_width_2';
$handler->display->display_options['fields']['field_mhc_lot_build_width_2']['field'] = 'field_mhc_lot_build_width_2';
$handler->display->display_options['fields']['field_mhc_lot_build_width_2']['label'] = 'Buildable width';
$handler->display->display_options['fields']['field_mhc_lot_build_width_2']['settings'] = array(
  'thousand_separator' => ' ',
  'decimal_separator' => '.',
  'scale' => '2',
  'prefix_suffix' => 1,
);
/* Field: Content: Width-3 */
$handler->display->display_options['fields']['field_mhc_lot_width_3']['id'] = 'field_mhc_lot_width_3';
$handler->display->display_options['fields']['field_mhc_lot_width_3']['table'] = 'field_data_field_mhc_lot_width_3';
$handler->display->display_options['fields']['field_mhc_lot_width_3']['field'] = 'field_mhc_lot_width_3';
$handler->display->display_options['fields']['field_mhc_lot_width_3']['label'] = 'Home set width';
$handler->display->display_options['fields']['field_mhc_lot_width_3']['settings'] = array(
  'thousand_separator' => ' ',
  'decimal_separator' => '.',
  'scale' => '2',
  'prefix_suffix' => 1,
);
/* Field: Content: Gas */
$handler->display->display_options['fields']['field_mhc_lot_gas']['id'] = 'field_mhc_lot_gas';
$handler->display->display_options['fields']['field_mhc_lot_gas']['table'] = 'field_data_field_mhc_lot_gas';
$handler->display->display_options['fields']['field_mhc_lot_gas']['field'] = 'field_mhc_lot_gas';
/* Field: Content: Configuration */
$handler->display->display_options['fields']['field_mhc_lot_config']['id'] = 'field_mhc_lot_config';
$handler->display->display_options['fields']['field_mhc_lot_config']['table'] = 'field_data_field_mhc_lot_config';
$handler->display->display_options['fields']['field_mhc_lot_config']['field'] = 'field_mhc_lot_config';
$handler->display->display_options['fields']['field_mhc_lot_config']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_mhc_lot_config']['delta_offset'] = '0';
/* Field: Content: Edit link */
$handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['label'] = 'Operations';
$handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['alter']['text'] = 'View';
$handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['nothing']['alter']['path'] = 'node/[nid]';
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Content: Lot number (field_mhc_lot_lot_num) */
$handler->display->display_options['sorts']['field_mhc_lot_lot_num_value']['id'] = 'field_mhc_lot_lot_num_value';
$handler->display->display_options['sorts']['field_mhc_lot_lot_num_value']['table'] = 'field_data_field_mhc_lot_lot_num';
$handler->display->display_options['sorts']['field_mhc_lot_lot_num_value']['field'] = 'field_mhc_lot_lot_num_value';
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
  'mhc_lot' => 'mhc_lot',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Status (field_mhc_lot_status) */
$handler->display->display_options['filters']['field_mhc_lot_status_tid']['id'] = 'field_mhc_lot_status_tid';
$handler->display->display_options['filters']['field_mhc_lot_status_tid']['table'] = 'field_data_field_mhc_lot_status';
$handler->display->display_options['filters']['field_mhc_lot_status_tid']['field'] = 'field_mhc_lot_status_tid';
$handler->display->display_options['filters']['field_mhc_lot_status_tid']['value'] = array(
  49 => '49',
);
$handler->display->display_options['filters']['field_mhc_lot_status_tid']['group'] = 1;
$handler->display->display_options['filters']['field_mhc_lot_status_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_mhc_lot_status_tid']['vocabulary'] = 'mhc_lot_status';
/* Filter criterion: Content: Gas (field_mhc_lot_gas) */
$handler->display->display_options['filters']['field_mhc_lot_gas_value']['id'] = 'field_mhc_lot_gas_value';
$handler->display->display_options['filters']['field_mhc_lot_gas_value']['table'] = 'field_data_field_mhc_lot_gas';
$handler->display->display_options['filters']['field_mhc_lot_gas_value']['field'] = 'field_mhc_lot_gas_value';
$handler->display->display_options['filters']['field_mhc_lot_gas_value']['group'] = 1;
$handler->display->display_options['filters']['field_mhc_lot_gas_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_mhc_lot_gas_value']['expose']['operator_id'] = 'field_mhc_lot_gas_value_op';
$handler->display->display_options['filters']['field_mhc_lot_gas_value']['expose']['label'] = 'Gas';
$handler->display->display_options['filters']['field_mhc_lot_gas_value']['expose']['operator'] = 'field_mhc_lot_gas_value_op';
$handler->display->display_options['filters']['field_mhc_lot_gas_value']['expose']['identifier'] = 'field_mhc_lot_gas_value';
$handler->display->display_options['filters']['field_mhc_lot_gas_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  14 => 0,
);
/* Filter criterion: Content: Width-3 (field_mhc_lot_width_3) */
$handler->display->display_options['filters']['field_mhc_lot_width_3_value']['id'] = 'field_mhc_lot_width_3_value';
$handler->display->display_options['filters']['field_mhc_lot_width_3_value']['table'] = 'field_data_field_mhc_lot_width_3';
$handler->display->display_options['filters']['field_mhc_lot_width_3_value']['field'] = 'field_mhc_lot_width_3_value';
$handler->display->display_options['filters']['field_mhc_lot_width_3_value']['operator'] = '>=';
$handler->display->display_options['filters']['field_mhc_lot_width_3_value']['group'] = 1;
$handler->display->display_options['filters']['field_mhc_lot_width_3_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_mhc_lot_width_3_value']['expose']['operator_id'] = 'field_mhc_lot_width_3_value_op';
$handler->display->display_options['filters']['field_mhc_lot_width_3_value']['expose']['label'] = 'Home width';
$handler->display->display_options['filters']['field_mhc_lot_width_3_value']['expose']['description'] = 'The width of the home to install.';
$handler->display->display_options['filters']['field_mhc_lot_width_3_value']['expose']['operator'] = 'field_mhc_lot_width_3_value_op';
$handler->display->display_options['filters']['field_mhc_lot_width_3_value']['expose']['identifier'] = 'field_mhc_lot_width_3_value';
$handler->display->display_options['filters']['field_mhc_lot_width_3_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  14 => 0,
);
$handler->display->display_options['filters']['field_mhc_lot_width_3_value']['group_info']['label'] = 'Width-3 (field_mhc_lot_width_3)';
$handler->display->display_options['filters']['field_mhc_lot_width_3_value']['group_info']['identifier'] = 'field_mhc_lot_width_3_value';
$handler->display->display_options['filters']['field_mhc_lot_width_3_value']['group_info']['remember'] = FALSE;
$handler->display->display_options['filters']['field_mhc_lot_width_3_value']['group_info']['group_items'] = array(
  1 => array(),
  2 => array(),
  3 => array(),
);
/* Filter criterion: Content: Buildable length (field_mhc_lot_build_length_2) */
$handler->display->display_options['filters']['field_mhc_lot_build_length_2_value']['id'] = 'field_mhc_lot_build_length_2_value';
$handler->display->display_options['filters']['field_mhc_lot_build_length_2_value']['table'] = 'field_data_field_mhc_lot_build_length_2';
$handler->display->display_options['filters']['field_mhc_lot_build_length_2_value']['field'] = 'field_mhc_lot_build_length_2_value';
$handler->display->display_options['filters']['field_mhc_lot_build_length_2_value']['operator'] = '>=';
$handler->display->display_options['filters']['field_mhc_lot_build_length_2_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_mhc_lot_build_length_2_value']['expose']['operator_id'] = 'field_mhc_lot_build_length_2_value_op';
$handler->display->display_options['filters']['field_mhc_lot_build_length_2_value']['expose']['label'] = 'Home length';
$handler->display->display_options['filters']['field_mhc_lot_build_length_2_value']['expose']['description'] = 'The length of the home to install.';
$handler->display->display_options['filters']['field_mhc_lot_build_length_2_value']['expose']['operator'] = 'field_mhc_lot_build_length_2_value_op';
$handler->display->display_options['filters']['field_mhc_lot_build_length_2_value']['expose']['identifier'] = 'field_mhc_lot_build_length_2_value';
$handler->display->display_options['filters']['field_mhc_lot_build_length_2_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  14 => 0,
);
/* Filter criterion: Content: Lot needs grading (field_mhc_lot_need_grading) */
$handler->display->display_options['filters']['field_mhc_lot_need_grading_value']['id'] = 'field_mhc_lot_need_grading_value';
$handler->display->display_options['filters']['field_mhc_lot_need_grading_value']['table'] = 'field_data_field_mhc_lot_need_grading';
$handler->display->display_options['filters']['field_mhc_lot_need_grading_value']['field'] = 'field_mhc_lot_need_grading_value';
$handler->display->display_options['filters']['field_mhc_lot_need_grading_value']['value'] = array(
  0 => '0',
);
$handler->display->display_options['filters']['field_mhc_lot_need_grading_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_mhc_lot_need_grading_value']['expose']['operator_id'] = 'field_mhc_lot_need_grading_value_op';
$handler->display->display_options['filters']['field_mhc_lot_need_grading_value']['expose']['label'] = 'Lot needs grading?';
$handler->display->display_options['filters']['field_mhc_lot_need_grading_value']['expose']['operator'] = 'field_mhc_lot_need_grading_value_op';
$handler->display->display_options['filters']['field_mhc_lot_need_grading_value']['expose']['identifier'] = 'field_mhc_lot_need_grading_value';
$handler->display->display_options['filters']['field_mhc_lot_need_grading_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  14 => 0,
);
$handler->display->display_options['inherit_panels_path'] = '1';

/* Display: Table list (edit) */
$handler = $view->new_display('panel_pane', 'Table list (edit)', 'panel_pane_1');
$handler->display->display_options['display_description'] = 'Editable table format';
$handler->display->display_options['defaults']['exposed_form'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'editableviews_table';
$handler->display->display_options['style_options']['columns'] = array(
  'nid' => 'nid',
  'field_mhc_lot_lot_num' => 'field_mhc_lot_lot_num',
  'field_mhc_lot_plot_width_editable' => 'field_mhc_lot_plot_width_editable',
  'field_mhc_lot_plot_length_editable' => 'field_mhc_lot_plot_length_editable',
  'field_mhc_lot_width_1_editable' => 'field_mhc_lot_width_1_editable',
  'field_mhc_lot_width_2_editable' => 'field_mhc_lot_width_2_editable',
  'field_mhc_lot_width_3_editable' => 'field_mhc_lot_width_3_editable',
  'field_mhc_lot_width_4_editable' => 'field_mhc_lot_width_4_editable',
  'field_mhc_lot_width_5_editable' => 'field_mhc_lot_width_5_editable',
  'field_mhc_lot_width_tot_1_editable' => 'field_mhc_lot_width_tot_1_editable',
  'field_mhc_lot_width_tot_2_editable' => 'field_mhc_lot_width_tot_2_editable',
  'field_mhc_lot_length_1_editable' => 'field_mhc_lot_length_1_editable',
  'field_mhc_lot_length_2_editable' => 'field_mhc_lot_length_2_editable',
  'field_mhc_lot_gas_distance_editable' => 'field_mhc_lot_gas_distance_editable',
  'field_mhc_lot_gas_editable' => 'field_mhc_lot_gas_editable',
  'field_mhc_lot_elec_distance_editable' => 'field_mhc_lot_elec_distance_editable',
  'field_mhc_lot_config_editable' => 'field_mhc_lot_config_editable',
);
$handler->display->display_options['style_options']['default'] = 'field_mhc_lot_lot_num';
$handler->display->display_options['style_options']['info'] = array(
  'nid' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_mhc_lot_lot_num' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_mhc_lot_plot_width_editable' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_mhc_lot_plot_length_editable' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_mhc_lot_width_1_editable' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_mhc_lot_width_2_editable' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_mhc_lot_width_3_editable' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_mhc_lot_width_4_editable' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_mhc_lot_width_5_editable' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_mhc_lot_width_tot_1_editable' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_mhc_lot_width_tot_2_editable' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_mhc_lot_length_1_editable' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_mhc_lot_length_2_editable' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_mhc_lot_gas_distance_editable' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_mhc_lot_gas_editable' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_mhc_lot_elec_distance_editable' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_mhc_lot_config_editable' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
$handler->display->display_options['style_options']['sticky'] = TRUE;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['header'] = FALSE;
$handler->display->display_options['defaults']['empty'] = FALSE;
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['label'] = 'No matching lot';
$handler->display->display_options['empty']['area']['empty'] = TRUE;
$handler->display->display_options['empty']['area']['content'] = 'Sorry, there are no lots that match your search criteria.';
$handler->display->display_options['empty']['area']['format'] = 'filtered_html';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['label'] = 'nid-Hidden';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
/* Field: Content: Lot number */
$handler->display->display_options['fields']['field_mhc_lot_lot_num']['id'] = 'field_mhc_lot_lot_num';
$handler->display->display_options['fields']['field_mhc_lot_lot_num']['table'] = 'field_data_field_mhc_lot_lot_num';
$handler->display->display_options['fields']['field_mhc_lot_lot_num']['field'] = 'field_mhc_lot_lot_num';
$handler->display->display_options['fields']['field_mhc_lot_lot_num']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['field_mhc_lot_lot_num']['alter']['path'] = 'node/[nid]';
$handler->display->display_options['fields']['field_mhc_lot_lot_num']['settings'] = array(
  'thousand_separator' => ' ',
  'prefix_suffix' => 1,
);
/* Field: Content: Plot map width (editable) */
$handler->display->display_options['fields']['field_mhc_lot_plot_width_editable']['id'] = 'field_mhc_lot_plot_width_editable';
$handler->display->display_options['fields']['field_mhc_lot_plot_width_editable']['table'] = 'field_data_field_mhc_lot_plot_width';
$handler->display->display_options['fields']['field_mhc_lot_plot_width_editable']['field'] = 'field_mhc_lot_plot_width_editable';
$handler->display->display_options['fields']['field_mhc_lot_plot_width_editable']['label'] = 'Plot map width';
$handler->display->display_options['fields']['field_mhc_lot_plot_width_editable']['settings'] = array(
  'thousand_separator' => ' ',
  'decimal_separator' => '.',
  'scale' => '0',
  'prefix_suffix' => 1,
);
$handler->display->display_options['fields']['field_mhc_lot_plot_width_editable']['widget_type'] = '0';
$handler->display->display_options['fields']['field_mhc_lot_plot_width_editable']['suppress_label'] = 1;
$handler->display->display_options['fields']['field_mhc_lot_plot_width_editable']['suppress_description'] = 1;
/* Field: Content: Plot map length (editable) */
$handler->display->display_options['fields']['field_mhc_lot_plot_length_editable']['id'] = 'field_mhc_lot_plot_length_editable';
$handler->display->display_options['fields']['field_mhc_lot_plot_length_editable']['table'] = 'field_data_field_mhc_lot_plot_length';
$handler->display->display_options['fields']['field_mhc_lot_plot_length_editable']['field'] = 'field_mhc_lot_plot_length_editable';
$handler->display->display_options['fields']['field_mhc_lot_plot_length_editable']['label'] = 'Plot map length ';
$handler->display->display_options['fields']['field_mhc_lot_plot_length_editable']['settings'] = array(
  'thousand_separator' => ' ',
  'decimal_separator' => '.',
  'scale' => '0',
  'prefix_suffix' => 1,
);
$handler->display->display_options['fields']['field_mhc_lot_plot_length_editable']['widget_type'] = '0';
$handler->display->display_options['fields']['field_mhc_lot_plot_length_editable']['suppress_label'] = 1;
$handler->display->display_options['fields']['field_mhc_lot_plot_length_editable']['suppress_description'] = 1;
/* Field: Content: Width-1 (editable) */
$handler->display->display_options['fields']['field_mhc_lot_width_1_editable']['id'] = 'field_mhc_lot_width_1_editable';
$handler->display->display_options['fields']['field_mhc_lot_width_1_editable']['table'] = 'field_data_field_mhc_lot_width_1';
$handler->display->display_options['fields']['field_mhc_lot_width_1_editable']['field'] = 'field_mhc_lot_width_1_editable';
$handler->display->display_options['fields']['field_mhc_lot_width_1_editable']['label'] = 'Lot width-1';
$handler->display->display_options['fields']['field_mhc_lot_width_1_editable']['settings'] = array(
  'thousand_separator' => ' ',
  'decimal_separator' => '.',
  'scale' => '0',
  'prefix_suffix' => 1,
);
$handler->display->display_options['fields']['field_mhc_lot_width_1_editable']['widget_type'] = '0';
$handler->display->display_options['fields']['field_mhc_lot_width_1_editable']['suppress_label'] = 1;
$handler->display->display_options['fields']['field_mhc_lot_width_1_editable']['suppress_description'] = 1;
/* Field: Content: Width-2 (editable) */
$handler->display->display_options['fields']['field_mhc_lot_width_2_editable']['id'] = 'field_mhc_lot_width_2_editable';
$handler->display->display_options['fields']['field_mhc_lot_width_2_editable']['table'] = 'field_data_field_mhc_lot_width_2';
$handler->display->display_options['fields']['field_mhc_lot_width_2_editable']['field'] = 'field_mhc_lot_width_2_editable';
$handler->display->display_options['fields']['field_mhc_lot_width_2_editable']['label'] = 'Lot width-2';
$handler->display->display_options['fields']['field_mhc_lot_width_2_editable']['settings'] = array(
  'thousand_separator' => ' ',
  'decimal_separator' => '.',
  'scale' => '0',
  'prefix_suffix' => 1,
);
$handler->display->display_options['fields']['field_mhc_lot_width_2_editable']['widget_type'] = '0';
$handler->display->display_options['fields']['field_mhc_lot_width_2_editable']['suppress_label'] = 1;
$handler->display->display_options['fields']['field_mhc_lot_width_2_editable']['suppress_description'] = 1;
/* Field: Content: Width-3 (editable) */
$handler->display->display_options['fields']['field_mhc_lot_width_3_editable']['id'] = 'field_mhc_lot_width_3_editable';
$handler->display->display_options['fields']['field_mhc_lot_width_3_editable']['table'] = 'field_data_field_mhc_lot_width_3';
$handler->display->display_options['fields']['field_mhc_lot_width_3_editable']['field'] = 'field_mhc_lot_width_3_editable';
$handler->display->display_options['fields']['field_mhc_lot_width_3_editable']['label'] = 'Lot width-3';
$handler->display->display_options['fields']['field_mhc_lot_width_3_editable']['settings'] = array(
  'thousand_separator' => ' ',
  'decimal_separator' => '.',
  'scale' => '0',
  'prefix_suffix' => 1,
);
$handler->display->display_options['fields']['field_mhc_lot_width_3_editable']['widget_type'] = '0';
$handler->display->display_options['fields']['field_mhc_lot_width_3_editable']['suppress_label'] = 1;
$handler->display->display_options['fields']['field_mhc_lot_width_3_editable']['suppress_description'] = 1;
/* Field: Content: Width-4 (editable) */
$handler->display->display_options['fields']['field_mhc_lot_width_4_editable']['id'] = 'field_mhc_lot_width_4_editable';
$handler->display->display_options['fields']['field_mhc_lot_width_4_editable']['table'] = 'field_data_field_mhc_lot_width_4';
$handler->display->display_options['fields']['field_mhc_lot_width_4_editable']['field'] = 'field_mhc_lot_width_4_editable';
$handler->display->display_options['fields']['field_mhc_lot_width_4_editable']['label'] = 'Lot width-4';
$handler->display->display_options['fields']['field_mhc_lot_width_4_editable']['settings'] = array(
  'thousand_separator' => ' ',
  'decimal_separator' => '.',
  'scale' => '0',
  'prefix_suffix' => 1,
);
$handler->display->display_options['fields']['field_mhc_lot_width_4_editable']['widget_type'] = '0';
$handler->display->display_options['fields']['field_mhc_lot_width_4_editable']['suppress_label'] = 1;
$handler->display->display_options['fields']['field_mhc_lot_width_4_editable']['suppress_description'] = 1;
/* Field: Content: Width-5 (editable) */
$handler->display->display_options['fields']['field_mhc_lot_width_5_editable']['id'] = 'field_mhc_lot_width_5_editable';
$handler->display->display_options['fields']['field_mhc_lot_width_5_editable']['table'] = 'field_data_field_mhc_lot_width_5';
$handler->display->display_options['fields']['field_mhc_lot_width_5_editable']['field'] = 'field_mhc_lot_width_5_editable';
$handler->display->display_options['fields']['field_mhc_lot_width_5_editable']['label'] = 'Lot width-5 ';
$handler->display->display_options['fields']['field_mhc_lot_width_5_editable']['settings'] = array(
  'thousand_separator' => ' ',
  'decimal_separator' => '.',
  'scale' => '0',
  'prefix_suffix' => 1,
);
$handler->display->display_options['fields']['field_mhc_lot_width_5_editable']['widget_type'] = '0';
$handler->display->display_options['fields']['field_mhc_lot_width_5_editable']['suppress_label'] = 1;
$handler->display->display_options['fields']['field_mhc_lot_width_5_editable']['suppress_description'] = 1;
/* Field: Content: Actual width unfixed (editable) */
$handler->display->display_options['fields']['field_mhc_lot_width_tot_1_editable']['id'] = 'field_mhc_lot_width_tot_1_editable';
$handler->display->display_options['fields']['field_mhc_lot_width_tot_1_editable']['table'] = 'field_data_field_mhc_lot_width_tot_1';
$handler->display->display_options['fields']['field_mhc_lot_width_tot_1_editable']['field'] = 'field_mhc_lot_width_tot_1_editable';
$handler->display->display_options['fields']['field_mhc_lot_width_tot_1_editable']['label'] = 'Total width unfixed';
$handler->display->display_options['fields']['field_mhc_lot_width_tot_1_editable']['settings'] = array(
  'thousand_separator' => ' ',
  'decimal_separator' => '.',
  'scale' => '2',
  'prefix_suffix' => 1,
);
$handler->display->display_options['fields']['field_mhc_lot_width_tot_1_editable']['widget_type'] = '0';
$handler->display->display_options['fields']['field_mhc_lot_width_tot_1_editable']['suppress_label'] = 1;
$handler->display->display_options['fields']['field_mhc_lot_width_tot_1_editable']['suppress_description'] = 1;
/* Field: Content: Actual width fixed (editable) */
$handler->display->display_options['fields']['field_mhc_lot_width_tot_2_editable']['id'] = 'field_mhc_lot_width_tot_2_editable';
$handler->display->display_options['fields']['field_mhc_lot_width_tot_2_editable']['table'] = 'field_data_field_mhc_lot_width_tot_2';
$handler->display->display_options['fields']['field_mhc_lot_width_tot_2_editable']['field'] = 'field_mhc_lot_width_tot_2_editable';
$handler->display->display_options['fields']['field_mhc_lot_width_tot_2_editable']['label'] = 'Total width fixed';
$handler->display->display_options['fields']['field_mhc_lot_width_tot_2_editable']['settings'] = array(
  'thousand_separator' => ' ',
  'decimal_separator' => '.',
  'scale' => '2',
  'prefix_suffix' => 1,
);
$handler->display->display_options['fields']['field_mhc_lot_width_tot_2_editable']['widget_type'] = '0';
$handler->display->display_options['fields']['field_mhc_lot_width_tot_2_editable']['suppress_label'] = 1;
$handler->display->display_options['fields']['field_mhc_lot_width_tot_2_editable']['suppress_description'] = 1;
/* Field: Content: Actual length unfixed (editable) */
$handler->display->display_options['fields']['field_mhc_lot_length_1_editable']['id'] = 'field_mhc_lot_length_1_editable';
$handler->display->display_options['fields']['field_mhc_lot_length_1_editable']['table'] = 'field_data_field_mhc_lot_length_1';
$handler->display->display_options['fields']['field_mhc_lot_length_1_editable']['field'] = 'field_mhc_lot_length_1_editable';
$handler->display->display_options['fields']['field_mhc_lot_length_1_editable']['label'] = 'Total length unfixed ';
$handler->display->display_options['fields']['field_mhc_lot_length_1_editable']['settings'] = array(
  'thousand_separator' => ' ',
  'decimal_separator' => '.',
  'scale' => '2',
  'prefix_suffix' => 1,
);
$handler->display->display_options['fields']['field_mhc_lot_length_1_editable']['widget_type'] = '0';
$handler->display->display_options['fields']['field_mhc_lot_length_1_editable']['suppress_label'] = 1;
$handler->display->display_options['fields']['field_mhc_lot_length_1_editable']['suppress_description'] = 1;
/* Field: Content: Actual length fixed (editable) */
$handler->display->display_options['fields']['field_mhc_lot_length_2_editable']['id'] = 'field_mhc_lot_length_2_editable';
$handler->display->display_options['fields']['field_mhc_lot_length_2_editable']['table'] = 'field_data_field_mhc_lot_length_2';
$handler->display->display_options['fields']['field_mhc_lot_length_2_editable']['field'] = 'field_mhc_lot_length_2_editable';
$handler->display->display_options['fields']['field_mhc_lot_length_2_editable']['label'] = 'Total length fixed ';
$handler->display->display_options['fields']['field_mhc_lot_length_2_editable']['settings'] = array(
  'thousand_separator' => ' ',
  'decimal_separator' => '.',
  'scale' => '2',
  'prefix_suffix' => 1,
);
$handler->display->display_options['fields']['field_mhc_lot_length_2_editable']['widget_type'] = '0';
$handler->display->display_options['fields']['field_mhc_lot_length_2_editable']['suppress_label'] = 1;
$handler->display->display_options['fields']['field_mhc_lot_length_2_editable']['suppress_description'] = 1;
/* Field: Content: Gas utility distance (editable) */
$handler->display->display_options['fields']['field_mhc_lot_gas_distance_editable']['id'] = 'field_mhc_lot_gas_distance_editable';
$handler->display->display_options['fields']['field_mhc_lot_gas_distance_editable']['table'] = 'field_data_field_mhc_lot_gas_distance';
$handler->display->display_options['fields']['field_mhc_lot_gas_distance_editable']['field'] = 'field_mhc_lot_gas_distance_editable';
$handler->display->display_options['fields']['field_mhc_lot_gas_distance_editable']['label'] = 'Gas distance ';
$handler->display->display_options['fields']['field_mhc_lot_gas_distance_editable']['settings'] = array(
  'thousand_separator' => ' ',
  'decimal_separator' => '.',
  'scale' => '2',
  'prefix_suffix' => 1,
);
$handler->display->display_options['fields']['field_mhc_lot_gas_distance_editable']['widget_type'] = '0';
$handler->display->display_options['fields']['field_mhc_lot_gas_distance_editable']['suppress_label'] = 1;
$handler->display->display_options['fields']['field_mhc_lot_gas_distance_editable']['suppress_description'] = 1;
/* Field: Content: Gas (editable) */
$handler->display->display_options['fields']['field_mhc_lot_gas_editable']['id'] = 'field_mhc_lot_gas_editable';
$handler->display->display_options['fields']['field_mhc_lot_gas_editable']['table'] = 'field_data_field_mhc_lot_gas';
$handler->display->display_options['fields']['field_mhc_lot_gas_editable']['field'] = 'field_mhc_lot_gas_editable';
$handler->display->display_options['fields']['field_mhc_lot_gas_editable']['label'] = 'Gas ';
$handler->display->display_options['fields']['field_mhc_lot_gas_editable']['widget_type'] = '0';
$handler->display->display_options['fields']['field_mhc_lot_gas_editable']['suppress_label'] = 1;
$handler->display->display_options['fields']['field_mhc_lot_gas_editable']['suppress_description'] = 1;
/* Field: Content: Electric utility distance (editable) */
$handler->display->display_options['fields']['field_mhc_lot_elec_distance_editable']['id'] = 'field_mhc_lot_elec_distance_editable';
$handler->display->display_options['fields']['field_mhc_lot_elec_distance_editable']['table'] = 'field_data_field_mhc_lot_elec_distance';
$handler->display->display_options['fields']['field_mhc_lot_elec_distance_editable']['field'] = 'field_mhc_lot_elec_distance_editable';
$handler->display->display_options['fields']['field_mhc_lot_elec_distance_editable']['label'] = 'Electric distance ';
$handler->display->display_options['fields']['field_mhc_lot_elec_distance_editable']['settings'] = array(
  'thousand_separator' => ' ',
  'decimal_separator' => '.',
  'scale' => '2',
  'prefix_suffix' => 1,
);
$handler->display->display_options['fields']['field_mhc_lot_elec_distance_editable']['widget_type'] = '0';
$handler->display->display_options['fields']['field_mhc_lot_elec_distance_editable']['suppress_label'] = 1;
$handler->display->display_options['fields']['field_mhc_lot_elec_distance_editable']['suppress_description'] = 1;
/* Field: Content: Configuration (editable) */
$handler->display->display_options['fields']['field_mhc_lot_config_editable']['id'] = 'field_mhc_lot_config_editable';
$handler->display->display_options['fields']['field_mhc_lot_config_editable']['table'] = 'field_data_field_mhc_lot_config';
$handler->display->display_options['fields']['field_mhc_lot_config_editable']['field'] = 'field_mhc_lot_config_editable';
$handler->display->display_options['fields']['field_mhc_lot_config_editable']['label'] = 'Configuration ';
$handler->display->display_options['fields']['field_mhc_lot_config_editable']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_mhc_lot_config_editable']['delta_offset'] = '0';
$handler->display->display_options['fields']['field_mhc_lot_config_editable']['widget_type'] = '0';
$handler->display->display_options['fields']['field_mhc_lot_config_editable']['suppress_label'] = 1;
$handler->display->display_options['fields']['field_mhc_lot_config_editable']['suppress_description'] = 1;
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
  'mhc_lot' => 'mhc_lot',
);
/* Filter criterion: Content: Status (field_mhc_lot_status) */
$handler->display->display_options['filters']['field_mhc_lot_status_tid']['id'] = 'field_mhc_lot_status_tid';
$handler->display->display_options['filters']['field_mhc_lot_status_tid']['table'] = 'field_data_field_mhc_lot_status';
$handler->display->display_options['filters']['field_mhc_lot_status_tid']['field'] = 'field_mhc_lot_status_tid';
$handler->display->display_options['filters']['field_mhc_lot_status_tid']['value'] = array(
  49 => '49',
);
$handler->display->display_options['filters']['field_mhc_lot_status_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_mhc_lot_status_tid']['vocabulary'] = 'mhc_lot_status';
/* Filter criterion: Content: Lot number (field_mhc_lot_lot_num) */
$handler->display->display_options['filters']['field_mhc_lot_lot_num_value']['id'] = 'field_mhc_lot_lot_num_value';
$handler->display->display_options['filters']['field_mhc_lot_lot_num_value']['table'] = 'field_data_field_mhc_lot_lot_num';
$handler->display->display_options['filters']['field_mhc_lot_lot_num_value']['field'] = 'field_mhc_lot_lot_num_value';
$handler->display->display_options['filters']['field_mhc_lot_lot_num_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_mhc_lot_lot_num_value']['expose']['operator_id'] = 'field_mhc_lot_lot_num_value_op';
$handler->display->display_options['filters']['field_mhc_lot_lot_num_value']['expose']['label'] = 'Lot number ';
$handler->display->display_options['filters']['field_mhc_lot_lot_num_value']['expose']['operator'] = 'field_mhc_lot_lot_num_value_op';
$handler->display->display_options['filters']['field_mhc_lot_lot_num_value']['expose']['identifier'] = 'field_mhc_lot_lot_num_value';
$handler->display->display_options['filters']['field_mhc_lot_lot_num_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  14 => 0,
);
$handler->display->display_options['inherit_panels_path'] = '1';

/* Display: Attachment */
$handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Global: Result summary */
$handler->display->display_options['header']['result']['id'] = 'result';
$handler->display->display_options['header']['result']['table'] = 'views';
$handler->display->display_options['header']['result']['field'] = 'result';
$handler->display->display_options['header']['result']['content'] = '<strong>Total matching lots: </strong>@total';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
/* Field: Content: Lot number */
$handler->display->display_options['fields']['field_mhc_lot_lot_num']['id'] = 'field_mhc_lot_lot_num';
$handler->display->display_options['fields']['field_mhc_lot_lot_num']['table'] = 'field_data_field_mhc_lot_lot_num';
$handler->display->display_options['fields']['field_mhc_lot_lot_num']['field'] = 'field_mhc_lot_lot_num';
$handler->display->display_options['fields']['field_mhc_lot_lot_num']['label'] = 'Lot';
$handler->display->display_options['fields']['field_mhc_lot_lot_num']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['field_mhc_lot_lot_num']['alter']['path'] = 'node/[nid]';
$handler->display->display_options['fields']['field_mhc_lot_lot_num']['settings'] = array(
  'thousand_separator' => ' ',
  'prefix_suffix' => 1,
);
/* Field: Content: Pictures */
$handler->display->display_options['fields']['field_mhc_lot_pics']['id'] = 'field_mhc_lot_pics';
$handler->display->display_options['fields']['field_mhc_lot_pics']['table'] = 'field_data_field_mhc_lot_pics';
$handler->display->display_options['fields']['field_mhc_lot_pics']['field'] = 'field_mhc_lot_pics';
$handler->display->display_options['fields']['field_mhc_lot_pics']['label'] = 'Picture';
$handler->display->display_options['fields']['field_mhc_lot_pics']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_mhc_lot_pics']['type'] = 'colorbox';
$handler->display->display_options['fields']['field_mhc_lot_pics']['settings'] = array(
  'colorbox_node_style' => 'mini_thumbnail',
  'colorbox_image_style' => '',
  'colorbox_gallery' => 'post',
  'colorbox_gallery_custom' => '',
  'colorbox_caption' => 'auto',
  'colorbox_caption_custom' => '',
);
$handler->display->display_options['fields']['field_mhc_lot_pics']['delta_limit'] = '1';
$handler->display->display_options['fields']['field_mhc_lot_pics']['delta_offset'] = '0';
/* Field: Content: Plot map width */
$handler->display->display_options['fields']['field_mhc_lot_plot_width']['id'] = 'field_mhc_lot_plot_width';
$handler->display->display_options['fields']['field_mhc_lot_plot_width']['table'] = 'field_data_field_mhc_lot_plot_width';
$handler->display->display_options['fields']['field_mhc_lot_plot_width']['field'] = 'field_mhc_lot_plot_width';
$handler->display->display_options['fields']['field_mhc_lot_plot_width']['label'] = 'Map width';
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
$handler->display->display_options['fields']['field_mhc_lot_plot_length']['label'] = 'Map length';
$handler->display->display_options['fields']['field_mhc_lot_plot_length']['settings'] = array(
  'thousand_separator' => ' ',
  'decimal_separator' => '.',
  'scale' => '2',
  'prefix_suffix' => 1,
);
/* Field: Content: Buildable width restricted */
$handler->display->display_options['fields']['field_mhc_lot_build_width']['id'] = 'field_mhc_lot_build_width';
$handler->display->display_options['fields']['field_mhc_lot_build_width']['table'] = 'field_data_field_mhc_lot_build_width';
$handler->display->display_options['fields']['field_mhc_lot_build_width']['field'] = 'field_mhc_lot_build_width';
$handler->display->display_options['fields']['field_mhc_lot_build_width']['label'] = 'Max Width';
$handler->display->display_options['fields']['field_mhc_lot_build_width']['settings'] = array(
  'thousand_separator' => ' ',
  'decimal_separator' => '.',
  'scale' => '2',
  'prefix_suffix' => 1,
);
/* Field: Content: Buildable length restricted */
$handler->display->display_options['fields']['field_mhc_lot_build_length']['id'] = 'field_mhc_lot_build_length';
$handler->display->display_options['fields']['field_mhc_lot_build_length']['table'] = 'field_data_field_mhc_lot_build_length';
$handler->display->display_options['fields']['field_mhc_lot_build_length']['field'] = 'field_mhc_lot_build_length';
$handler->display->display_options['fields']['field_mhc_lot_build_length']['label'] = 'Max Length';
$handler->display->display_options['fields']['field_mhc_lot_build_length']['settings'] = array(
  'thousand_separator' => ' ',
  'decimal_separator' => '.',
  'scale' => '2',
  'prefix_suffix' => 1,
);
/* Field: Content: Width-3 */
$handler->display->display_options['fields']['field_mhc_lot_width_3']['id'] = 'field_mhc_lot_width_3';
$handler->display->display_options['fields']['field_mhc_lot_width_3']['table'] = 'field_data_field_mhc_lot_width_3';
$handler->display->display_options['fields']['field_mhc_lot_width_3']['field'] = 'field_mhc_lot_width_3';
$handler->display->display_options['fields']['field_mhc_lot_width_3']['label'] = 'Home set width';
$handler->display->display_options['fields']['field_mhc_lot_width_3']['settings'] = array(
  'thousand_separator' => ' ',
  'decimal_separator' => '.',
  'scale' => '2',
  'prefix_suffix' => 1,
);
/* Field: Content: Gas */
$handler->display->display_options['fields']['field_mhc_lot_gas']['id'] = 'field_mhc_lot_gas';
$handler->display->display_options['fields']['field_mhc_lot_gas']['table'] = 'field_data_field_mhc_lot_gas';
$handler->display->display_options['fields']['field_mhc_lot_gas']['field'] = 'field_mhc_lot_gas';
/* Field: Content: Configuration */
$handler->display->display_options['fields']['field_mhc_lot_config']['id'] = 'field_mhc_lot_config';
$handler->display->display_options['fields']['field_mhc_lot_config']['table'] = 'field_data_field_mhc_lot_config';
$handler->display->display_options['fields']['field_mhc_lot_config']['field'] = 'field_mhc_lot_config';
$handler->display->display_options['fields']['field_mhc_lot_config']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_mhc_lot_config']['delta_offset'] = '0';
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Content: Lot number (field_mhc_lot_lot_num) */
$handler->display->display_options['sorts']['field_mhc_lot_lot_num_value']['id'] = 'field_mhc_lot_lot_num_value';
$handler->display->display_options['sorts']['field_mhc_lot_lot_num_value']['table'] = 'field_data_field_mhc_lot_lot_num';
$handler->display->display_options['sorts']['field_mhc_lot_lot_num_value']['field'] = 'field_mhc_lot_lot_num_value';
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
  'mhc_lot' => 'mhc_lot',
);
/* Filter criterion: Content: Status (field_mhc_lot_status) */
$handler->display->display_options['filters']['field_mhc_lot_status_tid']['id'] = 'field_mhc_lot_status_tid';
$handler->display->display_options['filters']['field_mhc_lot_status_tid']['table'] = 'field_data_field_mhc_lot_status';
$handler->display->display_options['filters']['field_mhc_lot_status_tid']['field'] = 'field_mhc_lot_status_tid';
$handler->display->display_options['filters']['field_mhc_lot_status_tid']['value'] = array(
  49 => '49',
);
$handler->display->display_options['filters']['field_mhc_lot_status_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_mhc_lot_status_tid']['vocabulary'] = 'mhc_lot_status';
/* Filter criterion: Content: Gas (field_mhc_lot_gas) */
$handler->display->display_options['filters']['field_mhc_lot_gas_value']['id'] = 'field_mhc_lot_gas_value';
$handler->display->display_options['filters']['field_mhc_lot_gas_value']['table'] = 'field_data_field_mhc_lot_gas';
$handler->display->display_options['filters']['field_mhc_lot_gas_value']['field'] = 'field_mhc_lot_gas_value';
$handler->display->display_options['filters']['field_mhc_lot_gas_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_mhc_lot_gas_value']['expose']['operator_id'] = 'field_mhc_lot_gas_value_op';
$handler->display->display_options['filters']['field_mhc_lot_gas_value']['expose']['label'] = 'Gas (field_mhc_lot_gas)';
$handler->display->display_options['filters']['field_mhc_lot_gas_value']['expose']['operator'] = 'field_mhc_lot_gas_value_op';
$handler->display->display_options['filters']['field_mhc_lot_gas_value']['expose']['identifier'] = 'field_mhc_lot_gas_value';
$handler->display->display_options['filters']['field_mhc_lot_gas_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  14 => 0,
);
/* Filter criterion: Content: Width-3 (field_mhc_lot_width_3) */
$handler->display->display_options['filters']['field_mhc_lot_width_3_value']['id'] = 'field_mhc_lot_width_3_value';
$handler->display->display_options['filters']['field_mhc_lot_width_3_value']['table'] = 'field_data_field_mhc_lot_width_3';
$handler->display->display_options['filters']['field_mhc_lot_width_3_value']['field'] = 'field_mhc_lot_width_3_value';
$handler->display->display_options['filters']['field_mhc_lot_width_3_value']['operator'] = '>=';
$handler->display->display_options['filters']['field_mhc_lot_width_3_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_mhc_lot_width_3_value']['expose']['operator_id'] = 'field_mhc_lot_width_3_value_op';
$handler->display->display_options['filters']['field_mhc_lot_width_3_value']['expose']['label'] = 'Width-3 (field_mhc_lot_width_3)';
$handler->display->display_options['filters']['field_mhc_lot_width_3_value']['expose']['operator'] = 'field_mhc_lot_width_3_value_op';
$handler->display->display_options['filters']['field_mhc_lot_width_3_value']['expose']['identifier'] = 'field_mhc_lot_width_3_value';
$handler->display->display_options['filters']['field_mhc_lot_width_3_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  14 => 0,
);
/* Filter criterion: Content: Buildable length (field_mhc_lot_build_length_2) */
$handler->display->display_options['filters']['field_mhc_lot_build_length_2_value']['id'] = 'field_mhc_lot_build_length_2_value';
$handler->display->display_options['filters']['field_mhc_lot_build_length_2_value']['table'] = 'field_data_field_mhc_lot_build_length_2';
$handler->display->display_options['filters']['field_mhc_lot_build_length_2_value']['field'] = 'field_mhc_lot_build_length_2_value';
$handler->display->display_options['filters']['field_mhc_lot_build_length_2_value']['operator'] = '>=';
$handler->display->display_options['filters']['field_mhc_lot_build_length_2_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_mhc_lot_build_length_2_value']['expose']['operator_id'] = 'field_mhc_lot_build_length_2_value_op';
$handler->display->display_options['filters']['field_mhc_lot_build_length_2_value']['expose']['label'] = 'Buildable length fixed (field_mhc_lot_build_length_2)';
$handler->display->display_options['filters']['field_mhc_lot_build_length_2_value']['expose']['operator'] = 'field_mhc_lot_build_length_2_value_op';
$handler->display->display_options['filters']['field_mhc_lot_build_length_2_value']['expose']['identifier'] = 'field_mhc_lot_build_length_2_value';
$handler->display->display_options['filters']['field_mhc_lot_build_length_2_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  14 => 0,
);
$handler->display->display_options['displays'] = array(
  'ctools_context_1' => 'ctools_context_1',
  'default' => 0,
  'panel_pane_2' => 0,
  'panel_pane_1' => 0,
);
$handler->display->display_options['attachment_position'] = 'after';
$handler->display->display_options['inherit_exposed_filters'] = TRUE;

/* Display: Dimensions */
$handler = $view->new_display('panel_pane', 'Dimensions', 'panel_pane_3');
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['header'] = FALSE;
$handler->display->display_options['defaults']['empty'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
/* Field: Content: Plot map width */
$handler->display->display_options['fields']['field_mhc_lot_plot_width']['id'] = 'field_mhc_lot_plot_width';
$handler->display->display_options['fields']['field_mhc_lot_plot_width']['table'] = 'field_data_field_mhc_lot_plot_width';
$handler->display->display_options['fields']['field_mhc_lot_plot_width']['field'] = 'field_mhc_lot_plot_width';
$handler->display->display_options['fields']['field_mhc_lot_plot_width']['label'] = 'Map width';
$handler->display->display_options['fields']['field_mhc_lot_plot_width']['element_type'] = 'span';
$handler->display->display_options['fields']['field_mhc_lot_plot_width']['element_label_type'] = 'strong';
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
$handler->display->display_options['fields']['field_mhc_lot_plot_length']['label'] = 'Map length';
$handler->display->display_options['fields']['field_mhc_lot_plot_length']['element_type'] = 'span';
$handler->display->display_options['fields']['field_mhc_lot_plot_length']['element_label_type'] = 'strong';
$handler->display->display_options['fields']['field_mhc_lot_plot_length']['settings'] = array(
  'thousand_separator' => ' ',
  'decimal_separator' => '.',
  'scale' => '2',
  'prefix_suffix' => 1,
);
/* Field: Content: Buildable width restricted */
$handler->display->display_options['fields']['field_mhc_lot_build_width']['id'] = 'field_mhc_lot_build_width';
$handler->display->display_options['fields']['field_mhc_lot_build_width']['table'] = 'field_data_field_mhc_lot_build_width';
$handler->display->display_options['fields']['field_mhc_lot_build_width']['field'] = 'field_mhc_lot_build_width';
$handler->display->display_options['fields']['field_mhc_lot_build_width']['element_type'] = 'span';
$handler->display->display_options['fields']['field_mhc_lot_build_width']['element_label_type'] = 'strong';
$handler->display->display_options['fields']['field_mhc_lot_build_width']['settings'] = array(
  'thousand_separator' => ' ',
  'decimal_separator' => '.',
  'scale' => '2',
  'prefix_suffix' => 1,
);
/* Field: Content: Buildable length restricted */
$handler->display->display_options['fields']['field_mhc_lot_build_length']['id'] = 'field_mhc_lot_build_length';
$handler->display->display_options['fields']['field_mhc_lot_build_length']['table'] = 'field_data_field_mhc_lot_build_length';
$handler->display->display_options['fields']['field_mhc_lot_build_length']['field'] = 'field_mhc_lot_build_length';
$handler->display->display_options['fields']['field_mhc_lot_build_length']['element_type'] = 'span';
$handler->display->display_options['fields']['field_mhc_lot_build_length']['element_label_type'] = 'strong';
$handler->display->display_options['fields']['field_mhc_lot_build_length']['settings'] = array(
  'thousand_separator' => ' ',
  'decimal_separator' => '.',
  'scale' => '2',
  'prefix_suffix' => 1,
);
/* Field: Content: Buildable length */
$handler->display->display_options['fields']['field_mhc_lot_build_length_2']['id'] = 'field_mhc_lot_build_length_2';
$handler->display->display_options['fields']['field_mhc_lot_build_length_2']['table'] = 'field_data_field_mhc_lot_build_length_2';
$handler->display->display_options['fields']['field_mhc_lot_build_length_2']['field'] = 'field_mhc_lot_build_length_2';
$handler->display->display_options['fields']['field_mhc_lot_build_length_2']['element_type'] = 'span';
$handler->display->display_options['fields']['field_mhc_lot_build_length_2']['element_label_type'] = 'strong';
$handler->display->display_options['fields']['field_mhc_lot_build_length_2']['settings'] = array(
  'thousand_separator' => ' ',
  'decimal_separator' => '.',
  'scale' => '2',
  'prefix_suffix' => 1,
);
/* Field: Content: Buildable width fixed */
$handler->display->display_options['fields']['field_mhc_lot_build_width_2']['id'] = 'field_mhc_lot_build_width_2';
$handler->display->display_options['fields']['field_mhc_lot_build_width_2']['table'] = 'field_data_field_mhc_lot_build_width_2';
$handler->display->display_options['fields']['field_mhc_lot_build_width_2']['field'] = 'field_mhc_lot_build_width_2';
$handler->display->display_options['fields']['field_mhc_lot_build_width_2']['label'] = 'Buildable width ';
$handler->display->display_options['fields']['field_mhc_lot_build_width_2']['element_type'] = 'span';
$handler->display->display_options['fields']['field_mhc_lot_build_width_2']['element_label_type'] = 'strong';
$handler->display->display_options['fields']['field_mhc_lot_build_width_2']['settings'] = array(
  'thousand_separator' => ' ',
  'decimal_separator' => '.',
  'scale' => '2',
  'prefix_suffix' => 1,
);
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
  'mhc_lot' => 'mhc_lot',
);
/* Filter criterion: Content: Status (field_mhc_lot_status) */
$handler->display->display_options['filters']['field_mhc_lot_status_tid']['id'] = 'field_mhc_lot_status_tid';
$handler->display->display_options['filters']['field_mhc_lot_status_tid']['table'] = 'field_data_field_mhc_lot_status';
$handler->display->display_options['filters']['field_mhc_lot_status_tid']['field'] = 'field_mhc_lot_status_tid';
$handler->display->display_options['filters']['field_mhc_lot_status_tid']['value'] = array(
  49 => '49',
);
$handler->display->display_options['filters']['field_mhc_lot_status_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_mhc_lot_status_tid']['vocabulary'] = 'mhc_lot_status';
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

/* Display: Setbacks */
$handler = $view->new_display('panel_pane', 'Setbacks', 'panel_pane_4');
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['header'] = FALSE;
$handler->display->display_options['defaults']['empty'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
/* Field: Content: Setback front */
$handler->display->display_options['fields']['field_mhc_lot_setback_front']['id'] = 'field_mhc_lot_setback_front';
$handler->display->display_options['fields']['field_mhc_lot_setback_front']['table'] = 'field_data_field_mhc_lot_setback_front';
$handler->display->display_options['fields']['field_mhc_lot_setback_front']['field'] = 'field_mhc_lot_setback_front';
$handler->display->display_options['fields']['field_mhc_lot_setback_front']['label'] = 'Front';
$handler->display->display_options['fields']['field_mhc_lot_setback_front']['element_type'] = 'span';
$handler->display->display_options['fields']['field_mhc_lot_setback_front']['element_label_type'] = 'strong';
$handler->display->display_options['fields']['field_mhc_lot_setback_front']['settings'] = array(
  'thousand_separator' => ' ',
  'decimal_separator' => '.',
  'scale' => '2',
  'prefix_suffix' => 1,
);
/* Field: Content: Setback rear */
$handler->display->display_options['fields']['field_mhc_lot_setback_rear']['id'] = 'field_mhc_lot_setback_rear';
$handler->display->display_options['fields']['field_mhc_lot_setback_rear']['table'] = 'field_data_field_mhc_lot_setback_rear';
$handler->display->display_options['fields']['field_mhc_lot_setback_rear']['field'] = 'field_mhc_lot_setback_rear';
$handler->display->display_options['fields']['field_mhc_lot_setback_rear']['label'] = 'Rear';
$handler->display->display_options['fields']['field_mhc_lot_setback_rear']['element_type'] = 'span';
$handler->display->display_options['fields']['field_mhc_lot_setback_rear']['element_label_type'] = 'strong';
$handler->display->display_options['fields']['field_mhc_lot_setback_rear']['settings'] = array(
  'thousand_separator' => ' ',
  'decimal_separator' => '.',
  'scale' => '2',
  'prefix_suffix' => 1,
);
/* Field: Content: Setback left side */
$handler->display->display_options['fields']['field_mhc_lot_setback_side_left']['id'] = 'field_mhc_lot_setback_side_left';
$handler->display->display_options['fields']['field_mhc_lot_setback_side_left']['table'] = 'field_data_field_mhc_lot_setback_side_left';
$handler->display->display_options['fields']['field_mhc_lot_setback_side_left']['field'] = 'field_mhc_lot_setback_side_left';
$handler->display->display_options['fields']['field_mhc_lot_setback_side_left']['label'] = 'Left';
$handler->display->display_options['fields']['field_mhc_lot_setback_side_left']['element_type'] = 'span';
$handler->display->display_options['fields']['field_mhc_lot_setback_side_left']['element_label_type'] = 'strong';
$handler->display->display_options['fields']['field_mhc_lot_setback_side_left']['settings'] = array(
  'thousand_separator' => ' ',
  'decimal_separator' => '.',
  'scale' => '2',
  'prefix_suffix' => 1,
);
/* Field: Content: Setback right side */
$handler->display->display_options['fields']['field_mhc_lot_setback_side_right']['id'] = 'field_mhc_lot_setback_side_right';
$handler->display->display_options['fields']['field_mhc_lot_setback_side_right']['table'] = 'field_data_field_mhc_lot_setback_side_right';
$handler->display->display_options['fields']['field_mhc_lot_setback_side_right']['field'] = 'field_mhc_lot_setback_side_right';
$handler->display->display_options['fields']['field_mhc_lot_setback_side_right']['label'] = 'Right';
$handler->display->display_options['fields']['field_mhc_lot_setback_side_right']['element_type'] = 'span';
$handler->display->display_options['fields']['field_mhc_lot_setback_side_right']['element_label_type'] = 'strong';
$handler->display->display_options['fields']['field_mhc_lot_setback_side_right']['settings'] = array(
  'thousand_separator' => ' ',
  'decimal_separator' => '.',
  'scale' => '2',
  'prefix_suffix' => 1,
);
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Content: Nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['default_action'] = 'default';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
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
  'mhc_lot' => 'mhc_lot',
);
/* Filter criterion: Content: Status (field_mhc_lot_status) */
$handler->display->display_options['filters']['field_mhc_lot_status_tid']['id'] = 'field_mhc_lot_status_tid';
$handler->display->display_options['filters']['field_mhc_lot_status_tid']['table'] = 'field_data_field_mhc_lot_status';
$handler->display->display_options['filters']['field_mhc_lot_status_tid']['field'] = 'field_mhc_lot_status_tid';
$handler->display->display_options['filters']['field_mhc_lot_status_tid']['value'] = array(
  49 => '49',
);
$handler->display->display_options['filters']['field_mhc_lot_status_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_mhc_lot_status_tid']['vocabulary'] = 'mhc_lot_status';
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

// END - VACANT_LOTS
  // (Export ends here.)

  // Add view to list of views to provide.
  $views[$view->name] = $view;

  // ...Repeat all of the above for each view the module should provide.

  // At the end, return array of default views.
  return $views;
}