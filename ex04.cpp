#include <stdio.h>

void inMang(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int mang[] = {5, 10, 15, 20, 25};
    int n = 5;
    inMang(mang, n);
    return 0;
}
