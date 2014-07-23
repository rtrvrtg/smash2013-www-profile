(function($){

$(document).ready(function(){

	var fields = $('input[name="field_event_date_time[und][0][value][date]"], input[name="field_event_date_time[und][0][value2][date]"]');

	var updateField = function(){
		if ($(this).val().indexOf('-') >= 0) {
			var parts = $(this).val().split('-');
			var newVal = [
				parts[1],
				parts[2],
				parts[0]
			].join('/');
			$(this).val(newVal);
		}
	};

	fields.change(updateField);
	fields.each(updateField);

});


})(jQuery);
