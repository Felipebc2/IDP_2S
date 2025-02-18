//!! Todo Vetor Obrigatoriamente é um Ponteiro !!//
//!! NORMALMENTE se utiliza mais vetores caso tenha mais de um ponteiro, e utiliza de * caso exista apenas um ponteiro. !!//
// p_c = Endereço de Memória -> p_c + 1 Passa para o próximo byte, e a constante é N.
    // p_c = &p_c[0] // Em vetores -> &p_c[1] Passa para o próximo byte, e a constante é N.
// *p_c = Valores -> *(p_c + 1) Passa para o próximo byte, e a constante é N.
    // *p_c = p_c[0] // Em vetores -> p_c[1] Passa para o próximo byte, e a constante é N.

#include <stdio.h>
#include <stdlib.h>

void func(int n[], int tamanho) {

}

int main(){
    system("cls");

c
    int n = 5;
    int *p = &n;
    *p = 1025;

    printf("p (&l): %lu, *p (l): %d\n"), (unsigned long)p, *p;
    p++;
    printf("p (&l): %lu, *p (l): %d\n"), (unsigned long)p, *p;
    char *pchar = (char *)&n;
    printf("pchar (&l): %lu, *pchar (1 Byte de n): %d\n", (unsigned long)pchar, *pchar);
    //pchar++;
    //printf("pchar (&l): %lu, *pchar (1 Byte de n): %d\n", (unsigned long)pchar, *pchar);

    printf("\n"); return 0;
}