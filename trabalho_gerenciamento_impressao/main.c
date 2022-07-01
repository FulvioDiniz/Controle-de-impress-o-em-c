#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>
#include <Windows.h>
#include "menu.h"
#include "compcontrol.h"
#include "listacontrol.h"
#include "filacontrol.h"


int main(){
    Informa testando;
    Infolista impressora;
    Infolista ordem_arquivo;
    info informacoes_fila;
    info informacoes_lista;
    Noc *teste = NULL;
    No *impr_list = NULL;
    No2 *list_fila_ord = NULL;
    No2 *list_fila_ord2 = NULL;
    int op;
    int auxiliar1 = 1;
    int auxiliar2 = 1;
    int auxiliar3 = 1;
    int auxiliar4 = 1;
    int auxiliar5 = 1;
    char valida_char[30];
    char consultar[10];
    int senha;
    int cont1 = 0;
    int cont2 = 0;
    int numero = 0;
    No *impr_fila = NULL;
    int numero_pc;
    int tempo_folha,tempo_grafico,tempo_img;
    int identificador_menor = 0;
    Noc *no_encontrado = NULL;
    No *no_ordenado = NULL;
    No *no_achado = NULL;
    system("color 1F");
    while(auxiliar1 == 1){
        contador_de_cadastros(cont1,cont2);
        menu_comp();
        scanf("%d",&op);
        if(op > 0 && op < 15){
        switch(op){
        case 1:
            do{
                do{
                    menu_cadastro_impressora();
                    scanf("%s",testando.local);
                    if(strcmp(testando.local,"local") == 0){
                        menu_pc_cadastro();
                        auxiliar3 = 1;
                        scanf("%s",testando.local);
                    }
                        auxiliar3 = 2;
                }while(auxiliar3 == 1);
                printf("\n");
                    if(strcmp(testando.local,"diretoria") == 0){
                        testando.prioridade = 1;
                        testando.numero_identificador_pc = 1000*(rand() % 1000);
                        printf("Cadastro realizado como [%s], a prioridade eh : [%d]\n",testando.local,testando.prioridade);
                        printf("O numero de identificacao do seu computador eh [%d] por favor, anote\n",testando.numero_identificador_pc);
                        printf("Deseja alterar a prioridade? se sim digite (sim) em caso de nao digite (nao)\n");
                        scanf("%s",valida_char);
                        if(strcmp(valida_char,"sim") == 0){
                            printf("digite a senha que eh = [%d],\n",testando.numero_identificador_pc);
                            scanf("%d",&senha);
                            if(senha == testando.numero_identificador_pc){
                                printf("Insira a nova prioridade ");
                                scanf("%d",&testando.prioridade);
                                teste = insere_circular(testando,teste);
                                printf("Computador registrado com sucesso\n");
                            }
                            else if(senha != testando.numero_identificador_pc){
                                printf("Senha incorreta\n");
                            }
                        }
                        else if(strcmp(valida_char,"nao") == 0){
                            teste = insere_circular(testando,teste);
                            printf("Computador registrado com sucesso\n");
                        }
                        else{
                            printf("Comando nao registrado, tente cadastrar novamente");
                        }
                        auxiliar1 = 1;
                        auxiliar2 = 2;
                        cont1++;
                        printf("\n");
                        system("pause");
                        system("cls");
                    }
                    else if(strcmp(testando.local,"secretaria") == 0){
                        testando.prioridade = 2;
                        testando.numero_identificador_pc = 1000*(rand() % 1000);
                        printf("Cadastro realizado como [%s], a prioridade eh : [%d]\n",testando.local,testando.prioridade);
                        printf("O numero de identificacao do seu computador eh [%d] por favor, anote\n",testando.numero_identificador_pc);
                        printf("Deseja alterar a prioridade? se sim digite (sim) em caso de nao digite (nao)\n");
                        scanf("%s",valida_char);
                        if(strcmp(valida_char,"sim") == 0){
                            printf("digite a senha que eh = [%d],\n",testando.numero_identificador_pc);
                            scanf("%d",&senha);
                            if(senha == testando.numero_identificador_pc){
                                printf("Insira a nova prioridade ");
                                scanf("%d",&testando.prioridade);
                                teste = insere_circular(testando,teste);
                                printf("Computador registrado com sucesso\n");
                            }
                            else if(senha != testando.numero_identificador_pc){
                                printf("Senha incorreta\n");
                            }
                        }
                        else if(strcmp(valida_char,"nao") == 0){
                            teste = insere_circular(testando,teste);
                            printf("Computador registrado com sucesso\n");
                        }
                        else{
                            printf("Comando nao registrado, tente cadastrar novamente");
                        }
                        auxiliar1 = 1;
                        auxiliar2 = 2;
                        cont1++;
                        printf("\n");
                        system("pause");
                        system("cls");



                    }
                    else if(strcmp(testando.local,"professores") == 0){
                        testando.prioridade = 3;
                        testando.numero_identificador_pc = 1000*(rand() % 1000);
                        printf("Cadastro realizado como [%s], a prioridade eh : [%d]\n",testando.local,testando.prioridade);
                        printf("O numero de identificacao do seu computador eh [%d] por favor, anote\n",testando.numero_identificador_pc);
                        printf("Deseja alterar a prioridade? se sim digite (sim) em caso de nao digite (nao)\n");
                        scanf("%s",valida_char);
                        if(strcmp(valida_char,"sim") == 0){
                            printf("digite a senha que eh = [%d],\n",testando.numero_identificador_pc);
                            scanf("%d",&senha);
                            if(senha == testando.numero_identificador_pc){
                                printf("Insira a nova prioridade ");
                                scanf("%d",&testando.prioridade);
                                teste = insere_circular(testando,teste);
                                printf("Computador registrado com sucesso\n");
                            }
                            else if(senha != testando.numero_identificador_pc){
                                printf("Senha incorreta\n");
                            }
                        }
                        else if(strcmp(valida_char,"nao") == 0){
                            teste = insere_circular(testando,teste);
                            printf("Computador registrado com sucesso\n");
                        }
                        else{
                            printf("Comando nao registrado, tente cadastrar novamente");
                        }
                        auxiliar1 = 1;
                        auxiliar2 = 2;
                        cont1++;
                        printf("\n");
                        system("pause");
                        system("cls");

                    }
                     else if(strcmp(testando.local,"servidores") == 0){
                        testando.prioridade = 4;
                        testando.numero_identificador_pc = 1000*(rand() % 1000);
                        printf("Cadastro realizado como [%s], a prioridade eh : [%d]\n",testando.local,testando.prioridade);
                        printf("O numero de identificacao do seu computador eh [%d] por favor, anote\n",testando.numero_identificador_pc);
                        printf("Deseja alterar a prioridade? se sim digite (sim) em caso de nao digite (nao)\n");
                        scanf("%s",valida_char);
                        if(strcmp(valida_char,"sim") == 0){
                            printf("digite a senha que eh = [%d],\n",testando.numero_identificador_pc);
                            scanf("%d",&senha);
                            if(senha == testando.numero_identificador_pc){
                                printf("Insira a nova prioridade ");
                                scanf("%d",&testando.prioridade);
                                teste = insere_circular(testando,teste);
                                printf("Computador registrado com sucesso\n");
                            }
                            else if(senha != testando.numero_identificador_pc){
                                printf("Senha incorreta\n");
                            }
                        }
                        else if(strcmp(valida_char,"nao") == 0){
                            teste = insere_circular(testando,teste);
                            printf("Computador registrado com sucesso\n");
                        }
                        else{
                            printf("Comando nao registrado, tente cadastrar novamente");
                        }
                        auxiliar1 = 1;
                        auxiliar2 = 2;
                        cont1++;
                        printf("\n");
                        system("pause");
                        system("cls");
                    }
                     else if(strcmp(testando.local,"alunos") == 0){
                        testando.prioridade = 5;
                        testando.numero_identificador_pc = 1000*(rand() % 1000);
                        printf("Cadastro realizado como [%s], a prioridade eh : [%d]\n",testando.local,testando.prioridade);
                        printf("O numero de identificacao do seu computador eh [%d] por favor, anote\n",testando.numero_identificador_pc);
                        printf("Deseja alterar a prioridade? se sim digite (sim) em caso de nao digite (nao)\n");
                        scanf("%s",valida_char);
                        if(strcmp(valida_char,"sim") == 0){
                            printf("digite a senha que eh = [%d],\n",testando.numero_identificador_pc);
                            scanf("%d",&senha);
                            if(senha == testando.numero_identificador_pc){
                                printf("Insira a nova prioridade ");
                                scanf("%d",&testando.prioridade);
                                teste = insere_circular(testando,teste);
                                printf("Computador registrado com sucesso\n");
                            }
                            else if(senha != testando.numero_identificador_pc){
                                printf("Senha incorreta\n");
                            }
                        }
                        else if(strcmp(valida_char,"nao") == 0){
                            teste = insere_circular(testando,teste);
                            printf("Computador registrado com sucesso\n");
                        }
                        else{
                            printf("Comando nao registrado, tente cadastrar novamente");
                        }
                        auxiliar1 = 1;
                        auxiliar2 = 2;
                        cont1++;
                        printf("\n");
                        system("pause");
                        system("cls");

                    }
                     else if(strcmp(testando.local,"personalizado") == 0){
                        testando.prioridade = 6;
                        printf("Qual novo nome deste setor?\n");
                        scanf("%s",testando.local);
                        testando.numero_identificador_pc = 1000*(rand() % 1000);
                        printf("Cadastro realizado como personalizado , a prioridade eh : [%d] e o novo nome eh: [%s]\n",testando.prioridade,testando.local);
                        printf("\n");
                        printf("O numero de identificacao do seu computador eh [%d] por favor, anote\n",testando.numero_identificador_pc);
                        printf("\n");
                        printf("Deseja alterar a prioridade? se sim digite (sim) em caso de nao digite (nao)\n");
                        scanf("%s",valida_char);
                        if(strcmp(valida_char,"sim") == 0){
                            printf("digite a senha que eh = [%d],\n",testando.numero_identificador_pc);
                            scanf("%d",&senha);
                            if(senha == testando.numero_identificador_pc){
                                printf("Insira a nova prioridade ");
                                scanf("%d",&testando.prioridade);
                                teste = insere_circular(testando,teste);
                                printf("Computador registrado com sucesso\n");
                            }
                            else if(senha != testando.numero_identificador_pc){
                                printf("Senha incorreta\n");
                            }
                        }
                        else if(strcmp(valida_char,"nao") == 0){
                            teste = insere_circular(testando,teste);
                            printf("Computador registrado com sucesso\n");
                        }
                        else{
                            printf("Comando nao registrado, tente cadastrar novamente");
                        }
                        auxiliar1 = 1;
                        auxiliar2 = 2;
                        cont1++;
                        printf("\n");
                        system("pause");
                        system("cls");

                    }
                    else{
                        printf("Nao existe o setor digitado, tente denovo\n");
                        auxiliar2 = 1;
                    }
            }while(auxiliar2 == 1);
            break;
        case 2:
            do{
                do{
                    menu_cadastro_impressora2();
                    scanf("%s",impressora.modelo);
                    if(strcmp(impressora.modelo,"opcoes") == 0){
                        menu_impressora_cadastro();
                        auxiliar5 = 1;
                        scanf("%s",impressora.modelo);
                    }
                        auxiliar5 = 2;
                }while(auxiliar5 == 1);
                    if(strcmp(impressora.modelo,"impacto") == 0){
                        impressora.tecnologia = 1;
                        impressora.identificador = 1000*(rand() % 1000);
                        printf("Cadastro realizado como [%s], a tecnologia eh de nivel : [%d]\n",impressora.modelo, impressora.tecnologia);
                        printf("\n");
                        impr_list = insere_ordenado(impr_list,impressora);
                        printf("Impressora registrado com sucesso\n");
                        auxiliar4 = 2;
                        cont2++;
                        printf("\n");
                        system("pause");
                        system("cls");
                    }
                    else if(strcmp(impressora.modelo,"jato") == 0){
                        impressora.tecnologia = 2;
                        impressora.identificador = 1000*(rand() % 1000);
                        printf("Cadastro realizado como [%s], a tecnologia eh de nivel : [%d]\n",impressora.modelo, impressora.tecnologia);
                        printf("\n");
                        impr_list = insere_ordenado(impr_list,impressora);
                        printf("Impressora registrado com sucesso\n");
                        auxiliar4 = 2;
                        cont2++;
                        printf("\n");
                        system("pause");
                        system("cls");
                    }
                   else if(strcmp(impressora.modelo,"laser") == 0){
                        impressora.tecnologia = 3;
                        impressora.identificador = 1000*(rand() % 1000);
                        printf("Cadastro realizado como [%s], a tecnologia eh de nivel : [%d]\n",impressora.modelo, impressora.tecnologia);
                        printf("\n");
                        impr_list = insere_ordenado(impr_list,impressora);
                        printf("Impressora registrado com sucesso\n");
                        auxiliar4 = 2;
                        cont2++;
                        printf("\n");
                        system("pause");
                        system("cls");
                    }
                    else if(strcmp(impressora.modelo,"termica") == 0){
                        impressora.tecnologia = 4;
                        impressora.identificador = 1000*(rand() % 1000);
                        printf("Cadastro realizado como [%s], a tecnologia eh de nivel : [%d]\n",impressora.modelo, impressora.tecnologia);
                        printf("\n");
                        impr_list = insere_ordenado(impr_list,impressora);
                        printf("Impressora registrado com sucesso\n");
                        auxiliar4 = 2;
                        cont2++;
                        printf("\n");
                        system("pause");
                        system("cls");
                    }
                    else if(strcmp(impressora.modelo,"tinta") == 0){
                        impressora.tecnologia = 5;
                        impressora.identificador = 1000*(rand() % 1000);
                        printf("Cadastro realizado como [%s], a tecnologia eh de nivel : [%d]\n",impressora.modelo, impressora.tecnologia);
                        printf("\n");
                        impr_list = insere_ordenado(impr_list,impressora);
                        printf("Impressora registrado com sucesso\n");
                        auxiliar4 = 2;
                        cont2++;
                        printf("\n");
                        system("pause");
                        system("cls");
                    }
                     else if(strcmp(impressora.modelo,"personalizado") == 0){
                        printf("Qual modelo deseja registrar?\n");
                        scanf("%s",impressora.modelo);
                        printf("Qual nivel de tecnologia?\n");
                        scanf("%d",&impressora.tecnologia);
                        impressora.identificador = 1000*(rand() % 1000);
                        printf("Cadastro realizado como [%s], a tecnologia eh de nivel : [%d]\n",impressora.modelo, impressora.tecnologia);
                        printf("\n");
                        impr_list = insere_ordenado(impr_list,impressora);
                        printf("Impressora registrado com sucesso\n");
                        auxiliar4 = 2;
                        cont2++;
                        printf("\n");
                        system("pause");
                        system("cls");
                }

            }while(auxiliar4 == 1);

            break;

        case 3:
            menu_cadastro_processo();
            printf("Por gentileza insira o numero unico do seu computador\n");
            scanf("%d",&numero_pc);
            no_encontrado = encontra_elemento(teste,numero_pc);
            if(no_encontrado != NULL){
                impressora.prioridade = no_encontrado->info.prioridade;
                printf("Por gentileza insira seu nome\n");
                scanf("%s",informacoes_fila.nome_usuario);
                printf("Por gentileza insira o nome do arquivo\n");
                scanf("%s",informacoes_fila.nome_arquivo);
                printf("Por gentileza insira o numero de paginas\n");
                scanf("%f",&informacoes_fila.Numero_Paginas);
                printf("Do numero de paginas quantos sao graficos?\n");
                scanf("%f",&informacoes_fila.graficos);
                printf("Do numero de paginas quantos sao imagens?\n");
                scanf("%f",&informacoes_fila.imagens);
                if((informacoes_fila.graficos + informacoes_fila.imagens) < informacoes_fila.Numero_Paginas){
                    list_fila_ord = insere_ordenado_priori(list_fila_ord,no_encontrado->info.prioridade);
                    list_fila_ord2 = insere_ordenado_priori(list_fila_ord2,no_encontrado->info.prioridade);
                    list_fila_ord2->conteudo = informacoes_fila;
                    list_fila_ord->conteudo = informacoes_fila;
                    system("cls");
                    while(list_fila_ord != NULL){
                        identificador_menor = menor(impr_list);
                        no_ordenado = encontra_menor_lista(impr_list,identificador_menor);
                         //menor_da_listaDinamica(impr_list);
                        if(impr_list != NULL){
                            if(no_ordenado->ord_lista.tecnologia == 1){
                                tempo_grafico = list_fila_ord->conteudo.graficos * 0.6;
                                tempo_img = list_fila_ord->conteudo.imagens  * 1;
                                tempo_folha = (list_fila_ord->conteudo.Numero_Paginas - (list_fila_ord->conteudo.graficos - list_fila_ord->conteudo.imagens)) * 0.5;
                                list_fila_ord->conteudo.tempo_total = (tempo_folha+tempo_grafico+tempo_img);
                                no_ordenado->ord_lista.tempo_espera = impr_list->ord_lista.tempo_espera + list_fila_ord->conteudo.tempo_total;
                                no_ordenado->ord_lista.qtd_fila++;
                                no_ordenado->fila_lista = enqueue(no_ordenado->fila_lista,list_fila_ord->conteudo);
                                mostra_lista_fila(list_fila_ord);
                                loading();
                                list_fila_ord = remove_inicio_priori(list_fila_ord);


                            }
                            else if(no_ordenado->ord_lista.tecnologia == 2){
                                tempo_grafico = list_fila_ord->conteudo.graficos * 0,7;
                                tempo_img = list_fila_ord->conteudo.imagens  * 1.1;
                                tempo_folha = (list_fila_ord->conteudo.Numero_Paginas - (tempo_img - tempo_folha)) * 0.8;
                                list_fila_ord->conteudo.tempo_total = (tempo_folha+tempo_grafico+tempo_img);
                                no_ordenado->ord_lista.tempo_espera = impr_list->ord_lista.tempo_espera + list_fila_ord->conteudo.tempo_total;
                                no_ordenado->ord_lista.qtd_fila++;
                                no_ordenado->fila_lista = enqueue(no_ordenado->fila_lista,list_fila_ord->conteudo);
                                mostra_lista_fila(list_fila_ord);
                                loading();
                                list_fila_ord = remove_inicio_priori(list_fila_ord);
                            }
                            else if(no_ordenado->ord_lista.tecnologia == 3){
                                tempo_grafico = list_fila_ord->conteudo.graficos * 0.8;
                                tempo_img = list_fila_ord->conteudo.imagens  * 1.3;
                                tempo_folha = (list_fila_ord->conteudo.Numero_Paginas - (tempo_img - tempo_folha)) * 0.7;
                                list_fila_ord->conteudo.tempo_total = (tempo_folha+tempo_grafico+tempo_img);
                                no_ordenado->ord_lista.tempo_espera = impr_list->ord_lista.tempo_espera + list_fila_ord->conteudo.tempo_total;
                                no_ordenado->ord_lista.qtd_fila++;
                                no_ordenado->fila_lista = enqueue(no_ordenado->fila_lista,list_fila_ord->conteudo);
                                mostra_lista_fila(list_fila_ord);
                                loading();
                                list_fila_ord = remove_inicio_priori(list_fila_ord);
                            }
                            else if(no_ordenado->ord_lista.tecnologia == 4){
                                tempo_grafico = list_fila_ord->conteudo.graficos * 1.6;
                                tempo_img = list_fila_ord->conteudo.imagens  * 2.3;
                                tempo_folha = (list_fila_ord->conteudo.Numero_Paginas - (tempo_img - tempo_folha)) * 1.5;
                                list_fila_ord->conteudo.tempo_total = (tempo_folha+tempo_grafico+tempo_img);
                                no_ordenado->ord_lista.tempo_espera = impr_list->ord_lista.tempo_espera + list_fila_ord->conteudo.tempo_total;
                                no_ordenado->ord_lista.qtd_fila++;
                                no_ordenado->fila_lista = enqueue(no_ordenado->fila_lista,list_fila_ord->conteudo);
                                mostra_lista_fila(list_fila_ord);
                                loading();
                                list_fila_ord = remove_inicio_priori(list_fila_ord);
                            }
                            else if(no_ordenado->ord_lista.tecnologia == 5){
                                tempo_grafico = list_fila_ord->conteudo.graficos * 2.6;
                                tempo_img = list_fila_ord->conteudo.imagens  * 3.1;
                                tempo_folha = (list_fila_ord->conteudo.Numero_Paginas - (tempo_img - tempo_folha)) * 2.0;
                                list_fila_ord->conteudo.tempo_total = (tempo_folha+tempo_grafico+tempo_img);
                                no_ordenado->ord_lista.tempo_espera = impr_list->ord_lista.tempo_espera + list_fila_ord->conteudo.tempo_total;
                                no_ordenado->ord_lista.qtd_fila++;
                                no_ordenado->fila_lista = enqueue(no_ordenado->fila_lista,list_fila_ord->conteudo);
                                mostra_lista_fila(list_fila_ord);
                                loading();
                                list_fila_ord = remove_inicio_priori(list_fila_ord);
                            }
                            else{
                                int n1,n2,n3;
                                printf("Voce esta na tela de impressora personalizada\n");
                                printf("Consulte seu manual e veja os seguintes tempos para cada folha\n");
                                printf("Tempo para impressao de uma folha contendo somente texto\n");
                                scanf("%f",&n1);
                                printf("Tempo para impressao de uma folha contendo um grafico\n");
                                scanf("%f",&n2);
                                printf("Tempo para impressao de uma folha contendo uma imagem\n");
                                scanf("%f",&n3);
                                tempo_grafico = list_fila_ord->conteudo.graficos * n2;
                                tempo_img = list_fila_ord->conteudo.imagens  * n3;
                                tempo_folha = (list_fila_ord->conteudo.Numero_Paginas - (tempo_img - tempo_folha)) * n1;
                                list_fila_ord->conteudo.tempo_total = (tempo_folha+tempo_grafico+tempo_img);
                                no_ordenado->ord_lista.tempo_espera = impr_list->ord_lista.tempo_espera + list_fila_ord->conteudo.tempo_total;
                                no_ordenado->ord_lista.qtd_fila++;
                                no_ordenado->fila_lista = enqueue(no_ordenado->fila_lista,list_fila_ord->conteudo);
                                mostra_lista_fila(list_fila_ord);
                                loading();
                                list_fila_ord = remove_inicio_priori(list_fila_ord);
                            }

                        }
                          else{
                            printf("Nao existe impressora cadastrada, por gentileza cadastre uma impressora\n");
                            system("pause");
                            system("cls");
                        }

                    }



            }
                else{
                    printf("Informcoes erradas, talvez numero de paginas que voce inseriu nao seja o correto, analise de novo\n");
                    system("pause");
                    system("cls");
                }
            }
            else{
                printf("Maquina nao encontrada ou nao registrada, repita o processo\n");
                system("pause");
                system("cls");
            }
            break;

        case 4:
            mostra_listac(teste);
            printf("\n");
            break;
        case 5:
            mostra_lista(impr_list);
            printf("\n");
            break;
        case 6:
            printf("Lista de impressoras registradas\n");
            mostra_lista(impr_list);
            printf("\n");
            printf("Insira o numero de identificacao da impressora\n");
            scanf("%d",&numero);
            no_achado = encontra_elemento_lista(impr_list,numero);
            if(no_achado == NULL){
                printf("Impressora nao encontrada\n");
            }
            if(no_achado->fila_lista == NULL){
                printf("Fila vazia");
            }
            consulta(no_achado->fila_lista);
            break;
        case 7:
            mostra_lista_fila(list_fila_ord2);
            break;
        case 8:
            system("cls");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("                                       DESENVOLVIDO POR : Fulvio Diniz Santos\n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\n");
            auxiliar1 = 2;
            break;
        case 9:
            menu_desenvolvedor();
            printf("\n");
            printf("Lista dos computadores\n");
            mostra_listac(teste);
            printf("------------------------");
            printf("Lista das impressoras\n");
            mostra_lista(impr_list);
            printf("------------------------");
            printf("Lista dos processos em ordem de prioridade\n");
            mostra_lista_fila(list_fila_ord2);
            printf("------------------------");
            printf("Proximo arquvio a ser impresso de todas as impressoras\n");
            mostra_lista_fila2(impr_list);
            printf("------------------------");
            break;
        case 10:
            printf("Liberando memoria ...\n");
            libera_lista(impr_list);
            libera_lista(impr_fila);
            libera_listac(teste);
            break;
        case 11:
            printf("Saindo do programar ...");
            break;
        }


    }
    else{
        printf("Opcao nao valida, tente novamente\n");
        printf("\n");
        auxiliar1 = 1;
    }

    }

}
