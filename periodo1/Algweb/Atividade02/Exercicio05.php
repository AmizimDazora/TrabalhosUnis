<?php
$numero = rand(1,100);
$loop = true;
while ($loop) {
    $guess = readline("Gerei um numero de 1 a 100, adivinhe o numero que gerei: ");
    if ($guess == $numero) {
        $loop = false;
    }else if ($guess > $numero) { 
        echo "O meu numero é menor que esse.\n";
    }else if ($guess < $numero) {
        echo "O meu numero é maior que esse.\n";
    }
}
echo"\nParabens, esse era o numero que tinha gerado!";