// OBS: Explicar Linhas: 14, 16, 17 e 19.

#include <stdlib.h>
#include <math.h>
#include "MyPonto.h" // inclui os protótipos

struct MyPonto {
    float x;
    float y;
};

// Criar novos Pontos
Ponto* ponto_cria(float x, float y) {
    Ponto *p = (Ponto *) malloc(sizeof(Ponto));
    if (p != NULL) {
        p->x = x;
        p->y = y;
    }
    return p;
}