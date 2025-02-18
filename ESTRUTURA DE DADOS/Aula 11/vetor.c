#include <stdio.h>
#include <stdlib.h>

#include "vetor.h"

#define MIN_INT 0x80000000;
#define MAX_INT 0x7FFFFFFF;

struct vetor {
  int *dados;     // ponteiro para array de inteiros
  int length;   // comprimento
  int limit;  // tamanho máximo
};

Vetor *criarVetor(int limit) {
  Vetor *v = malloc(sizeof(Vetor));
  if(v == NULL) return NULL; // Erro na alocação
  v->dados = malloc(sizeof(int) * limit);
  if(v->dados == NULL) {
    free(v);
    return NULL; // Erro na alocação
  }
  v->length = 0;
  v->limit = limit;
  return v;
}

void liberarVetor(Vetor *v) {
  free(v->dados);
  free(v);
}

void listar(Vetor *v) {
  for(int i = 0; i < v->length; i++) {
    printf("%d ", v->dados[i]);
  }
  printf("\n");
}

void inserir(Vetor *v, int elemento) {
    if (v->length < v->limit) {
        v->dados[v->length] = elemento;
        v->length++;
        printf("Elemento %d inserido com sucesso.\n", elemento);
    } else {
        printf("Não é possível inserir mais elementos, vetor cheio.\n");
    }
}

void zerar(Vetor *v) {
  v->length = 0;
}