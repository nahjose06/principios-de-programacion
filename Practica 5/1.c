#include <stdio.h>
#include <stdlib.h>

// Datos de entrada: 20 precios de productos
// Proceso: Calcular los productos que su precio sea mayor a 50.00.
// Salida: Imprimir los productos mayores a 50.00

int main(){
    // Declaracion de variables
    float *precios = malloc(sizeof(float)*20);
    int contador = 0, preciosMasDe50 = 0;
    float porcentaje, valor;
    
    // Cuerpo del programa
	for(int i = 0; i < 20; i++){
		contador++;
		printf("Ingrese el precio del producto %i: ", contador);
		scanf("%f", &valor);
        precios[i] = valor;
	}

	for(int e = 0; e < 20; e++){
        if (precios[e] > 50){
            preciosMasDe50++;
        }
	}
    
    // Calculo del porcentaje
	porcentaje = (float)(preciosMasDe50) / (float)20 * (float)100;
    printf("El porcentaje de precios mayores de 50 es %.2f%%\n", porcentaje);
    free(precios);
    return 0;
}
