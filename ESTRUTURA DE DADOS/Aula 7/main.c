#include <stdlib.h>
#include <stdio.h>
#include "Calculadora.h"

int main(){
    Calculadora *c;
    c = criar();
    somar(c, 10);
    exibir(c);
    subtrair(c, 5);
    exibir(c);
    multiplicar(c, 3);
    exibir(c);
    dividir(c, 2);
    exibir(c);
    zerar(c);
    dividir(c, 0);
    destruir(c);

    return 0;
}