<?php

/**
 * Implementation of hook_strongarm().
 */
function crm_admin_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_savedsearches';
  $strongarm->value = array(
    'constituent_report_basic' => 'constituent_report_basic',
    'transaction_report_basic' => 'transaction_report_basic',
    'frontpage' => 0,
    'product_list_block' => 0,
    'store_search' => 0,
    'product_price' => 0,
    'product_add_to_cart_form' => 0,
    'product_featured_item_image' => 0,
    'related_products' => 0,
    'events' => 0,
    'saved_reports' => 0,
    'facilitators' => 0,
    'constituent_orders' => 0,
    'comments_recent' => 0,
    'tracker' => 0,
    'glossary' => 0,
    'archive' => 0,
    'backlinks' => 0,
    'popular' => 0,
    'taxonomy_term' => 0,
    'location_table' => 0,
    'location_directory' => 0,
    'user_location_table' => 0,
    'orders' => 0,
    'admin_content' => 0,
    'admin_users' => 0,
    'date_browser' => 0,
    'signup_current_signups' => 0,
    'signup_available_signups' => 0,
    'signup_user_list' => 0,
    'signup_user_vbo_admin_list' => 0,
    'signup_user_admin_list' => 0,
    'uc_products' => 0,
    'uc_signup_user_admin_list' => 0,
    'constituent_facilitator' => 0,
    'constituent_map' => 0,
    'constituent_notes' => 0,
    'constituent_participant' => 0,
    'recent_constituents' => 0,
    'search_constituents_basic' => 0,
  );

  $export['views_savedsearches'] = $strongarm;
  return $export;
}
