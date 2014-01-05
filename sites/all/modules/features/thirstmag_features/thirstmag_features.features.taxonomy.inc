<?php
/**
 * @file
 * thirstmag_features.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function thirstmag_features_taxonomy_default_vocabularies() {
  return array(
    'area' => array(
      'name' => 'Area',
      'machine_name' => 'area',
      'description' => 'The locations for outlets, e.g. Bangsar.',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'features' => array(
      'name' => 'Features',
      'machine_name' => 'features',
      'description' => 'The types of features on Thirstmag. Eg How-to.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'outlet_category' => array(
      'name' => 'Outlet Category',
      'machine_name' => 'outlet_category',
      'description' => 'The type of outlet. Bar, cafe etc.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'outlet_features' => array(
      'name' => 'Outlet features',
      'machine_name' => 'outlet_features',
      'description' => 'Options provided by the outlet',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'people' => array(
      'name' => 'Gender',
      'machine_name' => 'people',
      'description' => 'The gender of a person.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'products' => array(
      'name' => 'Products',
      'machine_name' => 'products',
      'description' => 'The classification for products.',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
