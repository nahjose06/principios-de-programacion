#include <stdio.h>
/* Programa: 2.c */
int main()
{
    // Declaración de variables
    float nota, suma, promedio;
    int contador = 0, n;
    // Cuerpo del programa

    printf("Ingrese la cantidad de notas para calcular el promedio: ");
    scanf("%i", &n);
    for (int i = 0; i < n; i++) {
        contador++;
        printf("\nIngrese la nota %i: ", contador);
        scanf("%f", &nota);
        suma = suma + nota;
    }
    // Calcular promedio
    promedio = suma / n;
    if (promedio > 90){
      printf("La nota final es A\n");
      return 0;
    }
    else if (promedio > 80){
      printf("La nota final es B\n");
      return 0;
    }
    else if (promedio > 70) {
      printf("La nota final es C \n");
      return 0;
    }
    else if (promedio > 60) {
      printf("La nota final es D\n");
      return 0;
    }
    else {
      printf("La nota final es F\n");
      return 0;
    }
}