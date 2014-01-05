<?php
/**
 * @file
 * thirstmag_features.features.inc
 */

/**
 * Implements hook_views_api().
 */
function thirstmag_features_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function thirstmag_features_node_info() {
  $items = array(
    'feature' => array(
      'name' => t('Feature'),
      'base' => 'node_content',
      'description' => t('An article used to write about something in particular.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
