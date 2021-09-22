#include <stdio.h>

int
main ()
{
  //Bloque Declarativo de Variables
  int num;

//Bloque de Instrucciones
  printf ("Ingrese un número entre 1 y 12: ");
  scanf ("%d", &num);
  switch (num)
    {
    case 1:
      printf ("El mes que indicó fue: enero");
      break;
    case 2:
      printf ("El mes que indicó fue: febrero");
      break;
    case 3:
      printf ("El mes que indicó fue: marzo");
      break;
    case 4:
      printf ("El mes que indicó fue: abril");
      break;
    case 5:
      printf ("El mes que indicó fue: mayo");
      break;
    case 6:
      printf ("El mes que indicó fue: junio");
      break;
    case 7:
      printf ("El mes que indicó fue: julio");
      break;
    case 8:
      printf ("El mes que indicó fue: agosto");
      break;
    case 9:
      printf ("El mes que indicó fue: septiembre");
      break;
    case 10:
      printf ("El mes que indicó fue: octubre");
      break;
    case 11:
      printf ("El mes que indicó fue: noviembre");
      break;
    case 12:
      printf ("El mes que indicó fue: diciembre");
      break;
default: 
printf ("El número introducido no es válido");
                                            
    }



  return 0;
}
