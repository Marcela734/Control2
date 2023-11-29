#include <stdio.h>

int main(void) {
int count = 1;
int veces;
printf("Ingrese cuantas veces se repita: ");
scanf("%d", &veces);

loop:
printf("%d iteracion \n", count);
printf("Ejemplo de for \n\n");
count++;

  
if(count <= veces){
  goto loop;
}
return 0;  
}