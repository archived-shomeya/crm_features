<?php

/**
 * Implementation of hook_default_page_manager_handlers().
 */
function crm_constituent_default_page_manager_handlers() {
  $export = array();
  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_2';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Constituent View',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        1 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'constituent' => 'constituent',
            ),
          ),
          'context' => 'argument_nid_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display;
  $display->api_version = 1;
  $display->layout = 'twocol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left_above' => NULL,
      'right_above' => NULL,
      'middle' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
      'bottom' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->api_version = 1;
    $pane->pid = 'new-1';
    $pane->panel = 'left';
    $pane->type = 'content_field';
    $pane->subtype = 'field_constituent_first_name';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'default',
      'context' => 'argument_nid_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-1'] = $pane;
    $display->panels['left'][0] = 'new-1';
    $pane = new stdClass;
    $pane->api_version = 1;
    $pane->pid = 'new-2';
    $pane->panel = 'left';
    $pane->type = 'content_field';
    $pane->subtype = 'field_constituent_last_name';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'default',
      'context' => 'argument_nid_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-2'] = $pane;
    $display->panels['left'][1] = 'new-2';
    $pane = new stdClass;
    $pane->api_version = 1;
    $pane->pid = 'new-3';
    $pane->panel = 'left';
    $pane->type = 'content_field';
    $pane->subtype = 'field_constituent_organization';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'normal',
      'formatter' => 'default',
      'context' => 'argument_nid_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $display->content['new-3'] = $pane;
    $display->panels['left'][2] = 'new-3';
    $pane = new stdClass;
    $pane->api_version = 1;
    $pane->pid = 'new-4';
    $pane->panel = 'left';
    $pane->type = 'content_field';
    $pane->subtype = 'field_constituent_email';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'default',
      'context' => 'argument_nid_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $display->content['new-4'] = $pane;
    $display->panels['left'][3] = 'new-4';
    $pane = new stdClass;
    $pane->api_version = 1;
    $pane->pid = 'new-5';
    $pane->panel = 'left';
    $pane->type = 'content_field';
    $pane->subtype = 'field_constituent_location';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'default',
      'context' => 'argument_nid_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $display->content['new-5'] = $pane;
    $display->panels['left'][4] = 'new-5';
    $pane = new stdClass;
    $pane->api_version = 1;
    $pane->pid = 'new-6';
    $pane->panel = 'left';
    $pane->type = 'content_field';
    $pane->subtype = 'field_constituent_phone';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'default',
      'context' => 'argument_nid_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $display->content['new-6'] = $pane;
    $display->panels['left'][5] = 'new-6';
    $pane = new stdClass;
    $pane->api_version = 1;
    $pane->pid = 'new-7';
    $pane->panel = 'left';
    $pane->type = 'content_field';
    $pane->subtype = 'field_constituent_source';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'default',
      'context' => 'argument_nid_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $display->content['new-7'] = $pane;
    $display->panels['left'][6] = 'new-7';
    $pane = new stdClass;
    $pane->api_version = 1;
    $pane->pid = 'new-8';
    $pane->panel = 'left';
    $pane->type = 'content_field';
    $pane->subtype = 'field_constituent_reg_date';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'default',
      'context' => 'argument_nid_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $display->content['new-8'] = $pane;
    $display->panels['left'][7] = 'new-8';
    $pane = new stdClass;
    $pane->api_version = 1;
    $pane->pid = 'new-9';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'constituent_participant-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'path' => '',
      'context' => array(
        0 => 'argument_nid_1',
      ),
      'override_title' => 1,
      'override_title_text' => 'Participant record',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'block',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 8;
    $display->content['new-9'] = $pane;
    $display->panels['left'][8] = 'new-9';
    $pane = new stdClass;
    $pane->api_version = 1;
    $pane->pid = 'new-10';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'constituent_facilitator-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'path' => '',
      'context' => array(
        0 => 'argument_nid_1',
      ),
      'override_title' => 1,
      'override_title_text' => 'Facilitator record',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'block',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 9;
    $display->content['new-10'] = $pane;
    $display->panels['left'][9] = 'new-10';
    $pane = new stdClass;
    $pane->api_version = 1;
    $pane->pid = 'new-11';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<?php 
$node = node_load(%node:nid); 
print l(t(\'Add participant record\'), \'node/add/participant\', array(\'query\' => "edit[field_constituent_reference][0][nid][nid]=[nid: $node->nid]&". drupal_get_destination()));
print \'<br />\';
print l(t(\'Add facilitator record\'), \'node/add/facilitator\', array(\'query\' => "edit[field_constituent_reference][0][nid][nid]=[nid: $node->nid]&". drupal_get_destination()));

?>',
      'format' => '3',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 10;
    $display->content['new-11'] = $pane;
    $display->panels['left'][10] = 'new-11';
    $pane = new stdClass;
    $pane->api_version = 1;
    $pane->pid = 'new-12';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'constituent_map-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'path' => '',
      'context' => array(
        0 => 'argument_nid_1',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 11;
    $display->content['new-12'] = $pane;
    $display->panels['left'][11] = 'new-12';
    $pane = new stdClass;
    $pane->api_version = 1;
    $pane->pid = 'new-13';
    $pane->panel = 'right';
    $pane->type = 'content_field';
    $pane->subtype = 'field_constituent_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'link',
      'context' => 'argument_nid_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-13'] = $pane;
    $display->panels['right'][0] = 'new-13';
    $pane = new stdClass;
    $pane->api_version = 1;
    $pane->pid = 'new-14';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'constituent_notes-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'path' => '',
      'context' => array(
        0 => 'argument_nid_1',
      ),
      'override_title' => 1,
      'override_title_text' => 'Notes',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'block',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-14'] = $pane;
    $display->panels['right'][1] = 'new-14';
    $pane = new stdClass;
    $pane->api_version = 1;
    $pane->pid = 'new-15';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Add notes',
      'title' => '',
      'body' => '<?php 
$node = node_load(%node:nid); 
print l(t(\'Add note\'), \'node/add/notes\', array(\'query\' => "edit[field_constituent_reference][0][nid][nid]=[nid: $node->nid]&". drupal_get_destination()));
?>',
      'format' => '3',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $display->content['new-15'] = $pane;
    $display->panels['right'][2] = 'new-15';
    $pane = new stdClass;
    $pane->api_version = 1;
    $pane->pid = 'new-16';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'constituent_orders-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_nid_1',
      ),
      'override_title' => 1,
      'override_title_text' => 'Orders',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $display->content['new-16'] = $pane;
    $display->panels['right'][3] = 'new-16';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-3';
  $handler->conf['display'] = $display;

  $export['node_view_panel_context_2'] = $handler;
  return $export;
}
