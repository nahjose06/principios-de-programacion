#include <stdio.h>

int main()
{
    
    //Declarando las variables
    
    int bucle, contTodos, contM, contF;
    float altTotal, altTotalM, altTotalF, maxM, maxF, maxMF, alt, prom, promF, promM;
    char genero;

    printf("Bienvenido al programa Equipo de Baloncesto\n");
        contTodos = 0;
        contM = 0;
        contF = 0;
        bucle = 1;
        maxM = 0;
        maxF = 0;
        altTotal = 0;
        altTotalM = 0;
        altTotalF = 0;
        
    // Inicia el bucle
    
    while (bucle == 1)
    {
        //Instrucciones para el usuario
        
        printf("Cual es la altura del estudiante: ");
        scanf("%f",&alt);
        printf("Ingrese F si es niña y M si es niño: ");
        scanf(" %c",&genero);
        
            contTodos = contTodos + 1;
            altTotal = altTotal + alt;
            
                //Determinando el genero\
                
                    if(genero == 'M')
                    {
                        contM = contM + 1;
                        altTotalM = altTotalM + alt;
                        if(alt > maxM)
                        {
                            maxM = alt;
                        }
                    }
                    else
                    {
                        contF = contF + 1;
                        altTotalF = altTotalF + alt;
                        if(alt > maxF)
                        {
                            maxF = alt;
                        }
                    }
                    if(maxM > maxF)
                    {
                        maxMF = maxM;
                    }
                    else
                    {
                        maxMF = maxF;
                    }
                    printf("¿Desea ingresar la informacion de otro estudiante? Presione 1 para Sí y 2 para No\n");
                    scanf("%d",&bucle);
    }
        prom = altTotal / contTodos;
        promM = altTotalM / contM;
        promF = altTotalF / contF;
        
    //Resultados finales
    
        printf("\nPromedio de las alturas de todos los estudiantes: %.2f", prom);
        printf("\nAltura promedio de los niños: %.2f", promM);
        printf("\nAltura promedio de las niñas: %.2f", promF);
        printf("\nAltura del niño mas alto: %.2f", maxM);
        printf("\nAltura de la niña mas alta: %.2f", maxF);
        printf("\nAltura del estudiante mas alto: %.2f", maxMF);
        
    return 0;
}