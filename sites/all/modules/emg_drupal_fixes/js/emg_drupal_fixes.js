(function ($, Drupal) {		
$(function(){
//	The PictureFill Module does not add src attribute to Chrome, causing an error for other plugins such as nivo slider; so,
//		Add a src attribute based on the srcset attribute that is created.
	$(window).load(function(){
		$('picture source + img').each(function(){
			var img = $(this),
				src = img.attr('src');
			if((typeof src == 'undefined' || !src) && img.attr('srcset'))
				img.attr('src', img.attr('srcset'));
		});		
	});
	$(window).resize(function(){
		$('picture source + img').each(function(){
			var img = $(this),
				src = img.attr('src');
			if((typeof src == 'undefined' || !src) && img.attr('srcset'))
				img.attr('src', img.attr('srcset'));
		});	
	});
});
})(jQuery, Drupal);