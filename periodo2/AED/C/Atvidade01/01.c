#include <stdio.h>

int main()
{
    int a = 7, b = 3, somai = a + b;
    short c = 4, d = 6, somas = c + d;

    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("Soma de int : %d\n", somai);
    printf("Soma de short : %d\n", somas);
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");

    float e = 7.0, f = 2.5, somaf = e - f;
    double g = 5.25, h = 4.75, somad = g - h;

    printf("Subtração de float : %.1f\n", somaf);
    printf("Subtração de double : %.2lf\n", somad);
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");

    char meg = 109;

    printf("O numero \"%d\" representa \"%c\"\n", meg, meg);
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");

    long i = 7, j = 3, somal = i * j;
    printf("Multiplicação de long : %d\n", somal);
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n"); 

    return 0;
}
