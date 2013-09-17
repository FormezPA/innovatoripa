<?php
/**
 * @file
 * innovatoripa_maps.openlayers_maps.inc
 */

/**
 * Implements hook_openlayers_maps().
 */
function innovatoripa_maps_openlayers_maps() {
  $export = array();

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'persone_map';
  $openlayers_maps->title = 'Persone map';
  $openlayers_maps->description = 'Persone section map';
  $openlayers_maps->data = array(
    'width' => 'auto',
    'height' => '600px',
    'image_path' => 'sites/all/modules/contrib/openlayers/themes/default_dark/img/',
    'css_path' => 'sites/all/modules/contrib/openlayers/themes/default_dark/style.css',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '11.162109365814501, 42.55308028803351',
        'zoom' => '5',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_cluster' => array(
        'clusterlayer' => array(
          'users_search_openlayers_1' => 'users_search_openlayers_1',
        ),
        'distance' => '30',
        'threshold' => '',
        'display_cluster_numbers' => 1,
        'middle_lower_bound' => '15',
        'middle_upper_bound' => '50',
        'low_color' => 'rgb(141, 203, 61)',
        'middle_color' => 'rgb(49, 190, 145)',
        'high_color' => 'rgb(35, 59, 177)',
      ),
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_attribution' => array(
        'separator' => '',
      ),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
        'zoomBoxEnabled' => 1,
        'documentDrag' => 0,
      ),
      'openlayers_behavior_panzoombar' => array(
        'zoomWorldIcon' => 0,
        'panIcons' => 1,
      ),
      'openlayers_behavior_popup' => array(
        'layers' => array(
          'users_search_openlayers_1' => 'users_search_openlayers_1',
        ),
        'panMapIfOutOfView' => 0,
        'keepInMap' => 1,
      ),
      'openlayers_behavior_touch_navigation' => array(
        'documentDrag' => 1,
      ),
    ),
    'default_layer' => 'mapbox_world_bright',
    'layers' => array(
      'mapbox_world_light' => 'mapbox_world_light',
      'mapbox_world_bright' => 'mapbox_world_bright',
      'mapbox_world_print' => 'mapbox_world_print',
      'users_search_openlayers_1' => 'users_search_openlayers_1',
    ),
    'layer_weight' => array(
      'users_search_openlayers_1' => '0',
      'users_search_users_geo_json_search' => '0',
      'openlayers_geojson_picture_this' => '0',
      'openlayers_kml_example' => '0',
      'geofield_formatter' => '0',
    ),
    'layer_styles' => array(
      'geofield_formatter' => '0',
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'users_search_users_geo_json_search' => '0',
      'users_search_openlayers_1' => 'default_marker_red',
    ),
    'layer_styles_select' => array(
      'geofield_formatter' => '0',
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'users_search_users_geo_json_search' => '0',
      'users_search_openlayers_1' => 'default_marker_red',
    ),
    'layer_styles_temporary' => array(
      'geofield_formatter' => '0',
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'users_search_users_geo_json_search' => '0',
      'users_search_openlayers_1' => '0',
    ),
    'layer_activated' => array(
      'users_search_openlayers_1' => 'users_search_openlayers_1',
      'geofield_formatter' => 0,
      'openlayers_kml_example' => 0,
      'openlayers_geojson_picture_this' => 0,
      'users_search_users_geo_json_search' => 0,
    ),
    'layer_switcher' => array(
      'users_search_openlayers_1' => 0,
      'geofield_formatter' => 0,
      'openlayers_kml_example' => 0,
      'openlayers_geojson_picture_this' => 0,
      'users_search_users_geo_json_search' => 0,
    ),
    'projection' => 'EPSG:3857',
    'displayProjection' => 'EPSG:4326',
    'styles' => array(
      'default' => 'default_marker_green',
      'select' => 'default_marker_green',
      'temporary' => 'default_marker_green',
    ),
  );
  $export['persone_map'] = $openlayers_maps;

  return $export;
}
