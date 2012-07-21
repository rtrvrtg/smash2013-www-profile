; Conference Organizing Distribution dev snapshot makefile
; The purpose of this makefile is to make it easier for people to install
; the dev version of COD and its dependencies, including patches, before
; a new full release of the distribution is rolled.

api = 2
core = 7.x

projects[drupal][version] = 7.14

; Required versions of Drupal contributed projects.

;Libraries
projects[libraries][install_path] = sites/all/modules/contrib
projects[libraries][download][type] = "git"
projects[libraries][download][url] = "http://git.drupal.org/project/libraries.git"
projects[libraries][download][revision] = "7.x-1.x"

;Chaos tool suite
projects[ctools][install_path] = sites/all/modules/contrib
projects[ctools][download][type] = "git"
projects[ctools][download][url] = "http://git.drupal.org/project/ctools.git"
projects[ctools][download][revision] = "7.x-1.0"

;Token
projects[token][install_path] = sites/all/modules/contrib
projects[token][download][type] = "git"
projects[token][download][url] = "http://git.drupal.org/project/token.git"
projects[token][download][revision] = "7.x-1.x"

;Views
projects[views][install_path] = sites/all/modules/contrib
projects[views][download][type] = "git"
projects[views][download][url] = "http://git.drupal.org/project/views.git"
projects[views][download][revision] = "7.x-3.x"

;Entity API
projects[entity][install_path] = sites/all/modules/contrib
projects[entity][download][type] = "git"
projects[entity][download][url] = "http://git.drupal.org/project/entity.git"
projects[entity][download][revision] = "7.x-1.x"

;Transliteration
projects[transliteration][install_path] = sites/all/modules/contrib
projects[transliteration][download][type] = "git"
projects[transliteration][download][url] = "http://git.drupal.org/project/transliteration.git"
projects[transliteration][download][revision] = "7.x-3.x"

;Entity Reference
projects[entityreference][install_path] = sites/all/modules/contrib
projects[entityreference][download][type] = "git"
projects[entityreference][download][url] = "http://git.drupal.org/project/entityreference.git"
projects[entityreference][download][revision] = "7.x-1.x"

;Panels
projects[panels][install_path] = sites/all/modules/contrib
projects[panels][download][type] = "git"
projects[panels][download][url] = "http://git.drupal.org/project/panels.git"
projects[panels][download][revision] = "7.x-3.x"

;Field Collection
projects[field_collection][install_path] = sites/all/modules/contrib
projects[field_collection][download][type] = "git"
projects[field_collection][download][url] = "http://git.drupal.org/project/field_collection.git"
projects[field_collection][download][revision] = "7.x-1.0-beta4"

;WYSIWYG
projects[wysiwyg][install_path] = sites/all/modules/contrib
projects[wysiwyg][download][type] = "git"
projects[wysiwyg][download][url] = "http://git.drupal.org/project/wysiwyg.git"
projects[wysiwyg][download][revision] = "7.x-2.x"

;Media
projects[media][install_path] = sites/all/modules/contrib
projects[media][download][type] = "git"
projects[media][download][url] = "http://git.drupal.org/project/media.git"
projects[media][download][revision] = "7.x-1.2"

;Webform
projects[webform][install_path] = sites/all/modules/contrib
projects[webform][download][type] = "git"
projects[webform][download][url] = "http://git.drupal.org/project/webform.git"
projects[webform][download][revision] = "7.x-3.x"

;Webform Conditional
projects[webform_conditional][install_path] = sites/all/modules/contrib
projects[webform_conditional][download][type] = "git"
projects[webform_conditional][download][url] = "http://git.drupal.org/project/webform_conditional.git"
projects[webform_conditional][download][revision] = "7.x-1.x"

;Webform Multiple File Upload
projects[webform_multifile][install_path] = sites/all/modules/contrib
projects[webform_multifile][download][type] = "git"
projects[webform_multifile][download][url] = "http://git.drupal.org/project/webform_multifile.git"
projects[webform_multifile][download][revision] = "7.x-1.x"

;Entity Registrations
projects[registration][install_path] = sites/all/modules/contrib
projects[registration][download][type] = "git"
projects[registration][download][url] = "http://git.drupal.org/project/registration.git"
projects[registration][download][revision] = "7.x-1.x"

;Features
projects[features][install_path] = sites/all/modules/contrib
projects[features][download][type] = "git"
projects[features][download][url] = "http://git.drupal.org/project/features.git"
projects[features][download][branch] = "7.x-1.x"

;Diff
projects[diff][install_path] = sites/all/modules/contrib
projects[diff][download][type] = "git"
projects[diff][download][url] = "http://git.drupal.org/project/diff.git"
projects[diff][download][revision] = "7.x-2.0"

;Strongarm
projects[strongarm][install_path] = sites/all/modules/contrib
projects[strongarm][download][type] = "git"
projects[strongarm][download][url] = "http://git.drupal.org/project/strongarm.git"
projects[strongarm][download][revision] = "7.x-2.x"

;Universally Unique IDentifier
projects[uuid][install_path] = sites/all/modules/contrib
projects[uuid][download][type] = "git"
projects[uuid][download][url] = "http://git.drupal.org/project/uuid.git"
projects[uuid][download][revision] = "7.x-1.x"

;UUID Features Integration
projects[uuid_features][install_path] = sites/all/modules/contrib
projects[uuid_features][download][type] = "git"
projects[uuid_features][download][url] = "http://git.drupal.org/project/uuid_features.git"
projects[uuid_features][download][revision] = "7.x-1.x"

; @TODO: Patches

