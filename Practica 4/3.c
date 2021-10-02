#include <stdio.h>
/* Programa: 3.c */
int main ()
{
  //Bloque Declarativo de Variables
  float n1, resultado;
  int menu, n;
  //Bloque de Instrucciones
  printf("Ingrese la cantidad de veces que quiera repetir el proceso: ");
  scanf("%i", &n);
  for(int i = 0; i < n; i++)
  {
    printf ("Ingrese el valor: ");
    scanf ("%f", &n1);
    printf ("Ingrese 1 si es bolívar venezolano,\n2 si es dólar canadiense, \n3 si es libra, \n4 si es peso colombiano, \n5 si es peso mexicano, \n6 si es yen, \n7 si es yuan, \n8 si es euro, \n9 si es real brasileño, \n10 si es peso argentino \n");
    printf("Opción: ");
    scanf ("%d", &menu);
    switch (menu)
    {
      case 1:
        resultado= n1*32738.48;
        printf ("El resultado es: %.2f\n", resultado);
        break;
        case 2:
        resultado= n1*1.35;
        printf ("El resultado es: %.2f\n", resultado);
        break;
        case 3:
        resultado= n1*0.78;
        printf ("El resultado es: %.2f\n", resultado);
        break;
        case 4:
        resultado= n1*3777.51;
        printf ("El resultado es: %.2f\n", resultado);
        break;
        case 5:
        resultado= n1*21.98;
        printf ("El resultado es: %.2f\n", resultado);
        break;
        case 6:
        resultado= n1*107.30;
        printf ("El resultado es: %.2f\n", resultado);
        break;
        case 7:
        resultado= n1*7.07;
        printf ("El resultado es: %.2f\n", resultado);
        break;
        case 8:
        resultado= n1*0.88;
        printf ("El resultado es: %.2f\n", resultado);
        break;
        case 9:
        resultado= n1*5.06;
        printf ("El resultado es: %.2f\n", resultado);
        break;
        case 10:
        resultado= n1*69.31;
        printf ("El resultado es: %.2f\n", resultado);
        break;
        default:
        printf ("La operación introducida no es válida\n");
      }
  }
  return 0;
}
