#include <stdio.h>
enum Mes{ // por defecto los enumerados comienzan con cero
    ENERO =1, //personalizar el valordel 1er elemento del enumerado
    FEBRERO,
    MARZO,
    ABRIL,
    MAYO,
    JUNIO,
    JULIO,
    AGOSTO,
    SEPTIEMBRE,
    OCTUBRE,
    NOVIEMBRE,
    DICIEMBRE
};

int main(){
    int mes=3; //junio
    switch(mes){
        case ENERO: printf("Enero\n"); break;
        case FEBRERO: printf("Febrero\n"); break;
        case MARZO: printf("Marzo\n"); break;
        case ABRIL: printf("Abril\n"); break;
        case MAYO: printf("Mayo\n"); break;
        case JUNIO: printf("Junio\n"); break;
        case JULIO: printf("Julio\n"); break;
        case AGOSTO: printf("Agosto\n"); break;
        case SEPTIEMBRE: printf("Septiembre\n"); break;
        case OCTUBRE: printf("OCtubre\n"); break;
        case NOVIEMBRE: printf("Noviembre\n"); break;
        case DICIEMBRE: printf("Diciembre\n"); break;
    };
    return 0;
}