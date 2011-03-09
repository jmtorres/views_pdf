<?php


class views_pdf_plugin_style_unformatted extends views_plugin_style
{
  function render() {
    if ($this->uses_row_plugin() && empty($this->row_plugin)) {
      vpr('views_plugin_style_default: Missing row plugin');
      return;
    }

    $output = '';

    $this->view->numberOfRecords = count($this->view->result);
    if ($this->uses_row_plugin()) {
      $this->row_plugin->render($this->view->result);
    }    
    

    return $output;
  }

}
