<?php
// $Id: views_handler_relationship_node_term_data.inc,v 1.3 2009/10/05 22:31:09 merlinofchaos Exp $
/**
 * @file
 * Views' relationship handlers.
 */

class crm_constituent_handler_order extends views_handler_relationship  {
  /**
   * Called to implement a relationship in a query.
   */
  function query() {
    $this->ensure_my_table();

    $def = $this->definition;
    $def['table'] = 'content_type_constituent';

    $this->query->add_table('content_type_constituent', $this->relationship);
    $def['left_table'] = 'users';
    $def['left_field'] = 'uid';
    $def['field'] = 'field_constituent_account_uid';
    if (!empty($this->options['required'])) {
      $def['type'] = 'INNER';
    }


    $join = new views_join();

    $join->definition = $def;
    $join->construct();
    $join->adjusted = TRUE;

    // use a short alias for this:
    $alias = $def['table'] . '_' . $this->table;

    $this->alias = $this->query->add_relationship($alias, $join, 'content_type_constituent', $this->relationship);
  }
}
