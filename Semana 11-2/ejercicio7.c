#include <stdio.h>

int fadd(int a, int b) {
    return a + b;
}

int fminus(int a, int b) {
    return a - b;
}

int fmultiply(int a, int b) {
    return a * b;
}

int fdivide(int a, int b) {
    if (b == 0) return 0;

    return a / b;
}

struct Calculator {
    int (*add)(int, int);
    int (*minus)(int, int);
    int (*multiply)(int, int);
    int (*divide)(int, int);
};

int main() {

    struct Calculator calc = {
        .add = fadd,
        .minus = fminus,
        .multiply = fmultiply,
        .divide = fdivide
    };

    int a = 45, b = 15;
    printf("%d + %d = %d\n", a, b, calc.add(a, b));
    printf("%d - %d = %d\n", a, b, calc.minus(a, b));
    printf("%d * %d = %d\n", a, b, calc.multiply(a, b));
    printf("%d / %d = %d\n", a, b, calc.divide(a, b));

    return 0;
}