#include <stdio.h>

/* Programa: 3.c */
int main()
{
    // Declaración de variables
    float precio1, precio2, precio3, subtotal, descuento, impuesto, total;

    // Cuerpo del programa
    printf("Introduzca el precio del primer objeto: \n");
    scanf("%f", &precio1);
    printf("Introduzca el precio del segundo objeto: \n");
    scanf("%f", &precio2);
    printf("Introduzca el precio del tercer objeto: \n");
    scanf("%f", &precio3);

    // Calcular impuesto
    subtotal = precio1 + precio2 + precio3;
    if (subtotal >= 100){
      subtotal = subtotal - (subtotal * 0.2);
    }
    impuesto = subtotal * 0.07;
    total = subtotal + impuesto;

    printf("El precio total es: %0.2f \n", total);
    return 0;
}
