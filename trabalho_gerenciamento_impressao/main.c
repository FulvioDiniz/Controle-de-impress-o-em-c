#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include "menu.h"
#include "compcontrol.h"
//#include

int main(){
    Informa testando[2]= {{1,"Diretoria",100*(rand() % 100)},
                         {2,"Sala Professor",100*(rand() % 100)}};
    Noc *teste = NULL;
    //testando = cria_struc_informacao();
    //int priori;
    //char nome[10];
    //printf("Digite prioridade\n");
    //scanf("%d",testando.prioridade);
    //printf("Digite nome\n");
    //fflush(stdin);
    //gets(testando.local);
    //scanf("%s",nome);
    teste = insere_circular(testando[0],teste);
    teste = insere_circular(testando[1],teste);
    mostra_listac(teste);
    teste = libera_listac(teste);
    mostra_listac(teste);

}
