#include <stdio.h>

/* Programa: Problema3.c */
int main()
{
    // Declaración de variables
    float precio1, precio2, impuesto, total;

    // Cuerpo del programa
    printf("Introduzca el precio del primer objeto: \n");
    scanf("%f", &precio1);
    printf("Introduzca el precio del segundo objeto: \n");
    scanf("%f", &precio2);
    // Calcular impuesto
    impuesto = (precio1 + precio2) * 0.07;
    total = precio1 + precio2 + impuesto;
    printf("El precio total es: %0.2f \n", total);
    return 0;
}