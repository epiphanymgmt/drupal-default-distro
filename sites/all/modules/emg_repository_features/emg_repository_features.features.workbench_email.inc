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
    'needs_review:draft:original author' => array(
      'from_name' => 'needs_review',
      'to_name' => 'draft',
      'author' => 1,
      'automatic' => 1,
      'role' => 'original author',
    ),
    'needs_review:published:original author' => array(
      'from_name' => 'needs_review',
      'to_name' => 'published',
      'author' => 1,
      'automatic' => 1,
      'role' => 'original author',
    ),
  );
  return $items;
}
