Render View to File
===================

Drupal 7 module: renders the output of a view to a file. Has Rules integration.

Quick and dirty module by Geoffrey Roberts (geoffreyr on drupal.org)


Usage (General)
===============

Right now, there's no integration with other modules beyond that of allowing access to the ViewRenderer class.

The most simple way of invoking it is as follows:

```php
$filename = "public://name-of-file.html";

$vr = new ViewRenderer($view_name, $display_id);
$vr->arguments($args);
$file = $vr->render($filename);
```

This module also offers support for exposed input using the exposedInput method, and offsets via the offset method.


Usage (Rules)
=============

This module offers two Rules actions:

Views: Renders a view to a file
-------------------------------
Takes in a view you select, a list of arguments, and a filename that will be the template for the filename that this module will render to (such as public://name-of-file.html).

Output is the internal URI to where Drupal renders to, allowing for avoiding filename collisions.

Files: Gets a file path from a URI
----------------------------------
Added this to work alongside the first action, for any future actions that require a relative path to the file instead of a file URI. (Mime Mail's attachments is one good example of this.)

Takes in the file URI, and returns the relative path.
