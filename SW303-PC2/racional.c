#include <stdio.h>
#include "racional.h"

static int es_primo(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int mcd(int a, int b) {
    if (b == 0) {
        if (a < 0) return -a;
        return a;
    }
    return mcd(b, a % b);
}

void simplificar(int *num, int *den) {
    int div = mcd(*num, *den);
    if (div != 0) {
        *num = *num / div;
        *den = *den / div;
    }
}

void sumar(int n1, int d1, int n2, int d2, int *num_r, int *den_r) {
    *num_r = (n1 * d2) + (n2 * d1);
    *den_r = d1 * d2;

    simplificar(num_r, den_r);
}
