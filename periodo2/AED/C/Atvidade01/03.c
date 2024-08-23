#include <stdio.h>
#include <string.h>

struct Livro
{
    char titulo[100];
    char autor[50];
    int paginas; 
};

struct Livro livro1 = {"Biblia", "Deus", 950};
struct Livro livro2 = {"Alcorão", "Alá", 866};
struct Livro livro3 = {"Turma da monica", "Mauricio de Sousa", 64};

int main()
{
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("Titulo:\t%s\nAutor:\t%s\nPáginas:\t%d\n",livro1.titulo, livro1.autor, livro1.paginas);
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("Titulo:\t%s\nAutor:\t%s\nPáginas:\t%d\n",livro2.titulo, livro2.autor, livro2.paginas);
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("Titulo:\t%s\nAutor:\t%s\nPáginas:\t%d\n",livro3.titulo, livro3.autor, livro3.paginas);
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    return 0;
}
