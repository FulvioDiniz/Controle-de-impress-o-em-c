#ifndef LISTACONTROL_H_INCLUDED
#define LISTACONTROL_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "filacontrol.h"


struct info_lista{
    char modelo[10];
    int identificador;
    float tempo_espera;
    int qtd_fila;
    int tecnologia;
    int prioridade;
};
typedef struct info_lista Infolista;

struct no{
    info *fila_lista;
    Infolista ord_lista;
    struct no *prox;
};

typedef struct no No;

struct no2{
    info conteudo;
    int prioridade;
    struct no2 *prox;
};

typedef struct no2 No2;


No* cria_no(Infolista ord_lista;);
No* insere_inicio(No*, Infolista ord_lista;);
void mostra_lista(No*);
void libera_lista(No *L);
No* insere_ordenado(No* L, Infolista ord_lista;);
No* insere_fim(No* L,Infolista ord_lista;);
void menor_da_listaDinamica(No *lista);
//void libera_lista2(No2 *L)
void mostra_lista_fila2(No* L);
int menor(No* L);
No *encontra_menor_lista(No *L, int numero);
No *remove_inicio(No *prim);
No* insere_meio(No* L, Infolista ord_fila, Infolista ord_lista);
No* remove_elemento(No* L, Infolista ord_lista);
void reverte_lista(No* L);
No2* cria_no_priori(int prioridade);
No2* insere_inicio_priori(No2 *L, int prioridade);
No2* insere_meio_priori(No2* L, int prioridade, int prioridade2);
No2* insere_fim_priori(No2* L, int prioridade);
No2 *remove_inicio_priori(No2 *prim);
No2* insere_ordenado_priori(No2* L, int prioridade);
void mostra_lista_fila(No2* L);




#endif // LISTACONTROL_H_INCLUDED
