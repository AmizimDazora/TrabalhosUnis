<?php
if(isset($_POST)){
    print_r($_POST);
}
    

?>


<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link
        rel="stylesheet"
        href="css/pico.violet.min.css"
    />
    <title>KdsTro</title>
</head>
<body>
    <h1>Cadastro de Usuário</h1>
    <form action="cadastro.php" method="post">
        <label for="nome">Nome</label>
        <input type="text" id="nome" name="nome">
        
        <label for="email">Email</label>
        <input type="email" id="email" name="email">

        <label for="senha">Senha</label>
        <input type="password" id="senha" name="senha" pattern="(?=.*\d)(?=.*[a-z])(?=.*[A-Z]).{8,}">

        <input type="submit" value="Enviar">

        <p>
            <div class="alerta">

            </div>
            <div class="alerta">

            </div>
            <div class="alerta">

            </div>
        </p>
    </form>
</body>
</html>