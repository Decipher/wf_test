<?php

/**
 * Implementation of hook_content_default_fields().
 */
function wf_test_content_default_fields() {
  $fields = array();

  // Exported field: field_file
  $fields['wf_test-field_file'] = array(
    'field_name' => 'field_file',
    'type_name' => 'wf_test',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => '',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'wysiwyg_fields_status' => 1,
      'wysiwyg_fields_icon' => '32c1419a9092fb94fcc30f95d7a66fb4',
      'wysiwyg_fields_formatters' => array(
        'default' => 'default',
        'path_plain' => 'path_plain',
        'url_plain' => 'url_plain',
      ),
      'wysiwyg_fields_hide' => 1,
      'wysiwyg_fields_delete' => 1,
      'label' => 'File',
      'weight' => '3',
      'description' => '',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Exported field: field_image
  $fields['wf_test-field_image'] = array(
    'field_name' => 'field_image',
    'type_name' => 'wf_test',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '1',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'wysiwyg_fields_status' => 1,
      'wysiwyg_fields_icon' => 'd50522754f0bc7cc44d2f5231a467fe8',
      'wysiwyg_fields_formatters' => array(
        'custom_formatters_wf_collage' => 'custom_formatters_wf_collage',
        'custom_formatters_wf_gallery' => 'custom_formatters_wf_gallery',
        'custom_formatters_wf_img_caption' => 'custom_formatters_wf_img_caption',
        'wf_100x100_default' => 'wf_100x100_default',
      ),
      'wysiwyg_fields_hide' => 1,
      'wysiwyg_fields_delete' => 1,
      'label' => 'Image',
      'weight' => '2',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_link
  $fields['wf_test-field_link'] = array(
    'field_name' => 'field_link',
    'type_name' => 'wf_test',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'link',
    'required' => '0',
    'multiple' => '1',
    'module' => 'link',
    'active' => '1',
    'attributes' => array(
      'target' => 'default',
      'rel' => '',
      'class' => '',
      'title' => '',
    ),
    'display' => array(
      'url_cutoff' => '80',
    ),
    'url' => 0,
    'title' => 'optional',
    'title_value' => '',
    'enable_tokens' => 0,
    'validate_url' => 1,
    'widget' => array(
      'wysiwyg_fields_status' => 1,
      'wysiwyg_fields_icon' => 'ef67a4e9689efda71625a2ef894fb700',
      'wysiwyg_fields_formatters' => array(
        'custom_formatters_wf_link_screenshot' => 'custom_formatters_wf_link_screenshot',
        'default' => 'default',
        'separate' => 'separate',
      ),
      'wysiwyg_fields_hide' => 1,
      'wysiwyg_fields_delete' => 1,
      'default_value' => array(
        '0' => array(
          'url' => '',
          'title' => '',
          'wysiwyg_fields_formatters' => 'link_formatter_default',
          'wysiwyg_fields' => array(
            'wysiwyg_fields_delta' => 0,
            'wysiwyg_fields_formatters' => '',
            'wysiwyg_fields_insert' => 'Insert',
            'wysiwyg_fields_select' => 0,
          ),
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Link',
      'weight' => '5',
      'description' => '',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Exported field: field_node
  $fields['wf_test-field_node'] = array(
    'field_name' => 'field_node',
    'type_name' => 'wf_test',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '1',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'wf_test' => 'wf_test',
      'page' => 0,
      'story' => 0,
    ),
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'wysiwyg_fields_status' => 1,
      'wysiwyg_fields_icon' => '3d77cc3f37f70bb06a746ef9d116c860',
      'wysiwyg_fields_formatters' => array(
        'default' => 'default',
        'full' => 'full',
        'teaser' => 'teaser',
      ),
      'wysiwyg_fields_hide' => 1,
      'wysiwyg_fields_delete' => 1,
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_node][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Node',
      'weight' => '4',
      'description' => '',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('File');
  t('Image');
  t('Link');
  t('Node');

  return $fields;
}
