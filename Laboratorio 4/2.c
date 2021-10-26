#include <stdio.h>

/* Programa: 2.c*/

// Datos de entrada: Dos valores numericos.
// Proceso: Calcular suma, resta, multiplicacion o division dependiendo de la opcion elegida por el usuario.
// Salida: Resultado de la operacion deseada por el usuario.

int main()
{
    // Declaracion de variables
    int jose, opcion;
    float valor1, valor2, Suma(float, float), Resta(float, float), Multiplicacion(float, float), Division(float, float);
    // Bloque de instrucciones
    printf("Bienvenido al programa simular una calculadora\n");
    printf("Desarrollado por José Navarro.\n Cédula: 3-752-387.\n Grupo: 1SF-111 \n");
    jose = 0;
    do{
        printf("Ingrese el primer valor: ");
        scanf("%f", &valor1);
        printf("Ingrese el segundo valor: ");
	scanf("%f", &valor2);
	printf("Ingrese una de las opciones: \n1. Suma \n2. Resta \n3. Multiplicacion \n4. Division \n");
	printf("Opcion: ");
	scanf("%i", &opcion);
	switch(opcion){
		case 1:
			printf("El resultado es %f\n", Suma(valor1, valor2));
			break;
		case 2:
            printf("El resultado es %f\n", Resta(valor1, valor2));
			break;
		case 3:
			printf("El resultado es %f\n", Multiplicacion(valor1, valor2));
            break;
		case 4:
			printf("El resultado es %f\n", Division(valor1, valor2));
			break;
		default:
			printf("Opcion invalida\n");
	}
	printf("Ingrese 1 para realizar otra operacion o 0 para salir: ");
	scanf("%i", &jose);
    }while(jose == 1);
    return 0;
}

float Suma(float a, float b)
{
    // Calculo de la suma
	return a + b;
        
}

float Resta(float a, float b){
	// Calculo de la resta
	return a - b;
}

float Multiplicacion(float a, float b)
{
	// Calculo de la multiplicacion
	return a * b;
}

float Division(float a, float b)
{
	// Calculo de la division
	return a / b;
}
