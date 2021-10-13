#include <stdio.h>
#define ITBMS 0.07
#define DESC15 0.15
#define DESC10 0.10
/* José Navarro 3-752-387*/
int main()
{
    // Declaración de variables
    int jose, articulo;
    float precio, subtotal, descuento, impuesto, total;

    // Bloque de instrucciones
    subtotal = 0;
    jose = 0;
    do{
        jose++;
        printf("Ingrese el precio del articulo %i: ", jose);
        scanf("%f", &precio);
        subtotal = subtotal + precio;
        if (precio == 0){
            jose--;
        }
    }while(precio != 0);

    // Calcular total
    if (subtotal > 80 && subtotal < 100){
        descuento = subtotal * DESC15;
    }
    else if (subtotal >= 100){
        descuento =  subtotal * DESC10;
    }
    impuesto = (subtotal - descuento) * ITBMS;

    total = subtotal - descuento + impuesto;

    printf("La cantidad de artículos es %i\n", jose);
    printf("El subtotal es $%0.2f\n", subtotal);
    printf("El descuento es de $%0.2f\n", descuento);
    printf("El impuesto es $%0.2f\n", impuesto);
    printf("El total a pagar es $%0.2f\n", total);
    return 0;
}