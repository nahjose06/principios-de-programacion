#include <stdio.h>

int main ()
{
  //Bloque Declarativo de Variables
  float n1, n2, resultado;
  int oper;

//Bloque de Instrucciones
  printf ("Ingrese el primer número: ");
  scanf ("%f", &n1);
  printf ("Ingrese el segundo número: ");
  scanf ("%f", &n2);
  printf ("Ingrese 1 si es suma, 2 si es resta, 3 si es multiplicación y 4 si es división: ");
  scanf ("%d", &oper);
  switch (oper)
    {
    case 1:
      resultado= n1+n2;
      printf ("El resultado es: %f", resultado);
      break;
    case 2:
    resultado= n1-n2;
      printf ("El resultado es: %f", resultado);
      break;
    case 3:
    resultado= n1*n2;
      printf ("El resultado es: %f", resultado);
      break;
    case 4:
    resultado= n1/n2;
      printf ("El resultado es: %f", resultado);
      break;
   
default: 
printf ("La operación introducida no es válida");
                                            
    }



  return 0;
}
