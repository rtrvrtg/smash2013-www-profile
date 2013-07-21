<?php

$sticky_setting = FALSE;
$sticky_headings = array(
  0 => "Other Exhibitors",
  1 => "Major Exhibitors",
);

?>

<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php foreach ($rows as $id => $row): ?>
  <?php

  $raw_row = $view->result[$id];

  if ($view->current_display == "page" && $view->args[0] == 'exhibitors') {
    if ($raw_row->node_sticky != $sticky_setting) {
      $sticky_setting = $raw_row->node_sticky;
      print '<h4>' . $sticky_headings[$sticky_setting] . '</h4>';
    }
  }

  ?>
  <div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>
    <?php print $row; ?>
  </div>
<?php endforeach; ?>
