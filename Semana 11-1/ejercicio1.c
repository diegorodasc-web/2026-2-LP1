#include <stdio.h>
#include <string.h>
//Definicion de un tipo de dato llamado Alumno
struct Alumno{
    int codigo;
    char nombre[20];
    int edad;
};

int main(){
    struct Alumno a1; //Declaracion de la variable a1 de tipo Alumno
    struct Alumno a2 [5];
    struct Alumno a3={1250,"Abel",18};
    struct Alumno a4 ={.edad=22, .codigo =999};
    //Llenado de datos
    a1.codigo=123;
    strcpy(a1.nombre, "Jhonny");
    a1.edad=25;

    //Mostar los datos
    printf("Codigo      :%d\n", a1.codigo);
    printf("Nombre      :%d\n", a1.nombre);
    printf("Edad      :%d\n", a1.edad);

    //Mostar los datos inicializados
    printf("Codigo      :%d\n", a3.codigo);
    printf("Nombre      :%d\n", a3.nombre);
    printf("Edad      :%d\n", a3.edad);
    //Mostar los datos inicializados
    printf("Codigo      :%d\n", a4.codigo);
    printf("Nombre      :%d\n", a4.nombre);
    printf("Edad      :%d\n", a4.edad);

    for(int i=0;i<5;i++){

        a2[i].codigo = 100+i;
        a2[i].edad = 12+i;
    }

    return 0;
}