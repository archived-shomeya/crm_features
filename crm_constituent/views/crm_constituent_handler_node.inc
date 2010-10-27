<?php
// $Id: views_handler_relationship_node_term_data.inc,v 1.3 2009/10/05 22:31:09 merlinofchaos Exp $
/**
 * @file
 * Views' relationship handlers.
 */

class crm_constituent_handler_node extends views_handler_relationship  {
  /**
   * Called to implement a relationship in a query.
   */
  function query() {
    $this->ensure_my_table();

    $def = $this->definition;
    $def['table'] = 'node';

    $this->query->add_table('node', $this->relationship);
    $def['left_table'] = 'content_type_constituent_users';
    $def['left_field'] = 'vid';
    $def['field'] = 'vid';
    if (!empty($this->options['required'])) {
      $def['type'] = 'INNER';
    }

    $join = new views_join();

    $join->definition = $def;
    $join->construct();
    $join->adjusted = TRUE;

    // use a short alias for this:
    $alias = $def['table'] . '_' . $this->table;

    $this->alias = $this->query->add_relationship($alias, $join, 'node', $this->relationship);
  }
}
