<?php

/**
 * Implementation of hook_strongarm().
 */
function crm_notes_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_notes';
  $strongarm->value = '1';

  $export['ant_notes'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_notes';
  $strongarm->value = '[type-name]';

  $export['ant_pattern_notes'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_notes';
  $strongarm->value = 0;

  $export['ant_php_notes'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_notes';
  $strongarm->value = array(
    'title' => '-2',
    'revision_information' => '2',
    'author' => '1',
    'options' => '3',
    'menu' => '-1',
    'book' => '0',
    'path' => '4',
  );

  $export['content_extra_weights_notes'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_notes';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );

  $export['node_options_notes'] = $strongarm;
  return $export;
}
