(function ($) {

Drupal.behaviors.locationMapBehaviour = {
  attach: function (context, settings) {
    var elem = $('.node.node-venue-map .field-name-field-map-image').get(0);
    var zoom = 1;
    var scroller = new iScroll(elem, {
    	zoom: true,
    	zoomMin: zoom,
    	zoomMax: 4
    });
    scroller.zoom(0, 0, zoom, 0);
    scroller.scrollTo(0, 0, 0);
  }
};

})(jQuery);
