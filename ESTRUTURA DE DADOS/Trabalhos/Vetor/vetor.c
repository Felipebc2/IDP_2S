#include <stdio.h>
#include <stdlib.h>
#include "vetor.h"

#define MAX_INT 0x7FFFFFFF;
#define MIN_INT 0x80000000;
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
  if(!v) return; // v == NULL
  free(v->dados);
  free(v);
}

void listar(Vetor *v) {
  for(int i = 0; i < v->length; i++) {
    printf("%d ", v->dados[i]);
  }
  printf("\n");
}

void zerar(Vetor *v) {
  v->length = 0;
}

void inserir(Vetor *v, int dado){
  if (v == NULL || v->dados == NULL){
    return;
  }
  if(v->length >= v->limit){
    printf("Vetor cheio\n");
    return;
  }
  v->dados[v->length] = dado;
  v->length++;
}

void atualizarUm(Vetor *v, int dadoAntigo, int dadoNovo){
  if (v == NULL || v->dados == NULL){
    return;
  }
  for (int i = 0; i < v->length; i++){
    if (v->dados[i] == dadoAntigo){
      v->dados[i] = dadoNovo;
      break;
    }
  }
}

void atualizarTodos(Vetor *v, int dadoAntigo, int dadoNovo) {
  if (v == NULL || v->dados == NULL){
    return;
  }
  for (int i = 0; i < v->length; i++){
    if (v->dados[i] == dadoAntigo){
      v->dados[i] = dadoNovo;
    }
  }
}

void atualizarIndice(Vetor *v, int indice, int dadoNovo) {
  if (v == NULL) return; // vetor inválido
  // vetor não está cheio
  if(indice >= 0 && indice < v->length) {
    v->dados[indice] = dadoNovo;
  } else {
    printf("\nIndice inválido\n");
  }
}

int buscarElemento(Vetor *v, int elemento) {
  if (v == NULL) return -1; // vetor inválido
  for(int i = 0; i < v->length; i++) {
    if(v->dados[i] == elemento) {
      return i;
    }
  }
  printf("Elemento não encontrado\n");
  return -1;
}
// obterElemento(NULL, 5);
int obterElemento(Vetor *v, int indice) {
 if (v ==NULL) return MIN_INT;
 if (indice >= 0 && indice < v->length){
   return v->dados[indice];
 } else{
   return MIN_INT;
 }
}

void deletarElemento(Vetor *v, int elemento) {
  if(!v) return; // v == NULL
  int indice = -1;
  for(int i = 0; i < v->length; i++) {
    if(v->dados[i] == elemento) {
      indice = i;
      break;
    }
  }
  // int indice = buscarElemento(v, elemento);
  if(indice == -1) {
    printf("Elemento não encontrado!\n");
    return;
  }
  // algoritmo da sobreposição (deleção)
  for(int i = indice; i < v->length-1; i++) {
    v->dados[i] = v->dados[i+1];
  }
  v->length--;
}

void deletarIndice(Vetor *v, int indice) {
  if(!v) return; // v == NULL -> inválido
  if(indice < 0 || indice >= v->length) return; // índice inválido
  for(int i = indice; i < v->length-1; i++) {
    v->dados[i] = v->dados[i+1];
  }
  v->length--;
}