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
    '100x100' => array(
      'presetname' => '100x100',
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
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function wf_test_node_info() {
  $items = array(
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
