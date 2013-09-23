; SMASH! make file
core = "7.23"
api = "2"
; comment this out in to use on drupal.org
projects[drupal][version] = "7.23"
#projects[drupal][patch][] = "http://drupal.org/files/entity_node_access-1780646-179.patch"

; Modules
projects[admin_views][version] = "1.2"
projects[admin_views][subdir] = "contrib"

projects[ctools][version] = "1.3"
projects[ctools][subdir] = "contrib"

projects[boost][version] = "1.x-dev"
projects[boost][subdir] = "contrib"

projects[linkchecker][version] = "1.x-dev"
projects[linkchecker][subdir] = "contrib"

projects[context][version] = "3.0-beta7"
projects[context][subdir] = "contrib"

projects[date][version] = "2.6"
projects[date][subdir] = "contrib"

projects[devel][version] = "1.3"
projects[devel][subdir] = "contrib"

projects[profiler_builder][version] = "1.0-rc4"
projects[profiler_builder][subdir] = "contrib"

projects[ds][version] = "2.6"
projects[ds][subdir] = "contrib"

projects[features][version] = "1.0"
projects[features][subdir] = "contrib"

projects[uuid_features][version] = "1.0-alpha3"
projects[uuid_features][subdir] = "contrib"

projects[entityreference][version] = "1.0"
projects[entityreference][subdir] = "contrib"

projects[fences][version] = "1.0"
projects[fences][subdir] = "contrib"

projects[field_collection][version] = "1.0-beta5"
projects[field_collection][subdir] = "contrib"

projects[field_group][version] = "1.2"
projects[field_group][subdir] = "contrib"

projects[field_slideshow][version] = "1.82"
projects[field_slideshow][subdir] = "contrib"

projects[inline_entity_form][version] = "1.3"
projects[inline_entity_form][subdir] = "contrib"

projects[link][version] = "1.1"
projects[link][subdir] = "contrib"

projects[markdown][version] = "1.2"
projects[markdown][subdir] = "contrib"

projects[mailchimp][version] = "2.12"
projects[mailchimp][subdir] = "contrib"

projects[bulk_media_upload][version] = "1.x-dev"
projects[bulk_media_upload][subdir] = "contrib"

projects[media][version] = "1.3"
projects[media][subdir] = "contrib"

projects[plupload][version] = "1.2"
projects[plupload][subdir] = "contrib"

projects[backup_migrate][version] = "2.7"
projects[backup_migrate][subdir] = "contrib"

projects[boxes][version] = "1.1"
projects[boxes][subdir] = "contrib"

projects[colorbox][version] = "2.x-dev"
projects[colorbox][subdir] = "contrib"

projects[diff][version] = "3.2"
projects[diff][subdir] = "contrib"

projects[entity][version] = "1.2"
projects[entity][subdir] = "contrib"

projects[filecache][version] = "1.x-dev"
projects[filecache][subdir] = "contrib"

projects[imagecrop][version] = "1.x-dev"
projects[imagecrop][subdir] = "contrib"

projects[libraries][version] = "2.1"
projects[libraries][subdir] = "contrib"

projects[menu_block][version] = "2.3"
projects[menu_block][subdir] = "contrib"
projects[menu_block][patch][] = http://drupal.org/files/menu_block_1204064_menu_tree_add_active_path.patch

projects[menu_breadcrumb][version] = "1.4"
projects[menu_breadcrumb][subdir] = "contrib"

projects[menu_position][version] = "1.x-dev"
projects[menu_position][subdir] = "contrib"

projects[pathauto][version] = "1.2"
projects[pathauto][subdir] = "contrib"

projects[registration][version] = "1.1"
projects[registration][subdir] = "contrib"

projects[redirect][version] = "1.0-rc1"
projects[redirect][subdir] = "contrib"
projects[redirect][patch][] = "http://drupal.org/files/redirect_loop_detection-1796596-68-reroll.patch"

projects[secure_permissions][version] = "1.5"
projects[secure_permissions][subdir] = "contrib"

projects[special_menu_items][version] = "1.0"
projects[special_menu_items][subdir] = "contrib"

projects[strongarm][version] = "2.0"
projects[strongarm][subdir] = "contrib"

projects[token][version] = "1.5"
projects[token][subdir] = "contrib"

projects[token_filter][version] = "1.1"
projects[token_filter][subdir] = "contrib"

projects[transliteration][version] = "3.1"
projects[transliteration][subdir] = "contrib"

projects[twitter_pull][version] = "1.x-dev"
projects[twitter_pull][subdir] = "contrib"
projects[twitter_pull][patch][] = "http://drupal.org/files/twitter_pull-use_twitter_module_api-7.x-1.x-1781024-70.patch"

projects[panels][version] = "3.3"
projects[panels][subdir] = "contrib"

projects[globalredirect][version] = "1.5"
projects[globalredirect][subdir] = "contrib"

projects[rules][version] = "2.3"
projects[rules][subdir] = "contrib"

projects[uuid][version] = "1.0-alpha4"
projects[uuid][subdir] = "contrib"

