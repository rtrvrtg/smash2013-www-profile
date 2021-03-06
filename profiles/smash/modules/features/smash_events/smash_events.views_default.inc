<?php
/**
 * @file
 * smash_events.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function smash_events_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'event_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Event List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Event List';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_event_type',
      'rendered' => 1,
      'rendered_strip' => 1,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'event_type' => 'event_type',
    'section' => 0,
    'tags' => 0,
    'vendor_type' => 0,
    'gallery' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  /* Field: Content: Event Type */
  $handler->display->display_options['fields']['field_event_type']['id'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['fields']['field_event_type']['field'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['label'] = '';
  $handler->display->display_options['fields']['field_event_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_type']['element_label_colon'] = FALSE;
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'term_node_tid';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'event' => 'event',
  );
  /* Filter criterion: Content: Show in Menu (field_show_in_menu) */
  $handler->display->display_options['filters']['field_show_in_menu_value']['id'] = 'field_show_in_menu_value';
  $handler->display->display_options['filters']['field_show_in_menu_value']['table'] = 'field_data_field_show_in_menu';
  $handler->display->display_options['filters']['field_show_in_menu_value']['field'] = 'field_show_in_menu_value';
  $handler->display->display_options['filters']['field_show_in_menu_value']['value'] = array(
    1 => '1',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Show in Menu (field_show_in_menu) */
  $handler->display->display_options['filters']['field_show_in_menu_value']['id'] = 'field_show_in_menu_value';
  $handler->display->display_options['filters']['field_show_in_menu_value']['table'] = 'field_data_field_show_in_menu';
  $handler->display->display_options['filters']['field_show_in_menu_value']['field'] = 'field_show_in_menu_value';
  $handler->display->display_options['filters']['field_show_in_menu_value']['value'] = array(
    1 => '1',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'events_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Events';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<p>A huge stack of events will be on at SMASH! 2014 — there\'s something here for everyone! These are the event details we have up at the moment, feel free to explore! We have lots of events for 2014 - keep an eye on this page! <br /></p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p>Information about events is coming soon!</p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['path'] = 'events';
  $export['event_list'] = $view;

  $view = new view();
  $view->name = 'location_events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Location Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Events';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_location_target_id']['id'] = 'field_location_target_id';
  $handler->display->display_options['relationships']['field_location_target_id']['table'] = 'field_data_field_location';
  $handler->display->display_options['relationships']['field_location_target_id']['field'] = 'field_location_target_id';
  $handler->display->display_options['relationships']['field_location_target_id']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Event Date/Time */
  $handler->display->display_options['fields']['field_event_date_time']['id'] = 'field_event_date_time';
  $handler->display->display_options['fields']['field_event_date_time']['table'] = 'field_data_field_event_date_time';
  $handler->display->display_options['fields']['field_event_date_time']['field'] = 'field_event_date_time';
  $handler->display->display_options['fields']['field_event_date_time']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_time']['element_type'] = '0';
  $handler->display->display_options['fields']['field_event_date_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_time']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_event_date_time']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_time']['settings'] = array(
    'format_type' => 'time_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_event_date_time']['field_api_classes'] = TRUE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_location_target_id';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['location_events'] = $view;

  $view = new view();
  $view->name = 'schedule';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Schedule';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Schedule';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'day';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '0';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['style_options']['groupby_times'] = 'half';
  $handler->display->display_options['style_options']['groupby_field'] = 'field_location';
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['colors']['calendar_colors_type'] = array(
    'article' => '#ffffff',
    'page' => '#ffffff',
    'event' => '#ffffff',
    'gallery_image' => '#ffffff',
    'guest' => '#ffffff',
    'home_page' => '#ffffff',
    'location' => '#ffffff',
    'sponsor' => '#ffffff',
    'vendor' => '#ffffff',
    'venue_map' => '#ffffff',
    'webform' => '#ffffff',
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location']['element_type'] = '0';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_location']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_location']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_location']['field_api_classes'] = TRUE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Event Date/Time */
  $handler->display->display_options['fields']['field_event_date_time']['id'] = 'field_event_date_time';
  $handler->display->display_options['fields']['field_event_date_time']['table'] = 'field_data_field_event_date_time';
  $handler->display->display_options['fields']['field_event_date_time']['field'] = 'field_event_date_time';
  $handler->display->display_options['fields']['field_event_date_time']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_time']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_time']['element_type'] = '0';
  $handler->display->display_options['fields']['field_event_date_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_time']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_event_date_time']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_time']['settings'] = array(
    'format_type' => 'time_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_event_date_time']['field_api_classes'] = TRUE;
  /* Field: Content: Schedule Block */
  $handler->display->display_options['fields']['field_schedule_block']['id'] = 'field_schedule_block';
  $handler->display->display_options['fields']['field_schedule_block']['table'] = 'field_data_field_schedule_block';
  $handler->display->display_options['fields']['field_schedule_block']['field'] = 'field_schedule_block';
  $handler->display->display_options['fields']['field_schedule_block']['label'] = '';
  $handler->display->display_options['fields']['field_schedule_block']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_schedule_block']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_schedule_block']['element_type'] = '0';
  $handler->display->display_options['fields']['field_schedule_block']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_schedule_block']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_schedule_block']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_schedule_block']['type'] = 'list_key';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<strong class="event-title">[title]</strong> <span class="event-time">[field_event_date_time]</span>';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['nothing']['alter']['link_class'] = 'event-type-[field_schedule_block]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = '0';
  /* Contextual filter: Content: Event Date/Time -  start date (field_event_date_time) */
  $handler->display->display_options['arguments']['field_event_date_time_value']['id'] = 'field_event_date_time_value';
  $handler->display->display_options['arguments']['field_event_date_time_value']['table'] = 'field_data_field_event_date_time';
  $handler->display->display_options['arguments']['field_event_date_time_value']['field'] = 'field_event_date_time_value';
  $handler->display->display_options['arguments']['field_event_date_time_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_event_date_time_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_event_date_time_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_event_date_time_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_event_date_time_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_event_date_time_value']['granularity'] = 'day';
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
    'event' => 'event',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'details/schedule';
  $export['schedule'] = $view;

  return $export;
}
