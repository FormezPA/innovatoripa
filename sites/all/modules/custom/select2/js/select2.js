(function($) {
  Drupal.behaviors.select2 = {
    attach: function(context) {
      var select2_settings = Drupal.settings.select2;
      $.each(select2_settings, function(key, value) {
        $('#' + key).select2(value.options);
      });
    }
  };
})(jQuery);
