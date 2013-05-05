<?php
/**
 * @file
 * smash_sponsors.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function smash_sponsors_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'sponsor_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Sponsor List';
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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
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
  /* Field: Content: Sponsor Homepage */
  $handler->display->display_options['fields']['field_sponsor_homepage']['id'] = 'field_sponsor_homepage';
  $handler->display->display_options['fields']['field_sponsor_homepage']['table'] = 'field_data_field_sponsor_homepage';
  $handler->display->display_options['fields']['field_sponsor_homepage']['field'] = 'field_sponsor_homepage';
  $handler->display->display_options['fields']['field_sponsor_homepage']['label'] = '';
  $handler->display->display_options['fields']['field_sponsor_homepage']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sponsor_homepage']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_sponsor_homepage']['element_type'] = '0';
  $handler->display->display_options['fields']['field_sponsor_homepage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sponsor_homepage']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_sponsor_homepage']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_sponsor_homepage']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_sponsor_homepage']['type'] = 'link_plain';
  /* Field: Content: Sponsor Logo */
  $handler->display->display_options['fields']['field_sponsor_logo']['id'] = 'field_sponsor_logo';
  $handler->display->display_options['fields']['field_sponsor_logo']['table'] = 'field_data_field_sponsor_logo';
  $handler->display->display_options['fields']['field_sponsor_logo']['field'] = 'field_sponsor_logo';
  $handler->display->display_options['fields']['field_sponsor_logo']['label'] = '';
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['text'] = '<a href="[field_sponsor_homepage]" title="[title]" rel="external" target="_blank">[field_sponsor_logo]</a>';
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['alt'] = '[title]';
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['rel'] = 'external';
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_sponsor_logo']['element_type'] = '0';
  $handler->display->display_options['fields']['field_sponsor_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sponsor_logo']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_sponsor_logo']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_sponsor_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sponsor_logo']['settings'] = array(
    'image_style' => 'sponsor',
    'image_link' => '',
  );
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
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
    'sponsor' => 'sponsor',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['sponsor_list'] = $view;

  return $export;
}
