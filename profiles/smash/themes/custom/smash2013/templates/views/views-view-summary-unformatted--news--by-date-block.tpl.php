<?php
$year = null;
?>
<?php foreach ($rows as $id => $row): ?>
<?php

drupal_set_message(print_r($row, 1));
$found = preg_match_all('/news\/([0-9]{4})/', $row, $year_match);
drupal_set_message(print_r($year_match, 1));
if (is_null($year) || $year != $year_match[1]) {
  print '<h3>' . $year . '</h3>';
  $year = $year_match[1];
}

?>
  <?php print (!empty($options['inline']) ? '<span' : '<div') . ' class="views-summary views-summary-unformatted">'; ?>
    <?php if (!empty($row->separator)) { print $row->separator; } ?>
    <a href="<?php print $row->url; ?>"<?php print !empty($row_classes[$id]) ? ' class="' . $row_classes[$id] . '"' : ''; ?>><?php print $row->link; ?></a>
    <?php if (!empty($options['count'])): ?>
      (<?php print $row->count; ?>)
    <?php endif; ?>
  <?php print !empty($options['inline']) ? '</span>' : '</div>'; ?>
<?php endforeach; ?>