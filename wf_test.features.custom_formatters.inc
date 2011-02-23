<?php

/**
 * Implementation of hook_custom_formatters_defaults().
 */
function wf_test_custom_formatters_defaults() {
  return array(
    'wf_collage' => array(
      'name' => 'wf_collage',
      'label' => 'Wysiwyg Fields: Collage',
      'field_types' => 'a:1:{i:0;s:9:"filefield";}',
      'multiple' => '1',
      'description' => '',
      'mode' => 'advanced',
      'code' => '$output = \'\';

    $template = array(
      array(\'h\', 0, 0),
      array(\'v1\', 0, 103),
      array(\'v1\', 0, 204),
      array(\'v1\', 388, 204),
      array(\'v2\', 194, 103),
      array(\'v2\', 388, 0)
    );

    $count = 0;
    $index = 0;
    while ($count < 6) {
      $output .= "<div style=\'position: absolute; left: {$template[$count][1]}px; top: {$template[$count][2]}px;\'>" . theme(\'imagecache\', "wf_collage_{$template[$count][0]}", $element[$index][\'#item\'][\'filepath\']) . "</div>";
      $index = $index == (count(element_children($element)) - 1) ? 0 : $index + 1;
      $count++;
    }

    return "<div style=\'position: relative; height: 296px; width: 572px;\'>{$output}</div>";',
      'status' => '1',
      'source' => 'module',
    ),
    'wf_gallery' => array(
      'name' => 'wf_gallery',
      'label' => 'Wysiwyg Fields: Gallery',
      'field_types' => 'a:1:{i:0;s:9:"filefield";}',
      'multiple' => '1',
      'description' => '',
      'mode' => 'advanced',
      'code' => '$output = \'\';
    foreach (element_children($element) as $child) {
      $output .= "<div style=\'padding-right: 10px; float: left;\'>" . theme(\'imagecache\', \'wf_100x100\', $element[$child][\'#item\'][\'filepath\']) . "</div>";
    }

    return "
    <div style=\'background-color: #000; color: #FFF; padding: 10px;\' class=\'clear-block\'>
      <h2>Gallery</h2>
      {$output}
    </div>";',
      'status' => '1',
      'source' => 'module',
    ),
    'wf_img_caption' => array(
      'name' => 'wf_img_caption',
      'label' => 'Wysiwyg Fields: Image w/caption',
      'field_types' => 'a:1:{i:0;s:9:"filefield";}',
      'multiple' => '0',
      'description' => '',
      'mode' => 'basic',
      'code' => '<div style="float: left; padding: 5px 10px 10px 0; position: relative;">
      <img src="/[filefield-imagecache-wf_250x250]" />
      <div style="background-color: #000; bottom: 10px; color: #FFF; opacity: 0.6; position: absolute; width: 250px;">
        <div style="padding: 10px;">[filefield-description]</div>
      </div>
    </div>',
      'status' => '1',
      'source' => 'module',
    ),
    'wf_link_screenshot' => array(
      'name' => 'wf_link_screenshot',
      'label' => 'Wysiwyg Fields: Link: Screenshot',
      'field_types' => 'a:1:{i:0;s:4:"link";}',
      'multiple' => '0',
      'description' => '',
      'mode' => 'advanced',
      'code' => 'return "
    <div style=\'background-color: #000; display: block; float: left; margin: 5px 10px 10px 0; padding: 2px; text-align: center; width: 120px;\'>
      <a href=\'{$element[\'#item\'][\'url\']}\' style=\'color: #fff;\'>
        <img src=\'http://images.shrinktheweb.com/xino.php?stwembed=1&stwaccesskeyid=73a0f3eebb3c2a1&stwsize=sm&stwurl={$element[\'#item\'][\'url\']}\' style=\'display: block;\' />
        {$element[\'#item\'][\'title\']}
      </a>
    </div>";',
      'status' => '1',
      'source' => 'module',
    ),
  );
}
