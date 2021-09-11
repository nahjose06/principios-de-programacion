#include <stdio.h>

/* Programa: Problema2.c */
int main()
{
    // Declaración de variables
    float fahrenheit, celcius;

    // Cuerpo del programa
    printf("Introduzca la temperatura en ºF \n");
    scanf("%f", &fahrenheit);
    // Calcular temperatura
    celcius = (fahrenheit - 32) * 5/9;
    printf("La temperatura en ºC es: %f \n", celcius);
    return 0;
}