var preloadAnnouncementImages = function(images){
  for (var i in images) {
    var im = new Image;
    im.src = images[i];
  }
};

var prepAnnouncementDisplay = function($, Drupal){
  var heroWrap = $('.field-name-field-hero a.hero-wrapped');
  var makeAnnouncement = function() {
    
    jQuery("audio, video").mediaelementplayer({
      loop: true,
      enablePluginDebug: true,
      plugins: ["flash","silverlight"],
      type: "",
      pluginPath: "/profiles/smash/modules/custom/smash_fool2013/scripts/lib/",
      flashName: "flashmediaelement.swf",
      silverlightName: "silverlightmediaelement.xap"
    });
    
    var playing = true;
  
    $('.special-announcement-container').css({
      position: 'fixed',
      bottom: '0px',
      left: '0px',
      zIndex: '9999',
      width: window.innerWidth + 'px',
      height: window.innerHeight + 'px'
    });
  
    // Index with Masonry
    $('.special-announcement-container').masonry({
      columnWidth:	70,
      itemSelector:	'.brick',
      fromBottom:		true,
      isFitWidth:   true
    }, function() {
      // Nothing
    });
    
    // Scrolling
    var scrollThrottle;
    $(window).bind('scroll', function() {
      // Throttling for IE
      if (!$.browser.msie) {
      } else {
        if (!scrollThrottle) {
          scrollThrottle = setTimeout(function() {
            scrollThrottle = null;
          }, 10);
        }
      }
    });
    
    // Setup listeners for transition and animation functions
    
    var animFunctions = {
      transitionend: ['webkitTransitionEnd', 'oTransitionEnd', 'transitionend'],
      animationstart: ['webkitAnimationStart', 'animationstart'],
      animationend: ['webkitAnimationEnd', 'animationend']
    };
    
    var animActions = {
      transitionend: function(e) {
        $(e.target).addClass('finished');
        setTimeout(function(){
          $(e.target).removeClass('finished');
          $(e.target).find('.finished').removeClass('finished');
        }, 500);
      },
      animationstart: function(e) {
        $(e.target).removeClass('finished');
      },
      animationend: function(e) {
        $(e.target).addClass('finished');
      }
    };
    
    var applyTransitionFuncs = function(elem) {
      for (var i in animFunctions) {
        for (var j in animFunctions[i]) {
          document.addEventListener(animFunctions[i][j], animActions[i], false);
        }
      }
    };
    
    // Create boxes
    
    var possibleCats = ['cat1', 'cat2', 'cat3', 'cat4', 'cat5', 'cat6', 'cat7', 'cat8', 'cat9', 'cata'];
    var possibleAnimations = ['bounce', 'shuffle', 'brrr', 'wobwob', 'shuffledouble', 'wobwob2'];
    
    var makeCat = function() {
      var newBox = $('<div class="brick"><span></span></div>');
      var newAnim = possibleAnimations[Math.floor(Math.random() * possibleAnimations.length)];
      var newCat = possibleCats[Math.floor(Math.random() * possibleCats.length)];
      newBox.find('span').addClass(newCat).css({
        '-webkit-animation-name': newAnim,
        '-moz-animation-name': newAnim,
        '-o-animation-name': newAnim,
        'animation-name': newAnim
      });
      applyTransitionFuncs(newBox.find('span').get(0));
      newBox.css({ height: ( Math.round(Math.random() * 64) + 48 ) + 'px' });
      var noclick = new NoClickDelay(newBox.get(0));
      $('.special-announcement-container').append(newBox).masonry('appended', newBox).masonry('reload');
    };
    
    $('#append').click(function(){
      makeCat();
    });
    
    $('.special-announcement-container').delegate('.brick', 'click', function(){
      $(this).remove();
      $('.special-announcement-container').masonry('reload');
      
      var emptyCheck = function(){
        if ($('.special-announcement-container').children('.brick').length == 0) {
          playing = false;
          $('audio.special-announcement-player').get(0).stop();
        }
      };
      
      var catCheck = Math.random();
      if (catCheck > 0.95) {
        catLoop(Math.floor(Math.random() * 10), 100, emptyCheck);
      }
      else if (catCheck > 0.5) {
        makeCat();
        emptyCheck();
      }
      else {
        emptyCheck();
      }
    });
    
    // Setup and play
    
    var winWidth = window.innerWidth / 70;
    var winHeight = window.innerHeight / 70 / 2;
    
    $('audio.special-announcement-player').get(0).play();
    
    var catLoop = function(maxCats, delay, callback) {
      callback = callback || function(){};
      
      var catCounter = 0;
      var catInterval = setInterval(function(){
        makeCat();
        catCounter++;
        if (catCounter >= maxCats) {
          clearInterval(catInterval);
          callback();
        }
      }, delay);
    };
    
    catLoop(winWidth * winHeight, 200);
  
  };
  
  heroWrap.find('img').attr('src', specialAnnounceURLs[0]);
  heroWrap.find('.hero-wrapped-content').html('<h2>Special Guest</h2><p>We are proud to announce a special <br />world first guest at SMASH! 2013.</p><p class="call-to-action-container"><strong class="call-to-action">View Presentation</strong></p>');
  
  heroWrap.one('click', function(e){
    e.preventDefault();
    makeAnnouncement();
    heroWrap.find('img').attr('src', specialAnnounceURLs[1]);
    heroWrap.find('.hero-wrapped-content').html('<h2>Special Guest is CATS</h2><p><strong>A whole bunch of cats <br />aaaaaaaaaa aaaa aaa a aaa</strong></p><p class="call-to-action-container"><strong class="call-to-action">AAAAAAAAAAAAA</strong></p>');
  });
};
