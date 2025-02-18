#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");
    int n = 5;
    int *p = &n; // É igual à = int *p; p = &n;

    // Mostra o Endreço e o Valor de minhas variáveis.
    printf("Endereco de n (&n): %p Valor de n (n): %d\n", &n, n);
    printf("Endereco de p (&p): %p Valor de p (p): %p\n\n", &p, p);

    // Incrementação de P++ aumenta os Bytes em +4
    p++; printf("%p\n", p);
    p++; printf("%p\n", p);
    p++; printf("%p\n", p);
    p++; printf("%p\n", p);
    p++; printf("%p\n", p);

    // Mesmo código da linha 11, porém por conta da incrementação o valor de P vai ser diferente.
    printf("\nEndereco de p (&p): %p Valor de p (p): %p\n", &p, p);

    printf("\n"); return 0;
}