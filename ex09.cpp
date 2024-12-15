#include <stdio.h>

void addNumber(int *arr, int number, int index);

int main(void) {
    int arr[6] = {1, 2, 3, 4, 5};
    int length = 5, number, index;

    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Moi ban nhap phan tu muon them: ");
    scanf("%d", &number);
    printf("Moi ban nhap vi tri muon them: ");
    scanf("%d", &index);

    if (index < 0 || index > length) {
        printf("Vi tri khong hop le\n");
        return 1;
    }

    addNumber(arr, number, index);
    length++;

    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

void addNumber(int *arr, int number, int index) {
    for (int i = 5; i > index; i--) {
        arr[i] = arr[i - 1];
    }
    arr[index] = number;
}

