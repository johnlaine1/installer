<?php
/**
 * @file
 * installer_test.stylizer.inc
 */

/**
 * Implements hook_default_stylizer().
 */
function installer_test_default_stylizer() {
  $export = array();

  $style = new stdClass();
  $style->disabled = FALSE; /* Edit this to true to make a default style disabled initially */
  $style->api_version = 1;
  $style->name = 'first_try';
  $style->admin_title = 'First try';
  $style->admin_description = 'Experimenting';
  $style->settings = array(
    'name' => 'first_try',
    'style_base' => 'region_rounded_shadow',
    'font' => array(
      'font' => '',
      'size' => '',
      'letter_spacing' => '',
      'word_spacing' => '',
      'decoration' => '',
      'weight' => '',
      'style' => '',
      'variant' => '',
      'case' => '',
      'alignment' => '',
    ),
    'padding' => array(
      'top' => '',
      'right' => '',
      'bottom' => '',
      'left' => '',
    ),
    'palette' => array(
      'background' => '#FFFFFF',
      'text' => '#000000',
    ),
  );
  $export['first_try'] = $style;

  return $export;
}
