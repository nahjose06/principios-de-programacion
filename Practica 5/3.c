#include <stdio.h>
#include <stdlib.h>

// Datos de entrada: 3 calificaciones de 5 estudiantes.
// Proceso: Calcular el promedio de 5 estudiantes con 3 calificaciones.
// Salida: Imprimir promedio de calificaciones de los 5 estudiantes.

int main(){
    // Declaracion de variables
    int contador = 0;
    float *estudianteA = malloc(sizeof(float)*3);
    float *estudianteB = malloc(sizeof(float)*3);
    float *estudianteC = malloc(sizeof(float)*3);
    float *estudianteD = malloc(sizeof(float)*3);
    float *estudianteE = malloc(sizeof(float)*3);
    float ObtenerCalificaciones(float estudiante[], int contador, float valor);
    float sumatoriaA, sumatoriaB, sumatoriaC, sumatoriaD, sumatoriaE, promedioA, promedioB, promedioC, promedioD, promedioE, valor;
    char CalificacionFinal(float promedio);
    
    // Cuerpo del programa
    printf("Estudiante 1 \n");
	sumatoriaA = ObtenerCalificaciones(estudianteA, contador, valor);
    printf("Estudiante 2 \n");
    sumatoriaB = ObtenerCalificaciones(estudianteB, contador, valor);
    printf("Estudiante 3 \n");
    sumatoriaC = ObtenerCalificaciones(estudianteC, contador, valor);
    printf("Estudiante 4 \n");
    sumatoriaD = ObtenerCalificaciones(estudianteD, contador, valor);
    printf("Estudiante 5 \n");
    sumatoriaE = ObtenerCalificaciones(estudianteE, contador, valor);

    // Calcular promedio
    promedioA = sumatoriaA / (float) 3;
    promedioB = sumatoriaB / (float) 3;
    promedioC = sumatoriaC / (float) 3;
    promedioD = sumatoriaD / (float) 3;
    promedioE = sumatoriaE / (float) 3;
    printf("El promedio del estudiante 1 es %.2f, y su letra es %c\n", promedioA, CalificacionFinal(promedioA));
    printf("El promedio del estudiante 2 es %.2f, y su letra es %c\n", promedioB, CalificacionFinal(promedioB));
    printf("El promedio del estudiante 3 es %.2f, y su letra es %c\n", promedioC, CalificacionFinal(promedioC));
    printf("El promedio del estudiante 4 es %.2f, y su letra es %c\n", promedioD, CalificacionFinal(promedioD));
    printf("El promedio del estudiante 5 es %.2f, y su letra es %c\n", promedioE, CalificacionFinal(promedioE));
    free(estudianteA);
    free(estudianteB);
    free(estudianteC);
    free(estudianteD);
    free(estudianteE);
    return 0
}

float ObtenerCalificaciones(float estudiante[], int contador, float valor){
    contador = 0;
    for (int a = 0; a < 3; a++){
        contador++;
        printf("Ingrese la calificacion %i del estudiante: ", contador);
        scanf("%f", &valor);
        estudiante[a] = valor;
    }
    float sumatoria = estudiante[0] + estudiante[1] + estudiante[2];
    return sumatoria;
}

char CalificacionFinal(float promedio){
    if (promedio > 91){
        return 'A';
    }
    else if (promedio >= 81) {
        return 'B';
    }
    else if (promedio >= 71) {
        return 'C';
    }
    else if (promedio >= 61){
        return 'D';
    }
    else {
        return 'F';
    }
}