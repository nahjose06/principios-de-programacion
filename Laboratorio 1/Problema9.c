#include <stdio.h>
/* Programa: problema9.c */
int main()
{
    // Declaración de variables
    float salario, seguroEducativo;

    // Cuerpo del programa
    printf("Introduzca el salario mensual: ");
    scanf("%f", &salario);

    // Calcular seguro educativo
    seguroEducativo = salario * 0.0125;
    printf("El seguro educativo es: %f \n", seguroEducativo);
    return 0;
}