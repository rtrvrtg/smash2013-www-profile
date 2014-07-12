<?php
/**
 * @file
 * smash_guests.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function smash_guests_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'guest_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Guest List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Guests';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_guest_year',
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
  /* Sort criterion: Content: Family Name (field_family_name) */
  $handler->display->display_options['sorts']['field_family_name_value']['id'] = 'field_family_name_value';
  $handler->display->display_options['sorts']['field_family_name_value']['table'] = 'field_data_field_family_name';
  $handler->display->display_options['sorts']['field_family_name_value']['field'] = 'field_family_name_value';
  /* Sort criterion: Content: Given Name (field_given_name) */
  $handler->display->display_options['sorts']['field_given_name_value']['id'] = 'field_given_name_value';
  $handler->display->display_options['sorts']['field_given_name_value']['table'] = 'field_data_field_given_name';
  $handler->display->display_options['sorts']['field_given_name_value']['field'] = 'field_given_name_value';
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
    'guest' => 'guest',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Year (field_guest_year) */
  $handler->display->display_options['arguments']['field_guest_year_value']['id'] = 'field_guest_year_value';
  $handler->display->display_options['arguments']['field_guest_year_value']['table'] = 'field_data_field_guest_year';
  $handler->display->display_options['arguments']['field_guest_year_value']['field'] = 'field_guest_year_value';
  $handler->display->display_options['arguments']['field_guest_year_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_guest_year_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_guest_year_value']['default_argument_options']['argument'] = '2014';
  $handler->display->display_options['arguments']['field_guest_year_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_guest_year_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_guest_year_value']['summary_options']['items_per_page'] = '25';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'events_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Previous Guests at SMASH!';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_guest_year',
      'rendered' => 1,
      'rendered_strip' => 1,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<p>Since 2008, SMASH! has been committed to bringing the best possible talent from across the world to discuss the anime industry, meet with fans and share their experiences. In the past we\'ve been honoured to have been joined by guests such as Shinichi \'Nabeshin\' Watanabe, Hidenobu Kiuchi, Shin-Ichiro Miki, Sakura Tange, Yuko Miyamura and Tiffany Grant. In 2014, we\'re back again with more amazing guests to join us in celebrating our eighth year!</p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p>Information about events is coming soon!</p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  /* Field: Content: Teaser */
  $handler->display->display_options['fields']['field_teaser']['id'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['table'] = 'field_data_field_teaser';
  $handler->display->display_options['fields']['field_teaser']['field'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_teaser']['element_type'] = '0';
  $handler->display->display_options['fields']['field_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_teaser']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_teaser']['field_api_classes'] = TRUE;
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_guest_year']['id'] = 'field_guest_year';
  $handler->display->display_options['fields']['field_guest_year']['table'] = 'field_data_field_guest_year';
  $handler->display->display_options['fields']['field_guest_year']['field'] = 'field_guest_year';
  $handler->display->display_options['fields']['field_guest_year']['label'] = '';
  $handler->display->display_options['fields']['field_guest_year']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_guest_year']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_guest_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_guest_year']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_guest_year']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_guest_year']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_guest_year']['field_api_classes'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Family Name (field_family_name) */
  $handler->display->display_options['sorts']['field_family_name_value']['id'] = 'field_family_name_value';
  $handler->display->display_options['sorts']['field_family_name_value']['table'] = 'field_data_field_family_name';
  $handler->display->display_options['sorts']['field_family_name_value']['field'] = 'field_family_name_value';
  /* Sort criterion: Content: Given Name (field_given_name) */
  $handler->display->display_options['sorts']['field_given_name_value']['id'] = 'field_given_name_value';
  $handler->display->display_options['sorts']['field_given_name_value']['table'] = 'field_data_field_given_name';
  $handler->display->display_options['sorts']['field_given_name_value']['field'] = 'field_given_name_value';
  /* Sort criterion: Content: Year (field_guest_year) */
  $handler->display->display_options['sorts']['field_guest_year_value']['id'] = 'field_guest_year_value';
  $handler->display->display_options['sorts']['field_guest_year_value']['table'] = 'field_data_field_guest_year';
  $handler->display->display_options['sorts']['field_guest_year_value']['field'] = 'field_guest_year_value';
  $handler->display->display_options['sorts']['field_guest_year_value']['order'] = 'DESC';
  $handler->display->display_options['path'] = 'guests/previous';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Previous Guests';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['guest_list'] = $view;

  return $export;
}
