#ifndef LISTACONTROL_H_INCLUDED
#define LISTACONTROL_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct info_lista{
    char modelo[10];
    int identificador;
    int tempo_max_priori;
    int tempo_max_folha;
    int qtd_fila;
    int tecnologia;
};

typedef struct info_lista Infolista;





struct no{
    Infolista ord_lista;
    struct no *prox;
};

typedef struct no No;


No* cria_no(Infolista ord_lista;);
No* insere_inicio(No*, Infolista ord_lista;);
void mostra_lista(No*);
void libera_lista(No *L);
No* insere_ordenado(No* L, Infolista ord_lista;);
No* insere_fim(No* L,Infolista ord_lista;);
//No* insere_meio(No* L, int elemento, Infolista ord_lista);
No* insere_meio(No* L, Infolista ord_fila, Infolista ord_lista);
No* remove_elemento(No* L, Infolista ord_lista);
void reverte_lista(No* L);




#endif // LISTACONTROL_H_INCLUDED
