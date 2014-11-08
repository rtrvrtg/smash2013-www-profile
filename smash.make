; SMASH! make file
core = "7.32"
api = "2"
; comment this out in to use on drupal.org
projects[drupal][version] = "7.32"
#projects[drupal][patch][] = "http://drupal.org/files/entity_node_access-1780646-179.patch"

; Modules
projects[admin_views][version] = "1.2"
projects[admin_views][subdir] = "contrib"

projects[ctools][version] = "1.4"
projects[ctools][subdir] = "contrib"

projects[context][version] = "3.2"
projects[context][subdir] = "contrib"

projects[context_date][version] = "1.0-beta1"
projects[context_date][subdir] = "contrib"

projects[calendar][version] = "3.4"
projects[calendar][subdir] = "contrib"

projects[date][version] = "2.8"
projects[date][subdir] = "contrib"

projects[devel][version] = "1.4"
projects[devel][subdir] = "contrib"

projects[profiler_builder][version] = "1.0"
projects[profiler_builder][subdir] = "contrib"

projects[ds][version] = "2.6"
projects[ds][subdir] = "contrib"

projects[eck][version] = "2.0-rc2"
projects[eck][subdir] = "contrib"

projects[replicate][version] = "1.0"
projects[replicate][subdir] = "contrib"

projects[replicate_field_collection][version] = "1.0"
projects[replicate_field_collection][subdir] = "contrib"

projects[features][version] = "1.0"
projects[features][subdir] = "contrib"

projects[uuid_features][version] = "1.0-alpha3"
projects[uuid_features][subdir] = "contrib"

projects[entityreference][version] = "1.1"
projects[entityreference][subdir] = "contrib"

projects[fences][version] = "1.0"
projects[fences][subdir] = "contrib"

projects[field_collection][version] = "1.0-beta5"
projects[field_collection][subdir] = "contrib"

projects[field_group][version] = "1.3"
projects[field_group][subdir] = "contrib"

projects[field_slideshow][version] = "1.82"
projects[field_slideshow][subdir] = "contrib"

projects[geofield][version] = "2.1"
projects[geofield][subdir] = "contrib"

projects[inline_entity_form][version] = "1.5"
projects[inline_entity_form][subdir] = "contrib"

projects[link][version] = "1.2"
projects[link][subdir] = "contrib"

projects[flexslider][version] = "2.0-alpha3"
projects[flexslider][subdir] = "contrib"

projects[flexslider_field_collection][version] = "1.0"
projects[flexslider_field_collection][subdir] = "contrib"

projects[imagecache_token][version] = "1.x-dev"
projects[imagecache_token][subdir] = "contrib"

projects[markdown][version] = "1.2"
projects[markdown][subdir] = "contrib"

projects[mailchimp][version] = "2.12"
projects[mailchimp][subdir] = "contrib"

projects[bulk_media_upload][version] = "1.x-dev"
projects[bulk_media_upload][subdir] = "contrib"

projects[imagecache_actions][version] = "1.4"
projects[imagecache_actions][subdir] = "contrib"

projects[media][version] = "1.4"
projects[media][subdir] = "contrib"

projects[media_vimeo][version] = "1.0-beta5"
projects[media_vimeo][subdir] = "contrib"

projects[media_youtube][version] = "2.0-rc4"
projects[media_youtube][subdir] = "contrib"

projects[plupload][version] = "1.6"
projects[plupload][subdir] = "contrib"

projects[autosave][version] = "2.2"
projects[autosave][subdir] = "contrib"

projects[backup_migrate][version] = "2.8"
projects[backup_migrate][subdir] = "contrib"

projects[boxes][version] = "1.1"
projects[boxes][subdir] = "contrib"

projects[colorbox][version] = "2.5"
projects[colorbox][subdir] = "contrib"

projects[diff][version] = "3.2"
projects[diff][subdir] = "contrib"

projects[entity][version] = "1.3"
projects[entity][subdir] = "contrib"

projects[fast_404][version] = "1.3"
projects[fast_404][subdir] = "contrib"
projects[fast_404][patch][] = "http://drupal.org/files/1500092-dbtng-enable.patch"
projects[fast_404][patch][] = "http://drupal.org/files/1875350-mysqli.patch"

