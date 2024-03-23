#include"tarefas.h"
#include<stdio.h>

int criarTarefa(Tarefa tarefas[], int *pos){

  if(*pos >= TOTAL)
    return 1;

  printf("Entre com a prioridade: \n");
  scanf("%d", tarefas[*pos].prioridade);
  clearBuffer();
  printf("Entre com a categoria: \n");
  fgets(tarefas[*pos].categoria, 100,stdin);
  clearBuffer();
  printf("Entre com a descricao: \n");
  fgets(tarefas[*pos].descricao, 300,stdin);
  clearBuffer();
  *pos =*pos +1;
  return 0; 
}

int deletar(Tarefa tarefas[], int *pos){
  printf("Função de deletar tarefas\n");
  return 0;
}
int listar(Tarefa tarefas[], int pos){
  if (pos==0)
  return 1;

  for(int i=0; i<pos; i++){
    printf("Pos: %d\n", i+1);
    printf("Prioridade: %d\n", tarefas[i].prioridade);
    printf("Categoria: %s\n", tarefas[i].categoria);
    printf("Descricao: %s\n", tarefas[i].descricao);
}
  return 0;
}

int salvar(Tarefa tarefas[], int total, int pos){
  printf("Função de salvar tarefas\n");
  return 0;
}
int carregar(Tarefa tarefas[], int total, int pos){
  printf("Função de carregar tarefas\n");
  return 0;
}

void clearBuffe(){
  int c;
  while((c=getchar()) != '\n' && c != EOF) { }
}