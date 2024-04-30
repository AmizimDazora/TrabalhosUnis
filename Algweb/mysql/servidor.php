<?php
$dbhost = "localhost";
$dbname = "banco_aula";
$username = "root";
$password = "";

$con = new PDO("mysql:host=$dbhost;dbname=$dbname", $username, $password);
$consulta = "select * from usuarios";
$resultado = $con->query($consulta);
while ($linha = $resultado->fetch()){
    echo $linha["nome"]."-".$linha["email"]."-".$linha["senha"]. PHP_EOL;
}