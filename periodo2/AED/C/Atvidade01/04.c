#include <stdio.h>
#include <string.h>

struct Livro
{
    char titulo[100];
    char autor[50];
    int paginas; 
};

struct Livro biblioteca[2] = {
    {"A Arte da Guerra", "Sun Tzu", 128},
    {"1984", "George Orwell", 416}
};

int main()
{
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("Titulo:\t%s\nAutor:\t%s\nPáginas:\t%d\n",biblioteca[0].titulo, biblioteca[0].autor, biblioteca[0].paginas);
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("Titulo:\t%s\nAutor:\t%s\nPáginas:\t%d\n",biblioteca[1].titulo, biblioteca[1].autor, biblioteca[1].paginas);
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
   
    return 0;
}
