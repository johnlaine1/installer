<?php
/**
 * @file
 * installer_all.default_environment_indicator_environments.inc
 */

/**
 * Implements hook_default_environment_indicator_environment().
 */
function installer_all_default_environment_indicator_environment() {
  $export = array();

  $environment = new stdClass();
  $environment->disabled = FALSE; /* Edit this to true to make a default environment disabled initially */
  $environment->api_version = 1;
  $environment->machine = 'development_environment';
  $environment->name = 'Development';
  $environment->regexurl = 'dev.installer.clearviewproperties.net';
  $environment->settings = array(
    'color' => '#A33',
    'weight' => '99',
    'position' => 'top',
    'fixed' => 0,
  );
  $export['development_environment'] = $environment;

  $environment = new stdClass();
  $environment->disabled = FALSE; /* Edit this to true to make a default environment disabled initially */
  $environment->api_version = 1;
  $environment->machine = 'live_environment';
  $environment->name = 'Live';
  $environment->regexurl = 'installer.clearviewproperties.net';
  $environment->settings = array(
    'color' => '#22eb15',
    'weight' => '',
    'position' => 'top',
    'fixed' => 0,
  );
  $export['live_environment'] = $environment;

  $environment = new stdClass();
  $environment->disabled = FALSE; /* Edit this to true to make a default environment disabled initially */
  $environment->api_version = 1;
  $environment->machine = 'test_environment';
  $environment->name = 'Test';
  $environment->regexurl = 'test.installer.clearviewproperties.net';
  $environment->settings = array(
    'color' => '#1b2bbc',
    'weight' => '',
    'position' => 'top',
    'fixed' => 0,
  );
  $export['test_environment'] = $environment;

  return $export;
}
