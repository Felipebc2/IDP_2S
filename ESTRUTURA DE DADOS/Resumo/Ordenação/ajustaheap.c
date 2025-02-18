#include <stdio.h>

void adjust_heap_max(int vetor[], int tamanho, int indice) {
    int maior = indice;
    int esquerda = 2 * indice + 1;
    int direita = 2 * indice + 2;

    // Verifica se o nó à esquerda é maior que o nó pai
    if (esquerda < tamanho && vetor[esquerda] > vetor[maior]) {
        maior = esquerda;
    }

    // Verifica se o nó à direita é maior que o nó pai
    if (direita < tamanho && vetor[direita] > vetor[maior]) {
        maior = direita;
    }

    // Se o maior não for o nó pai, troca-os e continua ajustando
    if (maior != indice) {
        int temp = vetor[indice];
        vetor[indice] = vetor[maior];
        vetor[maior] = temp;
        adjust_heap_max(vetor, tamanho, maior);
    }
}
