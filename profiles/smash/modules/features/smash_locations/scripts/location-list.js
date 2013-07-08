(function ($) {

Drupal.behaviors.locationMapBehaviour = {
  attach: function (context, settings) {

    var scroller = null;
    var initialZoom = 0.25;
    var currentZoom = initialZoom;

    var loader = function(show) {

      var removeLoader = function(callback){
        var currentLoader = $('.map-loader');
        if (currentLoader.length > 0) {
          currentLoader.fadeOut(function(){ 
            $(this).remove();
            if (!!callback) callback();
          });
        }
        else {
          if (!!callback) callback();
        }
      };
      if (!!show) {
        removeLoader(function(){
          var newLoader = $('<div />', {
            'class': 'map-loader'
          });
          $('body').append(newLoader);
        });
      }
      else {
        removeLoader();
      }
    }

    var zoomTo = function(delta) {
      if (!!scroller) {
        // scroller._offset(scroller.wrapper);
        scroller.zoom(0, 0, currentZoom * delta);
        currentZoom = scroller.scale;
      }
    };

    var scaffoldMapContainer = function(mapHtml) {
      var container = $('<div />', {
        'class': 'map-container',
        id: 'map-container'
      });

      var nav = $('<nav />', {
        'class': 'map-nav'
      });

      var close = $('<a />', {
        'class': 'map-container-close',
        href: '#',
        text: 'Close'
      });
      close.click(function(e){
        e.preventDefault();
        $(this).parent().parent().remove();
      });

      var zoomIn = $('<a />', {
        'class': 'map-container-zoomin',
        href: '#',
        text: 'Zoom In'
      });
      zoomIn.click(function(e){
        e.preventDefault();
        if (!!scroller) {
          zoomTo(2);
        }
      });

      var zoomOut = $('<a />', {
        'class': 'map-container-zoomout',
        href: '#',
        text: 'Zoom Out'
      });
      zoomOut.click(function(e){
        e.preventDefault();
        if (!!scroller) {
          zoomTo(0.5);
        }
      });

      nav.append(close).append(zoomIn).append(zoomOut);

      var mapInner = $('<div />', {
        'class': 'map-inner', 
        html: mapHtml
      });

      container.append(nav).append(mapInner);

      return container;
    };

    var setWidth = function(ctx) {
      $('.map-inner', ctx).width( $(ctx).width() );
      $('.map-inner article', ctx).width( $('.map-inner article img', ctx).width() );
    };

    var initMap = function(ctx) {
      var elem = $('.map-inner', ctx).get(0);

      $(window).resize(function(){
        setWidth(ctx);
      });
      setWidth(ctx);

      scroller = new iScroll(elem, {
        zoom: true,
        zoomMin: initialZoom,
        zoomMax: 1
      });
      scroller.zoom(0, 0, initialZoom, 0);
      scroller.scrollTo(0, 0, 0);
    };
    
    $('.view-location-maps .view-content a').click(function(e){
      e.preventDefault();

      loader(true);

      $.getJSON('/ajax/smash-locations', {
        path: $(this).attr('data-url')
      }, function(response){
        if (!!response.rendered) {
          $('#map-container').remove();
          var container = scaffoldMapContainer(response.rendered);
          $('body').append(container);
          initMap('#map-container');
          loader();
        }
      });
    });

  }
};

})(jQuery);
