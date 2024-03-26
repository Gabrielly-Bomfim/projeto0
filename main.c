#include <stdio.h>
#include "tarefas.h"
int main(){
  int pos =0;
    Tarefa tarefas[TOTAL];

  int e = carregar(tarefas, TOTAL, &pos);
  if (e!=0)
    pos = 0;
  
  int opcao;
  do{
    printf("Opcao escolhida: %d\n", opcao);
        if (opcao == 1) {
          int erro = criarTarefa(tarefas, &pos);
        } else if (opcao == 2) {
          int erro = deletar(tarefas, &pos);
        } else if (opcao == 3) {
          int erro = listar(tarefas, pos);
        } else if (opcao == 0) {
          printf("Sair\n");
          salvar(tarefas,TOTAL,pos);
        } else {
          printf("opcao invalida");
        }

      } while (opcao != 0);
    }
