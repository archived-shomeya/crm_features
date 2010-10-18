<?php

/**
 * Implementation of hook_strongarm().
 */
function crm_participant_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_participant';
  $strongarm->value = '1';

  $export['ant_participant'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_participant';
  $strongarm->value = '[type-name]';

  $export['ant_pattern_participant'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_participant';
  $strongarm->value = 0;

  $export['ant_php_participant'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_participant';
  $strongarm->value = array(
    'title' => '-1',
    'revision_information' => '3',
    'author' => '2',
    'options' => '4',
    'menu' => '0',
    'book' => '1',
    'path' => '5',
  );

  $export['content_extra_weights_participant'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_participant';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );

  $export['node_options_participant'] = $strongarm;
  return $export;
}
