#include <stdio.h>

    // Em C, por padrão, os parâmetros são passados por valor para funções. Isso significa que uma cópia do valor do argumento é passada para a função. Qualquer modificação feita nos parâmetros dentro da função não afetará os valores das variáveis originais fora da função.
    // No entanto, você pode simular a passagem por referência em C passando o endereço de memória da variável como argumento para a função. Dessa forma, a função pode manipular diretamente o valor da variável original.

void incrementa(int x) {
    x++; // Modifica a cópia local de x
}

void incrementa_por_referencia(int *x) {
    (*x)++; // Incrementa o valor apontado por x
}

int main(){
    int a = 5;
    incrementa(a);
    // O valor de a continua sendo 5, pois a função incrementa recebeu uma cópia de a
    printf("%d\n", a);

    incrementa_por_referencia(&a); // Passa o endereço de a
    printf("%d\n", a); // Agora o valor de a é 6, pois a função incrementa_por_referencia modificou a variável original

// OBS: Em C, não existe passagem de valor por referência!!!

    return 0;
}