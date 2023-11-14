#include <stdio.h>
#include <stdlib.h>//possibilita o rand e o system
#include <time.h>//relaciona com o tempo atual


void main(){
    
    srand(time(NULL));//cria semente para aleatoriedade de acordo com o tempo em s
    short numSorteado = rand() %10 + 1;
    printf("\n%d\n", numSorteado);

    const char estrela[50] = "**************************************************";//constante que diminui o cod

    printf("\n%s\n", estrela);
    printf("Jogo da Sorte");
    printf("\n%s\n", estrela);

    printf("Escreva um numero de 1 a 10");
    printf("Ganha se acertar o numero que estou pensando");
}