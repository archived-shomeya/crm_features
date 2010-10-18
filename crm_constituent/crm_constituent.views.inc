<?php
//$Id$

  /**
 * @file
 * Provide views data and handlers.
 */

/**
 * Implementation of hook_views_data()
 */
function crm_constituent_views_data_alter(&$data) {
//  $data['crm_type_constituent']['table']['join'] = array(
//
//  );



  $data['uc_orders']['constituent'] = array(
    'group' => t('Constituent'),
    'title' => t('Associated Constituent'),
    'help' => t('Connect an order to an associated constituent.'),
    'relationship' => array(
      'handler' => 'crm_constituent_handler_order',
      'label' => t('constituent'),
      'base' => 'content_type_constituent',
    ),
  );
  $data['content_type_constituent']['table']['join'] = array(
    // vocabulary links to node through term_data via vid
    'node' => array(
      'left_field' => 'vid',
      'field' => 'vid',
    ),
  );
  $data['content_type_constituent']['constituent_node'] = array(
    'group' => t('Constituent'),
    'title' => t('Associated Constituent node data'),
    'help' => t('Connect an order to an associated constituent node.'),
    'relationship' => array(
      'handler' => 'crm_constituent_handler_node',
      'label' => t('constituent node'),
      'base' => 'node',
    ),
  );
}

/**
 * Implementation of hook_views_handlers() to register all of the basic handlers
 * views uses.
 */
function crm_constituent_views_handlers() {
  return array(
    'info' => array(
      'path' => drupal_get_path('module', 'crm_constituent') . '/views',
    ),
    'handlers' => array(
      'crm_constituent_handler_order' => array(
        'parent' => 'views_handler_relationship',
      ),
      'crm_constituent_handler_node' => array(
        'parent' => 'views_handler_relationship',
      ),
    ),
  );
}
