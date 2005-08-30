<?php
/**
 * Release Notes for HTML_QuickForm_advmultiselect package.
 *
 * @version    $Id$
 * @author     Laurent Laville <pear@laurent-laville.org>
 * @package    HTML_QuickForm_advmultiselect
 */

// New version and state of the package
$release['version'] = '1.0.0';
$release['state']   = 'stable';

// Notes about this new release
$release['notes'] = <<<NOTES
* bugs
- fix bug #5216 Warning: Invalid argument supplied for foreach()

* Quality Assurance
- added some @example and @link phpDoc tags to provide screenshots and example
  source code access on API documentation (generated by phpDocumentor).
- include a complete english guide for both beginners and expert users.
  This is the many html files version. Others format and language content are
  available to download at URI http://pear.laurent-laville.org/HTML_QuickForm_advmultiselect/docs

Live demos, screenshots, source codes and much more are available on my
project homepage at http://pear.laurent-laville.org/HTML_QuickForm_advmultiselect
NOTES;

// specify files to exclude entirely from the package.xml
$release['ignore'] = array(
    'package.xml', 'package.php', basename(__FILE__),
    'Thumbs.db'
);

// specify file role for specific files
$release['exceptions'] = array(
    'ChangeLog' => 'doc',
    'NEWS' => 'doc'
);


// List of replacements that should be performed on every single file
// if list is empty then a global replacement will be apply
$release['replacements'] = array();  // none replacement
$release['replacements'] = true;     // global replacement
$release['replacements'] = array(    // replacement on a subset of files
    'advmultiselect.php'
);

// specify Maintainers list
$release['maintainers'] = array(
    'farell' => array('role' => 'lead', 'name' => 'Laurent Laville', 'email' => 'pear@laurent-laville.org')
);

// specify Dependencies list
$release['dependencies'] = false;     // no dependency
$release['dependencies'] = array();   // no dependency (empty list)
$release['dependencies'] = array(
    'PHP'  => array('version' => '4.2.0', 'type' => 'php'),
    'PEAR' => array('operator' => 'has'),
    'HTML_Common'  => array('version' => '1.2.1'),
    'HTML_QuickForm'  => array('version' => '3.2.4', 'operator' => 'gt')
);

?>