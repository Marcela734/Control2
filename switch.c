#include <stdio.h>

void Switch(int opt){
  if(opt == 0){
    goto caso0;
  }
  else if(opt == 1){
      goto caso1;
  }
  else if(opt == 2){
    goto caso2;
  }
  else if(opt == 3){
    goto caso3;
  }
  else if(opt == 4){
    goto caso4;
  }
  else{
    goto defecto;
  }
caso0:
  printf("Adiós :(\n");
  return;
caso1:
    printf("Opción 1 Seleccionada\n");
    return;
caso2:
    printf("Opción 2 Seleccionada\n");
    return;
caso3:
    printf("Opción 3 Seleccionada\n");
    return;
caso4:
    printf("Opción 4 Seleccionada\n");
    return;
defecto:
    printf("Opción no válida\n");
    return;
}


int main() {
  int opcion;

  while(opcion != 0){
      printf("Ingrese un numero del 0 al 4, 0 para exit: ");
      scanf("%d", &opcion);
      Switch(opcion);
  }
  return 0;
}