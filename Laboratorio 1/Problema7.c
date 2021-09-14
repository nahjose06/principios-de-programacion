#include <stdio.h>

/* Programa: Problema7.c */
int main()
{
    // Declaración de variables
    float precio, impuesto, total;

    // Cuerpo del programa
    printf("Introduzca el precio del objeto: \n");
    scanf("%f", &precio);
    // Calcular impuesto
    impuesto = precio * 0.07;
    total = precio + impuesto;
    printf("El impuesto es: %0.2f \n", impuesto);
    printf("El precio total es: %0.2f \n", total);
    return 0;
}