#include <stdio.h>

int
main ()
{
//Bloque Declarativo de Variables
  float precio1, precio2, precio3, impuesto, descuento, pre, total, final;

//Bloque de Instrucciones
  printf ("Ingresar el precio del primer producto: ");
  scanf ("%f", &precio1);
  printf ("Ingresar el precio del segundo producto: ");
  scanf ("%f", &precio2);
  printf ("Ingresar el precio del tercer producto: ");
  scanf ("%f", &precio3);

//Suma de precios
  total = precio1 + precio2 + precio3;

//Determinar si necesita descuento
  if (total >= 100)
    {
      descuento= total*0.20;
      pre= total - descuento; 
      impuesto= pre*0.07;
      final= pre+impuesto;
      printf ("La suma de los precios es: %.2f \n", total);
      printf ("El impuesto es igual a: %.2f \n", impuesto);
      printf ("El descuento es igual a: %.2f \n", descuento);
      printf ("El total final a pagar es: %.2f \n", final);
    }
  else
    {
      impuesto = total * 0.07;
      final = total + impuesto;
      printf ("La suma de los precios es: %.2f \n", total);
      printf ("El impuesto es igual a: %.2f \n", impuesto);
      printf ("El descuento es igual a: 0.00 \n");
      printf ("El total final a pagar es: %.2f \n", final);
    }

}
