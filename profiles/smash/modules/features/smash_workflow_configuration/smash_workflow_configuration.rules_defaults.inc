<?php
/**
 * @file
 * smash_workflow_configuration.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function smash_workflow_configuration_default_rules_configuration() {
  $items = array();
  $items['rules_someone_created_something'] = entity_import('rules_config', '{ "rules_someone_created_something" : {
      "LABEL" : "Someone created something",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Content" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert" : [] },
      "DO" : [
        { "mail" : {
            "to" : "sebastian.hidalgo@smash.org.au, geoffrey.roberts@smash.org.au",
            "subject" : "[SMASH! Website] Content got created: [node:content-type] [node:title]",
            "message" : "A content node on the SMASH! site got created.\\r\\n\\r\\nNode Title: [node:title]\\r\\nNode Type: [node:content-type]\\r\\nNode ID: [node:nid]\\r\\nRevision ID: [node:vid]\\r\\nStatus: [node:status]\\r\\nAuthor: [node:author]\\r\\nChange date: [node:changed]\\r\\n\\r\\nURL: [node:url]\\r\\nEdit this node right away: [node:edit-url]\\r\\n\\r\\nLog message (if any): [node:log]\\r\\n",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_someone_updated_something'] = entity_import('rules_config', '{ "rules_someone_updated_something" : {
      "LABEL" : "Someone updated something",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Content" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_update" : [] },
      "DO" : [
        { "mail" : {
            "to" : "sebastian.hidalgo@smash.org.au, geoffrey.roberts@smash.org.au",
            "subject" : "[SMASH! Website] Content got updated: [node:content-type] [node:title]",
            "message" : "A content node on the SMASH! site got updated.\\r\\n\\r\\nNode Title: [node:title]\\r\\nNode Type: [node:content-type]\\r\\nNode ID: [node:nid]\\r\\nRevision ID: [node:vid]\\r\\nStatus: [node:status]\\r\\nAuthor: [node:author]\\r\\nChange date: [node:changed]\\r\\n\\r\\nURL: [node:url]\\r\\nEdit this node right away: [node:edit-url]\\r\\n\\r\\nLog message (if any): [node:log]\\r\\n",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
