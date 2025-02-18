#include <stdio.h>

// Função de busca binária
int busca_binaria(int vetor[], int inicio, int fim, int chave) {
    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;

        // Se a chave estiver no meio, retorna o índice
        if (vetor[meio] == chave) {
            return meio;
        }
        // Se a chave for menor que o elemento no meio, busca na metade esquerda
        else if (chave < vetor[meio]) {
            fim = meio - 1;
        }
        // Se a chave for maior que o elemento no meio, busca na metade direita
        else {
            inicio = meio + 1;
        }
    }
    // Retorna -1 se a chave não for encontrada
    return -1;
}

int main() {
    int vetor[] = {10, 20, 30, 40, 50};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int chave = 30;

    // Chama a função de busca binária
    int resultado = busca_binaria(vetor, 0, tamanho - 1, chave);

    // Verifica o resultado
    if (resultado != -1) {
        printf("A chave %d foi encontrada no indice %d.\n", chave, resultado);
    } else {
        printf("A chave %d nao foi encontrada no vetor.\n", chave);
    }

    return 0;
}
