#include <stdio.h>
#include <stdlib.h>//possibilita o rand e o system
#include <time.h>//relaciona com o tempo atual
#include <windows.h>//bliblioteca para funções do console windows, ex: sleep


void esper(){//Função para esperar 1 segundo, somente no windows
    Sleep(1800);
}

void cls(){//Função para apagar console
    system("cls");
}


void main(){
    
    srand(time(NULL));//cria semente para aleatoriedade de acordo com o tempo em s
    const short numSorteado = rand() %10 + 1;//sortea entre 1 e 10

    const char estrela[] = "**************************************************";//constante que diminui o cod

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

    for(short a = 1; a <= 10; a++){

        printf("\nTentativa %d\n\n", a);
        scanf("%d", &num);
        cls();

        if(num == numSorteado){

            cls();
            printf("Parabens voce acertou\n");
            printf("O numero era %d\n", numSorteado);
            break;

        }else if(a == 10){

            printf("\n voce errou sua ultima tentativa\n");
            break;
        }else{

            printf("\n voce errou");
            printf("\nTente outra vez\n\n");

        }
    }

    printf("\n************************");//o estrela não está sendo reconhecido aqui.
    printf("\nFIM\n");
    printf("************************\n");
}