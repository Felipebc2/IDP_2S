#include <stdio.h>

void maxHeapify(int vetor[], int tamanho, int indice) {
    int maior = indice;
    int esquerda = 2 * indice + 1;
    int direita = 2 * indice + 2;
    
    if (esquerda < tamanho && vetor[esquerda] > vetor[maior]) {
        maior = esquerda;
    }
    if (direita < tamanho && vetor[direita] > vetor[maior]) {
        maior = direita;
    }
    if (maior != indice) {
        int temp = vetor[indice];
        vetor[indice] = vetor[maior];
        vetor[maior] = temp;
        maxHeapify(vetor, tamanho, maior);
    }
}

void buildMaxHeap(int vetor[], int tamanho) {
    for (int i = tamanho / 2 - 1; i >= 0; i--) {
        maxHeapify(vetor, tamanho, i);
    }
}

void heapSort(int vetor[], int tamanho) {
    buildMaxHeap(vetor, tamanho);
    for (int i = tamanho - 1; i >= 0; i--) {
        int temp = vetor[0];
        vetor[0] = vetor[i];
        vetor[i] = temp;
        maxHeapify(vetor, i, 0);
    }
}

int main() {
    int vetor[] = {64, 34, 25, 12, 22, 11, 90};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    
    heapSort(vetor, tamanho);
    
    printf("Vetor ordenado pelo Heap Sort: \n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    
    return 0;
}
