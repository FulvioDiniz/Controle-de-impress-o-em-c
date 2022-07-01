#ifndef FILACONTROL_H_INCLUDED
#define FILACONTROL_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Info{
    int identificador_fila;
    int prioridade;
    float Numero_Paginas;
    float imagens;
    float graficos;
    float tempo_total;
    char nome_usuario[30];
    char nome_arquivo[30];
    struct Info *ant;
    struct Info *prox;

};
typedef struct Info info;

struct nod{
    info informacoes;
    struct nod *ant;
    struct nod *prox;
};
typedef struct nod Nod;

struct listad{
        info *ini;
        info *fim;
};


typedef struct listad Listad;
typedef Listad Fila;

Fila* cria_fila();
Fila* enqueue(Fila* f, info informacoes);
int dequeue(Fila* f);
void consulta(Fila *f);
//int consulta(Fila *f);
bool fila_eh_vazia(Fila *f);

#endif // FILACONTROL_H_INCLUDED
