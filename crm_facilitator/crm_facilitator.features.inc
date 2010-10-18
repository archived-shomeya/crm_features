<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function crm_facilitator_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function crm_facilitator_node_info() {
  $items = array(
    'facilitator' => array(
      'name' => t('Facilitator'),
      'module' => 'features',
      'description' => t('Facilitator content type, works in conjunction with constituents.'),
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
