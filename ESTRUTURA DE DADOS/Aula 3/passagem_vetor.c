#include <stdio.h>
#include <stdlib.h>

//void exibir1(int v[], int tamanho);
//void exibir2(int *v, int tamanho);
void exibir(int tamanho, int v[tamanho]){
    for (size_t i = 0; i < tamanho; i++) {
        printf("v[%d]: %d\n", i, v[i]);
    } }

// Relatório: A função zerarPares funciona da seguinte forma, ao criar a função zerarPares com os parametros de tamanho e v[tamanho] como variáveis, é possivel manipular por meio de um for os valores de dentro do vetor selecionado quando a função for chamada. Quando realiza uma operação de Modulus (%) e o resultado restante é igual a 0 siginifica que o número é par, quando resta alguma fração significa que o número é impar. Logo para zerar os pares deve-se realizar uma "varredura" pelo vetor para ver quais números são pares, e toda vez que a função achar um número par ela o transforma em 0. No Main, basta chamar a função zerarPares, definir a quantidade de termos dentro do vetor em questão e em seguida colocar qual vetor vai ser modificado e dessa forma a função zerarPares é aplicada.
void zerarPares(int tamanho, int v[tamanho]) {
    for (size_t i = 0; i < tamanho; i++) {
        if (v[i] % 2 == 0) {
            v[i] = 0;
        }
    printf("v[%d]: %d\n", i, v[i]);
    } }

int main(){
    system("cls");
    int v1[] = {5, 2, 8, 2, 1, 9, 7, 6}; // 8 Elementos
    int v2[10] = {5, 2, 8, 2, 1, 9, 7, 6}; // Elementos excendentes são inicializados com 0
    int v3[10] = {}; // Cria um vetor com 10 dimensões nulas.
    int v4[10];
    printf("Vetores\n");
    exibir(8, v1); printf("\n");
    exibir(10, v2); printf("\n");
    exibir(10, v3); printf("\n");
    exibir(10, v4); printf("\n");

    printf("Vetores com pares zerados\n");
    zerarPares(8, v1); printf("\n");
    return 0;
}