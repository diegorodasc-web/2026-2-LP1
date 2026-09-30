/* La conjetura de Collatz define: si n es par → n/2; si n es impar → 3n + 1. La "semilla" de un número es la cantidad de pasos hasta llegar a 1.
 Para n = 27 la semilla es 111. Escribir un programa que tenga la mayor cantidad de pasos para n perteneciente al dominio [1, 10000] */
#include <stdio.h>
int main(){
    long long n,aux;
    int semilla=1;
     printf("Ingrese el numero [1,10000]: ");
    do{
        scanf("%lld", &n);
    } while(!(n > 0 && n<=10000));
    aux=n;
    while(aux>2){
        if(aux%2==0){
            aux=aux/2;
        }else{
            aux=3*aux+1;
        }
        semilla++;
    }
    printf("Para n=%lld", n);
    printf(" la semilla es %d\n", semilla);

    return 0;

}