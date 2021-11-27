#include <stdio.h>

    // Entrada: Fila y columna del asiento deseado por el usuario.
    // Proceso: Verificar que el asiento esté disponible.
    // Salida: Mapa de asientos donde se muestran los asientos disponibles y el elegido por el usuario.

int main(){
    printf("Parcial N°3 \nJosé Navarro\nCédula: 3-752-387 \nGrupo: 1SF-111\n\n");
    int asientos[8][8];
    int fila, columna, disponibles, jose;
    void MostrarAsientos(int A[][8]);
    void Reservar(int A[][8], int fila, int columna);
    void LimpiarPantalla();
    int AsientosDisponibles(int A[][8]);
    for (int i = 0; i < 8; i++){
        for (int e = 0; e < 8; e++){
            asientos[i][e] = 11;
        }
    }
    printf("Bienvenido al sistema de reserva de asientos!\n");
    MostrarAsientos(asientos);
    disponibles = AsientosDisponibles(asientos);
    do{
        do{
            printf("Ingrese la fila y columna de los asientos que quiera reservar: ");
            scanf("%i %i", &fila, &columna);
        }while(fila > 7 && columna > 7);
        Reservar(asientos, fila, columna);
        MostrarAsientos(asientos);
        disponibles = AsientosDisponibles(asientos);
        printf("Ingrese 1 para hacer otra reservación o 0 para salir del sistema: ");
        scanf("%i", &jose);
    }while(jose != 0 || disponibles == 0);
    return 0;

}
void MostrarAsientos(int A[][8]){
    for (int j = 0; j < 9; j++){
        if (j == 0){
            printf("      ");
            for(int c = 0; c < 8; c++){
                printf("%i    ", c);
            }
            printf("\n");
        }else{
            for (int a = 0; a < 8; a++){
                if (a == 0){
                    printf("%i    ", j-1);
                }
                printf("%i ", A[j-1][a]);
                if (a != 7){
                    printf("| ");
                }
            }
        }
        printf("\n");
    }
    printf("\n");
}
void Reservar(int A[][8], int fila, int columna){
    void LimpiarPantalla();
    if(((fila % 2 == 0 && columna % 2 != 0) || (fila % 2 != 0 && columna %2 == 0)) && A[fila][columna] == 11){
        A[fila][columna] = 88;
        LimpiarPantalla();
        printf("Reserva realizada! \n");
    }
    else{
        LimpiarPantalla();
        printf("Reserva invalida!\n");
    }
}
void LimpiarPantalla(){
    #ifdef WINDOWS
    system("cls");
    #else
    system ("clear");
    #endif
}
int AsientosDisponibles(int A[][8]){
    int contador = 32;
    for (int j = 0; j < 8; j++){
        for (int a = 0; a < 8; a++){
            if(A[j][a] == 88){
                contador--;
            }
        }
    }
    return contador;
}