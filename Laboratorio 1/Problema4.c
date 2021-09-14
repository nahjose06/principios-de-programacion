#include <stdio.h>

/* Programa: Problema4.c */
int main()
{
    // Declaración de variables
    float galones, litros;

    // Cuerpo del programa
    printf("Introduzca la cantidad de galones \n");
    scanf("%f", &galones);
    // Calcular galones
    litros = galones * 4.546;
    printf("La cantidad en litros es: %0.2f \n", litros);
    return 0;
}