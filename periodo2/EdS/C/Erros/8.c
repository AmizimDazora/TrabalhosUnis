#include <stdio.h>
#include <stdlib.h>

int main() {
    int x = 10;
    int *ptr;
    ptr = (int *)malloc(sizeof(int));

    *ptr = x;
    
    printf("Valor: %d ", *ptr);

    free(ptr);
    return 0;
}
