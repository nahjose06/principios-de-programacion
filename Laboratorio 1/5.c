#include <stdio.h>

/* Programa: 5.c */
int main()
{
    // Declaración de variables
    float precio, descuento, precioFinal;

    // Cuerpo del programa
    printf("Introduzca el precio: \n");
    scanf("%f", &precio);
    // Calcular precio final
    descuento = precio * 0.25;
    precioFinal = precio - descuento;
    printf("El precio es: %f \n", precio);
    printf("El descuento es: %f \n", descuento);
    printf("El precio final es: %0.2f \n", precioFinal);
    return 0;
}