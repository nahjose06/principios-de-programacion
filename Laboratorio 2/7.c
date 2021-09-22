#include <stdio.h>

int
main ()
{
  //Bloque Declarativo de Variables
  int num;

//Bloque de Instrucciones
  printf ("Ingrese un número entre 1 y 10: ");
  scanf ("%d", &num);
  switch (num)
    {
    case 1:
      printf ("El número que indicó fue: one");
      break;
    case 2:
      printf ("El número que indicó fue: two");
      break;
    case 3:
      printf ("El número que indicó fue: three");
      break;
    case 4:
      printf ("El número que indicó fue: four");
      break;
    case 5:
      printf ("El número que indicó fue: five");
      break;
    case 6:
      printf ("El número que indicó fue: six");
      break;
    case 7:
      printf ("El número que indicó fue: seven");
      break;
    case 8:
      printf ("El número que indicó fue: eight");
      break;
    case 9:
      printf ("El número que indicó fue: nine");
      break;
    case 10:
      printf ("El número que indicó fue: ten");
      break;
default: 
printf ("El número introducido no es válido");
                                            
    }



  return 0;
}