projects[ckeditor_link][version] = "2.3"
projects[ckeditor_link][subdir] = "contrib"

projects[wysiwyg][version] = "2.2"
projects[wysiwyg][subdir] = "contrib"

projects[insert_view][version] = "2.0"
projects[insert_view][subdir] = "contrib"

projects[menu_views][version] = "2.2"
projects[menu_views][subdir] = "contrib"

projects[views][version] = "3.7"
projects[views][subdir] = "contrib"

projects[views_bulk_operations][version] = "3.1"
projects[views_bulk_operations][subdir] = "contrib"

projects[webform][version] = "3.19"
projects[webform][subdir] = "contrib"

projects[webform_conditional][version] = "1.0-beta1"
projects[webform_conditional][subdir] = "contrib"

projects[webform_multifile][version] = "1.2"
projects[webform_multifile][subdir] = "contrib"

projects[workbench][version] = "1.2"
projects[workbench][subdir] = "contrib"

projects[workbench_access][version] = "1.2"
projects[workbench_access][subdir] = "contrib"

projects[workbench_moderation][version] = "1.3"
projects[workbench_moderation][subdir] = "contrib"

projects[xmlsitemap][version] = "2.0-rc2"
projects[xmlsitemap][subdir] = "contrib"

projects[google_analytics][version] = "1.3"
projects[google_analytics][subdir] = "contrib"

projects[autosave][version] = "2.2"
projects[autosave][subdir] = "contrib"

projects[boost_custom_expire_rules][version] = "1.0"
projects[boost_custom_expire_rules][subdir] = "contrib"

projects[expire][version] = "1.0-beta1"
projects[expire][subdir] = "contrib"

projects[httprl][version] = "1.12"
projects[httprl][subdir] = "contrib"

projects[replicate][version] = "1.0"
projects[replicate][subdir] = "contrib"

projects[replicate_field_collection][version] = "1.0"
projects[replicate_field_collection][subdir] = "contrib"

projects[fast_404][version] = "1.3"
projects[fast_404][subdir] = "contrib"
projects[fast_404][patch][] = "http://drupal.org/files/1500092-dbtng-enable.patch"
projects[fast_404][patch][] = "http://drupal.org/files/1875350-mysqli.patch"

projects[twitter][version] = "5.8"
projects[twitter][subdir] = "contrib"

projects[oauth][version] = "3.1"
projects[oauth][subdir] = "contrib"

projects[calendar][version] = "3.4"
projects[calendar][subdir] = "contrib"

projects[imagecache_actions][version] = "1.4"
projects[imagecache_actions][subdir] = "contrib"

; TODO modules without versions
; projects[twitter_cards][version] = "" ; TODO add version
; projects[twitter_cards][subdir] = "custom"

; Patches
; projects[twitter_pull][patch][] = "http://drupal.org/files/0001-Making-caching-mechanism-more-configurable-to-deal-w.patch"
projects[menu_position][patch][] = "http://drupal.org/files/menu_position_read_rules-1795202.patch"

; Themes
; zen
; projects[zen][type] = "theme"
; projects[zen][version] = "5.4"
; projects[zen][subdir] = "contrib"

; Libraries
libraries[ckeditor][directory_name] = "ckeditor"
libraries[ckeditor][type] = "library"
libraries[ckeditor][destination] = "libraries"
libraries[ckeditor][download][type] = "get"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.6.5/ckeditor_3.6.5.zip"

libraries[colorbox][directory_name] = "colorbox"
libraries[colorbox][type] = "library"
libraries[colorbox][destination] = "libraries"
libraries[colorbox][download][type] = "get"
libraries[colorbox][download][url] = "https://github.com/jackmoore/colorbox/archive/master.zip"

libraries[plupload][directory_name] = "plupload"
libraries[plupload][type] = "library"
libraries[plupload][destination] = "libraries"
libraries[plupload][download][type] = "get"
libraries[plupload][download][url] = "https://github.com/downloads/moxiecode/plupload/plupload_1_5_4.zip"

libraries[jquery.cycle][directory_name] = "jquery.cycle"
libraries[jquery.cycle][type] = "library"
libraries[jquery.cycle][destination] = "libraries"
libraries[jquery.cycle][download][type] = "get"
libraries[jquery.cycle][download][url] = "http://malsup.github.com/jquery.cycle.all.js"

libraries[jquery.imagesloaded][directory_name] = "jquery.imagesloaded"
libraries[jquery.imagesloaded][type] = "library"
libraries[jquery.imagesloaded][destination] = "libraries"
libraries[jquery.imagesloaded][download][type] = "git"
libraries[jquery.imagesloaded][download][url] = "https://github.com/desandro/imagesloaded.git"

libraries[mcapi][directory_name] = "mailchimp"
libraries[mcapi][type] = "library"
libraries[mcapi][destination] = "libraries"
libraries[mcapi][download][type] = "get"
libraries[mcapi][download][url] = "http://apidocs.mailchimp.com/api/downloads/mailchimp-api-class.zip"
