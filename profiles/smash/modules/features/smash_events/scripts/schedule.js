(function($, Drupal, document, window){
$(document).ready(function(){

/* Cookies */

var serialiseCookie = function(objectValue) {
  var parts = [];
  for (var i in objectValue) {
    parts.push(i + ',' + objectValue[i]);
  }
  return parts.join(';');
};

var deserialiseCookie = function(stringValue) {
  if (!stringValue || stringValue.length == 0) return {};

  var objectValue = {};
  var parts = stringValue.split(';');
  for (var i = 0; i < parts.length; i++) {
    var itemParts = parts[i].split(',');
    objectValue[itemParts[0]] = itemParts[1];
  }
  return objectValue;
};

var fetchStarred = function() {
  return deserialiseCookie($.cookie('smash_events_starred'));
};

var setStarred = function(key, set) {
  var value = fetchStarred();
  if (!value) {
    value = {};
  }
  value[key] = set;
  $.cookie('smash_events_starred', serialiseCookie(value), { expires: 45, path: '/' });
};

/* Set up toggler */

var makeThisActive = function(elem) {
  $('.view-schedule-toggle a').not(elem).removeClass('active');
  elem.addClass('active');
};

var toggler = $('<nav />', {
  'class': 'view-schedule-toggle'
});

var allEvents = $('<a />', {
  href: '#all-events',
  text: 'All events',
  'class': 'active'
});
allEvents.click(function(e){
  e.preventDefault();
  $('.view-schedule').removeClass('helpful-hint');
  makeThisActive($(this));
  $('.schedule-column').show();
  $('.view-schedule .schedule-item').show();
});

var myEvents = $('<a />', {
  href: '#my-events',
  text: 'My events'
});
myEvents.click(function(e){
  e.preventDefault();
  makeThisActive($(this));
  $('.view-schedule .schedule-item').filter(function(){
    return $(this).find('> a.schedule-fave-link.active').length == 0;
  }).hide();
  $('.view-schedule .schedule-column').filter(function(){
    return $(this).find('.schedule-item > a.schedule-fave-link.active').length == 0;
  }).hide();

  if ($('.view-schedule .schedule-item > a.schedule-fave-link.active').length == 0) {
    $('.view-schedule').addClass('helpful-hint');
  }
});

toggler.append(allEvents).append(myEvents);

$('.view-schedule').prepend(toggler);

/* Add star buttons */

var starredItems = fetchStarred();

$('.schedule-item').each(function(){

  var currentID = $(this).attr('id');

  var favelink = $('<a />', {
    href: '#',
    'class': 'schedule-fave-link',
    'text': 'Star', 
    'title': 'Mark event for My Schedule'
  });

  if (!!starredItems && !!starredItems[currentID] && starredItems[currentID] == 1) {
    favelink.addClass('active');
  }

  favelink.click(function(e){
  	e.preventDefault();
  	$(this).toggleClass('active');
    var itemID = $(this).parent().attr('id');

  	if ($(this).hasClass('active')) {
      setStarred(itemID, 1);
  	}
  	else {
      setStarred(itemID, 0);
  	}
  });

  $(this).append(favelink);

});

/* Lol scroller */

var adjustHeaders = function() {
  var header = $('section.schedule .schedule-hour-marker');

  if (header.css('position') == 'fixed') {
    header.css({
      left: $('section.schedule').offset().left - $('section.schedule').scrollLeft()
    });
  }
  else {
    header.css({
      left: 0
    });
  }
};

$(window).scroll(function(){
  var schedulePosition = $('section.schedule').offset().top;
  var currentScroll = $(window).scrollTop();

  var headers = $('section.schedule .schedule-hour-marker');
  if (currentScroll >= schedulePosition) {
    $('section.schedule').addClass('scrolled');
    adjustHeaders();
  }
  else {
    $('section.schedule').removeClass('scrolled');
    adjustHeaders();
  }
});

$('section.schedule').scroll(function(){
  adjustHeaders();
});


});
})(jQuery, Drupal, document, window);
