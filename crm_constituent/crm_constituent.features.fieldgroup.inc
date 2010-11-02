<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function crm_constituent_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_address
  $groups['constituent-group_address'] = array(
    'group_type' => 'multigroup',
    'type_name' => 'constituent',
    'group_name' => 'group_address',
    'label' => 'Address',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'label' => NULL,
      ),
      'multigroup' => array(
        'multiple-columns' => 0,
        'required' => 1,
        'multiple' => '1',
        'labels' => array(
          '0' => '',
          '1' => '',
          '2' => '',
          '3' => '',
          '4' => '',
          '5' => '',
          '6' => '',
          '7' => '',
          '8' => '',
          '9' => '',
        ),
        'default-order' => 1,
      ),
    ),
    'weight' => '36',
    'fields' => array(
      '0' => 'field_constituent_location',
      '1' => 'field_address_label',
    ),
  );

  // Exported group: group_email
  $groups['constituent-group_email'] = array(
    'group_type' => 'multigroup',
    'type_name' => 'constituent',
    'group_name' => 'group_email',
    'label' => 'Email',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'label' => NULL,
      ),
      'multigroup' => array(
        'multiple-columns' => 0,
        'required' => 1,
        'multiple' => '1',
        'labels' => array(
          '0' => '',
          '1' => '',
          '2' => '',
          '3' => '',
          '4' => '',
          '5' => '',
          '6' => '',
          '7' => '',
          '8' => '',
          '9' => '',
        ),
        'default-order' => 1,
      ),
    ),
    'weight' => '35',
    'fields' => array(
      '0' => 'field_constituent_email',
      '1' => 'field_email_label',
    ),
  );

  // Exported group: group_facilitator_info
  $groups['constituent-group_facilitator_info'] = array(
    'group_type' => 'standard',
    'type_name' => 'constituent',
    'group_name' => 'group_facilitator_info',
    'label' => 'Facilitator info',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'label' => 'above',
      ),
      'multigroup' => array(
        'default-order' => 0,
      ),
    ),
    'weight' => '43',
    'fields' => array(
      '0' => 'field_constituent_f_phase_cert',
    ),
  );

  // Exported group: group_participant_info
  $groups['constituent-group_participant_info'] = array(
    'group_type' => 'standard',
    'type_name' => 'constituent',
    'group_name' => 'group_participant_info',
    'label' => 'Participant info',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'label' => 'above',
      ),
      'multigroup' => array(
        'default-order' => 0,
      ),
    ),
    'weight' => '41',
    'fields' => array(
      '0' => 'field_constituent_p_status',
      '1' => 'field_constituent_p_phases',
    ),
  );

  // Exported group: group_phone
  $groups['constituent-group_phone'] = array(
    'group_type' => 'multigroup',
    'type_name' => 'constituent',
    'group_name' => 'group_phone',
    'label' => 'Phone',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'label' => NULL,
      ),
      'multigroup' => array(
        'multiple-columns' => 0,
        'required' => 1,
        'multiple' => '1',
        'labels' => array(
          '0' => '',
          '1' => '',
          '2' => '',
          '3' => '',
          '4' => '',
          '5' => '',
          '6' => '',
          '7' => '',
          '8' => '',
          '9' => '',
        ),
        'default-order' => 1,
      ),
    ),
    'weight' => '37',
    'fields' => array(
      '0' => 'field_constituent_phone',
      '1' => 'field_phone_label',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Address');
  t('Email');
  t('Facilitator info');
  t('Participant info');
  t('Phone');

  return $groups;
}
