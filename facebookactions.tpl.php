<?php
/**
 * @file
 * Template file for facebookactions.
 *
 *
 */
?> 

<!---------------------------Loading the Like button--------------------------------------------->

<iframe src="//www.facebook.com/plugins/like.php?<?php print $src; ?>" scrolling="no" frameborder="0" style="border: none; overflow: hidden; width:100px; height:20px;float:left;<?php $other_css; ?>" allowTransparency="true"></iframe>


<!---------------------------Loading the Share button--------------------------------------------->


<iframe src="//www.facebook.com/plugins/share_button.php?<?php print $sharesrc;?>" scrolling="no" frameborder="0" style="border:none; overflow:hidden;width:100px;height:20px; loat:left" allowTransparency="true"></iframe>