projects[filecache][version] = "1.x-dev"
projects[filecache][subdir] = "contrib"

projects[geophp][version] = "1.7"
projects[geophp][subdir] = "contrib"

projects[imagecrop][version] = "1.x-dev"
projects[imagecrop][subdir] = "contrib"

projects[leaflet][version] = "1.x-dev"
projects[leaflet][subdir] = "contrib"
projects[leaflet][patch][] = "https://gist.githubusercontent.com/rtrvrtg/5eee67eb3a519eccc341/raw/f1f40cc6691d07ef565d64e22db622addec9dbcb/gistfile1.txt"
projects[leaflet][patch][] = "https://gist.githubusercontent.com/rtrvrtg/f539b8d2d9807a1672f6/raw/c34a1b7422a1cd52d3ebce97ff5192f8e3c6b7a1/gistfile1.txt"

projects[leaflet_more_maps][version] = "1.8"
projects[leaflet_more_maps][subdir] = "contrib"

projects[libraries][version] = "2.2"
projects[libraries][subdir] = "contrib"

projects[mediaelement][version] = "1.2"
projects[mediaelement][subdir] = "contrib"

projects[menu_block][version] = "2.3"
projects[menu_block][subdir] = "contrib"

projects[menu_breadcrumb][version] = "1.5"
projects[menu_breadcrumb][subdir] = "contrib"

projects[menu_position][version] = "1.x-dev"
projects[menu_position][subdir] = "contrib"

projects[pathauto][version] = "1.2"
projects[pathauto][subdir] = "contrib"

projects[redirect][version] = "1.0-rc1"
projects[redirect][subdir] = "contrib"

projects[secure_permissions][version] = "1.5"
projects[secure_permissions][subdir] = "contrib"

projects[special_menu_items][version] = "1.1-rc1"
projects[special_menu_items][subdir] = "contrib"

projects[strongarm][version] = "2.0"
projects[strongarm][subdir] = "contrib"

projects[token][version] = "1.5"
projects[token][subdir] = "contrib"

projects[token_filter][version] = "1.1"
projects[token_filter][subdir] = "contrib"

projects[transliteration][version] = "3.1"
projects[transliteration][subdir] = "contrib"

projects[panels][version] = "3.4"
projects[panels][subdir] = "contrib"

projects[globalredirect][version] = "1.5"
projects[globalredirect][subdir] = "contrib"

projects[boost][version] = "1.x-dev"
projects[boost][subdir] = "contrib"

projects[boost_custom_expire_rules][version] = "1.0"
projects[boost_custom_expire_rules][subdir] = "contrib"

projects[expire][version] = "1.0-beta1"
projects[expire][subdir] = "contrib"

projects[httprl][version] = "1.14"
projects[httprl][subdir] = "contrib"

projects[rules][version] = "2.6"
projects[rules][subdir] = "contrib"

projects[google_analytics][version] = "1.4"
projects[google_analytics][subdir] = "contrib"

projects[uuid][version] = "1.0-alpha5"
projects[uuid][subdir] = "contrib"

projects[ckeditor_link][version] = "2.3"
projects[ckeditor_link][subdir] = "contrib"

projects[jquery_countdown][version] = "1.1"
projects[jquery_countdown][subdir] = "contrib"

projects[wysiwyg][version] = "2.2"
projects[wysiwyg][subdir] = "contrib"

projects[insert_view][version] = "2.0"
projects[insert_view][subdir] = "contrib"

projects[menu_views][version] = "2.2"
projects[menu_views][subdir] = "contrib"

projects[views][version] = "3.8"
projects[views][subdir] = "contrib"
projects[views][patch][] = "https://gist.githubusercontent.com/rtrvrtg/4f89ad213e6e1e5fcd89/raw/69a7151253eb51c52b356a491cbbc28b875d3381/gistfile1.txt"

projects[views_bulk_operations][version] = "3.2"
projects[views_bulk_operations][subdir] = "contrib"

projects[webform][version] = "3.20"
projects[webform][subdir] = "contrib"

projects[webform_conditional][version] = "1.0-beta2"
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

