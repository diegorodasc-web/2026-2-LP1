// devuelve la suma de los digitos de n int suma_digitos(int n);        // aplica suma_digitos hasta obtener un digito int raiz_digital(int n);   
// imprime la traza "9875 -> 29 -> 11 -> 2" void imprimir_traza(int n); 
#include <stdio.h>

int suma_digitos(int n) {
    int sum = 0;
    while (n > 0) {
        sum = sum + (n % 10);
        n /= 10;
    }
    return sum;
}

int raiz_digital(int n) {
    int aux = n;
    while (aux >= 10) {
        aux = suma_digitos(aux);
    }
    return aux;
}

void imprimir_traza(int n) {
    int aux = n;
    printf("%d", aux);
    while (aux >= 10) {
        aux = suma_digitos(aux);
        printf(" -> %d", aux);
    }
    printf("\n");
}

int main() {
    int n;

    printf("Ingrese el numero positivo (n): ");
    do {
        scanf("%d", &n);
    } while (!(n > 0));

    printf("Traza del colapso: ");
    imprimir_traza(n);

    printf("Raiz digital: %d\n", raiz_digital(n));

    return 0;
}
