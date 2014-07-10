<?php
/**
 * @file
 * smash_locations.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function smash_locations_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'location_maps';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Location Maps';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Location Maps';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="[path]" data-url="[path]" title="Show [title] map">[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'venue_map' => 'venue_map',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'details/maps';
  $export['location_maps'] = $view;

  $view = new view();
  $view->name = 'precinct_map';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Precinct Map';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Precinct Map';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'leaflet';
  $handler->display->display_options['style_options']['data_source'] = 'field_map_position';
  $handler->display->display_options['style_options']['name_field'] = 'title';
  $handler->display->display_options['style_options']['description_field'] = 'body';
  $handler->display->display_options['style_options']['map'] = 'Rosehill Precinct Map';
  $handler->display->display_options['style_options']['zoom']['initialZoom'] = '1';
  $handler->display->display_options['style_options']['zoom']['minZoom'] = '1';
  $handler->display->display_options['style_options']['zoom']['maxZoom'] = '5';
  $handler->display->display_options['style_options']['icon']['iconSize']['x'] = '24';
  $handler->display->display_options['style_options']['icon']['iconSize']['y'] = '24';
  $handler->display->display_options['style_options']['icon']['iconAnchor']['x'] = '12';
  $handler->display->display_options['style_options']['icon']['iconAnchor']['y'] = '12';
  $handler->display->display_options['style_options']['icon']['html'] = 'field_landmark_icon';
  $handler->display->display_options['style_options']['icon']['htmlClass'] = 'map-icon';
  $handler->display->display_options['style_options']['vector_display']['stroke'] = 0;
  $handler->display->display_options['style_options']['vector_display']['fill'] = 0;
  $handler->display->display_options['style_options']['vector_display']['clickable'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Map Position */
  $handler->display->display_options['fields']['field_map_position']['id'] = 'field_map_position';
  $handler->display->display_options['fields']['field_map_position']['table'] = 'field_data_field_map_position';
  $handler->display->display_options['fields']['field_map_position']['field'] = 'field_map_position';
  $handler->display->display_options['fields']['field_map_position']['label'] = '';
  $handler->display->display_options['fields']['field_map_position']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_map_position']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_map_position']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_map_position']['settings'] = array(
    'data' => 'full',
  );
  /* Field: Content: Landmark Icon */
  $handler->display->display_options['fields']['field_landmark_icon']['id'] = 'field_landmark_icon';
  $handler->display->display_options['fields']['field_landmark_icon']['table'] = 'field_data_field_landmark_icon';
  $handler->display->display_options['fields']['field_landmark_icon']['field'] = 'field_landmark_icon';
  $handler->display->display_options['fields']['field_landmark_icon']['label'] = '';
  $handler->display->display_options['fields']['field_landmark_icon']['element_type'] = '0';
  $handler->display->display_options['fields']['field_landmark_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_landmark_icon']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_landmark_icon']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_landmark_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_landmark_icon']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_landmark_icon']['field_api_classes'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['field_api_classes'] = TRUE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Map Identifier (field_map_identifier) */
  $handler->display->display_options['filters']['field_map_identifier_value']['id'] = 'field_map_identifier_value';
  $handler->display->display_options['filters']['field_map_identifier_value']['table'] = 'field_data_field_map_identifier';
  $handler->display->display_options['filters']['field_map_identifier_value']['field'] = 'field_map_identifier_value';
  $handler->display->display_options['filters']['field_map_identifier_value']['value']['value'] = '2';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'map_location' => 'map_location',
  );
  /* Filter criterion: Content: Body (body) */
  $handler->display->display_options['filters']['body_value']['id'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['table'] = 'field_data_body';
  $handler->display->display_options['filters']['body_value']['field'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['operator'] = 'not empty';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['precinct_map'] = $view;

  $view = new view();
  $view->name = 'test_map_2';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Test map 2';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Test map 2';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'leaflet';
  $handler->display->display_options['style_options']['data_source'] = 'field_map_position';
  $handler->display->display_options['style_options']['name_field'] = 'title';
  $handler->display->display_options['style_options']['description_field'] = '#rendered_entity';
  $handler->display->display_options['style_options']['view_mode'] = 'teaser';
  $handler->display->display_options['style_options']['map'] = '1129 Ushijima';
  $handler->display->display_options['style_options']['zoom']['initialZoom'] = '0';
  $handler->display->display_options['style_options']['zoom']['minZoom'] = '0';
  $handler->display->display_options['style_options']['zoom']['maxZoom'] = '5';
  $handler->display->display_options['style_options']['vector_display']['stroke'] = 0;
  $handler->display->display_options['style_options']['vector_display']['fill'] = 0;
  $handler->display->display_options['style_options']['vector_display']['clickable'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Map Position */
  $handler->display->display_options['fields']['field_map_position']['id'] = 'field_map_position';
  $handler->display->display_options['fields']['field_map_position']['table'] = 'field_data_field_map_position';
  $handler->display->display_options['fields']['field_map_position']['field'] = 'field_map_position';
  $handler->display->display_options['fields']['field_map_position']['label'] = '';
  $handler->display->display_options['fields']['field_map_position']['element_type'] = '0';
  $handler->display->display_options['fields']['field_map_position']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_map_position']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_map_position']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_map_position']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_map_position']['settings'] = array(
    'data' => 'full',
  );
  $handler->display->display_options['fields']['field_map_position']['field_api_classes'] = TRUE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'test-map-2';
  $export['test_map_2'] = $view;

  return $export;
}
