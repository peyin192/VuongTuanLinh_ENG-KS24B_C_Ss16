#include <stdio.h>
int findNumber(int *arr, int number);

int main(void) {
    int number;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    printf("Nhap phan tu ban muon tim: ");
    scanf("%d", &number);

    int index = findNumber(arr, number);
    if (index == -1) {
        printf("Phan tu %d khong co trong mang \n", number);
    } else {
        printf("Phan tu %d o vi tri %d \n", number, index);
    }

    return 0;
}

int findNumber(int *arr, int number) {
    for (int i = 0; i < 9; i++) {
        if (arr[i] == number) {
            return i;
        }
    }
    return -1;
}

