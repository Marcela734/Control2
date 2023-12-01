#include <stdio.h>
#include <stdlib.h>

//Según el número pasado por parámetro de entrada, muesta si el número ingresado fue un 1, 2 o ninguno.
int main(int argc, char *argv[]) {
  int numero = atoi(argv[1]);   //transformar a int

  if (numero == 1){
    goto si;
  }
    
  else if (numero == 2){
    goto sino;
  }  
    
  else{
    goto entonces;
  }

  si:
    printf("Es 1\n");
    goto end;
  sino:
    printf("Es 2\n");
    goto end;

  entonces:
    printf("No es ninguno de los anteriores\n");
    end:

  return 0;
}