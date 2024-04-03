<?php
$tabuada  = readline("Escolha o numero da sua tabuada de escolha: ");
for ($contador = 1; $contador <= 10; $contador++) {
    echo $tabuada." x ".$contador." = ". $contador*$tabuada.PHP_EOL;
}