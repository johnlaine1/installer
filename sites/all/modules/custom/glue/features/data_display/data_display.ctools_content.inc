<?php
/**
 * @file
 * data_display.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function data_display_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'grading_warnint';
  $content->admin_title = 'Lot grading warning';
  $content->admin_description = 'A warning that the lot needs to be graded before a home can be installed.';
  $content->category = 'MHC lot';
  $content->settings = array(
    'admin_title' => 'Lot grading warning',
    'title' => 'Warning - Lot needs grading',
    'body' => 'This lot needs to be graded before a home can be installed. The most likely cause for this is a previous installation of a ground set home.',
    'format' => 'filtered_html',
    'substitute' => 1,
  );
  $export['grading_warnint'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'lot_length_warning';
  $content->admin_title = 'Lot Length Warning';
  $content->admin_description = 'A warning that the lot length has been shotened.';
  $content->category = 'MHC lot';
  $content->settings = array(
    'admin_title' => 'Lot Length Warning',
    'title' => 'Warning - Lot length is restricted',
    'body' => 'The total buildable length of this lot is <strong>%node:field-mhc-lot-build-length-2\'</strong>, but there is an removable object,such as a tree or bush that is shortening the buildable length to <strong>%node:field_mhc_lot_build_length\'</strong>.',
    'format' => 'filtered_html',
    'substitute' => 1,
  );
  $export['lot_length_warning'] = $content;

  return $export;
}
