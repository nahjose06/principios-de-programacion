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
      printf ("El número que indicó fue: I");
      break;
    case 2:
      printf ("El número que indicó fue: II");
      break;
    case 3:
      printf ("El número que indicó fue: III");
      break;
    case 4:
      printf ("El número que indicó fue: IV");
      break;
    case 5:
      printf ("El número que indicó fue: V");
      break;
    case 6:
      printf ("El número que indicó fue: VI");
      break;
    case 7:
      printf ("El número que indicó fue: VII");
      break;
    case 8:
      printf ("El número que indicó fue: VIII");
      break;
    case 9:
      printf ("El número que indicó fue: IX");
      break;
    case 10:
      printf ("El número que indicó fue: X");
      break;
    case 11:
      printf ("El número que indicó fue: XI");
      break;
    case 12:
      printf ("El número que indicó fue: XII");
      break;
default: 
printf ("El número introducido no es válido");
                                            
    }



  return 0;
}
