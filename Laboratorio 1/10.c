#include <stdio.h>

/* Programa: 10.c */
int main()
{
    // Declaración de variables
    float distancia, velocidad, tiempo;

    // Cuerpo del programa
    printf("Introduzca la velocidad: ");
    scanf("%f", &velocidad);
    printf("Introduzca el tiempo: ");
    scanf("%f", &tiempo);
    // Calcular seguro educativo
    distancia = tiempo * velocidad;
    printf("La distancia es: %0.2f \n", distancia);
    return 0;
}