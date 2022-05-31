#ifndef COMPCONTROL_H_INCLUDED
#define COMPCONTROL_H_INCLUDED
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct informa{
    int prioridade;
    char local[30];
    int numero_identificador_pc;
};

typedef struct informa Informa;

struct noc{
    Informa info;
    //Lista_estacao *lista_de_fila;
    struct noc *prox;
};

typedef struct noc Noc;

Informa* cria_struc_informacao();
Noc* cria_noc(Informa comp);
Noc* libera_listac(Noc *L);
Noc* remove_circular(int valor,Informa comp, Noc *L);
Noc* insere_circular(Informa comp, Noc *L);
void mostra_listac(Noc* L);
int numero(Noc* L);





#endif // COMPCONTROL_H_INCLUDED
