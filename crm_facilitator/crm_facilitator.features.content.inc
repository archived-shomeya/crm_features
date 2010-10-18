<?php

/**
 * Implementation of hook_content_default_fields().
 */
function crm_facilitator_content_default_fields() {
  $fields = array();

  // Exported field: field_constituent_reference
  $fields['facilitator-field_constituent_reference'] = array(
    'field_name' => 'field_constituent_reference',
    'type_name' => 'facilitator',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'constituent' => 'constituent',
      'article' => 0,
      'book' => 0,
      'devotional' => 0,
      'donation' => 0,
      'facilitator' => 0,
      'group_welcome_message' => 0,
      'notes' => 0,
      'organization' => 0,
      'page' => 0,
      'participant' => 0,
      'product' => 0,
      'product_kit' => 0,
      'profile' => 0,
      'right_column_block_1' => 0,
      'story' => 0,
      'group' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_constituent_reference][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Constituent reference',
      'weight' => '-2',
      'description' => '',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_facilitator_certification
  $fields['facilitator-field_facilitator_certification'] = array(
    'field_name' => 'field_facilitator_certification',
    'type_name' => 'facilitator',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '',
    'max' => '',
    'allowed_values' => '0|Phase 1
1|Phase 2
2|Phase 3
',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_facilitator_certification][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Phase certification',
      'weight' => '-4',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_facilitator_group
  $fields['facilitator-field_facilitator_group'] = array(
    'field_name' => 'field_facilitator_group',
    'type_name' => 'facilitator',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'group' => 'group',
      'article' => 0,
      'book' => 0,
      'constituent' => 0,
      'devotional' => 0,
      'facilitator' => 0,
      'group_welcome_message' => 0,
      'organization' => 0,
      'page' => 0,
      'product' => 0,
      'product_kit' => 0,
      'profile' => 0,
      'right_column_block_1' => 0,
      'story' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_facilitator_group][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Group',
      'weight' => '-3',
      'description' => '',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Constituent reference');
  t('Group');
  t('Phase certification');

  return $fields;
}
