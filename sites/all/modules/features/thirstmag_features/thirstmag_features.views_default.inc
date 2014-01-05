<?php
/**
 * @file
 * thirstmag_features.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function thirstmag_features_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'features_front_page_';
  $view->description = 'Features for the front page';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Features front page.';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Features';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Feature photo */
  $handler->display->display_options['fields']['field_feature_photo']['id'] = 'field_feature_photo';
  $handler->display->display_options['fields']['field_feature_photo']['table'] = 'field_data_field_feature_photo';
  $handler->display->display_options['fields']['field_feature_photo']['field'] = 'field_feature_photo';
  $handler->display->display_options['fields']['field_feature_photo']['label'] = '';
  $handler->display->display_options['fields']['field_feature_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_feature_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_feature_photo']['type'] = 'picture';
  $handler->display->display_options['fields']['field_feature_photo']['settings'] = array(
    'picture_group' => 'thirstmag_resp_bartik_views',
    'fallback_image_style' => '',
    'image_link' => 'content',
    'colorbox' => 'resp_bartik_thirstmag',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
    'feature' => 'feature',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['block_description'] = 'Front Page Features Block';
  $export['features_front_page_'] = $view;

  $view = new view();
  $view->name = 'related';
  $view->description = 'A view of other features.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Related Features';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Related';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Feature photo */
  $handler->display->display_options['fields']['field_feature_photo']['id'] = 'field_feature_photo';
  $handler->display->display_options['fields']['field_feature_photo']['table'] = 'field_data_field_feature_photo';
  $handler->display->display_options['fields']['field_feature_photo']['field'] = 'field_feature_photo';
  $handler->display->display_options['fields']['field_feature_photo']['label'] = '';
  $handler->display->display_options['fields']['field_feature_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_feature_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_feature_photo']['type'] = 'picture';
  $handler->display->display_options['fields']['field_feature_photo']['settings'] = array(
    'picture_group' => 'thirstmag_resp_bartik_views',
    'fallback_image_style' => '',
    'image_link' => 'content',
    'colorbox' => 'resp_bartik_thirstmag',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_product_type_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
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
    'feature' => 'feature',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['block_description'] = 'Related Features view block';
  $export['related'] = $view;

  return $export;
}
