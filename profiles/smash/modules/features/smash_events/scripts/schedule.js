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

/* Detect overlap */

var columnItems = $('.schedule-column .schedule-column-items', '.view-schedule');
var longColumnItems = columnItems.not('.item-length-1, .item-length-0-half, .item-length-0-1q, .item-length-0-3q')

var colHeight = 80;

var getElemPosition = function(a) {
  return {
    l: a.offset().left,
    r: a.offset().left + a.width() - 1,
    t: a.offset().top,
    b: a.offset().top + a.height()
  }
};

var isOverlapping = function(aPos, bPos) {
  if (bPos.l > aPos.r || bPos.r < aPos.l) return false;
  if (bPos.t > aPos.b || bPos.b < aPos.t) return false;

  var horzOverlap = false, vertOverlap = false;

  if (bPos.l >= aPos.l && bPos.l < aPos.r) horzOverlap = true;
  if (!horzOverlap && bPos.r >= aPos.l && bPos.r < aPos.r) horzOverlap = true;
  if (!horzOverlap && bPos.l < aPos.l && bPos.r >= aPos.r) horzOverlap = true;
  if (!horzOverlap && aPos.l < bPos.l && aPos.r >= bPos.r) horzOverlap = true;

  if (bPos.t >= aPos.t && bPos.t < aPos.b) vertOverlap = true;
  if (!vertOverlap && bPos.b >= aPos.t && bPos.b < aPos.b) vertOverlap = true;
  if (!vertOverlap && bPos.t < aPos.t && bPos.b >= aPos.b) vertOverlap = true;
  if (!vertOverlap && aPos.t < bPos.t && aPos.b >= bPos.b) vertOverlap = true;

  return horzOverlap && vertOverlap;
};

var getCurrentTop = function(elem){
  var currentTop = parseInt(elem.css('top'), 10);
  if (isNaN(currentTop)) currentTop = 0;
  return +(currentTop);
};

var getPositionBands = function(items) {
  var bands = {
    0: {}
  };

  items.each(function(){
    var pos = getElemPosition($(this));
    var top = getCurrentTop($(this));

    if (typeof(bands[top]) == 'undefined') {
      bands[top] = [];
    }
    bands[top][this.id] = pos;
  });

  return bands;
};

var getOverlapBands = function(a, siblings) {
  var bands = getPositionBands(siblings);
  var overlapBands = {};
  var aPos = getElemPosition(a);

  var getPotentialPosition = function(aPos, delta, a) {
    var newPos = {
      l: aPos.l,
      r: aPos.r,
      t: aPos.t,
      b: aPos.b
    };

    newPos.t = +(getCurrentTop(a)) + +(delta);
    newPos.b = newPos.t + +(colHeight);
    return newPos;
  };

  for (var i in bands) {
    var aPos = getPotentialPosition(getElemPosition(a), i, a);

    var rowOverlap = false;
    for (var j in bands[i]) {
      
      var bPos = bands[i][j];
      
      bPos.t = +(getCurrentTop($('#' + j)));
      bPos.b = +(bPos.t) + colHeight;

      var hasOverlap = isOverlapping(aPos, bPos);

      if (hasOverlap) {
        rowOverlap = true;
        break;
      }
    }
    overlapBands[i] = rowOverlap;
  }

  return overlapBands;
};

columnItems.each(function(){
  var column = $(this);
  var columnContainer = column.parent();
  var items = $('> .schedule-item', column);
  if (items.length <= 1) return;

  items.sort(function(a, b){
    return $(b).width() > $(a).width() ? 1 : -1;
  });

  items.each(function(){
    var a = $(this);

    var overlapBands = getOverlapBands(a, items.not(a));

    var free = -1;
    var top = 0;
    for (var i in overlapBands) {
      if (i > top) {
        top = +(i);
      }
      if (overlapBands[i] == false) {
        free = i;
        break;
      }
    }

    if (free > -1) {
      a.css({
        top: free + 'px'
      });
    }
    else {
      var oldHeight = columnContainer.height();
      columnContainer.height(oldHeight + colHeight);
      a.css({
        top: oldHeight + 'px'
      });
    }
  });
});

