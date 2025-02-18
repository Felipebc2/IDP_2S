#ifndef CALCULADORA_H
    #define CALCULADORA_H

    typedef struct calculadora Calculadora;

    Calculadora* criar();
    void exibir(Calculadora *c);
    void zerar(Calculadora *c);
    void destruir(Calculadora *c);
    void somar(Calculadora *c, float x);
    void subtrair(Calculadora *c, float x);
    void multiplicar(Calculadora *c, float x);
    void dividir(Calculadora *c, float x);

#endif