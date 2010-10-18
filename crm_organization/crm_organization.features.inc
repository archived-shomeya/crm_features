<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function crm_organization_ctools_plugin_api() {
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
function crm_organization_node_info() {
  $items = array(
    'organization' => array(
      'name' => t('Organization'),
      'module' => 'features',
      'description' => t('An organization that facilitates The Ultimate Journey program.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
