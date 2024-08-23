<?php
$total = 0;
$contador = 0;
$numero = 0;
$continua = true;

while ($continua) {
    
    $numero = readline("Insira um numero inteiro(insira um numero negativo para sair):");

    if ($numero < 0){
        $continua = false;
    }else{
        $total += $numero;
        $contador++;
    }
}
$media = $total / $contador;

echo "A media é: " . $media;