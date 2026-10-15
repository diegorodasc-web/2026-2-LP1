#include <stdio.h>

int ackermann(int m, int n) {
    static int cuenta = 0; 
    cuenta++;

    if (m == -1 && n == -1) {
        return cuenta;
    }
    
    if (m == 0) {
        return n + 1;
    }
    else if (m > 0 && n == 0) {
        return ackermann(m - 1, 1);
    }
    else {
        return ackermann(m - 1, ackermann(m, n - 1));
    }
}

int main() {
    int res = ackermann(3, 4);

    int total_llamadas = ackermann(-1, -1);
    
    printf("Resultado: %d\n", res);
    printf("Total de llamadas recursivas: %d\n", total_llamadas);
    
    return 0;
}
