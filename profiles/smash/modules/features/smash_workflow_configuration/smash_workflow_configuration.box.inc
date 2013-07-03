<?php
/**
 * @file
 * smash_workflow_configuration.box.inc
 */

/**
 * Implements hook_default_box().
 */
function smash_workflow_configuration_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'footer_text';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Footer';
  $box->options = array(
    'body' => array(
      'value' => '<p>Welcome to the bottom of the page! You can check out our&nbsp;<a href="/privacy">privacy policy</a>&nbsp;if you like.&nbsp;While you\'re at it, you should also&nbsp;<a href="/contact">contact us</a>.&nbsp;Your choices are essentially limitless. Which is to say, you have 2 choices.<br>This website is Copyright © 2013 by SMASH Inc. SMASH Inc is a non-profit organisation.</p>',
      'format' => 'filtered_html',
    ),
    'additional_classes' => '',
  );
  $export['footer_text'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'social_networks';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Social Networks';
  $box->options = array(
    'body' => array(
      'value' => '<p><a class="networks-facebook" href="http://www.facebook.com/smashcon/">We are on Facebook. </a> <a class="networks-youtube" href="http://www.youtube.com/smashconvention/#p/u/"> We are also on YouTube. </a> <a class="networks-deviantart" href="http://smashcon.deviantart.com/"> We also have a DeviantArt account. </a> <a class="networks-tumblr" href="http://smashcon.tumblr.com/"> Hit us up on our Tumblr. </a> <a class="networks-twitter" href="http://twitter.com/smashcon/"> <span>@smashcon</span> [smash-layout:tweet]</a></p>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['social_networks'] = $box;

  return $export;
}
