#include <stdio.h>
/* Programa: 1.c */
int main()
{
  // Declaración de variables
  int a, b, c, valorMaximo, valorMinimo;

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
      return 0;
    }
  }
  else{
    if (b > c){
      printf("El valor mayor es %i \n", b);
      return 0;
    }
    else{
      printf("El valor mayor es %i \n", c);
      return 0;
    }
  }

}
