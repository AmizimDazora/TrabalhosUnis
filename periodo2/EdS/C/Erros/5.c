#include <stdio.h>

int soma(int a, int b) {
    int resultado = a + b; // Erro: falta de return
    return resultado;
}

int main() {
    int resultado = soma(3, 4);
    printf("Soma: %d", resultado);
    return 0;
}