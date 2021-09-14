#include <stdio.h>
/* Programa: Problema1.c */
int main()
{
    // Declaración de variables
    float nota1, nota2, nota3, nota4, nota5, promedio;

    // Cuerpo del programa
    printf("Introduzca la primera nota \n");
    scanf("%f", &nota1);
    printf("Introduzca la segunda nota \n");
    scanf("%f", &nota2);
    printf("Introduzca la tercera nota \n");
    scanf("%f", &nota3);
    printf("Introduzca la cuarta nota \n");
    scanf("%f", &nota4);
    printf("Introduzca la quinta nota \n");
    scanf("%f", &nota5);
    // Calcular promedio
    promedio = (nota1 + nota2 + nota3 + nota4 + nota5) / 5;
    printf("El promedio final es: %0.2f \n", promedio);
    return 0;
}