<?php

/**
 * @file
 * Rules code: actions, conditions and events.
 */

/**
 * Implements hook_rules_action_info().
 */
function glue_rules_action_info() {
  $actions = array(
    'glue_action_hello_world' => array(
	    'label' => t('Print Hello World'),
	    'group' => t('Glue code'),
	  ),
		'glue_action_hello_user' => array(
			'label' => t('Say hello to a selected user'),
			'group' => t('Glue code'),
			'parameter' => array(
				'account' => array(
					'type' => 'user',
					'label' => t('User to say hello to'),
				),
			),
		),
		
  );
  
	if (module_exists('views')) {
		$actions['glue_action_get_view_results'] = array(
			'label' => t('Get the number of results in a view'),
			'group' => t('Glue code'),
			'parameter' => array(
				'view_name' => array(
					'type' => 'text',
					'label' => t('The view to use to load the number of results'),
					'options list' => 'glue_views_list',
					'restriction' => 'input',
				),
			),
		);
	}
  return $actions;
}

/**
 * Callback for 'glue_action_hello_world'
 */
 function glue_action_hello_world() {
   drupal_set_message(t('Hello World'));
 }
 
/**
 * Callback for 'glue_action_hello_user'.
 *
 * $account = User object sent in through UI.
 */
function glue_action_hello_user($account) {
	drupal_set_message(t('Hello @username', array('@username' => $account->name)));
}

/**
 * Callback for 'glue_action_get_view_results'.
 */
function glue_action_get_view_results($view_name) {
	drupal_set_message(t('You have chosen the view: @view', array('@view' => $view_name)));
	
}

/**
 * Callback to return a list of views on the site.
 */
function glue_views_list() {
	$selectable_views = array();
	foreach (views_get_all_views() as $view_name => $view_object) {
		$selectable_views[$view_object->base_table][$view_name] = (isset($view_object->human_name))
		  ? $view_object->human_name : $view_name;
	}
	
	return $selectable_views;
}
