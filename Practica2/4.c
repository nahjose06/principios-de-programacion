#include <stdio.h>
/* Programa: 4.c */
int main()
{
    // Declaración de variables
    float ladoA, ladoB, ladoC;

    // Cuerpo del programa
    printf("Introduzca el lado A \n");
    scanf("%f", &ladoA);
    printf("Introduzca el lado B \n");
    scanf("%f", &ladoB);
    printf("Introduzca el lado C \n");
    scanf("%f", &ladoC);

    // Calcular triangulo
    if (ladoA == ladoB && ladoB == ladoC){
      printf("El triangulo es equilatero \n");
      return 0;
    }
    else if (ladoA == ladoB || ladoA == ladoC || ladoB == ladoC){
      printf("El triangulo es isosceles\n");
      return 0;
    }
    else{
      printf("El triangulo es escaleno\n");
      return 0;
    }
}
