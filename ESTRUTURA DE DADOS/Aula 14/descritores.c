#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int dado;
    struct no *prox;
} No;

typedef struct lista {
    No *inicio;
    No *fim;
    int length;
} Lista;

// Função para criar uma lista vazia
Lista *criar_lista() {
    Lista *nova_lista = (Lista *)malloc(sizeof(Lista));
    if (nova_lista == NULL) {
        printf("Erro: memória insuficiente!\n");
        exit(1);
    }
    nova_lista->inicio = NULL;
    nova_lista->fim = NULL;
    nova_lista->length = 0;
    return nova_lista;
}

// Função para imprimir os elementos da lista
void listar(Lista *l) {
    if (l->inicio == NULL) {
        printf("Lista vazia.\n");
        return;
    }
    No *atual = l->inicio;
    while (atual != NULL) {
        printf("[%d] ", atual->dado);
        atual = atual->prox;
    }
    printf("\n");
}

// Função para inserir um elemento no início da lista
void inserir_inicio(Lista *l, int valor) {
    No *novo_no = (No *)malloc(sizeof(No));
    if (novo_no == NULL) {
        printf("Erro: memória insuficiente!\n");
        exit(1);
    }
    novo_no->dado = valor;
    novo_no->prox = l->inicio;
    l->inicio = novo_no;
    if (l->fim == NULL) { // Se a lista estava vazia
        l->fim = novo_no;
    }
    l->length++;
}

// Função para inserir um elemento no fim da lista
void inserir_fim(Lista *l, int valor) {
    No *novo_no = (No *)malloc(sizeof(No));
    if (novo_no == NULL) {
        printf("Erro: memória insuficiente!\n");
        exit(1);
    }
    novo_no->dado = valor;
    novo_no->prox = NULL;
    if (l->inicio == NULL) { // Se a lista estava vazia
        l->inicio = novo_no;
    } else {
        l->fim->prox = novo_no;
    }
    l->fim = novo_no;
    l->length++;
}

// Função para criar uma lista a partir de um vetor
Lista *criar_lista_do_vetor(int n, int vet[]) {
    Lista *nova_lista = criar_lista();
    for (int i = 0; i < n; i++) {
        inserir_fim(nova_lista, vet[i]);
    }
    return nova_lista;
}

// Função para criar um vetor a partir de uma lista
int *criar_vetor_da_lista(Lista *l) {
    int *vetor = (int *)malloc(l->length * sizeof(int));
    if (vetor == NULL) {
        printf("Erro: memória insuficiente!\n");
        exit(1);
    }
    No *atual = l->inicio;
    int i = 0;
    while (atual != NULL) {
        vetor[i++] = atual->dado;
        atual = atual->prox;
    }
    return vetor;
}

// Função para liberar a memória ocupada pela lista
void liberar_lista(Lista *l) {
    No *atual = l->inicio;
    while (atual != NULL) {
        No *temp = atual;
        atual = atual->prox;
        free(temp);
    }
    free(l);
}

int main() {
    Lista *lista = criar_lista();
    inserir_fim(lista, 10);
    inserir_fim(lista, 20);
    inserir_fim(lista, 30);
    listar(lista);

    int vetor[] = {5, 15, 25};
    Lista *outra_lista = criar_lista_do_vetor(3, vetor);
    listar(outra_lista);

    int *vetor_da_lista = criar_vetor_da_lista(lista);
    for (int i = 0; i < lista->length; i++) {
        printf("[%d] ", vetor_da_lista[i]);
    }
    printf("\n");

    liberar_lista(lista);
    liberar_lista(outra_lista);
    free(vetor_da_lista);

    return 0;
}
