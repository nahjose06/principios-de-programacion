#include <stdio.h>

/* Programa: 8.c */
int main()
{
    // Declaración de variables
    float pagoPorHora, salario;
    int cantidadDeSemanas;

    // Cuerpo del programa
    printf("Introduzca el pago por hora: ");
    scanf("%f", &pagoPorHora);
    printf("Introduzca la cantidad de semanas del mes: ");
    scanf("%i", &cantidadDeSemanas);

    // Calcular salario
    salario = pagoPorHora * 45 * cantidadDeSemanas;
    printf("El salario mensual es: %0.2f \n", salario);
    return 0;
}