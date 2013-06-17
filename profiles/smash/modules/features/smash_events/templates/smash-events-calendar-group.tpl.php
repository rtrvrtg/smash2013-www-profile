<div class="schedule-column schedule-column-<?php print $machine_title; ?>">
  <header><?php print $title; ?></header>
  <div class="schedule-column-items">
    <?php foreach ($items as $item): ?>
      <?php print $item->render(); ?>
    <?php endforeach; ?>
  </div>
</div>