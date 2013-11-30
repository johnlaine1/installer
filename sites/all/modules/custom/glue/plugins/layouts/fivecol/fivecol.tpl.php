<?php
/**
 * @file
 * Template for a 5 column panel layout.
 *
 * This template provides a five column panel display layout, with
 * each column roughly equal in width.
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 *   - $content['first']: Content in the first column on left column.
 *   - $content['second']: Content in the second column from left.
 *   - $content['third']: Content in the third column from left.
 *   - $content['fourth']: Content in the fourth column from left.
 *   - $content['fifth']: Content in the fifth column from left.
 */
?>

<div class="panel-display panel-fivecol clearfix" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>  
    
    
    <div class="panel-panel panel-col-first">
      <?php print $content['first']; ?>
    </div>
    
    <div class="panel-panel panel-col-second">
      <?php print $content['second']; ?>
    </div>

    <div class="panel-panel panel-col-third">
      <?php print $content['third']; ?>
    </div>
  
    <div class="panel-panel panel-col-fourth">
      <?php print $content['fourth']; ?>
    </div>
  
    <div class="panel-panel panel-col-fifth">
      <?php print $content['fifth']; ?>
    </div>

  
</div>
