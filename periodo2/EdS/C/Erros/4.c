#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++) {
        ptr[i] = i * 2;  // Erro: escrita fora dos limites de memória
    }
    free(ptr);
    return 0;
}
