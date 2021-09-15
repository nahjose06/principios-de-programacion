#include <stdio.h>
/* Programa: 1.c */
int main()
{
  // Declaración de variables
  int menu;

  // Cuerpo del programa
  printf("Ingrese un numero del 1 al 10 para imprimir su texto en ingles: \n");
  scanf("%i",&menu);

  // Imprimir el mes
  switch (menu) {
    case 1:
      printf("One \n");
      break;
    case 2:
      printf("Two \n");
      break;
    case 3:
      printf("Three \n");
      break;
    case 4:
      printf("Four \n");
      break;
    case 5:
      printf("Five \n");
      break;
    case 6:
      printf("Six \n");
      break;
    case 7:
      printf("Seven \n");
      break;
    case 8:
      printf("Eight \n");
      break;
    case 9:
      printf("Nine \n");
      break;
    case 10:
      printf("Ten \n");
      break;
    default:
      printf("Valor invalido \n");
      break;
  }

}
