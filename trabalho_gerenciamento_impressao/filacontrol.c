#include "filacontrol.h"


/*Fila* cria_fila(){
     Listad* novalista;
    novalista = (Listad *)malloc(sizeof(Listad));
    novalista->ini = novalista->fim = NULL;
    return novalista;
}
Fila* enqueue(Fila* f, int elem){
    Nod *novo = cria_nod(valor);

    if (L == NULL){
        L = cria_listad();
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

int dequeue(Fila* f){
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

            resposta = aux->info;
            free(aux);
        }
    return resposta;
}


int consulta(Fila *f);
{
    int resp = -1;

    if (!fila_eh_vazia(f))
        resp = f->ini->info;

    return resp;
}

bool fila_eh_vazia(Fila *f)
{
    if (f->ini == NULL)
        return true;
    else
        return false;
}*/






//





