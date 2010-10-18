<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function crm_notes_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function crm_notes_node_info() {
  $items = array(
    'notes' => array(
      'name' => t('Notes'),
      'module' => 'features',
      'description' => t('Notes content type to attach to other types such as constituent.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
