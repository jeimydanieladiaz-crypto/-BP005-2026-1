#include <stdio.h>
 
int main () {

  int time;

printf("Ingrese la hora en formato militar: ");
    scanf("%d", &time);

  if (time < 18) {
    printf("Buen día.");



} else {
  printf("Buenas noches.");

}

return 0;

}  
