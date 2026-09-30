/*Dado un entero positivo n leído por teclado, calcular repetidamente la suma de sus dígitos hasta obtener un único dígito (raíz digital). 
Por ejemplo, n = 9875 → 9+8+7+5 = 29 → 2+9 = 11 → 1+1 = 2. Raíz digital = 2. */
#include <stdio.h>
int main(){
    int n, aux, sum = 0, cif;
    
    printf("Ingrese el numero positivo(n): ");
    do{
        scanf("%d", &n);
    } while(!(n > 0));

    aux = n;
    
    while (aux >= 10) { 
        sum = 0; 
        while(aux > 0){
            cif = aux % 10;
            sum = sum + cif;
            aux = aux / 10;
        }
 
        aux = sum; 
        printf("%d\n", sum); 
    }
 
    printf("Raiz digital: %d\n", aux);
    
    return 0;
}
