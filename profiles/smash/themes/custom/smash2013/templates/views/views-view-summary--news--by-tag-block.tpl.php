<?php

$sort = function($a, $b) {
  $cmp = strnatcmp($b->num_records, $a->num_records);
  if ($cmp != 0) return $cmp;
  return strnatcmp($a->link, $b->link);
};

usort($rows, $sort);
$count = 0;

?>
<div class="item-list">
  <ul class="views-summary">
<?php foreach ($rows as $id => $row): ?>
  <?php
  
  $li_class = 'bottom-tag';
  if ($count < 10) {
    $li_class = 'top-tag';
  }
  
  ?>
  <li <?php print !empty($li_class) ? 'class="' . $li_class . '"' : ''; ?>><a href="<?php print $row->url; ?>"<?php print !empty($row_classes[$id]) ? ' class="'. $row_classes[$id] .'"' : ''; ?>><?php print $row->link; ?></a>
      <?php if (!empty($options['count'])): ?>
        (<?php print $row->count?>)
      <?php endif; ?>
    </li>
  <?php $count++; ?>
<?php endforeach; ?>
  </ul>
</div>
