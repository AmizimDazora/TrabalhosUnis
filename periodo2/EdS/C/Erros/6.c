#include <stdio.h>

int main() {
    int i = 0;
    while (i <= 10) {
        printf("i: %d\n", i);
        i += 2;  // Erro: loop infinito, pois i nunca será exatamente 10
    }
    return 0;
}
