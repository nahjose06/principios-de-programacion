#include <stdio.h>
/* Programa: 3.c */
int main()
{
  // Declaración de variables
  int decision, estudiantesA, estudiantesB, estudiantesC, estudiantesD, estudiantesF;
  int numeroDeEstudiantes = 0;
  float nota, acumulador, mayorCalificacion, menorCalificacion, porcentajeA, porcentajeB, porcentajeC, porcentajeD, porcentajeF, promedio;
  menorCalificacion = 100;
  mayorCalificacion = 0;
  estudiantesA = 0;
  estudiantesB = 0;
  estudiantesC = 0;
  estudiantesD = 0;
  estudiantesF = 0;

  // Cuerpo del programa
  do{
    numeroDeEstudiantes++;
    do{
      printf("Ingrese la calificacion del estudiante %i: ", numeroDeEstudiantes);
      scanf("%f", &nota);
    }while(nota > 100);
    acumulador = acumulador + nota;
    if (nota > 91){
      estudiantesA++;
    }
    else if(nota > 81){
      estudiantesB++;
    }
    else if (nota > 71){
      estudiantesC++;
    }
    else if (nota > 61){
      estudiantesD++;
    }
    else {
      estudiantesF++;
    }
    if (nota < menorCalificacion){
      menorCalificacion = nota;
    }
    else if (nota > mayorCalificacion){
      mayorCalificacion = nota;
    }
    printf("Ingrese 1 para agregar otro estudiante o 0 para finalizar: ");
    scanf("%i", &decision);
  }while(decision != 0);

  // Calcular promedio
  promedio = acumulador / numeroDeEstudiantes;
  printf("El promedio de las calificaciones de los estudiantes es %.2f \n", promedio);
  printf("La mayor calificacion es %.2f \n", mayorCalificacion);
  printf("La menor calificacion es %.2f \n", menorCalificacion);
  porcentajeA = (estudiantesA / (float)numeroDeEstudiantes) * 100;
  porcentajeB = (estudiantesB / (float)numeroDeEstudiantes) * 100;
  porcentajeC = (estudiantesC / (float)numeroDeEstudiantes) * 100;
  porcentajeD = (estudiantesD / (float)numeroDeEstudiantes) * 100;
  porcentajeF = (estudiantesF / (float)numeroDeEstudiantes) * 100;
  printf("La cantidad de estudiantes con A es %i \n", estudiantesA);
  printf("El porcentaje de estudiantes con A es %.2f%% \n",porcentajeA);
  printf("La cantidad de estudiantes con B es %i \n", estudiantesB);
  printf("El porcentaje de estudiantes con B es %.2f%% \n",porcentajeB);
  printf("La cantidad de estudiantes con C es %i \n", estudiantesC);
  printf("El porcentaje de estudiantes con C es %.2f%% \n",porcentajeC);
  printf("La cantidad de estudiantes con D es %i \n", estudiantesD);
  printf("El porcentaje de estudiantes con D es %.2f%% \n",porcentajeD);
  printf("La cantidad de estudiantes con F es %i \n", estudiantesF);
  printf("El porcentaje de estudiantes con F es %.2f%% \n",porcentajeF);
}
