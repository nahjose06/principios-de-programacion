#include <stdio.h>
/* Programa: 3.c */
int main()
{
  // Declaración de variables
  int hermano1, hermano2, diferencia;

  // Cuerpo del programa
  printf("Introduzca la edad del primer hermano: \n");
  scanf("%i", &hermano1);
  printf("Introduzca la edad del segundo hermano: \n");
  scanf("%i", &hermano2);
  // Calcular promedio
  if (hermano1 > hermano2) {
    diferencia = hermano1 - hermano2;
    printf("El hermano mayor tiene %i años \n", hermano1);
    printf("Los hermanos tienen %i años de diferencia \n", diferencia);
    return 0;
  }
  else if (hermano2 > hermano1) {
    diferencia = hermano2 - hermano1;
    printf("El hermano mayor tiene %i años \n", hermano2);
    printf("Los hermanos tienen %i años de diferencia \n", hermano1);
    return 0;
  }
  else {
    printf("Los dos hermanos tienen la misma edad. \n");
    return -;
  }
}
