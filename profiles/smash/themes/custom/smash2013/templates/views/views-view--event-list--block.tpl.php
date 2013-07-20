<?php

/**
 * @file
 * Main view template.
 *
 * Variables available:
 * - $classes_array: An array of classes determined in
 *   template_preprocess_views_view(). Default classes are:
 *     .view
 *     .view-[css_name]
 *     .view-id-[view_name]
 *     .view-display-id-[display_name]
 *     .view-dom-id-[dom_id]
 * - $classes: A string version of $classes_array for use in the class attribute
 * - $css_name: A css-safe version of the view name.
 * - $css_class: The user-specified classes names, if any
 * - $header: The view header
 * - $footer: The view footer
 * - $rows: The results of the view query, if any
 * - $empty: The empty text to display if the view is empty
 * - $pager: The pager next/prev links to display, if any
 * - $exposed: Exposed widget form/info to display
 * - $feed_icon: Feed icon to display, if any
 * - $more: A link to view more, if any
 *
 * @ingroup views_templates
 */
?>
<div class="<?php print $classes; ?>">

  <?php if ($rows): ?>
    <div class="view-content">
      <?php
      
      $split = explode('<!-- splitpoint -->', $rows);
      $parts = array();
      $cols = 3;
      $count = ceil(count($split) / $cols);
      $iter = 0;
      $index = 0;
      foreach ($split as $part) {
        $parts[$index][] = $part;
        $iter++;
        if ($iter >= $count && $index < ($cols - 1)) {
          $index++;
          $iter = 0;
        }
      }
      
      foreach ($parts as $part) {
        print '<div class="menu-item-group">' . implode('', $part) . '</div>';
      }
      
      ?>
    </div>
  <?php endif; ?>

</div><?php /* class view */ ?>