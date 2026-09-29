#include <stdio.h>
#define ANIO_ACTUAL 2027

#ifndef __LINUX__
#define __SO__"Windows"
#else
#define __SO__"Linux"
#endif
////////////Zona de prototipos
void saludar();
int devolver_anio_actual();

//Funcion principal(main), aqui comienza todo
int main(){
    //llamada o uso de la funcion
    saludar(); //Toda funcion que se use, debe estar declarada y/o definida
    printf("El sistema operativo actual es %s", __SO__)

    return 0;
}
///////////Zona de definiciones de funciones
//Definicion de la funcion devolver_anio_actual
//Parametros: NNGUNO
//Salida: 1
//      Numerico de tipo entero
int devolver_anio_actual(){
    return ANIO_ACTUAL;
}

//Definicion de la funcion llamada saludar()
//Parametros: NIGUNO
//Salida: NINGUNA (void)

void saludar(){
    printf("Bienvenidos a SW303 en este anio %d\n", devolver_anio_actual());
}
