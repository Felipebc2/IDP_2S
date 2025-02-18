#include <stdlib.h>
#include <stdio.h>
#include "Calculadora.h" // inclui os protótipos

struct calculadora{
    float memoria;
};

//Criar Calculadora
Calculadora *criar(){
    Calculadora *c = malloc(sizeof(Calculadora));
    if(c != NULL) {
        c->memoria = 0;
    }
    return c;
}

//Exibir Valor Calculadora
void exibir(Calculadora *c){
    printf("Memoria: %.2f\n", c->memoria);
}

//Destruir (liberar) Calculadora
void destruir(Calculadora *c){
    free(c);
}

//Zera a Calculadora
void zerar(Calculadora *c){
    c->memoria = 0;
}

//Somar com a Calculadora
void somar(Calculadora *c, float valor){
    c->memoria += valor;
}

//Subtrair com a Calculadora
void subtrair(Calculadora *c, float valor){
    c->memoria -= valor;
}

//Multiplicar com a Calculadora
void multiplicar(Calculadora *c, float valor){
    c->memoria *= valor;
}

//Dividir com a Calculadora
void dividir(Calculadora *c, float valor){
    if(valor == 0){
        printf("Valor Invalido! Nao eh possível dividir por 0\n");
        return;
    }
    c->memoria /= valor;
}