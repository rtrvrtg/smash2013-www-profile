<?php
/**
 * @file
 * smash_workflow_configuration.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function smash_workflow_configuration_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Basic Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'page' => 'page',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b65837cd-98c7-41f3-a21c-02a706c91af9';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-250496c9-af80-4510-b143-4c2ef2379bb7';
    $pane->panel = 'left';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '250496c9-af80-4510-b143-4c2ef2379bb7';
    $display->content['new-250496c9-af80-4510-b143-4c2ef2379bb7'] = $pane;
    $display->panels['left'][0] = 'new-250496c9-af80-4510-b143-4c2ef2379bb7';
    $pane = new stdClass();
    $pane->pid = 'new-0609baed-153a-4c7e-b0db-bc9cbe6a38d3';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '0609baed-153a-4c7e-b0db-bc9cbe6a38d3';
    $display->content['new-0609baed-153a-4c7e-b0db-bc9cbe6a38d3'] = $pane;
    $display->panels['left'][1] = 'new-0609baed-153a-4c7e-b0db-bc9cbe6a38d3';
    $pane = new stdClass();
    $pane->pid = 'new-55050313-7880-492b-ab03-53bf39b32c0d';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_sidebar_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'field_collection_view',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'edit' => 'Edit',
        'delete' => 'Delete',
        'add' => 'Add',
        'description' => 1,
        'view_mode' => 'full',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '55050313-7880-492b-ab03-53bf39b32c0d';
    $display->content['new-55050313-7880-492b-ab03-53bf39b32c0d'] = $pane;
    $display->panels['right'][0] = 'new-55050313-7880-492b-ab03-53bf39b32c0d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-250496c9-af80-4510-b143-4c2ef2379bb7';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  return $export;
}
