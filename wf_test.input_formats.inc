<?php

/**
 * Implementation of hook_input_formats().
 */
function wf_test_input_formats() {
  $input_formats = array();

  $input_format = new stdClass;
  $input_format->api_version = 1;
  $input_format->name = 'CKEditor';
  $input_format->roles = array(
    2 => 'authenticated user',
  );
  $input_format->cache = TRUE;
  $input_format->settings = array(
  );
  $input_format->filters = array(
    'wysiwyg_fields' => array(
      '0' => '10',
    ),
  );
  $input_format->machine = 'ckeditor';
  $input_formats['ckeditor'] = $input_format;

  $input_format = new stdClass;
  $input_format->api_version = 1;
  $input_format->name = 'FCKEditor';
  $input_format->roles = array(
    2 => 'authenticated user',
  );
  $input_format->cache = TRUE;
  $input_format->settings = array(
  );
  $input_format->filters = array(
    'wysiwyg_fields' => array(
      '0' => '10',
    ),
  );
  $input_format->machine = 'fckeditor';
  $input_formats['fckeditor'] = $input_format;

  $input_format = new stdClass;
  $input_format->api_version = 1;
  $input_format->name = 'TinyMCE';
  $input_format->roles = array(
    2 => 'authenticated user',
  );
  $input_format->cache = TRUE;
  $input_format->settings = array(
  );
  $input_format->filters = array(
    'wysiwyg_fields' => array(
      '0' => '10',
    ),
  );
  $input_format->machine = 'tinymce';
  $input_formats['tinymce'] = $input_format;

  return $input_formats;

}
