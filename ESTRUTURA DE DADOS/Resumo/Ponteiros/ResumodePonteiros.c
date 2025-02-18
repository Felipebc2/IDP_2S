#include <stdio.h>

int main(){
    // 1. Acesso a Endereço de Memoria
    // Ponteiros são variáveis que armazenam endereços de memória. 
    // Para acessar um endereço de memória, você pode usar o operador de referência "&".

int x = 10;
int *ptr; // Declaração de um ponteiro para um inteiro
ptr = &x; // Atribui o endereço de memória de x ao ponteiro ptr

    // ------------------------------------------------------------------------------------------------------------------------- //   

    // 2. Aritmética de Ponteiros
    // A aritmética de ponteiros permite que você realize operações matemáticas direto nos ponteiros. 
    // Isso é útil para navegar em arrays e estruturas de dados.
    // Notação de Vetor:Ao usar um ponteiro para percorrer um array, o próprio compilador realiza a aritmética de ponteiros para acessar os elementos do array.

int arr[5] = {1, 2, 3, 4, 5};
int *ptr2 = arr; // ptr aponta para o primeiro elemento do array
printf("%d\n", *ptr2); // imprime o primeiro elemento: 1
ptr2++; // avança o ponteiro para o próximo elemento
printf("%d\n", *ptr2); // imprime o segundo elemento: 2

    // 3. Notação em Ponteiros
    // Você também pode usar operações aritméticas diretas em ponteiros. Por exemplo:
    
int *ptr3 = arr; // ptr aponta para o primeiro elemento do array
printf("\n%d\n", *ptr3); // imprime o primeiro elemento: 1
ptr3 = ptr3 + 1; // avança o ponteiro para o próximo elemento
printf("%d\n", *ptr3); // imprime o segundo elemento: 2

return 0;
}