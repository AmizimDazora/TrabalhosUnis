<?php

// php -S localhost:8001
// para funcionar no localhost
// localhost:8001
// como se chama index essa será a pagina padrão.

require("conecta.php");

echo "<h1>Lista de Usuários</h1>";
echo "<pre>";
$consulta = "select * from usuarios";
$resultado = $con->query($consulta);
while ($linha = $resultado->fetch()){
    echo $linha["nome"]." - ".$linha["email"]." - ".$linha["senha"]. PHP_EOL;
}
echo "</pre>";

$data = [
    "nome" => $nome,
    "email" => $email,
    "senha" => $senha
];
$comando = "
    INSERT INTO usuarios (id, nome, email, senha)
    VALUES (NULL, :nome, :email, SHA1(:senha))";
$resultado = $con->prepare($comando);
$resultado->execute($data);
echo "<p>Dados Inseridos.</p>";
