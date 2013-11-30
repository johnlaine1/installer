<?php

// Plugin definition
$plugin = array(
  'title' => t('Five Column'),
  'category' => t('Columns: 5'),
  'icon' => 'fivecol.png',
  'theme' => 'fivecol',
  'css' => 'fivecol.css',
  'regions' => array(
    'top' => t('Top row'),
    'left' => t('Left column'),
    'first' => t('First column'),
    'second' => t('Second column'),
    'third' => t('Third column'),
    'fourth' => t('Fourth column'),
    'fifth' => t('Fifth column'),
    'sixth' => t('Sixth column')
   ),
);
