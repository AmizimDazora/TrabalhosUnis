#include <stdio.h>

int main() {
    int a = 5, b = 10, c = 15;
    int resultado = a + ((b * c) / 2);  // Erro: precedência de operadores
    printf("Resultado: %d ", resultado);
    return 0;
}
