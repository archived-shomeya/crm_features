<?php

/**
 * Implementation of hook_content_default_fields().
 */
function crm_organization_content_default_fields() {
  $fields = array();

  // Exported field: field_organization_contact
  $fields['organization-field_organization_contact'] = array(
    'field_name' => 'field_organization_contact',
    'type_name' => 'organization',
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
      'facilitator' => 0,
      'group_welcome_message' => 0,
      'notes' => 0,
      'organization' => 0,
      'page' => 0,
      'panel' => 0,
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
          '_error_element' => 'default_value_widget][field_organization_contact][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Primary contact',
      'weight' => '8',
      'description' => '',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_organization_email
  $fields['organization-field_organization_email'] = array(
    'field_name' => 'field_organization_email',
    'type_name' => 'organization',
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
    'type' => 'email',
    'required' => '0',
    'multiple' => '1',
    'module' => 'email',
    'active' => '1',
    'widget' => array(
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'email' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'E-mail',
      'weight' => '7',
      'description' => '',
      'type' => 'email_textfield',
      'module' => 'email',
    ),
  );

  // Exported field: field_organization_location
  $fields['organization-field_organization_location'] = array(
    'field_name' => 'field_organization_location',
    'type_name' => 'organization',
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
    'type' => 'location',
    'required' => '0',
    'multiple' => '0',
    'module' => 'location_cck',
    'active' => '1',
    'location_settings' => array(
      'form' => array(
        'fields' => array(
          'name' => array(
            'collect' => 1,
            'default' => '',
            'weight' => 2,
          ),
          'street' => array(
            'collect' => 1,
            'default' => '',
            'weight' => 4,
          ),
          'additional' => array(
            'collect' => 1,
            'default' => '',
            'weight' => 6,
          ),
          'city' => array(
            'collect' => 0,
            'default' => '',
            'weight' => 8,
          ),
          'province' => array(
            'collect' => 0,
            'default' => '',
            'weight' => 10,
          ),
          'postal_code' => array(
            'collect' => 0,
            'default' => '',
            'weight' => 12,
          ),
          'country' => array(
            'collect' => 1,
            'default' => 'us',
            'weight' => 14,
          ),
          'locpick' => array(
            'collect' => 1,
            'weight' => 20,
          ),
        ),
      ),
      'display' => array(
        'hide' => array(
          'name' => 'name',
          'locpick' => 'locpick',
          'map_link' => 'map_link',
          'coords' => 'coords',
          'street' => 0,
          'additional' => 0,
          'city' => 0,
          'province' => 0,
          'postal_code' => 0,
          'country' => 0,
          'province_name' => 0,
          'country_name' => 0,
        ),
      ),
    ),
    'gmap_macro' => '<p>
	[gmap ]</p>
',
    'gmap_marker' => 'blue',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'lid' => FALSE,
          'name' => '',
          'street' => '',
          'additional' => '',
          'city' => '',
          'province' => '',
          'postal_code' => '',
          'country' => 'us',
          'locpick' => array(
            'user_latitude' => '',
            'user_longitude' => '',
          ),
          'latitude' => 0,
          'longitude' => 0,
          'source' => 0,
          'is_primary' => 0,
          'delete_location' => FALSE,
          'cck_preview_in_progress' => TRUE,
          'location_settings' => array(
            'form' => array(
              'fields' => array(
                'name' => array(
                  'default' => '',
                  'collect' => 1,
                  'weight' => 2,
                ),
                'street' => array(
                  'default' => '',
                  'collect' => 1,
                  'weight' => 4,
                ),
                'additional' => array(
                  'default' => '',
                  'collect' => 1,
                  'weight' => 6,
                ),
                'city' => array(
                  'default' => '',
                  'collect' => 0,
                  'weight' => 8,
                ),
                'province' => array(
                  'default' => '',
                  'collect' => 0,
                  'weight' => 10,
                ),
                'postal_code' => array(
                  'default' => '',
                  'collect' => 0,
                  'weight' => 12,
                ),
                'country' => array(
                  'default' => 'us',
                  'collect' => 1,
                  'weight' => 14,
                ),
                'locpick' => array(
                  'default' => array(
                    'user_latitude' => '',
                    'user_longitude' => '',
                  ),
                  'collect' => 1,
                  'weight' => 20,
                  'nodiff' => TRUE,
                ),
                'lid' => array(
                  'default' => FALSE,
                ),
                'latitude' => array(
                  'default' => 0,
                ),
                'longitude' => array(
                  'default' => 0,
                ),
                'source' => array(
                  'default' => 0,
                ),
                'is_primary' => array(
                  'default' => 0,
                ),
                'delete_location' => array(
                  'default' => FALSE,
                  'nodiff' => TRUE,
                ),
                'cck_preview_in_progress' => array(
                  'default' => TRUE,
                ),
                'location_settings' => array(
                  'default' => array(
                    'form' => array(
                      'fields' => array(
                        'name' => array(
                          'default' => '',
                          'collect' => 1,
                          'weight' => 2,
                        ),
                        'street' => array(
                          'default' => '',
                          'collect' => 1,
                          'weight' => 4,
                        ),
                        'additional' => array(
                          'default' => '',
                          'collect' => 1,
                          'weight' => 6,
                        ),
                        'city' => array(
                          'default' => '',
                          'collect' => 0,
                          'weight' => 8,
                        ),
                        'province' => array(
                          'default' => '',
                          'collect' => 0,
                          'weight' => 10,
                        ),
                        'postal_code' => array(
                          'default' => '',
                          'collect' => 0,
                          'weight' => 12,
                        ),
                        'country' => array(
                          'default' => 'us',
                          'collect' => 1,
                          'weight' => 14,
                        ),
                        'locpick' => array(
                          'default' => array(
                            'user_latitude' => '',
                            'user_longitude' => '',
                          ),
                          'collect' => 1,
                          'weight' => 20,
                          'nodiff' => TRUE,
                        ),
                        'cck_preview_in_progress' => array(
                          'default' => TRUE,
                        ),
                        'location_settings' => array(
                          'default' => array(
                            'form' => array(
                              'fields' => array(
                                'lid' => array(
                                  'default' => FALSE,
                                ),
                                'name' => array(
                                  'default' => '',
                                  'collect' => 1,
                                  'weight' => 2,
                                ),
                                'street' => array(
                                  'default' => '',
                                  'collect' => 1,
                                  'weight' => 4,
                                ),
                                'additional' => array(
                                  'default' => '',
                                  'collect' => 1,
                                  'weight' => 6,
                                ),
                                'city' => array(
                                  'default' => '',
                                  'collect' => 0,
                                  'weight' => 8,
                                ),
                                'province' => array(
                                  'default' => '',
                                  'collect' => 0,
                                  'weight' => 10,
                                ),
                                'postal_code' => array(
                                  'default' => '',
                                  'collect' => 0,
                                  'weight' => 12,
                                ),
                                'country' => array(
                                  'default' => 'us',
                                  'collect' => 1,
                                  'weight' => 14,
                                ),
                                'locpick' => array(
                                  'default' => FALSE,
                                  'collect' => 1,
                                  'weight' => 20,
                                  'nodiff' => TRUE,
                                ),
                                'latitude' => array(
                                  'default' => 0,
                                ),
                                'longitude' => array(
                                  'default' => 0,
                                ),
                                'source' => array(
                                  'default' => 0,
                                ),
                                'is_primary' => array(
                                  'default' => 0,
                                ),
                                'delete_location' => array(
                                  'default' => FALSE,
                                  'nodiff' => TRUE,
                                ),
                              ),
                            ),
                          ),
                        ),
                        'lid' => array(
                          'default' => FALSE,
                        ),
                        'latitude' => array(
                          'default' => 0,
                        ),
                        'longitude' => array(
                          'default' => 0,
                        ),
                        'source' => array(
                          'default' => 0,
                        ),
                        'is_primary' => array(
                          'default' => 0,
                        ),
                        'delete_location' => array(
                          'default' => FALSE,
                          'nodiff' => TRUE,
                        ),
                      ),
                    ),
                    'display' => array(
                      'hide' => array(
                        'name' => 0,
                        'street' => 0,
                        'additional' => 0,
                        'city' => 0,
                        'province' => 0,
                        'postal_code' => 0,
                        'country' => 0,
                        'locpick' => 0,
                        'province_name' => 0,
                        'country_name' => 0,
                        'map_link' => 0,
                        'coords' => 0,
                      ),
                    ),
                  ),
                ),
              ),
            ),
            'display' => array(
              'hide' => array(
                'locpick' => 'locpick',
                'province_name' => 'province_name',
                'country_name' => 'country_name',
                'coords' => 'coords',
                'name' => 0,
                'street' => 0,
                'additional' => 0,
                'city' => 0,
                'province' => 0,
                'postal_code' => 0,
                'country' => 0,
                'map_link' => 0,
              ),
            ),
          ),
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Address',
      'weight' => '5',
      'description' => '',
      'type' => 'location',
      'module' => 'location_cck',
    ),
  );

  // Exported field: field_organization_phone
  $fields['organization-field_organization_phone'] = array(
    'field_name' => 'field_organization_phone',
    'type_name' => 'organization',
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
    'type' => 'ca_phone',
    'required' => '0',
    'multiple' => '1',
    'module' => 'phone',
    'active' => '1',
    'phone_country_code' => 0,
    'ca_phone_separator' => '',
    'ca_phone_parentheses' => 0,
    'widget' => array(
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_organization_phone][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Phone',
      'weight' => '6',
      'description' => '',
      'type' => 'phone_textfield',
      'module' => 'phone',
    ),
  );

  // Exported field: field_organization_type
  $fields['organization-field_organization_type'] = array(
    'field_name' => 'field_organization_type',
    'type_name' => 'organization',
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
    'allowed_values' => '0|Church
1|Non-profit
2|Business',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Type',
      'weight' => '3',
      'description' => 'Select the type of organization.',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Address');
  t('E-mail');
  t('Phone');
  t('Primary contact');
  t('Type');

  return $fields;
}
