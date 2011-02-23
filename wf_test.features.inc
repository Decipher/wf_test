<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function wf_test_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "input_formats" && $api == "input_formats") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
  elseif ($module == "wysiwyg" && $api == "wysiwyg") {
    return array("version" => 2);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function wf_test_imagecache_default_presets() {
  $items = array(
    'wf_100x100' => array(
      'presetname' => 'wf_100x100',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '100',
            'height' => '100',
          ),
        ),
      ),
    ),
    'wf_collage_h' => array(
      'presetname' => 'wf_collage_h',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '378',
            'height' => '92',
          ),
        ),
      ),
    ),
    'wf_collage_v1' => array(
      'presetname' => 'wf_collage_v1',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '184',
            'height' => '92',
          ),
        ),
      ),
    ),
    'wf_collage_v2' => array(
      'presetname' => 'wf_collage_v2',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '184',
            'height' => '194',
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function wf_test_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Page'),
      'module' => 'features',
      'description' => t('A <em>page</em>, similar in form to a <em>story</em>, is a simple method for creating and displaying information that rarely changes, such as an "About us" section of a website. By default, a <em>page</em> entry does not allow visitor comments and is not featured on the site\'s initial home page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'wf_test' => array(
      'name' => t('Wysiwyg Fields test'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_wysiwyg_fields_icons().
 */
function wf_test_wysiwyg_fields_icons() {
  return array(
    drupal_get_path('module', 'wf_test') . '/assets/wysiwyg_fields',
  );
}
