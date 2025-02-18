// Nome: Felipe Barroso de Castro
// RA: 2311292

#include <stdio.h>
#include <stdlib.h>
#include "calculadora.h"

int main(){
system("cls");
// Testes de verificação
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