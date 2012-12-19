<?php

/**
 * @file
 * Custom TTC display suite template
 */

// Reuse with panels!
$pfx = 'smash_layout_node';
if (isset($content)) {
  foreach ($content as $key => $item) {
    $name = $pfx.$key;
    ${$name} = $item;
    
    if (!isset(${$name.'_classes'})) {
      ${$name.'_classes'} = '';
    }
  }
}
if (!isset($title_suffix)) {
  $title_suffix = array();
}
else {
  if (isset($title_suffix['contextual_links'])) {
    $admin_links = $title_suffix['contextual_links'];
  }
}

$main_area_styles = ' ';
if ($smash_layout_node_main && $smash_layout_node_sidebar) {
  $main_area_styles .= 'has-main-and-sidebar';
}

?>

<div class="<?php print $classes;?> clearfix">

  <?php if (isset($admin_links)): ?>
  <?php print render($admin_links); ?>
  <?php endif; ?>
  
  <div class="content-main-area clearfix <?php print $main_area_styles; ?>">
    <div class="content-main-area-inner">

	  <?php if ($smash_layout_node_main && !empty($smash_layout_node_main)) { ?>
		<div class="prefaced-node-content <?php print $smash_layout_node_main_classes; ?>">
		  <?php print $smash_layout_node_main; ?>
		</div>
	  <?php } ?>
	
	  <?php if ($smash_layout_node_sidebar && !empty($smash_layout_node_sidebar)) { ?>
		<div class="prefaced-node-sidebar <?php print $smash_layout_node_sidebar_classes; ?>">
		  <?php print $smash_layout_node_sidebar; ?>
		</div>
	  <?php } ?>
    </div>  
  </div>
  
</div>
