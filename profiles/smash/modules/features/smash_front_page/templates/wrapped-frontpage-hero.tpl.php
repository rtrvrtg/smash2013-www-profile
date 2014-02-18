<?php if ($uses_video): ?>
<div class="hero-wrapped hero-video">
<?php print $video_rendered; ?>
<img src="<?php print $image; ?>" class="element-invisible" />
<span class="hero-wrapped-content">
<h2><?php print $title; ?></h2>
<?php print $blurb; ?>
</span>
</div>
<?php else: ?>
<a href="<?php print $link_url; ?>" class="hero-wrapped">
<span class="hero-wrapped-image"><img src="<?php print $image; ?>" /><span class="hero-image-credits">Photo credits: <?php print $credits; ?></span></span>
<span class="hero-wrapped-content">
<h2><?php print $title; ?></h2>
<?php print $blurb; ?>
</span>
</a>
<?php endif; ?>
