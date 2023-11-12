#include <stdio.h>
#include <stddef.h>

int main() {
    // Ejemplo 1: Incremento de un puntero
    int arr1[] = {1, 2, 3, 4, 5};
    int *ptr1 = &arr1[0];
    ptr1 = ptr1 + 1;
    printf("Ejemplo 1: %d\n", *ptr1);

    // Ejemplo 2: Resta de punteros
    int arr2[] = {1, 2, 3, 4, 5};
    int *ptr2 = &arr2[0];
    int *ptr3 = &arr2[3];
    ptrdiff_t diff = ptr3 - ptr2;
    printf("Ejemplo 2: %td\n", diff);

    // Ejemplo 3: Acceso a elementos mediante aritmética de punteros
    int arr3[] = {1, 2, 3, 4, 5};
    int *ptr4 = &arr3[0];
    for (int i = 0; i < sizeof(arr3) / sizeof(arr3[0]); i++) {
        printf("Ejemplo 3: %d\n", *ptr4);
        ptr4 = ptr4 + 1;
    }

    return 0;
}
