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

var forceRedraw = function(element){
  if (!element) { return; }

  var n = document.createTextNode(' ');
  var disp = element.style.display;  // don't worry about previous display style

  element.appendChild(n);
  element.style.display = 'none';

  setTimeout(function(){
      element.style.display = disp;
      n.parentNode.removeChild(n);
  },20); // you can play with this timeout to make it as short as possible
}

var menuLabels = $('#navigation label');
menuLabels.bind('click', function(e){
  e.preventDefault();

  var forId = $(this).attr('for');
  var targetInput = $('#' + forId);
  
  var current = !!targetInput.attr('checked');
  if (current) {
    targetInput.removeClass('active').removeAttr('checked');
  }
  else {
    targetInput.addClass('active').attr('checked', 'checked');
  }

  forceRedraw(targetInput.parent().get(0));
});

var menuSize = function(){
  var target = $('#block-menu-block-1');
  target.css('max-height', window.innerHeight + "px");
};
$(window).resize(function(){
  menuSize();  
});
$(window).bind('orientationchange', function(){
  menuSize();  
});
menuSize();

var getTweet = function(){
  twitterFetcher.fetch('433171194980732929', 'twitter-latest', 1, true);
};
getTweet();

var stupidFirefoxTrick = function(){
  var items = $('.sticky-table-component table').find('th, td');

  items.each(function(){
    $(this).children().css('position', 'relative')
      .width($(this).width()).height($(this).height());
  });

  $('.sticky-table-component').css('overflow', 'auto');
};

$(document).ready(function(){
  if ($.browser.mozilla && parseFloat($.browser.version) < 30) stupidFirefoxTrick();
});

});
})(jQuery, Drupal, this, this.document);
