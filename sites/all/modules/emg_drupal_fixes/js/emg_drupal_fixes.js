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
	
//	If the browser cannot handle SVG, replace it with a PNG
	var $body = $('body');
	if($body.hasClass('ie7'))
		Modernizr.svg = false;
	if (!Modernizr.svg) {
		$("img[src$='.svg']").each(function(){
		  var img = $(this);
		  img.attr("src", img.attr('src').replace(/\.svg/, '.png'));
		});		 
		$body.addClass('no-svg');
	}
});
})(jQuery, Drupal);