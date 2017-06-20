<?php
/**
 * @file
 * archimedes_server_civicrm.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function archimedes_server_civicrm_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function archimedes_server_civicrm_node_info() {
  $items = array(
    'civicrm_extension' => array(
      'name' => t('CiviCRM Extension'),
      'base' => 'node_content',
      'description' => t('CiviCRM Extension'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
