#include <stdio.h>

int main()
{
    int numb[5] = {5, 8 , 34, 0, 7};
    float fuma[3] = {0.2, 7.35, 9.969};

    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("Array Int:\nElemento 1\t%d\n", numb[0]);
    printf("Elemento 2\t%d\n", numb[1]);
    printf("Elemento 3\t%d\n", numb[2]);
    printf("Elemento 4\t%d\n", numb[3]);
    printf("Elemento 5\t%d\n", numb[4]);
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("Array Float:\nElemento 1\t%.1f\n", fuma[0]);
    printf("Elemento 2\t%.2f\n", fuma[1]);
    printf("Elemento 3\t%.3f\n", fuma[2]);
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");

    return 0;
}
