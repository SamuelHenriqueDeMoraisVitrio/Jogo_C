#include <stdio.h>
#include <stdlib.h>//possibilita o rand e o system
#include <time.h>//relaciona com o tempo atual
#include <windows.h>//bliblioteca para funções do console windows, ex: sleep


void main(){
    
    srand(time(NULL));//cria semente para aleatoriedade de acordo com o tempo em s
    const numSorteado = rand() %10 + 1;//sortea entre 1 e 10
    printf("\n%d\n", numSorteado);//escreve numero sorteado
    
    void esper(){
        Sleep(1300);
    }

    void cls(){
        system("cls");
    }

    const char estrela[50] = "**************************************************";//constante que diminui o cod

    printf("\n%s\n", estrela);
    printf("Jogo da Sorte");
    printf("\n%s\n", estrela);

    esper();
    cls();

    printf("\nEscreva um numero de 1 a 10\n");
    printf("Ganha se acertar o numero que estou pensando\n");

    short num;

    printf("\nVoce tem 10 tentativas");
    printf("\nEscreva um numero\n");

    short a;
    for(a = 1; a <= 10; a++);
        scanf("%d", &num);

        printf("num");
}