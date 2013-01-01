/**
 * @file
 * A JavaScript file for the theme.
 *
 * In order for this JavaScript to be loaded on pages, see the instructions in
 * the README.txt next to this file.
 */

// JavaScript should be made compatible with libraries other than jQuery by
// wrapping it with an "anonymous closure". See:
// - http://drupal.org/node/1446420
// - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth
(function ($, Drupal, window, document, undefined) {
$(document).ready(function(){

// Place your code here.

var newsByDate = $('#block-views-news-by-date-block');
var newsByTag = $('#block-views-news-by-tag-block');

if (newsByDate.length > 0) {
  // Filter by year and month
  
  var yearHeadings = $('li.archive-heading', newsByDate);
  yearHeadings.click(function(e){
    e.preventDefault();
    
    var year = $(this).attr('data-yeararchive');
    
    $('li', newsByDate).not('.archive-heading')
      .not('[data-yeararchive="' + year + '"]')
      .hide('fast');
    
    $('li.archive-heading').not(this).removeClass('active');
    
    $('li[data-yeararchive="' + year + '"]', newsByDate)
      .not('.archive-heading')
      .show('fast');
    
    $(this).addClass('active');
  });
  
  var thisYear = yearHeadings.first().attr('data-yeararchive');
  $('li', newsByDate).not('.archive-heading')
    .not('[data-yeararchive="' + thisYear + '"]')
    .hide();
  yearHeadings.first().addClass('active');
}

if (newsByTag.length > 0) {
  // Show top 10 only
  var ul = $('ul.views-summary', newsByTag);
  var li = $('li.bottom-tag', newsByTag);
  var hidden = true;
  
  li.hide();
  $('<a />', {
    text: 'More tags',
    href: '#',
    'class': 'more-tags-link'
  }).click(function(e){
    e.preventDefault();
  
    if (li.first().is(':hidden')) {
      li.show();
      $(this).text('Fewer tags');
    }
    else {
      li.hide();
      $(this).text('More tags');
    }
  }).insertAfter(ul);
}

});
})(jQuery, Drupal, this, this.document);
