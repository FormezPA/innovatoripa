<?php
/**
 * @file
 * base_frontend.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function base_frontend_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function base_frontend_image_default_styles() {
  $styles = array();

  // Exported image style: community_full.
  $styles['community_full'] = array(
    'name' => 'community_full',
    'effects' => array(
      13 => array(
        'label' => 'Scala e ritaglia',
        'help' => 'Scala e ritaglia preserva il rapporto di dimensioni dell\'immagine originale per poi ritagliare la dimensione in eccesso. Questo metodo è utile nei casi in cui si desidera ottenere delle miniature perfettamente quadrate senza deformare l\'immagine.',
        'effect callback' => 'retina_images_image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'retina_images_image_resize_form',
        'summary theme' => 'retina_images_image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 150,
          'height' => 150,
          'retinafy' => 1,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: community_menu.
  $styles['community_menu'] = array(
    'name' => 'community_menu',
    'effects' => array(
      6 => array(
        'label' => 'Scala e ritaglia',
        'help' => 'Scala e ritaglia preserva il rapporto di dimensioni dell\'immagine originale per poi ritagliare la dimensione in eccesso. Questo metodo è utile nei casi in cui si desidera ottenere delle miniature perfettamente quadrate senza deformare l\'immagine.',
        'effect callback' => 'retina_images_image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'retina_images_image_resize_form',
        'summary theme' => 'retina_images_image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 70,
          'retinafy' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: community_preview.
  $styles['community_preview'] = array(
    'name' => 'community_preview',
    'effects' => array(
      12 => array(
        'label' => 'Scala e ritaglia',
        'help' => 'Scala e ritaglia preserva il rapporto di dimensioni dell\'immagine originale per poi ritagliare la dimensione in eccesso. Questo metodo è utile nei casi in cui si desidera ottenere delle miniature perfettamente quadrate senza deformare l\'immagine.',
        'effect callback' => 'retina_images_image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'retina_images_image_resize_form',
        'summary theme' => 'retina_images_image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 150,
          'height' => 150,
          'retinafy' => 1,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: community_thumb.
  $styles['community_thumb'] = array(
    'name' => 'community_thumb',
    'effects' => array(
      7 => array(
        'label' => 'Scala e ritaglia',
        'help' => 'Scala e ritaglia preserva il rapporto di dimensioni dell\'immagine originale per poi ritagliare la dimensione in eccesso. Questo metodo è utile nei casi in cui si desidera ottenere delle miniature perfettamente quadrate senza deformare l\'immagine.',
        'effect callback' => 'retina_images_image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'retina_images_image_resize_form',
        'summary theme' => 'retina_images_image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 100,
          'retinafy' => 1,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: featured_content.
  $styles['featured_content'] = array(
    'name' => 'featured_content',
    'effects' => array(
      8 => array(
        'label' => 'Scala e ritaglia',
        'help' => 'Scala e ritaglia preserva il rapporto di dimensioni dell\'immagine originale per poi ritagliare la dimensione in eccesso. Questo metodo è utile nei casi in cui si desidera ottenere delle miniature perfettamente quadrate senza deformare l\'immagine.',
        'effect callback' => 'retina_images_image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'retina_images_image_resize_form',
        'summary theme' => 'retina_images_image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 200,
          'height' => 200,
          'retinafy' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: institutional_logos.
  $styles['institutional_logos'] = array(
    'name' => 'institutional_logos',
    'effects' => array(
      11 => array(
        'label' => 'Scala',
        'help' => 'La trasformazione in scala mantiene il rapporto delle dimensioni dell\'immagine originale. Se viene impostata una sola dimensione, l\'altra sarà calcolata di conseguenza.',
        'effect callback' => 'retina_images_image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'retina_images_image_scale_form',
        'summary theme' => 'retina_images_image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 60,
          'upscale' => 0,
          'retinafy' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: search_result.
  $styles['search_result'] = array(
    'name' => 'search_result',
    'effects' => array(
      10 => array(
        'label' => 'Scala e ritaglia',
        'help' => 'Scala e ritaglia preserva il rapporto di dimensioni dell\'immagine originale per poi ritagliare la dimensione in eccesso. Questo metodo è utile nei casi in cui si desidera ottenere delle miniature perfettamente quadrate senza deformare l\'immagine.',
        'effect callback' => 'retina_images_image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'retina_images_image_resize_form',
        'summary theme' => 'retina_images_image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 150,
          'height' => 150,
          'retinafy' => 1,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: teaser_image.
  $styles['teaser_image'] = array(
    'name' => 'teaser_image',
    'effects' => array(
      4 => array(
        'label' => 'Scala e ritaglia',
        'help' => 'Scala e ritaglia preserva il rapporto di dimensioni dell\'immagine originale per poi ritagliare la dimensione in eccesso. Questo metodo è utile nei casi in cui si desidera ottenere delle miniature perfettamente quadrate senza deformare l\'immagine.',
        'effect callback' => 'retina_images_image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'retina_images_image_resize_form',
        'summary theme' => 'retina_images_image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 120,
          'height' => 120,
          'retinafy' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: user_full.
  $styles['user_full'] = array(
    'name' => 'user_full',
    'effects' => array(
      16 => array(
        'label' => 'Scala e ritaglia',
        'help' => 'Scala e ritaglia preserva il rapporto di dimensioni dell\'immagine originale per poi ritagliare la dimensione in eccesso. Questo metodo è utile nei casi in cui si desidera ottenere delle miniature perfettamente quadrate senza deformare l\'immagine.',
        'effect callback' => 'retina_images_image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'retina_images_image_resize_form',
        'summary theme' => 'retina_images_image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 200,
          'height' => 200,
          'retinafy' => 1,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: user_preview.
  $styles['user_preview'] = array(
    'name' => 'user_preview',
    'effects' => array(
      15 => array(
        'label' => 'Scala e ritaglia',
        'help' => 'Scala e ritaglia preserva il rapporto di dimensioni dell\'immagine originale per poi ritagliare la dimensione in eccesso. Questo metodo è utile nei casi in cui si desidera ottenere delle miniature perfettamente quadrate senza deformare l\'immagine.',
        'effect callback' => 'retina_images_image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'retina_images_image_resize_form',
        'summary theme' => 'retina_images_image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 80,
          'height' => 80,
          'retinafy' => 1,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: user_thumb.
  $styles['user_thumb'] = array(
    'name' => 'user_thumb',
    'effects' => array(
      14 => array(
        'label' => 'Scala e ritaglia',
        'help' => 'Scala e ritaglia preserva il rapporto di dimensioni dell\'immagine originale per poi ritagliare la dimensione in eccesso. Questo metodo è utile nei casi in cui si desidera ottenere delle miniature perfettamente quadrate senza deformare l\'immagine.',
        'effect callback' => 'retina_images_image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'retina_images_image_resize_form',
        'summary theme' => 'retina_images_image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 100,
          'retinafy' => 1,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}
