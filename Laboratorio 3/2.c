#include <stdio.h>

int main()
{
    //variables
    float peso, mayorPeso, menorPeso, promPeso, totalPeso, porcentaje, cant;
    int cont, ask;
   
    
    //bienvenida
   printf("Bienvenido al sistema de Peso y Dimension Vehicular");

   //procesos
        mayorPeso= 0;
		menorPeso= 99999999999;


        cont = 0;  
		cant=0;
    	do{
        printf("\n \n Ingrese el peso(toneladas) de su camion: ");
        scanf("%f",&peso);
        if (mayorPeso<peso){
            mayorPeso=peso;
        }
        else if ((mayorPeso>peso)&&(menorPeso>peso)){
            mayorPeso=mayorPeso;
            menorPeso=peso;
        }
        totalPeso=totalPeso+peso;
           cont++;
           printf("Presione 1 para agregar otro peso, 0 en caso opuesto: ");
           scanf("%i",&ask);
           
           if(peso>=15){
           	cant++;
		   }
       }while(ask==1);
   
   promPeso=totalPeso/cont;
   porcentaje =(cant/cont)*100;
   
   //impresiones finales
   printf("\nLa cantidad de camiones registrados son %i", cont);
   printf("\nLa cantidad con pesos mayores o iguales a 15 es de %0.f", cant);
   printf("\nLos camiones con pesos mayores o iguales a 15 son un %.02f%%", porcentaje);
   printf("\nEl total de peso de camiones registrados es de %.02f", totalPeso);
   printf("\nEl promedio de peso de camiones registrados es de %.02f", promPeso);
   printf("\nEl mayor peso es de %.02f", mayorPeso);
   printf("\nEl menor peso es de %.02f", menorPeso);
    

    return 0;
}
