#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int jogada, ppt;

    srand(time(0));
    
    printf("Escolha uma jogada:\n");
    printf("1- Pedra\n2- Papel\n3- Tesoura\n");
    scanf("%d", &jogada);
    
    while(jogada < 1 || jogada > 3){
        printf("Opção Invalida, digite novamente.");
        scanf("%d", &jogada);
    }

    ppt = rand() % 3 + 1;
        
    if(jogada == ppt){
        printf("Empate!");
    }else if((jogada == 1 && ppt == 3) ||
             (jogada == 2 && ppt == 1) ||
             (jogada == 3 && ppt == 2)){
        printf("Voce venceu!");
    }else {
        printf("Voce Perdeu...");
    }
    return 0;
}