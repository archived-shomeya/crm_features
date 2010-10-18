<?php

/**
 * Implementation of hook_strongarm().
 */
function crm_constituent_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_constituent';
  $strongarm->value = '1';

  $export['ant_constituent'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_constituent';
  $strongarm->value = '[field_constituent_first_name-raw] [field_constituent_last_name-raw]';

  $export['ant_pattern_constituent'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_constituent';
  $strongarm->value = 1;

  $export['ant_php_constituent'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_constituent';
  $strongarm->value = array(
    'title' => '42',
    'revision_information' => '46',
    'author' => '45',
    'options' => '47',
    'menu' => '43',
    'book' => '44',
    'path' => '48',
  );

  $export['content_extra_weights_constituent'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_constituent';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );

  $export['node_options_constituent'] = $strongarm;
  return $export;
}
