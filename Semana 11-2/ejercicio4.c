#include <stdio.h>

typedef float Precio;
typedef char *Nombre_ptr;
typedef char Mensaje[50];

struct Alumno_ {
    int codigo;
    char nombres[50];
};

// 1. Corrección de ortografía: 'typedef' en lugar de 'typefed'
typedef struct Alumno_ Alumno;

// 2. Agregamos 'typedef' al inicio para que 'Obrero' sea un tipo de dato
typedef struct obrero {
    int codigo;
    int antiguedad;
} Obrero;

int main(){
    Precio precio_venta, precio_compra;
    Nombre_ptr n1; // n1 es un puntero
    Mensaje m1;
    Alumno a1;
    Obrero o1;

    precio_venta = 25.50;

    printf("Precio de venta es %.2f\n", precio_venta);

    return 0;
}
