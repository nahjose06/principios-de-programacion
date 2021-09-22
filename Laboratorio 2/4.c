#include <stdio.h>

int main ()
{
//Bloque Declarativo de Variables
float lado1, lado2, lado3;

//Bloque de Instrucciones
printf("Ingresar la medida del lado 1: ");
scanf("%f", &lado1);
printf("Ingresar la medida del lado 2: ");
scanf("%f", &lado2);
printf("Ingresar la medida del lado 3: ");
scanf("%f", &lado3);


//Determinar la cantidad de lados iguales
if ((lado1==lado2) && (lado1==lado3) && (lado3==lado2)) { 
                       printf ("El triángulo es de tipo: equilátero"); } 
                                     
else if ((lado1==lado2) || (lado1==lado3) ||(lado2==lado3)) { 
printf("El triángulo es de tipo: isósceles");
                             }
else if ((lado1!=lado2) && (lado1!=lado3) && (lado3!=lado2)) {
printf("El triángulo es de tipo: escaleno");
            }


      return 0;
}
