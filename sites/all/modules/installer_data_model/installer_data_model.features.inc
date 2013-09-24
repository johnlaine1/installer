<?php
/**
 * @file
 * installer_data_model.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function installer_data_model_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function installer_data_model_node_info() {
  $items = array(
    'activity' => array(
      'name' => t('Activity'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Description'),
      'help' => '',
    ),
    'contact' => array(
      'name' => t('Contact'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'group' => array(
      'name' => t('Group'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Group name'),
      'help' => '',
    ),
    'mh_community' => array(
      'name' => t('MH Community'),
      'base' => 'node_content',
      'description' => t('Information related to a Manufactured Home community.'),
      'has_title' => '1',
      'title_label' => t('Community name'),
      'help' => '',
    ),
    'mh_install_invoice' => array(
      'name' => t('MH Install Invoice'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'mh_install_line_item' => array(
      'name' => t('Mh Install Line Item'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'mh_installation' => array(
      'name' => t('MH Installation'),
      'base' => 'node_content',
      'description' => t('Information related to a Manufactured Home installation.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'mh_listing' => array(
      'name' => t('MH Listing'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'mh_seller' => array(
      'name' => t('MH Seller'),
      'base' => 'node_content',
      'description' => t('Information related to a Manufactured Home seller.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'mh_unit' => array(
      'name' => t('MH Unit'),
      'base' => 'node_content',
      'description' => t('Information related to a Manufactured Home unit.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
