<?php

/* 
Queste sono le variabili che abbiamo a disposizione dal WS :

title (String, 20 characters ) 
tipo_attivita (String, 8 characters ) 
city (String, 9 characters )  
data_inizio (String, 13 characters )  
data_inizio_uso (String, 19 characters )  
data_inizio_timestamp (int)
nid (String, 4 characters )  
url (String, 35 characters )  
uid (String, 3 characters )  

type = (partecipazioni2 || docenze2)
*/


?>

<ul>
  <?php foreach ($items as $item) : ?>
    <li> <?php print l($item['title'], $item['url'], array('attributes' => array('target' => '_blank'))) ?> </li>
  <?php endforeach; ?>
</ul>

<?php if ($type == 'eventipa_partecipazioni') : ?>
  <small> <?php print t('Vedi tutte le partecipazioni su') ?> <a href="http://eventipa.formez.it/user/<?php print $item['uid'] ?>" target="_blank"> EventiPA </a> </small>
<?php endif; ?>

<?php if ($type == 'eventipa_docenze') : ?>
  <small> <?php print t('Vedi tutte le docenze su') ?> <a href="http://eventipa.formez.it/docente/<?php print $item['uid']?>" target="_blank"> EventiPA </a> </small>
<?php endif; ?>