;Field Group
projects[field_group][install_path] = sites/all/modules/contrib
projects[field_group][download][type] = "git"
projects[field_group][download][url] = "http://git.drupal.org/project/field_group.git"
projects[field_group][download][revision] = "7.x-1.1"

;Link
projects[link][install_path] = sites/all/modules/contrib
projects[link][download][type] = "git"
projects[link][download][url] = "http://git.drupal.org/project/link.git"
projects[link][download][revision] = "7.x-1.x"

;Date
projects[date][install_path] = sites/all/modules/contrib
projects[date][download][type] = "git"
projects[date][download][url] = "http://git.drupal.org/project/date.git"
projects[date][download][revision] = "7.x-2.5"

;Global Redirect
projects[globalredirect][install_path] = sites/all/modules/contrib
projects[globalredirect][download][type] = "git"
projects[globalredirect][download][url] = "http://git.drupal.org/project/globalredirect.git"
projects[globalredirect][download][revision] = "7.x-1.x"

;Markdown filter
projects[markdown][install_path] = sites/all/modules/contrib
projects[markdown][download][type] = "git"
projects[markdown][download][url] = "http://git.drupal.org/project/markdown.git"
projects[markdown][download][revision] = "7.x-1.x"

;Pathauto
projects[pathauto][install_path] = sites/all/modules/contrib
projects[pathauto][download][type] = "git"
projects[pathauto][download][url] = "http://git.drupal.org/project/pathauto.git"
projects[pathauto][download][revision] = "7.x-1.x"

;Redirect
projects[redirect][install_path] = sites/all/modules/contrib
projects[redirect][download][type] = "git"
projects[redirect][download][url] = "http://git.drupal.org/project/redirect.git"
projects[redirect][download][revision] = "7.x-1.x"

;Mailchimp
projects[mailchimp][install_path] = sites/all/modules/contrib
projects[mailchimp][download][type] = "git"
projects[mailchimp][download][url] = "http://git.drupal.org/project/mailchimp.git"
projects[mailchimp][download][revision] = "7.x-2.x"

;Views Bulk Operations (VBO)
projects[views_bulk_operations][install_path] = sites/all/modules/contrib
projects[views_bulk_operations][download][type] = "git"
projects[views_bulk_operations][download][url] = "http://git.drupal.org/project/views_bulk_operations.git"
projects[views_bulk_operations][download][revision] = "7.x-3.x"

;XML Sitemap
projects[xmlsitemap][install_path] = sites/all/modules/contrib
projects[xmlsitemap][download][type] = "git"
projects[xmlsitemap][download][url] = "http://git.drupal.org/project/xmlsitemap.git"
projects[xmlsitemap][download][revision] = "7.x-2.x"

;Workbench
projects[workbench][install_path] = sites/all/modules/contrib
projects[workbench][download][type] = "git"
projects[workbench][download][url] = "http://git.drupal.org/project/workbench.git"
projects[workbench][download][revision] = "7.x-1.x"

;Workbench Access
projects[workbench_access][install_path] = sites/all/modules/contrib
projects[workbench_access][download][type] = "git"
projects[workbench_access][download][url] = "http://git.drupal.org/project/workbench_access.git"
projects[workbench_access][download][revision] = "7.x-1.x"

;Workbench Moderation
projects[workbench_moderation][install_path] = sites/all/modules/contrib
projects[workbench_moderation][download][type] = "git"
projects[workbench_moderation][download][url] = "http://git.drupal.org/project/workbench_moderation.git"
projects[workbench_moderation][download][revision] = "7.x-1.x"

;;Special Menu Items
;projects[special_menu_items][install_path] = sites/all/modules/contrib
;projects[special_menu_items][download][type] = "git"
;projects[special_menu_items][download][url] = "http://git.drupal.org/project/special_menu_items.git"
;projects[special_menu_items][download][revision] = "7.x-1.x"

;Menu Views
projects[menu_views][install_path] = sites/all/modules/contrib
projects[menu_views][download][type] = "git"
projects[menu_views][download][url] = "http://git.drupal.org/project/menu_views.git"
projects[menu_views][download][revision] = "7.x-1.x"

;Migrate
projects[migrate][install_path] = sites/all/modules/contrib
projects[migrate][download][type] = "git"
projects[migrate][download][url] = "http://git.drupal.org/project/migrate.git"
projects[migrate][download][revision] = "7.x-2.x"

;Migrate Extras
projects[migrate_extras][install_path] = sites/all/modules/contrib
projects[migrate_extras][download][type] = "git"
projects[migrate_extras][download][url] = "http://git.drupal.org/project/migrate_extras.git"
projects[migrate_extras][download][revision] = "7.x-2.x"

;Wordpress Migrate
projects[wordpress_migrate][install_path] = sites/all/modules/contrib
projects[wordpress_migrate][download][type] = "git"
projects[wordpress_migrate][download][url] = "http://git.drupal.org/project/wordpress_migrate.git"
projects[wordpress_migrate][download][revision] = "7.x-2.x"

;Backup Migrate
projects[backup_migrate][install_path] = sites/all/modules/contrib
projects[backup_migrate][download][type] = "git"
projects[backup_migrate][download][url] = "http://git.drupal.org/project/backup_migrate.git"
projects[backup_migrate][download][revision] = "7.x-2.4"

;Omega
projects[omega][install_path] = sites/all/themes/contrib
projects[omega][download][type] = "git"
projects[omega][download][url] = "http://git.drupal.org/project/omega.git"
projects[omega][download][revision] = "7.x-3.x"

; 
; projects[features][patch][] = ""
