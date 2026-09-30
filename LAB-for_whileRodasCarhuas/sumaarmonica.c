#include <stdio.h>
#include <math.h>

int main() {
    double tolerancia = 1e-6;
    double suma = 0.0;
    double termino;
    long long iteraciones = 0;
    int signo = 1;
    long long n = 1;

    do {
        termino = 1.0 / n;
        suma += signo * termino;
        signo = -signo;
        iteraciones++;
        n++;
    } while (termino >= tolerancia);

    double ln2_esperado = log(2.0);
    double error_absoluto = fabs(suma - ln2_esperado);

    printf("Tolerancia: %g\n", tolerancia);
    printf("Iteraciones: %lld\n", iteraciones);
    printf("Suma calculada : %.6f\n", suma);
    printf("ln(2) esperado : %.6f\n", ln2_esperado);
    printf("Error absoluto : %.6f\n", error_absoluto);

    return 0;
}
