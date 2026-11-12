#include <stdio.h>
#include <math.h>

double seno(double x){
    return sin(x);
}

double balistica(double x){
    return -x * x;
}

void graficar(double xmin, double xmax, double(*funcion)(double)){
    double dx; // 1. Declaración fuera del ciclo para evitar el error de estándar
    for(dx = xmin; dx < xmax; dx += 0.1){
        // Imprimimos los valores para ver el resultado en pantalla
        printf("x: %.2f | y: %.4f\n", dx, funcion(dx)); 
    }
}

int main(){
    printf("--- Graficando Seno ---\n");
    graficar(-3.14, 3.14, seno); 

    printf("\n--- Graficando Balistica ---\n");
    graficar(0, 25, balistica);
    
    return 0;
}
