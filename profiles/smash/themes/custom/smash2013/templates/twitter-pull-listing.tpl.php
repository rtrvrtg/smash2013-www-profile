<?php

/**
 * @file
 * Theme template for a list of tweets.
 *
 * Available variables in the theme include:
 *
 * 1) An array of $tweets, where each tweet object has:
 *   $tweet->id
 *   $tweet->username
 *   $tweet->userphoto
 *   $tweet->text
 *   $tweet->timestamp
 *   $tweet->time_ago
 *
 * 2) $twitkey string containing initial keyword.
 *
 * 3) $title
 *
 */
?>

<?php if (is_array($tweets)): ?>
<?php foreach ($tweets as $tweet_key => $tweet): ?>
<span class="tweet-text"><?php 
  $text = @twitter_pull_add_links($tweet->text);
  $tweet_text = reset(explode("\n", wordwrap(strip_tags($text), 80, "\n", TRUE)));
  if (!empty($tweet_text)) {
    print $tweet_text . '...'; 
  }
  else {
    print 'Awaiting tweets...';
  }
?></span>
<?php endforeach; ?>
<?php endif; ?>
