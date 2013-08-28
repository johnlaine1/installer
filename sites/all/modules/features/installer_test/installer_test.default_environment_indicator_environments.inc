<?php
/**
 * @file
 * installer_test.default_environment_indicator_environments.inc
 */

/**
 * Implements hook_default_environment_indicator_environment().
 */
function installer_test_default_environment_indicator_environment() {
  $export = array();

  $environment = new stdClass();
  $environment->disabled = FALSE; /* Edit this to true to make a default environment disabled initially */
  $environment->api_version = 1;
  $environment->machine = 'live_environment';
  $environment->name = 'Live';
  $environment->regexurl = 'installer.clearviewproperties.net';
  $environment->settings = array(
    'color' => '#eb1a15',
    'weight' => '',
    'position' => 'top',
    'fixed' => 0,
  );
  $export['live_environment'] = $environment;

  return $export;
}
