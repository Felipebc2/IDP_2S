#include <stdio.h>
#include <stdlib.h>

//          x = 5   y = 3
float soma(float x, float y) {
    return x + y; // 5 + 3
}

// passagem de parâmetros por valor
void trocaValor(float x, float y) {
    float temp = x;
    x = y;
    y = temp;
}
// passagem de parâmetros por referência (Apenas em C++)
void trocaRef(float &x, float &y) {
    float temp = x;
    x = y;
    y = temp;
}

// Passagem de parâmetros por valor (Endereço de memória é valor)
// Simulamos uma referência através de ponteiros
void trocaPonteiros(float *x, float *y) {
    float temp = *x; // temp = (n1)
    *x = *y; // n1 = n2
    *y = temp; // n2 = temp
}

int main(){
    system("cls");
    float resultado = soma(5, 3); // Passagem de valor aos parámetros na linha 5
    printf("The value of the sum is: %.f\n", resultado);
    float n1 = 3, n2 = 7; // n1 = 3; n2 = 7
    trocaValor(n1, n2);
    printf("n1: %.f, n2: %.f\n", n1, n2);
    trocaRef(n1, n2); // n1 = 7; n2 = 3
    printf("n1: %.f, n2: %.f\n", n1, n2);
    trocaPonteiros(&n1, &n2); // n1 = 3; n2 = 7
    printf("n1: %.f, n2: %.f\n", n1, n2);
    printf("\n"); return 0;
}