<?php
$year = null;
?>
<div class="item-list">
  <ul class="views-summary">
<?php foreach ($rows as $id => $row): ?>
<?php
$year_match = substr($row->created_year_month, 0, 4);
if (is_null($year) || $year != $year_match) {
  print '<li class="archive-heading" data-yeararchive="' . $year_match . '"><h3>' . $year_match . '</h3></li>';
  $year = $year_match;
}
?>
  <li data-yeararchive="<?php print $year; ?>"><a href="<?php print $row->url; ?>"<?php print !empty($row_classes[$id]) ? ' class="'. $row_classes[$id] .'"' : ''; ?>><?php print $row->link; ?></a>
      <?php if (!empty($options['count'])): ?>
        (<?php print $row->count?>)
      <?php endif; ?>
    </li>
<?php endforeach; ?>
  </ul>
</div>
