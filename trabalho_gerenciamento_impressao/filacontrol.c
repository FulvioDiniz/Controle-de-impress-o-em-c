#include "filacontrol.h"
#include "listacontrol.h"


Fila* cria_fila(){
    Listad* novalista;
    novalista = (Listad *)malloc(sizeof(Listad));
    novalista->ini = novalista->fim = NULL;
    return novalista;
}


Nod* cria_nod(info informacoes)
{
    Nod* novo = (Nod*)malloc(sizeof(Nod));
    novo->ant = novo->prox = NULL;
    novo->informacoes = informacoes;
    return novo;
}

Fila* enqueue(Fila* L, info informacoes){
    Nod *novo = cria_nod(informacoes);

    if (L == NULL){
        L = cria_fila();
        L->ini = L->fim = novo;
    }
    else{


        if(L->ini == NULL){
            L->ini = L->fim = novo;
        }
        else{
            novo->ant = L->fim;
            L->fim->prox = novo;
            L->fim = novo;
        }
    }
    return L;
}

int dequeue(Fila* L){
    Nod* aux;
    int resposta = -1;//quando nao tem nada pra remover
    if (L!=NULL)
        if (L->ini != NULL){
            aux = L->ini;

            if (L->ini != L->fim){
                L->ini->prox->ant = NULL;
                L->ini = L->ini->prox;
            }
            else
                L->ini = L->fim = NULL;

            resposta = aux->informacoes.identificador_fila;
            free(aux);
        }
    return resposta;
}


void consulta(Fila *f){
    if(!fila_eh_vazia(f)){
        printf("Nome do arquivo:          [%s]\n",f->ini->nome_arquivo);
        printf("Nome do solicitante:      [%s]\n",f->ini->nome_usuario);
        printf("Numero de paginas:        [%f]\n",f->ini->Numero_Paginas);
        printf("Tempo para impressao:     [%f]\n",f->ini->tempo_total);
        printf("Numero de identificacao : [%d]\n",f->ini->identificador_fila);
    }
}

bool fila_eh_vazia(Fila *f){
    if (f->ini == NULL)
        return true;
    else
        return false;
}












