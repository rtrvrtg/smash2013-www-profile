<?php
list($toggler_id, $toggler) = _smash_2013_prep_toggler(print_r($rows, 1));
?>

<?php print $wrapper_prefix; ?>
  <?php if (!empty($title)) : ?>
    <h3 class="event-list-title--<?php print preg_replace('/[^a-z0-9-]/', '-', strtolower($title)); ?>"><?php print $title; ?></h3>
  <?php endif; ?>
  <?php print $toggler; ?>
  <div class="menu-wrapper" id="<?php print $toggler_id; ?>">
  <?php print $list_type_prefix; ?>
    <?php foreach ($rows as $id => $row): ?>
      <li class="<?php print $classes_array[$id]; ?>"><?php print $row; ?></li>
    <?php endforeach; ?>
  <?php print $list_type_suffix; ?>
  </div>
<?php print $wrapper_suffix; ?>