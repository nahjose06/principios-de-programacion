#include <stdio.h>

int
main ()
{
  //Bloque Declarativo de Variables
  float numA, numB, numC;

//Bloque de Instrucciones
  printf ("Ingresar el número A: ");
  scanf ("%f", &numA);
  printf ("Ingresar el número B: ");
  scanf ("%f", &numB);
  printf ("Ingresar el número C: ");
  scanf ("%f", &numC);

//Se comparan los valores para encontrar el mínimo 
  if ((numA < numB) && (numA < numC)) {
	  printf ("El valor mínimo es: %f \n", numA);
	                                }
  else if ((numB < numA) && (numB < numC)) {
	   printf ("El valor mínimo es: %f \n", numB);
	                                }
  else {
	   printf ("El valor mínimo es: %f \n", numC);
	   }
   //Se comparan los valores para encontrar el máximo
   if ((numA > numB) && (numA > numC)) {
	  printf ("El valor máximo es: %f \n", numA);
	                                }
  else if ((numB > numA) && (numB> numC)) {
	   printf ("El valor máximo es: %f \n", numB);
	                                }
  else {
	   printf ("El valor máximo es: %f \n", numC);
	   }                 
  
      return 0;
    }

