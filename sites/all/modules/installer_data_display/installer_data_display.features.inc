<?php
/**
 * @file
 * installer_data_display.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function installer_data_display_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "stylizer" && $api == "stylizer") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function installer_data_display_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
