#include <stdio.h>

void deleteArr(int *arr, int index, int length);

int main(void) {
    int arr[] = {1, 2, 3, 4, 5};
    int length = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }

    int index;
    printf("\nMoi ban nhap vi tri muon xoa: ");
    scanf("%d", &index);

    if (index < 0 || index >= length) {
        printf("Vi tri khong hop le\n");
        return 1;
    }

    deleteArr(arr, index, length);

    for (int i = 0; i < length - 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

void deleteArr(int *arr, int index, int length) {
    for (int i = index; i < length - 1; i++) {
        arr[i] = arr[i + 1];
    }
}

