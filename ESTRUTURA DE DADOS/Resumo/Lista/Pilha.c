#include <stdio.h>
#include <stdbool.h>

#define MAX 100 // Tamanho máximo da pilha

// Estrutura da pilha
typedef struct {
    int itens[MAX];
    int topo;
} Pilha;

// Função para inicializar a pilha
void inicializar(Pilha *pilha) {
    pilha->topo = -1;
}

// Função para verificar se a pilha está vazia
bool vazia(Pilha *pilha) {
    return (pilha->topo == -1);
}

// Função para verificar se a pilha está cheia
bool cheia(Pilha *pilha) {
    return (pilha->topo == MAX - 1);
}

// Função para inserir um elemento no topo da pilha
void empilhar(Pilha *pilha, int valor) {
    if (!cheia(pilha)) {
        pilha->itens[++(pilha->topo)] = valor;
    } else {
        printf("Erro: a pilha está cheia.\n");
    }
}

// Função para remover o elemento do topo da pilha
int desempilhar(Pilha *pilha) {
    if (!vazia(pilha)) {
        return pilha->itens[(pilha->topo)--];
    } else {
        printf("Erro: a pilha está vazia.\n");
        return -1; // Valor de erro
    }
}

int main() {
    Pilha pilha;
    inicializar(&pilha);

    empilhar(&pilha, 10);
    empilhar(&pilha, 20);
    empilhar(&pilha, 30);

    printf("Elemento desempilhado: %d\n", desempilhar(&pilha));
    printf("Elemento desempilhado: %d\n", desempilhar(&pilha));
    printf("Elemento desempilhado: %d\n", desempilhar(&pilha));

    return 0;
}
