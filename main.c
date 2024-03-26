#include <stdio.h>
#include "tarefas.h"
int main(){
  int pos =0;
    Tarefa tarefas[TOTAL];
  
  int opcao;
  do{
  printf("\n MENU PRINCIPAL ");
  printf("\n 1. Criar tarefa");
  printf("\n 2. Deletar tarefa");
  printf("\n 3. Listar tarefas");
  printf("\n 0. Sair\n");
  printf("\n Digite a opção desejada: ");
  int i = scanf("%d", &opcao);
  printf("Opção desejada: %d\n", opcao);
    if (opcao==1){
      int erro = criarTarefa(tarefas, &pos);
    }else if (opcao==2){
      int erro = deletar(tarefas, &pos);
    }else if (opcao==3){
      int erro = listar(tarefas, pos);
    }else if (opcao==0){
      printf("Sair \n");
    }else{
        printf("opcao inválida\n");
    }
    }while(opcao != 0 );
