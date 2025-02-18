#include <stdio.h>

union rgba_Pixel {
    int pixel;
    char rgba[4];
};

typedef union rgba_Pixel RGBA_Pixel;


int main() {
    int matriz[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
    };

int *p = &matriz[0][0];
int *ponteiro;

printf ("& matriz; %p (%p)\n", matriz, &matriz[0][0]);
printf("%p\n", p);

for (size_t i = 0; i < 9; i++) {
    printf("%d ", p[i]);
}

printf("\n");
RGBA_Pixel pixel;
pixel.pixel = 0x11223344;
printf("pixel: %d\n", pixel.pixel);
printf("rgba: %d %d %d %d\n", pixel.rgba[0], pixel.rgba[1], pixel.rgba[2], pixel.rgba[3]);

printf("\n");
return 0;
}