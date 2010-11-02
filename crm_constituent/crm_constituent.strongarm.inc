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
  $strongarm->name = 'comment_anonymous_constituent';
  $strongarm->value = 0;

  $export['comment_anonymous_constituent'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_constituent';
  $strongarm->value = '2';

  $export['comment_constituent'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_constituent';
  $strongarm->value = '3';

  $export['comment_controls_constituent'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_constituent';
  $strongarm->value = '4';

  $export['comment_default_mode_constituent'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_constituent';
  $strongarm->value = '1';

  $export['comment_default_order_constituent'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_constituent';
  $strongarm->value = '50';

  $export['comment_default_per_page_constituent'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_constituent';
  $strongarm->value = '0';

  $export['comment_form_location_constituent'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_constituent';
  $strongarm->value = '1';

  $export['comment_preview_constituent'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_constituent';
  $strongarm->value = '1';

  $export['comment_subject_field_constituent'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_constituent';
  $strongarm->value = array(
    'title' => '43',
    'revision_information' => '46',
    'author' => '45',
    'options' => '47',
    'comment_settings' => '30',
    'menu' => '44',
    'path' => '48',
    'attachments' => '31',
  );

  $export['content_extra_weights_constituent'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_constituent';
  $strongarm->value = array(
    0 => 'status',
  );

  $export['node_options_constituent'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_constituent';
  $strongarm->value = '1';

  $export['upload_constituent'] = $strongarm;
  return $export;
}
