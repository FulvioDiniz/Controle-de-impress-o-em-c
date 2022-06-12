#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "menu.h"
#include "compcontrol.h"
#include "listacontrol.h"
//#include

int main(){
    //Informa testando[2]= {{1,"Diretoria",100*(rand() % 100)},
                         //{2,"Sala Professor",100*(rand() % 100)}};
    Informa testando;
    Infolista impressora;
    //Infolista testando2;


    //Infolista testando2[2] = {{testando[0].numero_identificador_pc, 20,50,2,1},
                         //{testando[1].numero_identificador_pc,20 ,50,3,2}};
    Noc *teste = NULL;
    No *impr_list = NULL;
    //No *teste2 = cria_listad();
    int op;
    int cont;
    int auxiliar1 = 1;
    int auxiliar2 = 1;
    int auxiliar3 = 1;
    int auxiliar4 = 1;
    int auxiliar5 = 1;
    char valida_char[30];
    char novo_setor[30];
    int senha;
    int priori;
    int cont1 = 0;
    int cont2 = 0;
    //teste = cria_noc(testando);
    //Listad *teste3 = cria_listad();
    //Listad *teste3 = cria_listad();
    //int valor;

    //testando = cria_struc_informacao();
    //int priori;
    //char nome[10];
    //printf("Digite prioridade\n");
    //scanf("%d",testando.prioridade);
    //printf("Digite nome\n");
    //fflush(stdin);
    //gets(testando.local);
    //scanf("%s",nome);
    //printf("teste1\n");
    //scanf("%d",&teste2->ini.ord_fila.prioridade);
    while(auxiliar1 == 1){
        contador_de_cadastros(cont1,cont2);
        menu_comp();
        scanf("%d",&op);
        if(op > 0 && op < 10){
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
                    if(strcmp(testando.local,"diretoria") == 0){
                        testando.prioridade = 1;
                        testando.numero_identificador_pc = 1000*(rand() % 1000);
                        printf("Cadastro realizado como [%s], a prioridade eh : [%d]\n",testando.local,testando.prioridade);
                        printf("Deseja alterar a prioridade? se sim digite (sim) em caso de nao digite (nao)");
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
                        //teste = teste->prox;
                        auxiliar1 = 1;
                        auxiliar2 = 2;
                        cont1++;

                    }
                    else if(strcmp(testando.local,"secretaria") == 0){
                        testando.prioridade = 2;
                        testando.numero_identificador_pc = 1000*(rand() % 1000);
                        printf("Cadastro realizado como [%s], a prioridade eh : [%d]\n",testando.local,testando.prioridade);
                        printf("Deseja alterar a prioridade? se sim digite (sim) em caso de nao digite (nao)");
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
                        //teste = teste->prox;
                        auxiliar1 = 1;
                        auxiliar2 = 2;
                        cont1++;

                    }
                    else if(strcmp(testando.local,"professores") == 0){
                        testando.prioridade = 3;
                        testando.numero_identificador_pc = 1000*(rand() % 1000);
                        printf("Cadastro realizado como [%s], a prioridade eh : [%d]\n",testando.local,testando.prioridade);
                        printf("Deseja alterar a prioridade? se sim digite (sim) em caso de nao digite (nao)");
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
                        //teste = teste->prox;
                        auxiliar1 = 1;
                        auxiliar2 = 2;
                        cont1++;

                    }
                     else if(strcmp(testando.local,"servidores") == 0){
                        testando.prioridade = 4;
                        testando.numero_identificador_pc = 1000*(rand() % 1000);
                        printf("Cadastro realizado como [%s], a prioridade eh : [%d]\n",testando.local,testando.prioridade);
                        printf("Deseja alterar a prioridade? se sim digite (sim) em caso de nao digite (nao)");
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
                        //teste = teste->prox;
                        auxiliar1 = 1;
                        auxiliar2 = 2;
                        cont1++;
                    }
                     else if(strcmp(testando.local,"alunos") == 0){
                        testando.prioridade = 5;
                        testando.numero_identificador_pc = 1000*(rand() % 1000);
                        printf("Cadastro realizado como [%s], a prioridade eh : [%d]\n",testando.local,testando.prioridade);
                        printf("Deseja alterar a prioridade? se sim digite (sim) em caso de nao digite (nao)");
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
                        //teste = teste->prox;
                        auxiliar1 = 1;
                        auxiliar2 = 2;
                        cont1++;

                    }
                     else if(strcmp(testando.local,"personalizado") == 0){
                        testando.prioridade = 6;
                        printf("Qual novo nome deste setor?");
                        scanf("%s",testando.local);
                        testando.numero_identificador_pc = 1000*(rand() % 1000);
                        printf("Cadastro realizado como personalizado , a prioridade eh : [%d] e o novo nome eh: [%s]\n",testando.prioridade,testando.local);
                        printf("Deseja alterar a prioridade? se sim digite (sim) em caso de nao digite (nao)");
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
                        //teste = teste->prox;
                        auxiliar1 = 1;
                        auxiliar2 = 2;
                        cont1++;

                    }
                    else{
                        printf("Nao existe o setor digitado, tente denovo");
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
                        impr_list = insere_ordenado(impr_list,impressora);
                        printf("Impressora registrado com sucesso\n");
                        //teste = teste->prox;
                        auxiliar4 = 2;
                        cont2++;
                    }
                    else if(strcmp(impressora.modelo,"jato") == 0){
                        impressora.tecnologia = 2;
                        impressora.identificador = 1000*(rand() % 1000);
                        printf("Cadastro realizado como [%s], a tecnologia eh de nivel : [%d]\n",impressora.modelo, impressora.tecnologia);
                        impr_list = insere_ordenado(impr_list,impressora);
                        printf("Impressora registrado com sucesso\n");
                        //teste = teste->prox;
                        auxiliar4 = 2;
                        cont2++;
                    }
                   else if(strcmp(impressora.modelo,"laser") == 0){
                        impressora.tecnologia = 3;
                        impressora.identificador = 1000*(rand() % 1000);
                        printf("Cadastro realizado como [%s], a tecnologia eh de nivel : [%d]\n",impressora.modelo, impressora.tecnologia);
                        impr_list = insere_ordenado(impr_list,impressora);
                        printf("Impressora registrado com sucesso\n");
                        //teste = teste->prox;
                        auxiliar4 = 2;
                        cont2++;
                    }
                    else if(strcmp(impressora.modelo,"termica") == 0){
                        impressora.tecnologia = 4;
                        impressora.identificador = 1000*(rand() % 1000);
                        printf("Cadastro realizado como [%s], a tecnologia eh de nivel : [%d]\n",impressora.modelo, impressora.tecnologia);
                        impr_list = insere_ordenado(impr_list,impressora);
                        printf("Impressora registrado com sucesso\n");
                        //teste = teste->prox;
                        auxiliar4 = 2;
                        cont2++;
                    }
                    else if(strcmp(impressora.modelo,"tinta") == 0){
                        impressora.tecnologia = 5;
                        impressora.identificador = 1000*(rand() % 1000);
                        printf("Cadastro realizado como [%s], a tecnologia eh de nivel : [%d]\n",impressora.modelo, impressora.tecnologia);
                        impr_list = insere_ordenado(impr_list,impressora);
                        printf("Impressora registrado com sucesso\n");
                        //teste = teste->prox;
                        auxiliar4 = 2;
                        cont2++;
                    }
                     else if(strcmp(impressora.modelo,"personalizado") == 0){
                        printf("Qual modelo deseja registrar?\n");
                        scanf("%s",impressora.modelo);
                        printf("Qual nivel de tecnologia?\n");
                        scanf("%d",&impressora.tecnologia);
                        impressora.identificador = 1000*(rand() % 1000);
                        printf("Cadastro realizado como [%s], a tecnologia eh de nivel : [%d]\n",impressora.modelo, impressora.tecnologia);
                        impr_list = insere_ordenado(impr_list,impressora);
                        printf("Impressora registrado com sucesso\n");
                        //teste = teste->prox;
                        auxiliar4 = 2;
                        cont2++;
                }

            }while(auxiliar4 == 1);

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

    //mostra_listac(teste);



    //teste = insere_circular(testando[0],teste);
    //teste = insere_circular_lista(teste,1,testando2[0],teste2);
    //teste = insere_circular(testando[1],teste);
    //mostra_listac(teste);
    //teste2 = insere_inicio_listad(teste2,testando2[1]);
    //teste->prox->listadefila = insere_inicio_listad(teste2,testando2[0]);
    //teste->listadefila = insere_inicio_listad(teste3,testando2[1]);
    //teste = insere_circular_lista(teste,0,testando2[0]);
    //teste = insere_circular_lista(teste,0,testando2[1]);
    //teste = insere_circular_lista(teste,1,testando2[0]);






    //mostra_listac_e_listad(teste,teste->listadefila);
    //mostra_listac(teste);
    //teste = libera_listac(teste);
    //mostra_listac(teste);

}
