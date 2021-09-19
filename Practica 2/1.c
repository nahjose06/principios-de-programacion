#include <stdio.h>
/* Programa: 1.c */
int main()
{
  // Declaración de variables
  int a, b, c;

  // Cuerpo del programa
  printf("Introduzca el valor A: \n");
  scanf("%i",&a);
  printf("Introduzca el valor B: \n");
  scanf("%i", &b);
  printf("Introduzca el valor C: \n");
  scanf("%i", &c);

  // Calcular el valor maximo y minimo
  if (a > b){
    if (a > c){
      printf("El valor mayor es: %i \n", a);
      if (b < c){
        printf("El valor menor es %i \n", b);
      }
      else{
        printf("El valor menor es % i \n", c);
      }
      return 0;
    }
  }
  else{
    if (b > c){
      printf("El valor mayor es %i \n", b);
      if (a < c){
        printf("El valor menor es %i \n", a);
      }
      else{
        printf("El valor menor es % i \n", c);
      }
      return 0;
    }
    else{
      printf("El valor mayor es %i \n", c);
      if (a < b){
        printf("El valor menor es %i \n", a);
      }
      else{
        printf("El valor menor es % i \n", b);
      }
      return 0;
    }
  }

}