projects[scheduler][version] = "1.1"
projects[scheduler][subdir] = "contrib"

projects[linkchecker][version] = "1.x-dev"
projects[linkchecker][subdir] = "contrib"

projects[replicate_ui][version] = "1.2"
projects[replicate_ui][subdir] = "contrib"

; TODO modules without versions
; projects[twitter_cards][version] = "" ; TODO add version
; projects[twitter_cards][subdir] = "custom"

; Patches
; projects[twitter_pull][patch][] = "http://drupal.org/files/0001-Making-caching-mechanism-more-configurable-to-deal-w.patch"


; +++++ Themes +++++

; omega
; projects[omega][type] = "theme"
; projects[omega][version] = "3.x-dev"
; projects[omega][subdir] = "contrib"

; projects[zen][type] = "theme"
; projects[zen][version] = "5.5"
; projects[zen][subdir] = "contrib"

; +++++ Libraries +++++

; CKEditor
libraries[ckeditor][directory_name] = "ckeditor"
libraries[ckeditor][type] = "library"
libraries[ckeditor][destination] = "libraries"
libraries[ckeditor][download][type] = "get"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.6.6.1/ckeditor_3.6.6.1.tar.gz"

; ColorBox
libraries[colorbox][directory_name] = "colorbox"
libraries[colorbox][type] = "library"
libraries[colorbox][destination] = "libraries"
libraries[colorbox][download][type] = "get"
libraries[colorbox][download][url] = "https://github.com/jackmoore/colorbox/archive/1.5.11.zip"

; Plupload
libraries[plupload][directory_name] = "plupload"
libraries[plupload][type] = "library"
libraries[plupload][destination] = "libraries"
;libraries[plupload][patch][] = "http://drupal.org/files/plupload-1_5_6-rm_examples-1903850-5.patch"
libraries[plupload][download][type] = "file"
libraries[plupload][download][url] = "https://github.com/moxiecode/plupload/archive/v1.5.8.zip"

; jQuery Cycle
libraries[jquery.cycle][directory_name] = "jquery.cycle"
libraries[jquery.cycle][type] = "library"
libraries[jquery.cycle][destination] = "libraries"
libraries[jquery.cycle][download][type] = "get"
libraries[jquery.cycle][download][url] = "http://malsup.github.com/jquery.cycle.all.js"

; jQuery ImagesLoaded
libraries[jquery.imagesloaded][directory_name] = "jquery.imagesloaded"
libraries[jquery.imagesloaded][type] = "library"
libraries[jquery.imagesloaded][destination] = "libraries"
libraries[jquery.imagesloaded][download][type] = "git"
libraries[jquery.imagesloaded][download][url] = "https://github.com/desandro/imagesloaded.git"

; MailChimp API
libraries[mcapi][directory_name] = "mailchimp"
libraries[mcapi][type] = "library"
libraries[mcapi][destination] = "libraries"
libraries[mcapi][download][type] = "get"
libraries[mcapi][download][url] = "http://apidocs.mailchimp.com/api/downloads/mailchimp-api-class.zip"

; Flexslider
libraries[flexslider][directory_name] = "flexslider"
libraries[flexslider][type] = "library"
libraries[flexslider][destination] = "libraries"
libraries[flexslider][download][type] = "get"
libraries[flexslider][download][url] = "https://github.com/woothemes/FlexSlider/archive/version/2.2.2.zip"

; Leaflet
libraries[leaflet][directory_name] = "leaflet"
libraries[leaflet][type] = "library"
libraries[leaflet][destination] = "libraries"
libraries[leaflet][download][type] = "get"
libraries[leaflet][download][url] = "http://leaflet-cdn.s3.amazonaws.com/build/leaflet-0.7.3.zip"


; +++++ Patches +++++

projects[redirect][patch][] = "http://drupal.org/files/redirect_loop_detection-1796596-68-reroll.patch"
projects[menu_block][patch][] = http://drupal.org/files/menu_block_1204064_menu_tree_add_active_path.patch
projects[menu_position][patch][] = "http://drupal.org/files/menu_position_read_rules-1795202.patch"
; projects[leaflet][patch][] = "http://drupal.org/files/issues/2178231-18-leaflet_entity_views.patch"

