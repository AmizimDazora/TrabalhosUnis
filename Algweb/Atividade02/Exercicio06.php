<?php
function bubbleSort(array $x)
{
    for ($y = count($x) - 1; $y > 0; $y--) {
        $trocar = false;
        for ($z = 0; $z < $y; $z++) {
            if ($x[$z] > $x[$z+1]) {
                $check = $x[$z];
                $x[$z] = $x[$z+1];
                $x[$z+1] = $check;
                $trocar = true;
            }
        }
        if (!$trocar) break;
        echo $y;
    }
    return $x;
}
$lista = array(7,6,5,4,3,2);
$resposta = bubbleSort($lista);
print_r($resposta);

