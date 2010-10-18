<?php

/**
 * Implementation of hook_strongarm().
 */
function crm_facilitator_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_facilitator';
  $strongarm->value = '1';

  $export['ant_facilitator'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_facilitator';
  $strongarm->value = '[type-name]';

  $export['ant_pattern_facilitator'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_facilitator';
  $strongarm->value = 0;

  $export['ant_php_facilitator'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_facilitator';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '2',
    'author' => '1',
    'options' => '3',
    'menu' => '-1',
    'book' => '0',
    'path' => '4',
  );

  $export['content_extra_weights_facilitator'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_facilitator';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );

  $export['node_options_facilitator'] = $strongarm;
  return $export;
}
