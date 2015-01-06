<?php

/**
 * Implements template_preprocess().
 *
 * Formats variables and displays the data needed to build the like and share button.
 */

function template_preprocess_facebookactions(&$variables) 
{
  
  $url = urlencode($variables['url']);
  $language = ($variables['language']) ? '&locale=' . $variables['language'] : '';
  $show_faces = $variables['show_faces'] ? 'true' : 'false';

  // We run the config src line through htmlentities to avoid rendering trouble
  // when we print to the page.
  // Like button source
  $variables['src'] = htmlentities(sprintf('href=%s&layout=%s&show_faces=%s&width=%s&font=%s&height=%s&action=%s&colorscheme=%s%s&send=false&appId=%s',
    $url,
    $variables['layout'],
    $show_faces,
    $variables['width'],
    $variables['font'],
    $variables['height'],
    $variables['action'],
    $variables['color_scheme'],
    $language,
    $variables['AppID']
  ));

  //Share button source


  $variables['sharesrc'] = htmlentities(sprintf('href=%s&layout=%s&width=%s&font=%s&height=%s&colorscheme=%s%s&appId=%s',
    $url,
    'button',
    $variables['width'],
    $variables['font'],
    $variables['height'],
    $variables['color_scheme'],
    $language,
    $variables['AppID']
  ));
  
  
}

