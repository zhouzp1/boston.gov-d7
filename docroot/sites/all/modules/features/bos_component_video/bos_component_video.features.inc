<?php
/**
 * @file
 * bos_component_video.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bos_component_video_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_paragraphs_info().
 */
function bos_component_video_paragraphs_info() {
  $items = array(
    'video' => array(
      'name' => 'Video',
      'bundle' => 'video',
      'locked' => '1',
    ),
  );
  return $items;
}
