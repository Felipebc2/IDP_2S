#include <stdlib.h>
#include <stdio.h>
#include "calculadora.h" // inclui os protótipos

// Criação da variavel de memoria
struct calculadora {
    float memoria;
};

// Criando a Calculadora
Calculadora *criar(){
    Calculadora *c = malloc(sizeof(Calculadora));
    if(c != NULL) {
        c->memoria = 0;
    }
    return c;
}

// Exibe a Calculadora
void exibir(Calculadora *c){
    printf("Memoria: %.1f\n", c->memoria);
}

// Zera o valor da Calculadora
void zerar(Calculadora *c){
    c->memoria = 0;
}

// Destroi a Calculadora
void destruir(Calculadora *c){
    free(c);
}

//Soma
void somar(Calculadora *c, float x){
    c->memoria += x;
}

//Subtrai
void subtrair(Calculadora *c, float x){
    c->memoria -= x;
}

//Multiplica
void multiplicar(Calculadora *c, float x){
    c->memoria *= x;
}

//Divide
void dividir(Calculadora *c, float ){
    if(x == 0){
        printf("ERROR!\n");
        return;
    }
    c->memoria /= X;
}