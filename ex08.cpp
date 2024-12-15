#include <stdio.h>
#include <string.h>

int main(void) {
    char inputString[100], reverseString[100];
    printf("Moi ban nhap mot chuoi bat ky: ");
    fgets(inputString, 100, stdin);

    int length = strlen(inputString);
    for (int i = 0; i < length - 1; i++){
        reverseString[i] = inputString[length - 2 - i];
    }
    reverseString[length - 1] = '\0';

    printf("Chuoi dao nguoc: %s\n", reverseString);
    return 0;
}

