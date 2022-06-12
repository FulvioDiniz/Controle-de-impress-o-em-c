#include "listacontrol.h"



No* cria_no(Infolista ord_lista)
{
    No* novo;
    novo = (No*) malloc(sizeof(No));
    novo->prox = NULL;
    novo->ord_lista = ord_lista;

    return novo;
}


No* insere_inicio(No *L, Infolista ord_lista)
{
    No* nuevo = cria_no(ord_lista);
    if (L != NULL)
    {
        nuevo->prox = L;
    }
    return nuevo;
}


void mostra_lista(No* L)
{
    No* aux = L;

    while (aux != NULL)
    {
        printf("\n");
         printf("Modelo = [%s]\n ",aux->ord_lista.modelo);
        printf("identificador = [%d]\n ",aux->ord_lista.identificador );
        printf("tempo maximo de prioridade = [%d]\n ",aux->ord_lista.tempo_max_priori );
        printf("tempo maximo folha  = [%d]\n ",aux->ord_lista.tempo_max_folha );
        printf("Numero na fila = [%d]\n ",aux->ord_lista.qtd_fila );
        printf("Tecnologia nivel = [%d]\n",aux->ord_lista.tecnologia );
        printf("\n");

        aux = aux->prox;// (*aux).prox
    }
    printf("\n");
}



void libera_lista(No *L)
{
    No *aux = L;

    while (aux != NULL)
    {
        L = L->prox;
        free(aux);
        aux = L;
    }

}

No* insere_fim(No* L, Infolista ord_lista)
{
    No* novo = cria_no(ord_lista);
    No* aux = L;

    if (L == NULL)
    {
        L = novo;
    }
    else
    {
        //  for (aux = L; aux->prox != NULL; aux = aux->prox)

        while (aux->prox != NULL)
        {
            aux = aux->prox;
        }
        aux->prox = novo;
    }
    return L;
}

//insere após o elemento

No* insere_meio(No* L, Infolista ord_fila, Infolista ord_lista)
{

    No* aux = L;
    No* novo = cria_no(ord_lista);

    if (L == NULL)
    {
        L = novo;
    }
    else
    {
        while (aux->ord_lista.tecnologia != ord_fila.tecnologia)
        {
            aux = aux->prox;
        }
        novo->prox = aux->prox;
        aux->prox = novo;
    }
    return L;
}

No* insere_ordenado(No* L, Infolista ord_lista){

    No* aux = L;
    if (L == NULL){
        L = cria_no(ord_lista);
    }
    else{
        if(L->ord_lista.tecnologia > ord_lista.tecnologia){
            L = insere_inicio(L,ord_lista);
        }
        else{
            while (aux->prox != NULL && ord_lista.tecnologia > aux->prox->ord_lista.tecnologia){
                aux = aux->prox;
            }
            if(aux->prox == NULL){
                L = insere_fim(L,ord_lista);
            }
            else{
                L = insere_meio(L, aux->ord_lista, ord_lista);
            }

        }
    }
    return L;
}

/*No* remove_elemento(No* L, Infolista ord_lista)
{

    No* aux = L;
    No* anterior = NULL;
    if (L != NULL)
    {
        while (aux->info != elemento)
        {
            anterior = aux;
            aux = aux->prox;
        }
        if (anterior == NULL)//remove o primeiro elemento
        {
            L = aux->prox;
        }
        else
        {
            anterior->prox = aux->prox;
        }
        free(aux);
    }
    return L;//se nao removeu o primeiro elemento, retorna o mesmmo L
}*/

/*void reverte_lista(No* L)
{
    No* ini,*fim;
    ini = fim = L;
    int aux;
    No* fim_ultima_iteracao = NULL;
    fim = ini->prox;


    while (ini != fim_ultima_iteracao && ini->prox != fim_ultima_iteracao)
    {
        while (fim->prox != fim_ultima_iteracao)
            fim = fim->prox;

        aux=ini->info;
        ini->info = fim->info;
        fim->info = aux;

        fim_ultima_iteracao = fim;
        ini = ini->prox;
        fim = ini->prox;
    }

}*/
