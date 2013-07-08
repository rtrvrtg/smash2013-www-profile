<?php
$index = 0;
?>
<article class="<?php print $item_classes; ?>" id="<?php print $item_id; ?>">
  <div class="calendar <?php print $item->granularity; ?>view">
    <?php print theme('calendar_stripe_stripe', array('item' => $item)); ?>
    <div class="<?php print $item->date_id ?> contents">
      <?php foreach ($rendered_fields as $field): ?>
        <?php if ($index++ == 0 && (isset($item->continuation) && $item->continuation)) : ?>
        <div class="continuation">&laquo;</div>
        <?php endif;?>
        <?php print $field; ?>
      <?php endforeach; ?>
    </div>
  </div> 
</article>