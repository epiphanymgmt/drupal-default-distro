<?php
/**
 * @file
 * emg_repository_features.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function emg_repository_features_default_rules_configuration() {
  $items = array();
  $items['rules_do_not_moderate_content_for_admin'] = entity_import('rules_config', '{ "rules_do_not_moderate_content_for_admin" : {
      "LABEL" : "Do not Moderate Content for Admin",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "workbench_moderation" ],
      "ON" : { "node_insert" : [], "node_update" : [] },
      "IF" : [
        { "user_has_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "3" : "3" } }
          }
        }
      ],
      "DO" : [
        { "node_publish" : { "node" : [ "node" ] } },
        { "workbench_moderation_set_state" : {
            "node" : [ "node" ],
            "moderation_state" : "published",
            "force_transition" : 0
          }
        }
      ]
    }
  }');
  $items['rules_force_needs_review_on_draft_edit'] = entity_import('rules_config', '{ "rules_force_needs_review_on_draft_edit" : {
      "LABEL" : "Force \\u0022Needs Review\\u0022 on Draft Edit",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "workbench_moderation", "rules" ],
      "ON" : { "node_update" : [] },
      "IF" : [
        { "contents_current_state" : { "node" : [ "node" ], "moderation_state" : "draft" } }
      ],
      "DO" : [
        { "workbench_moderation_set_state" : {
            "node" : [ "node" ],
            "moderation_state" : "needs_review",
            "force_transition" : 1
          }
        }
      ]
    }
  }');
  return $items;
}
