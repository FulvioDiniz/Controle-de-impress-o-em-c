#include "menu.h"
#include "listacontrol.h"



void contador_de_cadastros(int n1, int n2){
    printf("                                           Contador de cadastros       \n");
    printf("\n");
    printf("  Computadores cadastrados e ativos [%d]                                    Impressoras cadastradas e ativas [%d]\n",n1,n2);
    printf("\n");
    printf("\n");
    printf("\n");

}


void menu_comp(){
    printf("                                                BEM VINDO\n");
    printf("                                 1- Cadastro de novos computadores\n");
    printf("                                 2- Cadastro de novas impressoras\n");
    printf("                                 3- Cadastro de processos\n");
    printf("                                 4- Computadores Cadastrados\n");
    printf("                                 5- Impressoras Cadastradas\n");
    printf("                                 6- Proximo arquivo a ser impresso da impressora escolida\n");
    printf("                                 7- Lista de ordem de execucao de processo\n");
    printf("                                 8- Desenvolvido por\n");
    printf("                                 9- Painel do desenvolvedor\n");
    printf("                                 10- Liberar memoria\n");
    printf("                                 11- Sair programa\n");
    printf("                                 12- Enviar para impressao\n");

}

void menu_cadastro_impressora(){
    printf("\n");
    printf("OLA, SEJA BEM VINDO(A) AO CADASTRO DE COMPUTADOR\n");
    printf("Insira o nome do local onde esta localizado o computador, caso nao saiba insira (local) para ver a lista ou ate criar um personalizado \n");
}


void menu_cadastro_impressora2(){
    printf("OLA, SEJA BEM VINDO(A) AO CADASTRO DE IMPRESSORA \n");
    printf("\n");
    printf("Por gentileza insira a marca ou modelo da impressora,caso nao saiba insira (opcoes), caso ela nao se encontre na lista, precisara cadastra-la manualmente\n");

}

void menu_desenvolvedor(){
    system("cls");
    system("color 02");
    printf("OLA, SEJA BEM VINDO(A) AO MENU DE DESENVOLVEDOR \n");
    printf("\n");
    printf("Nesta tela eh possivel ver todas as informacoes do processos");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("                         CARREGANDO....");
    Sleep(5000);
    system("cls");

}





void menu_pc_cadastro(){
    printf("\n");
    printf("OLA, SEJA BEM VINDO(A) AO CADASTRO DE IMPRESSORA \n");
    printf("\n");
    printf("- diretoria\n");
    printf("- secretaria\n");
    printf("- professores\n");
    printf("- servidores\n");
    printf("- alunos\n");
    printf("- personalizado");
    printf("\n");
    printf("Por favor INSIRA O NOME do local = ");

}


void menu_impressora_cadastro(){
    printf("\n");
    printf("OLA, SEJA BEM VINDO(A) AO CADASTRO DE IMPRESSORA \n");
    printf("\n");
    printf("- impacto\n");
    printf("- jato\n");
    printf("- laser\n");
    printf("- termica\n");
    printf("- tinta\n");
    printf("- personalizado");
    printf("\n");
    printf("Por favor INSIRA O MODELO da impressora = ");


}




void menu_cadastro_processo(){
    printf("\n");
    printf("OLA, SEJA BEM VINDO(A) AO CADASTRO DE PROCESSOS \n");
    printf("\n");
    printf("NESTA TELA PRECISAMOS QUE INFORME OS PEDIDOS ABAIXO\n");

}







void loading(){
    int i, j;
   printf ("\n\nAnalisando a melhor opcao: \n\n");

   for (i = 0; i <= 40; i++){
      printf ("  %d%%\r", i);
      fflush (stdout);

      for (j = 0; j < i; j++){
         if (!j)
           printf ("  ");

         printf ("%c", 219);
         Sleep(3);
      }
   }

   printf ("\n\nProcesso quase finalizado...");
   Sleep (2000);
   printf ("\r \t\t\t\t  Obrigado por aguardar\n\n\n");
}
