<div class="schedule-column schedule-column-<?php print $machine_title; ?>">
  <header><p><?php print $title; ?></p></header>
  <div class="schedule-column-items">
    <?php foreach ($items as $item): ?>
      <?php print $item->render(); ?>
    <?php endforeach; ?>
  </div>
</div>