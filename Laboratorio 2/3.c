#include <stdio.h>

int main ()
{
//Bloque Declarativo de Variables
int edad1, edad2, diferencia;

//Bloque de Instrucciones
printf("Ingresar la primera edad: ");
scanf("%d", &edad1);
printf("Ingresar la segunda edad: ");
scanf("%d", &edad2);

//Determinar edad mayor y diferencia entre edades 
if(edad1<edad2) { 
printf("La edad mayor es: %d \n", edad2);
diferencia=edad2-edad1; 
printf ("La diferencia entre edades es: %d", diferencia);
               }
else if (edad2<edad1) { 
printf("La edad mayor es: %d \n", edad1);
diferencia=edad1-edad2;
printf ("La diferencia entre edades es: %d", diferencia);
               }
else if(edad1=edad2) {
printf("Los hermanos tiene la misma edad");
               }

      return 0;
}
