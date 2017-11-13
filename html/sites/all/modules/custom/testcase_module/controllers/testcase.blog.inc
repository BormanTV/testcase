<?php

class TestcaseBlogController extends WebservicesEntityController {

  const NODE_TYPE = 'blog';

  protected function index() {
    $query = db_select('node', 'n');
    $nids = $query
        ->fields('n', array('nid'))
        ->condition('type', self::NODE_TYPE)
        ->addTag('node_access')
        ->execute()
        ->fetchCol();
    $nodes = array_values(node_load_multiple($nids));

    return $nodes;
  }

  public function access() {
    switch ($this->method) {
      case 'index':
        return 'access content';
      default:
        return FALSE;
    }
  }

}
