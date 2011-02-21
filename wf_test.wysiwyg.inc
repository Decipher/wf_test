<?php

/**
 * Implementation of hook_default_wysiwyg().
 */
function wf_test_default_wysiwyg() {
  $export = array();
  $wysiwyg = new stdClass;
  $wysiwyg->disabled = FALSE; /* Edit this to true to make a default wysiwyg disabled initially */
  $wysiwyg->api_version = 2;
  $wysiwyg->editor = 'ckeditor';
  $wysiwyg->settings = array(
    'buttons' => array(
      'drupal' => array(
        'wysiwyg_fields_field_image' => 1,
      ),
    ),
  );
  $wysiwyg->machine = 'ckeditor';

  $export['ckeditor'] = $wysiwyg;
  $wysiwyg = new stdClass;
  $wysiwyg->disabled = FALSE; /* Edit this to true to make a default wysiwyg disabled initially */
  $wysiwyg->api_version = 2;
  $wysiwyg->editor = 'fckeditor';
  $wysiwyg->settings = array(
    'buttons' => array(
      'drupal' => array(
        'wysiwyg_fields_field_image' => 1,
      ),
    ),
  );
  $wysiwyg->machine = 'fckeditor';

  $export['fckeditor'] = $wysiwyg;
  $wysiwyg = new stdClass;
  $wysiwyg->disabled = FALSE; /* Edit this to true to make a default wysiwyg disabled initially */
  $wysiwyg->api_version = 2;
  $wysiwyg->editor = 'tinymce';
  $wysiwyg->settings = array(
    'buttons' => array(
      'drupal' => array(
        'wysiwyg_fields_field_image' => 1,
      ),
    ),
  );
  $wysiwyg->machine = 'tinymce';

  $export['tinymce'] = $wysiwyg;
  return $export;
}
