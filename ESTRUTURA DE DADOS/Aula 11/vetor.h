#ifndef VETOR_H
#define VETOR_H

// Protótipo ou interface da estrutura
typedef struct vetor Vetor;
// Protótipo ou interface das operações (Métodos)
Vetor *criarVetor(int limit);
void liberarVetor(Vetor *v);
void listar(Vetor *v);
void zerar(Vetor *v);

#endif // VETOR_H