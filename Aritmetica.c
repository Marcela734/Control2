/*
La aritmética de punteros es la capacidad de realizar operaciones aritméticas directamente
en direcciones de memoria a las que apuntan los punteros.
Esto facilita el acceso y manipulación eficiente de datos en estructuras, matrices y asignaciones dinámicas de memoria.
Las operaciones permitidas son desplazamiento (ptr++, ptr--, ptr+n, ptr-n), distancia de punteros (ptr1-ptr2), (des)igualdad y asignación.
* se utiliza para desreferenciar un puntero y acceder al valor al que apunta.
& se utiliza para obtener la dirección de memoria de una variable
A continuación se mostrarán unos ejemplos de aritmética de punteros en C.
*/
#include <stdio.h>
#include <stddef.h>

int main() {
    // Ejemplo 1: Incremento de un puntero
    int arr1[] = {1, 2, 3, 4, 5};
    int *ptr1 = &arr1[0];
    ptr1 = ptr1 + 1;
    printf("Ejemplo 1: %d\n", *ptr1);
    printf("---------------------\n");

    // Ejemplo 2: Resta de punteros
    int arr2[] = {1, 2, 3, 4, 5};
    int *ptr2 = &arr2[0];
    int *ptr3 = &arr2[3];
    ptrdiff_t diff = ptr3 - ptr2;
    printf("Ejemplo 2: %td\n", diff);
    printf("---------------------\n");

    // Ejemplo 3: Acceso a elementos mediante aritmética de punteros
    int arr3[] = {1, 2, 3, 4, 5};
    int *ptr4 = &arr3[0];
    for (int i = 0; i < sizeof(arr3) / sizeof(arr3[0]); i++) {
        printf("Ejemplo 3: %d\n", *ptr4);
        ptr4 = ptr4 + 1;
    }
    return 0;
}
