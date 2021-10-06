#include <stdio.h>

int main ()
{
  //Bloque Declarativo de Variables
float oferta, min, max, dif;
int contador=0;


//Bloque de Instrucciones
max=oferta;
min=oferta; 
while (contador<=4) { 
printf("Introduzca su oferta:");
scanf("%f", &oferta); 
contador=contador+1;
if (max<oferta){
 max= oferta;
}
if (oferta<min||contador==1){
 min= oferta;}
}

printf("La oferta más baja es : %.2f \n", min); 
dif=max-min;
printf ("La diferencia entre la oferta más alta y la más baja es de: %.2f ", dif);

  return 0;
}