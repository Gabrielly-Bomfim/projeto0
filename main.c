#include <stdio.h>
int main(){
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
  } while (opcao!=0);
  
}