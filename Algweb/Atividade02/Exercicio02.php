<?php
$numero = readline("Divisores de: ");

for ($i= 1; $i <= $numero; $i++)
{
    if ($numero% $i==0){
        echo "$i" . PHP_EOL;
    }
}