<?php
/**
 * @file
 * emg_repository_features.features.workbench_email.inc
 */

/**
 * Implements hook_workbench_email_export().
 */
function emg_repository_features_workbench_email_export() {
  $items = array(
    'draft:needs_review:administrator' => array(
      'from_name' => 'draft',
      'to_name' => 'needs_review',
      'author' => 0,
      'automatic' => 1,
      'role' => 'administrator',
    ),
  );
  return $items;
}
