#include <stdio.h>

void main (){
    int a, b, *c;
    a = 3;
    b = -1;
    c = &a;
    b++; b++;
    *c = a+2;
    printf("%d%d", a, b);
    getchar();
}

//int main (){
//
//    return 0;
//}