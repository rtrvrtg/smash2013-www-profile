; SMASH! make file
core = "7.x"
api = "2"
; comment this out in to use on drupal.org
projects[drupal][version] = "7.18"

; Modules
projects[ctools][version] = "1.2"
projects[ctools][subdir] = "contrib"

projects[context][version] = "3.0-beta6"
projects[context][subdir] = "contrib"

projects[date][version] = "2.6"
projects[date][subdir] = "contrib"

projects[devel][version] = "1.3"
projects[devel][subdir] = "contrib"

projects[migrate][version] = "2.5"
projects[migrate][subdir] = "contrib"

projects[migrate_extras][version] = "2.5"
projects[migrate_extras][subdir] = "contrib"

projects[profiler_builder][version] = "1.0-rc2"
projects[profiler_builder][subdir] = "contrib"

projects[wordpress_migrate][version] = "2.2"
projects[wordpress_migrate][subdir] = "contrib"

projects[ds][version] = "2.0"
projects[ds][subdir] = "contrib"

projects[features][version] = "1.0"
projects[features][subdir] = "contrib"

projects[uuid_features][version] = "1.x-dev"
projects[uuid_features][subdir] = "contrib"

projects[entityreference][version] = "1.0"
projects[entityreference][subdir] = "contrib"

projects[fences][version] = "1.0"
projects[fences][subdir] = "contrib"

projects[field_collection][version] = "1.x-dev"
projects[field_collection][subdir] = "contrib"

projects[field_group][version] = "1.1"
projects[field_group][subdir] = "contrib"

projects[field_slideshow][version] = "1.8"
projects[field_slideshow][subdir] = "contrib"

projects[link][version] = "1.0"
projects[link][subdir] = "contrib"

projects[markdown][version] = "1.1"
projects[markdown][subdir] = "contrib"

projects[mailchimp][version] = "2.7"
projects[mailchimp][subdir] = "contrib"

projects[bulk_media_upload][version] = "1.x-dev"
projects[bulk_media_upload][subdir] = "contrib"

projects[media][version] = "1.2"
projects[media][subdir] = "contrib"

projects[plupload][version] = "1.0"
projects[plupload][subdir] = "contrib"

projects[backup_migrate][version] = "2.4"
projects[backup_migrate][subdir] = "contrib"

projects[boxes][version] = "1.0"
projects[boxes][subdir] = "contrib"

projects[colorbox][version] = "1.4"
projects[colorbox][subdir] = "contrib"

projects[diff][version] = "3.2"
projects[diff][subdir] = "contrib"

projects[entity][version] = "1.x-dev"
projects[entity][subdir] = "contrib"

projects[imagecrop][version] = "1.x-dev"
projects[imagecrop][subdir] = "contrib"

projects[libraries][version] = "1.0"
projects[libraries][subdir] = "contrib"

projects[menu_block][version] = "2.3"
projects[menu_block][subdir] = "contrib"

projects[pathauto][version] = "1.2"
projects[pathauto][subdir] = "contrib"

projects[redirect][version] = "1.0-rc1"
projects[redirect][subdir] = "contrib"

projects[special_menu_items][version] = "1.0"
projects[special_menu_items][subdir] = "contrib"

projects[strongarm][version] = "2.0"
projects[strongarm][subdir] = "contrib"

projects[token][version] = "1.4"
projects[token][subdir] = "contrib"

projects[token_filter][version] = "1.1"
projects[token_filter][subdir] = "contrib"

projects[transliteration][version] = "3.1"
projects[transliteration][subdir] = "contrib"

projects[twitter_pull][version] = "1.x-dev"
projects[twitter_pull][subdir] = "contrib"
projects[twitter_pull][patch][] = http://drupal.org/files/twitter-pull-invalidarg.patch

projects[panels][version] = "3.3"
projects[panels][subdir] = "contrib"

projects[globalredirect][version] = "1.5"
projects[globalredirect][subdir] = "contrib"

projects[registration][version] = "1.0-beta3"
projects[registration][subdir] = "contrib"

projects[rules][version] = "2.2"
projects[rules][subdir] = "contrib"

projects[uuid][version] = "1.x-dev"
projects[uuid][subdir] = "contrib"

projects[wysiwyg][version] = "2.2"
projects[wysiwyg][subdir] = "contrib"

projects[insert_view][version] = "2.0"
projects[insert_view][subdir] = "contrib"

projects[menu_views][version] = "2.0"
projects[menu_views][subdir] = "contrib"

projects[views][version] = "3.5"
projects[views][subdir] = "contrib"

projects[views_bulk_operations][version] = "3.1"
projects[views_bulk_operations][subdir] = "contrib"

projects[webform][version] = "3.18"
projects[webform][subdir] = "contrib"

projects[webform_conditional][version] = "1.0-beta1"
projects[webform_conditional][subdir] = "contrib"

projects[webform_multifile][version] = "1.2"
projects[webform_multifile][subdir] = "contrib"

projects[workbench][version] = "1.1"
projects[workbench][subdir] = "contrib"

projects[workbench_access][version] = "1.0"
projects[workbench_access][subdir] = "contrib"

projects[workbench_moderation][version] = "1.2"
projects[workbench_moderation][subdir] = "contrib"

projects[xmlsitemap][version] = "2.0-rc2"
projects[xmlsitemap][subdir] = "contrib"

projects[crumbs][version] = "1.8"
projects[crumbs][subdir] = "contrib"

projects[inline_entity_form][version] = "1.0"
projects[inline_entity_form][subdir] = "contrib"

; TODO modules without versions
; projects[twitter_cards][type] = "module"
; projects[twitter_cards][version] = "" ; TODO add version
; projects[twitter_cards][subdir] = "custom"

; Themes
; zen
projects[zen][type] = "theme"
projects[zen][version] = "5.1"
projects[zen][subdir] = "contrib"

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
libraries[colorbox][download][url] = "http://www.jacklmoore.com/colorbox/colorbox.zip"

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