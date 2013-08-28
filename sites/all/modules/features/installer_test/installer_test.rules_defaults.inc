<?php
/**
 * @file
 * installer_test.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function installer_test_default_rules_configuration() {
  $items = array();
  $items['rules_add_nickname_if_left_blank'] = entity_import('rules_config', '{ "rules_add_nickname_if_left_blank" : {
      "LABEL" : "Add nickname if left blank",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules" ],
      "ON" : [ "user_insert" ],
      "IF" : [ { "data_is_empty" : { "data" : [ "account:field-user-nickname" ] } } ],
      "DO" : [
        { "data_set" : {
            "data" : [ "account:field-user-nickname" ],
            "value" : [ "account:field-user-real-name:given" ]
          }
        }
      ]
    }
  }');
  $items['rules_email_admin_when_user_logs_in'] = entity_import('rules_config', '{ "rules_email_admin_when_user_logs_in" : {
      "LABEL" : "Email admin when user logs in",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules" ],
      "ON" : [ "user_login" ],
      "IF" : [
        { "NOT user_has_role" : { "account" : [ "account" ], "roles" : { "value" : { "3" : "3" } } } }
      ],
      "DO" : [
        { "mail" : {
            "to" : "john.laine@cox.net",
            "subject" : "[account:field-user-real-name:given] [account:field-user-real-name:family] logged in to [site:url-brief] on [site:current-date]",
            "message" : "I thought you might like to know that....\\r\\n[account:field-user-real-name:given] [account:field-user-real-name:family] logged in to [site:url-brief] on [site:current-date]",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_hello_when_user_logs_in'] = entity_import('rules_config', '{ "rules_hello_when_user_logs_in" : {
      "LABEL" : "Hello when user logs in",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules" ],
      "ON" : [ "user_login" ],
      "DO" : [
        { "drupal_message" : { "message" : "Welcome [account:field_user_nickname], hope you\\u0027re having a great day!" } }
      ]
    }
  }');
  return $items;
}
