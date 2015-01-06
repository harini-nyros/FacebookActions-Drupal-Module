<?php


/**
 * @file
 * Admin functions for facebooksharebutton.
 */


function facebookactions_admin_settings_form()
{
	$facebookbutton_node_options = node_type_get_names();  // getting all the content types
	$form['facebookactions_dynamic_description'] = array(
        '#markup' => '<p>' . t('Set the content types on which the facebook like,share,comment displays') . '</p>',
       );
       $form['facebookactions_like_visibility'] = array(
    					'#type' => 'fieldset',
					'#title' => t('Global Settings'),
					'#collapsible' => FALSE,
  		);
      
      $form['facebookactions_like_visibility']['facebookbutton_node_types'] = array(
			    '#type' => 'checkboxes',
			    '#title' => t('Display the Like and share button on these content types:'),
			    '#options' => $facebookbutton_node_options,
			    '#default_value' => variable_get('facebookbutton_node_types', array('article')),
			    '#description' => t('Each of these content types will have the "like" and "share" buttons automatically added to them.By default it will display on full node view'),
               );
      $form['facebookactions_global']['facebookactions_app_id'] = array(
    					'#type' => 'textfield',
    					'#title' => t('Facebook App ID'),
    					'#default_value' => variable_get('facebookactions_app_id', NULL),
    					'#description' => t('Please enter your facebook App ID'),
    					'#required' => TRUE,
  		);
	 
  	 return system_settings_form($form);


}
