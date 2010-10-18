<?php

/**
 * Implementation of hook_strongarm().
 */
function crm_organization_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_organization';
  $strongarm->value = array(
    'title' => '4',
    'revision_information' => '12',
    'author' => '13',
    'options' => '14',
    'menu' => '10',
    'book' => '11',
    'path' => '15',
  );

  $export['content_extra_weights_organization'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_organization';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );

  $export['node_options_organization'] = $strongarm;
  return $export;
}
