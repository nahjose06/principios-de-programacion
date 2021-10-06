
#include <stdio.h>
#define ITBMS 0.07

int main()
{
    //bloque declarativa de variables
    float prod, cantI, totalA, total;
    int c;
    c = 0;
    
    //bienvenida
    printf ("El programa ha comenzado.\n");
    printf ("Presione 0 para finalizar\n");
    
    //bloque de instrucciones
   do
    {
        printf("Ingrese el costo del producto:$");
        scanf("%f", &prod);
        totalA = totalA + prod;
        if (prod != 0)
        {
            c ++;            }
        
                        
    } while (prod != 0);
        cantI = totalA * ITBMS;
        total = totalA + cantI;
        
    //bloque de salida
    
        printf("Cantidad de productos facturados: %d\n", c);
        printf("El total acumulado fue de: %.2f$\n", totalA);
        printf("El impuesto que se agregara será de: %.2f$\n", cantI);
        printf("El total a pagar será de: %.2f$\n", total);
    return 0;
}
