#include <stdio.h>

/* Programa: 1.c*/

// Datos de entrada: N cantidad de salarios.
// Proceso: Calcular prestaciones de acuerdo al salario y calcular el salario neto de un empleado.
// Salida: Prestaciones laborales y salario neto de cada uno de los empleados.

int main()
{
	// Declaracion de variables
	int jose;
	float salarioBruto, prestaciones, salarioNeto, PrestacionLaboral(float);

	// Bloque de instrucciones
	printf("Bienvenido al programa para calcular salario Neto.\n");
	printf("Desarrollado por José Navarro.\n Cédula: 3-752-387.\n Grupo: 1SF-111 \n");
	
	jose = 0;
	do{
		printf("Ingrese el salario bruto del empleado: ");
		scanf("%f", &salarioBruto);
		prestaciones = PrestacionLaboral(salarioBruto);
		// Calculo del salario neto
		salarioNeto = salarioBruto - prestaciones;
		printf("Las prestaciones laborales son: %0.2f\n", prestaciones);
		printf("El salario neto es igual a %0.2f\n", salarioNeto);
		printf("Ingrese 1 para calcular otro salario o 0 para salir del sistema: ");
		scanf("%i", &jose);
	}while(jose == 1);
	return 0;
}

float PrestacionLaboral(float salarioBruto)
{
	// Declaracion de variables internas
	float prestacion;

	// Calculo de las prestaciones
	if (salarioBruto <= 1000){
		prestacion = salarioBruto * 0.11;
	}
	else if (salarioBruto > 1000){
		prestacion = salarioBruto * 0.1225;
	}
	return prestacion;
}
