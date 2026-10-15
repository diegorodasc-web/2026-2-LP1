#include <stdio.h>
#include "racional.h"

int main() {
    int num1, den1, num2, den2;
    int n_final, d_final;

    printf("Fraccion 1 (num y den): ");
    scanf("%d %d", &num1, &den1);

    printf("Fraccion 2 (num y den): ");
    scanf("%d %d", &num2, &den2);

    if (den1 == 0 || den2 == 0) {
        printf("Error: el denominador no puede ser cero\n");
        return 1;
    }

    sumar(num1, den1, num2, den2, &n_final, &d_final);
    printf("Resultado: %d/%d\n", n_final, d_final);

    return 0;
}
