#include <stdio.h>
#include <ctype.h>

void Switch(int opt) {
    switch (opt) {
        case 0:
            printf("Adios :(\n");
            break;
        case 1:
            printf("Opcion 1 Seleccionada\n");
            break;
        case 2:
            printf("Opcion 2 Seleccionada\n");
            break;
        case 3:
            printf("Opcion 3 Seleccionada\n");
            break;
        case 4:
            printf("Opcion 4 Seleccionada\n");
            break;
        default:
            printf("Opcion no valida\n");
            break;
    }
}

int main() {
    int opcion;

    do {
        printf("Ingrese un numero del 0 al 4, 0 para salir: ");
        if (scanf("%d", &opcion) == 1) {
            if (opcion >= 0 && opcion <= 4) {
                Switch(opcion);
            } else {
                printf("Error: Ingrese un numero del 0 al 4.\n");
            }
        } else {
            printf("Error: Ingrese un numero valido.\n");
            // Limpiar el búfer de entrada en caso de entrada no válida
            while (getchar() != '\n');
        }
    } while (opcion != 0);

    return 0;
}