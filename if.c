#include <stdio.h>
#include <stdlib.h>

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