/* Inside scroller */

var adjustText = function(elem) {
  var textMargin = 30;
  var view = $('.event-title, .event-time', elem);

  var schedWidth = $('section.schedule').width();
  var schedScroll = $('section.schedule').scrollLeft();
  var maxScroll = parseInt(elem.closest('.schedule-column').css('width'), 10) - schedWidth;
  var leftMargin = parseInt(elem.closest('.schedule-item').css('left'), 10);
  var rightMargin = maxScroll - leftMargin - elem.width();

  var currentScrollRatio = (schedScroll - leftMargin) / (maxScroll - leftMargin);
  if (currentScrollRatio < 0) currentScrollRatio = 0;
  if (currentScrollRatio > 1) currentScrollRatio = 1;

  view.each(function(){
    var currentView = $(this);
    
    var maxX = elem.width() - currentView.width() - (textMargin * 2);

    var currentX = currentScrollRatio * maxX;

    var cssParams = {
      position: 'absolute',
      left: (textMargin + Math.floor(currentX)) + 'px'
    };
    var pos = 'bottom';
    if (currentView.hasClass('event-title')) {
      pos = 'top';
    }
    cssParams[pos] = '10px';
    currentView.css(cssParams);
  });
};

var textReady = false;
var adjustAllText = function() {
  var links = longColumnItems.find('.dayview a');
  if (!textReady) {
    links.css({ position: 'relative' });
    textReady = true;
  }

  links.each(function(){
    adjustText($(this));
  });
};

/* Outside scroller */

var adjustHeaders = function() {
  var sched = $('section.schedule');
  var hourMarker = $('.schedule-hour-marker', sched);
  var scheduleHeader = $('.schedule-column > header', sched);

  if (sched.hasClass('scrolled-vert')) {
    hourMarker.css({
      left: $('section.schedule').offset().left - $('section.schedule').scrollLeft()
    });
  }
  else {
    hourMarker.css({
      left: 0
    });
  }

  var scrollingHorz = sched.hasClass('scrolled-horz'), 
  border = 2;
  scheduleHeader.each(function(){
    if (scrollingHorz) {
      $(this).css({
        top: $(this).parent().offset().top - $(window).scrollTop() + border,
        left: $('section.schedule').offset().left
      });
    }
    else {
      $(this).css({
        top: '',
        left: ''
      });
    }
  });

  adjustAllText();
};

var windowScroll = function(){
  var schedulePosition = $('section.schedule').offset().top;
  var currentScroll = $(window).scrollTop();

  var isVertScroll = $('section.schedule').hasClass('scrolled-vert');
  var scrollOverThresh = currentScroll >= schedulePosition;

  if (scrollOverThresh && !isVertScroll) {
    $('section.schedule').addClass('scrolled-vert');
  }
  else if (!scrollOverThresh && isVertScroll) {
    $('section.schedule').removeClass('scrolled-vert');
  }

  adjustHeaders();
};

var scheduleScroll = function(){
  var sched = $('section.schedule');
  var isHorzScroll = sched.hasClass('scrolled-horz');
  var scrollOverThresh = sched.scrollLeft() > 0;

  if (scrollOverThresh && !isHorzScroll) {
    sched.addClass('scrolled-horz');
  }
  else if (!scrollOverThresh && isHorzScroll) {
    sched.removeClass('scrolled-horz');
  }

  adjustHeaders();
};

$(window).scroll(windowScroll);
window.addEventListener("touchmove", windowScroll, false);

$('section.schedule').scroll(scheduleScroll);
$('section.schedule').get(0).addEventListener("touchmove", scheduleScroll, false);


});
})(jQuery, Drupal, document, window);
