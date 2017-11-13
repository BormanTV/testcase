<?php

$plugin = array(
  'title' => t('Last Blog'),
  'description' => t('Display a list of the last blog'),
  'single' => TRUE,
  'render callback' => 'testcase_module_last_blog_render',
  'defaults' => array(),
  'edit form' => 'testcase_module_last_blog_edit_form',
  'category' => array(t('Testcase module')),
);
