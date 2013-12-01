<?php
/**
 * @file
 * data_display.stylizer.inc
 */

/**
 * Implements hook_default_stylizer().
 */
function data_display_default_stylizer() {
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

  $style = new stdClass();
  $style->disabled = FALSE; /* Edit this to true to make a default style disabled initially */
  $style->api_version = 1;
  $style->name = 'warning_box';
  $style->admin_title = 'Warning box';
  $style->admin_description = '';
  $style->settings = array(
    'name' => 'warning_box',
    'style_base' => 'pane_rounded_shadow',
    'header_font' => array(
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
    'text_font' => array(
      'font' => '',
      'size' => '',
      'letter_spacing' => '',
      'word_spacing' => '',
      'decoration' => 'none',
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
    'header_border' => array(
      'thickness' => '',
      'style' => '',
    ),
    'palette' => array(
      'background' => '#fe4042',
      'text' => '#000000',
      'header-text' => '#000000',
      'header-border' => '#000000',
    ),
  );
  $export['warning_box'] = $style;

  return $export;
}
