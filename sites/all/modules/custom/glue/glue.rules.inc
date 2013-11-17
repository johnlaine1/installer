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
	    'group' => t('Rules fun'),
	  ),
		'glue_action_hello_user' => array(
			'label' => t('Say hello to a selected user'),
			'group' => t('Rules fun'),
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
			'group' => t('Rules fun'),
			'parameter' => array(
				'view_name' => array(
					'type' => 'text',
					'label' => t('The view to use to load the number of results'),
					'options list' => 'glue_views_list',
					'restriction' => 'input',
				),
			),
			'provides' => array(
				'number_of_results' => array(
					'type' => 'integer',
					'label' => t('Number of view results'),
				),
			),
		);
	}
  return $actions;
}

/**
 * Implements hook_rules_condtion_info().
 */
function glue_rules_condition_info() {
	$conditions = array();
	
	if (module_exists('views')) {
		$conditions['glue_condtition_view_base_table'] = array(
			'label' => t('View has base table'),
			'group' => t('Rules fun'),
			'parameter' => array(
				'view_name' => array(
					'type' => 'text',
					'label' => t('View to check'),
					'options list' => 'glue_views_list',
				),
				'base_table' => array(
					'type' => 'text',
					'label' => t('The machine name for the base table'),
					'restriction' => 'input',
				),
			),
		);
	}
	return $conditions;
}

/**
 * Implements hook_rules_event_info().
 */
function glue_rules_event_info() {
	$events = array();
	
	if (module_exists('views')) {
		$events['glue_event_view_render'] = array(
			'label' => t('A view is going to be rendered'),
			'group' => t('Rules fun'),
			'variables' => array(
				'view_name' => array(
					'type' => 'text',
					'label' => t('view name'),
				),
			),
		);
	}
 
 return $events;
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
	$results = views_get_view_result($view_name);
	dpm($results[0]->nid);
	dpm($results);
	return array(
		'number_of_results' => count($results),		
	);	
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

/**
 * Callback for 'glue_condition_view_base_table'.
 */
function glue_condtition_view_base_table($view_name, $base_table) {
  $view = views_get_view($view_name);
	return ($view->base_table == $base_table);
}




