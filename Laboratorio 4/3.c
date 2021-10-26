#include <stdio.h>

/* Programa: 3.c*/

// Datos de entrada: N cantidad de monedas extranjeras.
// Proceso: Calcular el equivalente de la moneda en dolares.
// Salida: Resultado de la conversion en dolares.

int main()
{
        // Declaracion de variables
        int jose, moneda;
        float cantidad, BolivarVenezolano(float), DolarCanadiense(float), Libra(float), PesoColombiano(float), PesoMexicano(float), Yen(float), Yuan(float), Euro(float), RealBrasileno(float), PesoArgentino(float);

        // Bloque de instrucciones
        printf("Bienvenido al programa conversor de moneras.\n");
        printf("Desarrollado por José Navarro.\n Cédula: 3-752-387.\n Grupo: 1SF-111 \n");
        do{
                printf("Ingrese la cantidad que desea convertir a dolar: ");
                scanf("%f", &cantidad);
                printf("Ingrese el valor de la moneda\n1. Bolívar venezolano\n2. Dólar canadiense\n3. Libra\n4. Peso colombiano\n5. Peso mexicano\n6. Yen\n7. Yuan\n8. Euro\n9. Real brasileño\n10. Peso argentino \nOpcion: ");
                scanf("%i", &moneda);
		// Calculo de conversion
                switch(moneda){
                        case 1:
                                printf("El resultado es %0.2f\n", BolivarVenezolano(cantidad));
                                break;
                        case 2:
                                printf("El resultado es %0.2f\n", DolarCanadiense(cantidad));
                                break;
                        case 3:
                                printf("El resultado es %0.2f\n", Libra(cantidad));
                                break;
                        case 4:
                                printf("El resultado es %0.2f\n", PesoColombiano(cantidad));
                                break;
                        case 5:
                                printf("El resultado es %0.2f\n", PesoMexicano(cantidad));
                                break;
                        case 6:
                                printf("El resultado es %0.2f\n", Yen(cantidad));
                                break;
                        case 7:
                                printf("El resultado es %0.2f\n", Yuan(cantidad));
                                break;
                        case 8:
                                printf("El resultado es %0.2f\n", Euro(cantidad));
                                break;
                        case 9:
                                printf("El resultado es %0.2f\n", RealBrasileno(cantidad));
                                break;
                        case 10:
                                printf("El resultado es %0.2f\n", PesoArgentino(cantidad));
                        default:
                                printf("Opcion invalida\n");
                }
                printf("Ingrese 1 para realizar otra conversion o 0 para salir: ");
                scanf("%i", &jose);
        }while(jose == 1);
        return 0;
}

float BolivarVenezolano(float a){
	return a / 32738.48;
}

float DolarCanadiense(float a){
	return a / 1.35;
}

float Libra(float a){
	return a / 0.78;
}

float PesoColombiano(float a){
	return a / 3777.51;
}

float PesoMexicano(float a){
	return a / 21.98;
}

float Yen(float a){
	return a / 107.30;
}

float Yuan(float a){
	return a / 7.07;
}

float Euro(float a){
	return a / 0.88;
}

float RealBrasileno(float a){
	return a / 5.06;
}

float PesoArgentino(float a){
	return a / 69.31;
}
