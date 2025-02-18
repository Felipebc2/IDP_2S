// 1. 
// Considere a seguinte ilustração

int vet[] = {3, 5, 7, 8, 4};
//       0x100 0x102 0x104 0x106 0x108
int *p = vet;
//       0x100

// Considere também que cada inteiro ocupa 2 bytes e que &vet[0] = 0x100

// A) Qual o endereço do elemento 7?
// R: 0x104

// B) Qual é o resultado da operação (p + 3) - p?
//                                   0x106  -  0x100 = 6
// R: 6

// C) p + 2 corresponde ao valor 7 no vetor, assim como vet[2]?
// R: Não, pois P + 2 é o endereço de 7, que é 0x104. Já vet[2] é o elemento do indice 2, que é 7.

// -------------------------------------------------------------------------------- //

// 2.
// A) Qual é a diferença entre função e procedimento?
// R: Função retorna um valor, procedimento não retorna valor expecifico.

// B) Procedimentos não pode existir "return"?
// R: Pode existir, porém um return sem expecificação de valor. Serve para encerrar a execução da função

// C) Diferencie passagem de parâmetros por valor e por referência.
// R: Não existe passagem de valor por referência em C,

// Ex: Passagem por valor
int soma(int x, int y) {
    return x + y;
}

// Ex: Passagem por referência (C++)
void dobro(int &x) {
    x = x*2;
}

// Ex: Passagem por referência (C)
void dobro(int *x) {
    *x + *x*2;
}

// D) Como podemos mudar o conteúdo de uma variável declarada na main dentro de outra função?

// -------------------------------------------------------------------------------- //

// Busca de dados

// • Qual é a complexidade dos algoritmos de busca sequencial e binária no pior e no melhor caso?

// • Ambos algoritmos funcionam em listas desordenadas?
// R: Não, penas a sequencial que funciona em desordenadas e ordenadas.

// Ordenação

// • Classifique do pior para melhor os algoritmos heapsort, bubblesort, selectionsort.
// R: BubbleSort > SelectionSort > Heapsort

// • Justifique porque um é melhor que o outro.

