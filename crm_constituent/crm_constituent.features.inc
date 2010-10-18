<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function crm_constituent_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function crm_constituent_node_info() {
  $items = array(
    'constituent' => array(
      'name' => t('Constituent'),
      'module' => 'features',
      'description' => t('A constituent represents either a prospect, participant, donor, facilitator, group leader or any member of The Ultimate Journey family that is being tracked.'),
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

/**
 * Implementation of hook_views_api().
 */
function crm_constituent_views_api() {
  return array(
    'api' => '2',
  );
}
