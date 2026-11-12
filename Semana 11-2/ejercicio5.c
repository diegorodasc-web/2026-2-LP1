#include <stdio.h>
typedef struct Configuracion{
    unsigned int flag : 1;      //  0b0     // 1 bit de ancho
    unsigned int nivel : 3;     //  0b000   // 3 bit de ancho
    unsigned int nodo : 2;      // 0b00     //2 bit de ancho
    unsigned int priodidad : 4; // 0b0000   // 4 bit de ancho
} Confi;

int main(){
    Confi c1;

    c1.flag =1; //Solo se permite valores 0 o 1

    printf("El flag es %d\n",c1.flag);
    printf("c1 ocupa %d bytes", sizeof(Confi)); //c1 ocupa 4 bytes

    return 0;
}