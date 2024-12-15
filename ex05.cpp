#include <stdio.h>
void updateArray(int arr[], int size, int newValue, int position) {
    if (position >= 0 && position < size)
        arr[position] = newValue;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    updateArray(arr, size, 10, 2);

    for (int i = 0; i < size; i++) 
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}

