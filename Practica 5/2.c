#include <stdio.h>
#include <stdlib.h>

// Datos de entrada: 20 calificaciones.
// Proceso: Calcular el promedio de las 20 calificaciones.
// Salida: Imprimir promedio de calificaciones.

int main(){
    // Declaracion de variables
    float *calificaciones = malloc(sizeof(float)*20);
    int contador = 0;
    float sumatoria, promedio, valor;
    
    // Cuerpo del programa
	for(int i = 0; i < 20; i++){
		contador++;
		printf("Ingrese la calificacion %i: ", contador);
		scanf("%f", &valor);
        calificaciones[i] = valor;
	}
    
    for(int e = 0; e < 20; e++){
        sumatoria += calificaciones[e];
    }
    // Calculo del promedio
	promedio = sumatoria / (float) 20;
    printf("El promedio de las calificaciones es %.2f\n", promedio);
    free(calificaciones);
    return 0;
}
