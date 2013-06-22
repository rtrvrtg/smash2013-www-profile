(function($, Drupal, document, window){
$(document).ready(function(){

$('.schedule-item').each(function(){

  var favelink = $('<a />', {
    href: '#',
    'class': 'schedule-fave-link',
    'html': '☆' // ★
  });

  $(this).append(favelink);

});

});
})(jQuery, Drupal, document, window);
