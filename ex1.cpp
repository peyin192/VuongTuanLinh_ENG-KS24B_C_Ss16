#include <stdio.h>

int main() {
    int x = 10;
    int *ptr = &x;

    printf("Gia tri x: %d, Dia chi x: %p\n", x, &x);
    printf("Gia tri x qua ptr: %d, Dia chi x qua ptr: %p\n", *ptr, ptr);

    return 0;
}
