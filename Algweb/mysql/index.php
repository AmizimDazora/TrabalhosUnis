<?php

// php -S localhost:8001
// para funcionar no localhost
// localhost:8001
// como se chama index essa será a pagina padrão.

$dbhost = "localhost";
$dbname = "banco_aula";
$username = "root";
$password = "";

echo "<h1>Lista de Usuários</h1>";
echo "<pre>";
$con = new PDO("mysql:host=$dbhost;dbname=$dbname", $username, $password);
$consulta = "select * from usuarios";
$resultado = $con->query($consulta);
while ($linha = $resultado->fetch()){
    echo $linha["nome"]." - ".$linha["email"]." - ".$linha["senha"]. PHP_EOL;
}
echo "</pre>";

$data = [
    "nome" => "cleito",
    "email" => "cleitolegal23@yahoo.com",
    "senha" => "1234"
];
$comando = "
    INSERT INTO usuarios (id, nome, email, senha)
    VALUES (NULL, :nome, :email, SHA1(:senha))";
$resultado = $con->prepare($comando);
$resultado->execute($data);
echo "<p>Dados Inseridos.</p>";
