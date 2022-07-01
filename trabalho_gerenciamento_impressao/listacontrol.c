#include "listacontrol.h"
#include "filacontrol.h"



No* cria_no(Infolista ord_lista){

    No* novo;
    novo = (No*) malloc(sizeof(No));
    novo->prox = NULL;
    novo->ord_lista = ord_lista;
    novo->ord_lista.qtd_fila = 0;
    novo->ord_lista.tempo_espera = 0;
    novo->fila_lista = NULL;
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


No *encontra_elemento_lista(No *L, int numero){
    No *aux = L;
    if(L == NULL){
        return NULL;
    }
    while(aux != NULL && aux->ord_lista.identificador != numero){
        aux = aux->prox;
    }
    if(aux->ord_lista.identificador == numero){
        return aux;
    }
    else{
        return NULL;
    }
}



void mostra_lista(No* L){
    No* aux = L;
    if(L == NULL){
        printf("Lista vazia");
    }
    while (aux != NULL){
        printf("\n");
        printf(" Modelo =                   [%s]\n ",aux->ord_lista.modelo);
        printf(" Identificador =            [%d]\n ",aux->ord_lista.identificador);
        printf(" Tempo espera em segundos = [%f]\n ",aux->ord_lista.tempo_espera);
        printf(" Numero na fila =           [%d]\n ",aux->ord_lista.qtd_fila );
        printf(" Tecnologia nivel =         [%d]\n",aux->ord_lista.tecnologia);
        printf("\n");
        aux = aux->prox;
    }

    printf("\n");
}


void mostra_lista_fila2(No* L){
    No* aux = L;

    while(aux != NULL){
        printf("\n");
        consulta(aux->fila_lista);
        printf("\n");
        aux = aux->prox;// (*aux).prox
    }
    printf("\n");
}



void mostra_lista_fila(No2* L){
    No2* aux = L;

    while (aux != NULL){
        printf("\n");
        printf(" Nome do arquivo:          [%s]\n",aux->conteudo.nome_arquivo);
        printf(" Nome do solicitante:      [%s]\n",aux->conteudo.nome_usuario);
        printf(" Numero de paginas:        [%f]\n",aux->conteudo.Numero_Paginas);
        printf(" Numero de identificacao : [%d]\n",aux->conteudo.identificador_fila);
        printf(" Tempo para impressao:     [%f]\n",aux->conteudo.tempo_total);
        printf("\n");
        aux = aux->prox;
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



No *encontra_menor_lista(No *L, int numero){
    No *aux = L;
    if(L == NULL){
        return NULL;
    }
    while(aux != NULL && aux->ord_lista.identificador != numero){
        aux = aux->prox;
    }
    if(aux->ord_lista.identificador == numero){
        return aux;
    }
    else{
        return NULL;
    }
}


int menor(No* L){
    No *aux = L;
    int menor = aux->ord_lista.tempo_espera;
    int menor2 = aux->ord_lista.identificador;
    if(L != NULL){
        while(aux != NULL){
            if(aux->ord_lista.tempo_espera < menor){
            menor = aux->ord_lista.tempo_espera;
            menor2 = aux->ord_lista.identificador;
            }
            aux = aux->prox;
        }
            return menor2;
    }

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


No2* cria_no_priori(int prioridade){
    No2* novo;
    novo = (No2*) malloc(sizeof(No2));
    novo->prox = NULL;
    novo->prioridade = prioridade;
    return novo;
}

No2* insere_inicio_priori(No2 *L, int prioridade){
    No2* nuevo = cria_no_priori(prioridade);
    if (L != NULL){
        nuevo->prox = L;
    }
    return nuevo;
}

No2* insere_meio_priori(No2* L, int prioridade, int prioridade2){

    No2* aux = L;
    No2* novo = cria_no_priori(prioridade);

    if (L == NULL){
        L = novo;
    }
    else{
        while (prioridade != prioridade2){
            aux = aux->prox;
        }
        novo->prox = aux->prox;
        aux->prox = novo;
    }
    return L;
}
No2* insere_fim_priori(No2* L, int prioridade)
{
    No2* novo = cria_no_priori(prioridade);
    No2* aux = L;

    if (L == NULL)
    {
        L = novo;
    }
    else
    {
        while (aux->prox != NULL)
        {
            aux = aux->prox;
        }
        aux->prox = novo;
    }
    return L;
}


No2 *remove_inicio_priori(No2 *prim){
    No2 *aux = prim;
    if(prim == NULL){
        return NULL;
    }
    prim = prim -> prox;
    free(aux);

    return prim;
}


No2* insere_ordenado_priori(No2* L, int prioridade){
    No2* aux = L;
    if (L == NULL){
        L = cria_no_priori(prioridade);
    }
    else{
        if(L->prioridade > prioridade){
            L = insere_inicio_priori(L,prioridade);
        }
        else{
            while (aux->prox != NULL && prioridade > aux->prox->prioridade){
                aux = aux->prox;
            }
            if(aux->prox == NULL){
                L = insere_fim_priori(L,prioridade);
            }
            else{
                L = insere_meio_priori(L,aux->prioridade, prioridade);
            }

        }
    }
    return L;
}




void menor_da_listaDinamica(No *lista){
    int menor = lista->ord_lista.tempo_espera;
    if(lista != NULL){
        while(lista != NULL){
            if(lista->ord_lista.tempo_espera < menor){
                menor = lista->ord_lista.tempo_espera;
            }
            lista = lista->prox;
        }
    }
}

No *remove_inicio(No *prim){
    No *aux = prim;
    if(prim == NULL){
        return NULL;
    }
    prim = prim -> prox;
    free(aux);

    return prim;
}




