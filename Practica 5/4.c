#include <stdio.h>
#include <stdlib.h>

// Datos de entrada: 10 numeros enteros.
// Proceso: Ordenar los numeros de menor a mayor.
// Salida: Imprimir el arreglo de enteros ordenados.

int main(){
    // Declaracion de variables
    int *entero = malloc(sizeof(int) * 10);
    int contador = 0;
    float sumatoria, promedio, valor;
    void OrdenamientoPorInsercion(int A[]);
    
    // Cuerpo del programa
	for(int i = 0; i < 10; i++){
		contador++;
		printf("Ingrese el entero %i: ", contador);
		scanf("%d", &entero[i]);
	}
    
    // Ordenamiento de los enteros
    OrdenamientoPorInsercion(entero);

    for (int a = 0; a < 10; a++){
        printf("%d ", entero[a]);
    }
    printf("\n");
    free(entero);
    return 0;
}

void OrdenamientoPorInsercion(int A[]){
    for(int i = 1; i < 10; i++){
        int valor = A[i];
        int agujero = i;
        while (agujero > 0 && A[agujero - 1] > valor)
        {
            A[agujero] = A [agujero - 1];
            agujero--;
        }
        A[agujero] = valor;
    }
}