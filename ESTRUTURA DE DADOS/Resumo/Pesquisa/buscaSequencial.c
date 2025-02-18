#include <stdio.h>

// Função de busca sequencial
int busca_sequencial(int vetor[], int tamanho, int chave) {
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == chave) {
            return i; // Retorna o índice se a chave for encontrada
        }
    }
    return -1; // Retorna -1 se a chave não for encontrada
}

int main() {
    int vetor[] = {10, 20, 30, 40, 50};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]); // Calcula o tamanho do vetor
    int chave = 30;

    // Chama a função de busca sequencial
    int resultado = busca_sequencial(vetor, tamanho, chave);

    // Verifica o resultado
    if (resultado != -1) {
        printf("A chave %d foi encontrada no indice %d.\n", chave, resultado);
    } else {
        printf("A chave %d nao foi encontrada no vetor.\n", chave);
    }

    return 0;
}
