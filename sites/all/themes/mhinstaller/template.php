<?php 

/*
function mhinstaller_preprocess_page(&$variables, $hook) {
dsm($variables);
}
*/
/*
function mhinstaller_page_alter(&$page) {
dsm($page);
}
*/

/**
 * Overrides theme_panels_default_style_render_region().
 * Remove div.panel-separator
 */
function mhinstaller_panels_default_style_render_region($vars) {
  $output = '';
  $output .= implode('', $vars['panes']);
  return $output;
}

/**
 * Overrides theme_panels_rounded_corners_style_render_region().
 * Remove div.panel-separator
 */
function mhinstaller_panels_rounded_corners_style_render_region($vars) {
  $display = $vars['display'];
  $region_id = $vars['region_id'];
  $panes = $vars['panes'];
  $settings = $vars['settings'];

  $output = '';

  // Determine where to put the box. If empty or 'pane' around each pane. If
  // 'panel' then just around the whole panel.
  $where = empty($settings['corner_location']) ? 'pane' : $settings['corner_location'];

  $print_separator = FALSE;
  foreach ($panes as $pane_id => $pane) {
    // Add the separator if we've already displayed a pane.
    if ($print_separator) {
      $output .= '<div class="panel-separator">&nbsp;</div>';
    }

    if ($where == 'pane') {
      $output .= theme('panels_rounded_corners_box', array('content' => $pane));
    }
    else {
      $output .= $pane;
      $print_separator = FALSE; //Changed this value from TRUE to FALSE.
    }
  }

  if ($where == 'panel') {
    $output = theme('panels_rounded_corners_box', array('content' => $output));
  }

  panels_add_rounded_corners_css($display, $where);

  return $output;
}
