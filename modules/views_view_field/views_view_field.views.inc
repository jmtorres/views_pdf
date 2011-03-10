<?php

function views_view_field_views_handlers() {
  return array(
    'info' => array(
      'path' => drupal_get_path('module', 'views_view_field') .'',
    ),
    'handlers' => array(
      'views_view_field_handler_include_view' => array(
        'parent' => 'views_handler_field',
      ),
    ),
  );
}


function views_view_field_views_data() {


  $data['view']['table']['group'] = t('View');
  $data['view']['table']['join'] = array(
    '#global' => array(),
  );

  $data['view']['include'] = array(
    'title' => t('Include View'),
    'help' => t('Includes a view into this view.'),
    'field' => array(
      'handler' => 'views_view_field_handler_include_view',
      'click sortable' => FALSE,
      'notafield' => TRUE,
    ),
  ); 
  return $data;
}



