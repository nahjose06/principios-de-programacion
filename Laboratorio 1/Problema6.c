#include <stdio.h>

/* Programa: Problema6.c */
int main()
{
    // Declaración de variables
    float dolares, renminbi;

    // Cuerpo del programa
    printf("Introduzca la cantidad en dolares: \n");
    scanf("%f", &dolares);
    // Calcular conversion
    renminbi = dolares * 6.45;
    printf("La cantidad en renminbi es: %f \n", renminbi);
    return 0;
}