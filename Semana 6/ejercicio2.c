#include <stdio.h>
#define FILAS 5
#define COLUMNAS 4

int main(){

    //Definir un arreglo bidimensaional
    double matriz[FILAS][COLUMNAS];
    for(size_t f=0; f< FILAS; f++){
        for(size_t c=0; c<COLUMNAS; c++){
            matriz[f][c]=0.0;
        }
    }
    //Mostrar la matriz
    for(size_t f=0; f< FILAS; f++){
        for(size_t c=0; c<COLUMNAS; c++){
            printf("\t%lf",matriz[f][c]);
        }
        printf("\n");// cambiar la linea
    }
    return 0;
}