#include <stdio.h>

int main() {
  int condicion = 1;

  if (condicion == 1){
    goto si;
  }
    
  else if (condicion == 2){
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