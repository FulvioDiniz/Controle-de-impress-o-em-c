#include "compcontrol.h"


/*Informa* cria_struc_informacao(){
    Informa* novo_struct = NULL;
    novo_struct = (Informa*)malloc(sizeof(Informa));
    if(novo_struct != NULL){
        return novo_struct;
    }
    else{
        return NULL;
    }
}*/


Noc* cria_noc(Informa comp){
    Noc *novo = NULL;
    novo = (Noc*)malloc(sizeof(Noc));
    if(novo != NULL){
        //novo->prioridade = Number_prio;
        //novo->info.numero_identificador_pc = 100*(rand() % 100);
        //novo->local = nome[10];
        //strcpy(novo->local,nome);
        novo->info = comp;
        novo->prox = novo;
    }
    return novo;
}

Noc* insere_circular(Informa comp, Noc *L){
    Noc *novo = cria_noc(comp);
    Noc * aux;
    if(L == NULL)
    {
        L = novo;
        L->prox = novo;
    }
    else
    {
        aux = L;
        while (aux->prox != L)
            aux = aux->prox;

        aux->prox = novo;
        novo->prox = L;
        L = novo;
    }
    return L;
}

Noc* remove_circular(int valor,Informa comp, Noc *L){
    Noc *aux = L, *ant=NULL, *aux2;

    if (L != NULL)
    {
        while (aux->prox != L && aux->info.numero_identificador_pc != valor)
        {
            ant = aux;
            aux=aux->prox;
        }
        if(aux->info.numero_identificador_pc == valor)
        {
            if(aux == aux->prox)
                L=NULL;
            else if (ant != NULL)
                ant->prox = aux->prox;
            else
            {
                aux2=L;
                while (aux2->prox != L)
                    aux2 = aux2->prox;
                //ultimo elemento aponta para o novo primeiro elemento
                aux2->prox = L->prox;
                //
                L = aux->prox;
            }

        }
        free(aux);
    }
    return L;
}


Noc* libera_listac(Noc *L){
    Noc *aux = L;
    Noc *aux2 = aux->prox;

    while (aux2 != L)
    {
        aux = aux2;
        aux2 = aux2->prox;
        free(aux);
    }
    free(L);
    return NULL;
}

//contar elementos

int numero(Noc* L){

    Noc* aux = L;
    int tam = 0;
    if (L == NULL)
        tam = 0;
    else
    {
        while(aux->prox != L)
        {
            tam++;
            aux = aux->prox;
        }
        tam++;
    }
    return tam;
}


void mostra_listac(Noc* L){
    Noc* aux = L;
    if(aux == NULL){
        printf("Lista vazia");
    }
    do
    {
        printf("\n");
        printf("Numero do computador = [%i] \n", aux->info.numero_identificador_pc);
        printf("Prioridade na fila = [%i] \n", aux->info.prioridade);
        printf("Local = [%s] ", aux->info.local);
        printf("\n");
        aux = aux->prox;
    }
    while (aux!=L);
}


