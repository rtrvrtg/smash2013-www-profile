<?php
/**
 * @file
 * page_hero.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function page_hero_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'page_hero';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Page Hero';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Hero Image */
  $handler->display->display_options['fields']['field_page_hero_image']['id'] = 'field_page_hero_image';
  $handler->display->display_options['fields']['field_page_hero_image']['table'] = 'field_data_field_page_hero_image';
  $handler->display->display_options['fields']['field_page_hero_image']['field'] = 'field_page_hero_image';
  $handler->display->display_options['fields']['field_page_hero_image']['label'] = '';
  $handler->display->display_options['fields']['field_page_hero_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_page_hero_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_page_hero_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_page_hero_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_page_hero_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_page_hero_image']['settings'] = array(
    'image_style' => 'page_hero',
    'image_link' => '',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'page_hero' => 'page_hero',
  );
  /* Filter criterion: Content: Hero URL (field_hero_url:url) */
  $handler->display->display_options['filters']['field_hero_url_url']['id'] = 'field_hero_url_url';
  $handler->display->display_options['filters']['field_hero_url_url']['table'] = 'field_data_field_hero_url';
  $handler->display->display_options['filters']['field_hero_url_url']['field'] = 'field_hero_url_url';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['page_hero'] = $view;

  return $export;
}
