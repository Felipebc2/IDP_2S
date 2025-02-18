#include <stdio.h>
#include <stdbool.h>

#define MAX 100 // Tamanho máximo da fila

// Estrutura da fila
typedef struct {
    int itens[MAX];
    int inicio;
    int fim;
} Fila;

// Função para inicializar a fila
void inicializar(Fila *fila) {
    fila->inicio = 0;
    fila->fim = -1;
}

// Função para verificar se a fila está vazia
bool vazia(Fila *fila) {
    return (fila->fim < fila->inicio);
}

// Função para verificar se a fila está cheia
bool cheia(Fila *fila) {
    return (fila->fim - fila->inicio + 1 == MAX);
}

// Função para inserir um elemento no final da fila
void enfileirar(Fila *fila, int valor) {
    if (!cheia(fila)) {
        fila->itens[++(fila->fim)] = valor;
    } else {
        printf("Erro: a fila está cheia.\n");
    }
}

// Função para remover o elemento do início da fila
int desenfileirar(Fila *fila) {
    if (!vazia(fila)) {
        return fila->itens[(fila->inicio)++];
    } else {
        printf("Erro: a fila está vazia.\n");
        return -1; // Valor de erro
    }
}

int main() {
    Fila fila;
    inicializar(&fila);

    enfileirar(&fila, 10);
    enfileirar(&fila, 20);
    enfileirar(&fila, 30);

    printf("Elemento desenfileirado: %d\n", desenfileirar(&fila));
    printf("Elemento desenfileirado: %d\n", desenfileirar(&fila));
    printf("Elemento desenfileirado: %d\n", desenfileirar(&fila));

    return 0;
}
