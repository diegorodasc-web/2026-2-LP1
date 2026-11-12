#include <stdio.h>
// Las estructuras tienen un byte adicional por cada atributo
// Porque en memoria existira un fin de atributo
/*
struct Dato{
    int entero;
    float decimal;
    char caracter;
};
*/

//Aqui se comparte el espacio de memoria entre los tres atributos
//Toma la dimension de memoria del atributo que tiene mayor tamaño de memoria
union Dato{
    int entero;
    float decimal;
    char caracter;
};


int main(){
    union Dato u1;
    union Dato *x; 
    x = &u1;
    printf("El tipo entero ocupa %d bytes\n", sizeof(int));
    printf("El tipo float ocupa %d bytes\n", sizeof(float));
    printf("El tipo char ocupa %d byte\n", sizeof(char));
    printf("Un tipo de dato del tipo union Dato ocupa %d bytes\n", sizeof(union Dato));

    //Inicializacion
    u1.entero = 120;
    
    printf("Entero: %d\n", u1.entero);
    u1.decimal = 3.1416;
    
    printf("Decimal: %f\n", u1.decimal);
    printf("Entero: %d\n", u1.entero);

    printf("(Desde el puntero)Decimal: %f\n", x->decimal);
    return 0;
}