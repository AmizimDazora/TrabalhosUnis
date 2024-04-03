<?php
function fibonacci($n) {
    $fibonacci = array(0, 1); 
    for ($i = 2; $i < $n; $i++) {
        $fibonacci[$i] = $fibonacci[$i - 1] + $fibonacci[$i - 2]; 
    }
    return $fibonacci;
}

$sequencia_fibonacci = fibonacci(10);
foreach ($sequencia_fibonacci as $numero) {
    echo $numero . " ";
}