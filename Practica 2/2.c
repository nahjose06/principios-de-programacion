#include <stdio.h>
/* Programa: 2.c */
int main()
{
    // Declaración de variables
    float nota1, nota2, nota3, nota4, nota5, promedio;

    // Cuerpo del programa
    printf("Introduzca la primera nota: \n");
    scanf("%f", &nota1);
    printf("Introduzca la segunda nota: \n");
    scanf("%f", &nota2);
    printf("Introduzca la tercera nota: \n");
    scanf("%f", &nota3);
    printf("Introduzca la cuarta nota: \n");
    scanf("%f", &nota4);
    printf("Introduzca la quinta nota: \n");
    scanf("%f", &nota5);

    // Calcular promedio
    promedio = (nota1 + nota2 + nota3 + nota4 + nota5) / 5;
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
