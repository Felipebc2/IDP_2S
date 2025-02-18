#include <stdio.h>

void main(){
    int a, b, *c, *d, *e;
    a = 10; b = 3;
    c = &a; d = &b;
    *c /= 2;
    e = c; c = d;  d = e;
    printf("%d %d", *c, *d);
    getchar();
}