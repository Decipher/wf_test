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
    'default' => 1,
    'user_choose' => 0,
    'show_toggle' => 1,
    'theme' => 'kama',
    'language' => 'en',
    'buttons' => array(
      'default' => array(
        'Bold' => 1,
        'Italic' => 1,
        'JustifyLeft' => 1,
        'JustifyCenter' => 1,
        'JustifyRight' => 1,
        'JustifyBlock' => 1,
        'BulletedList' => 1,
        'NumberedList' => 1,
        'Outdent' => 1,
        'Indent' => 1,
      ),
      'drupal' => array(
        'wysiwyg_fields_field_image' => 1,
        'wysiwyg_fields_field_link' => 1,
        'wysiwyg_fields_field_file' => 1,
        'wysiwyg_fields_field_node' => 1,
      ),
    ),
    'toolbar_loc' => 'top',
    'toolbar_align' => 'left',
    'path_loc' => 'bottom',
    'resizing' => 1,
    'verify_html' => 1,
    'preformatted' => 0,
    'convert_fonts_to_spans' => 1,
    'remove_linebreaks' => 1,
    'apply_source_formatting' => 0,
    'paste_auto_cleanup_on_paste' => 0,
    'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
    'css_setting' => 'theme',
    'css_path' => '',
    'css_classes' => '',
  );
  $wysiwyg->machine = 'ckeditor';

  $export['ckeditor'] = $wysiwyg;
  $wysiwyg = new stdClass;
  $wysiwyg->disabled = FALSE; /* Edit this to true to make a default wysiwyg disabled initially */
  $wysiwyg->api_version = 2;
  $wysiwyg->editor = 'fckeditor';
  $wysiwyg->settings = array(
    'default' => 1,
    'user_choose' => 0,
    'show_toggle' => 1,
    'theme' => 'advanced',
    'language' => 'en',
    'buttons' => array(
      'default' => array(
        'Bold' => 1,
        'Italic' => 1,
        'JustifyLeft' => 1,
        'JustifyCenter' => 1,
        'JustifyRight' => 1,
        'JustifyFull' => 1,
        'UnorderedList' => 1,
        'OrderedList' => 1,
        'Outdent' => 1,
        'Indent' => 1,
      ),
      'drupal' => array(
        'wysiwyg_fields_field_image' => 1,
        'wysiwyg_fields_field_link' => 1,
        'wysiwyg_fields_field_file' => 1,
        'wysiwyg_fields_field_node' => 1,
      ),
    ),
    'toolbar_loc' => 'top',
    'toolbar_align' => 'left',
    'path_loc' => 'bottom',
    'resizing' => 1,
    'verify_html' => 1,
    'preformatted' => 0,
    'convert_fonts_to_spans' => 1,
    'remove_linebreaks' => 1,
    'apply_source_formatting' => 0,
    'paste_auto_cleanup_on_paste' => 0,
    'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
    'css_setting' => 'theme',
    'css_path' => '',
    'css_classes' => '',
  );
  $wysiwyg->machine = 'fckeditor';

  $export['fckeditor'] = $wysiwyg;
  $wysiwyg = new stdClass;
  $wysiwyg->disabled = FALSE; /* Edit this to true to make a default wysiwyg disabled initially */
  $wysiwyg->api_version = 2;
  $wysiwyg->editor = 'tinymce';
  $wysiwyg->settings = array(
    'default' => 1,
    'user_choose' => 0,
    'show_toggle' => 1,
    'theme' => 'advanced',
    'language' => 'en',
    'buttons' => array(
      'default' => array(
        'bold' => 1,
        'italic' => 1,
        'justifyleft' => 1,
        'justifycenter' => 1,
        'justifyright' => 1,
        'justifyfull' => 1,
        'bullist' => 1,
        'numlist' => 1,
        'outdent' => 1,
        'indent' => 1,
      ),
      'drupal' => array(
        'wysiwyg_fields_field_image' => 1,
        'wysiwyg_fields_field_link' => 1,
        'wysiwyg_fields_field_file' => 1,
        'wysiwyg_fields_field_node' => 1,
      ),
    ),
    'toolbar_loc' => 'top',
    'toolbar_align' => 'left',
    'path_loc' => 'bottom',
    'resizing' => 1,
    'verify_html' => 1,
    'preformatted' => 0,
    'convert_fonts_to_spans' => 1,
    'remove_linebreaks' => 1,
    'apply_source_formatting' => 0,
    'paste_auto_cleanup_on_paste' => 0,
    'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
    'css_setting' => 'theme',
    'css_path' => '',
    'css_classes' => '',
  );
  $wysiwyg->machine = 'tinymce';

  $export['tinymce'] = $wysiwyg;
  return $export;
}
