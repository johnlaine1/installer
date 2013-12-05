<?php

/*
function glue_views_query_alter(&$view, &$query) {
  $query->where[1]['conditions'][3]['value'] -= .5;
  dpm($view, '$view');
  dpm($query, '$query');
}
*/

/*
 * Implements hook_views_query_alter().
 */

function glue_views_query_alter(&$view, &$query) {
  if ($view->name == 'vacant_lots') {
    // This will alter the exposed filter value "Home Width" on the vacant
    // lot view page. It will subtract .5 from the value entered before the
    // query is run. This will allow for the 6" of overhang that is allowable
    // on a home installation.
    $num_of_conditions = count($query->where[1]['conditions']);
    for ($i = 0; $i < $num_of_conditions; $i++){
      // We are targeting the 'mhc_lot_width_3' field.
      if ($query->where[1]['conditions'][$i]['field'] == 'field_data_field_mhc_lot_width_3.field_mhc_lot_width_3_value') {
        // This will subtract .5 from the value entered before the query is run.        
        $new_value = $query->where[1]['conditions'][$i]['value'] - .5;
        // The value will get converted to a float, we need to change it back
        // to a string.
        $new_value = strval($new_value);
        $query->where[1]['conditions'][$i]['value'] = $new_value;
      }
    }
  }  
}

