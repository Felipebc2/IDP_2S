#include <stdio.h>
    // Funções: Uma função é um bloco de código que executa uma tarefa específica e retorna um valor para o chamador.
    // Ela pode receber argumentos para processar e, opcionalmente, retornar um valor usando a instrução return.
    int soma(int a, int b) {
        return a + b;
    }

    //Procedimentos: Um procedimento também é um bloco de código que executa uma tarefa específica, mas não retorna nenhum valor.
    //Pode receber argumentos para processar, mas não possui uma instrução return.
    void imprimir_mensagem(){
        printf("Olá, mundo!\n");
    }

int main(){
    // Nem toda função é um procedimento, porque uma função retorna um valor, enquanto um procedimento não retorna nada.
    // Nem todo procedimento é uma função, porque um procedimento não retorna um valor, enquanto uma função sempre retorna um valor (mesmo que seja void).

    // Tradicionalmente, os procedimentos não incluem uma instrução return, já que não retornam valores. No entanto, em C, você pode usar return em um procedimento void para sair antecipadamente do procedimento, mas sem retornar um valor. O uso comum seria para interromper a execução de um procedimento em determinadas condições, mas não para retornar valores.

    return 0;
}