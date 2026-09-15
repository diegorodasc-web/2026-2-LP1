#include <stdio.h>

int main(){
    int a=25, b=7, c=129;
    printf("Operadores aritmeticos\n");
    printf("La suma de %d + %d es %d\n", a,b,a+b);
    printf("La resta de %d - %d es %d\n", a,b,a-b);
    printf("La multip de %d * %d es %d\n", a,b,a*b);
    printf("La division entera de %d / %d es %d\n", a,b,a/b);
    printf("La division real de(float) %d / %d es %d\n", a,b,(float)a/b);
    printf("El resto (%) de dividir %d entre  %d es %d\n", a,b,a%b);
    return 0;
}