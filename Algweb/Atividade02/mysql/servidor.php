<?php
$dbhost = "localhost";
$dbname = "banco_aula";
$username = "root";
$password = "";

try{
    $con = new PDO("mysql:host=$dbhost;dbname=$dbname", $username, $password);
    echo "Conectado com sucesso;". PHP_EOL;
} catch (PDOException $e){
    echo "Ih rapaz deu ruim :/ " .$e->getMessage() . PHP_EOL;
}