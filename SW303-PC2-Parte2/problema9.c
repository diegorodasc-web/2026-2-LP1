#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char *linea = NULL;
    size_t capacidad = 0, longitud = 0;
    int reallocs = 0;
    size_t caps[64];
    int n_caps = 0;
    int c;

    printf("Escriba algo (Enter para terminar):\n");

    while ((c = getchar()) != EOF && c != '\n') {
    
        if (longitud + 1 >= capacidad) {
            size_t nueva_cap = (capacidad == 0) ? 8 : capacidad * 2;
            char *tmp = realloc(linea, nueva_cap);
            if (tmp == NULL) {
                fprintf(stderr, "Error: memoria insuficiente\n");
                free(linea);
                return 1;
            }
            linea = tmp;
            capacidad = nueva_cap;
            reallocs++;
            caps[n_caps++] = capacidad;
        }
        linea[longitud++] = (char)c;
        linea[longitud] = '\0';
    }

    printf("\nLongitud: %zu\n", longitud);
    printf("Realloc llamados: %d (", reallocs);
    for (int i = 0; i < n_caps; i++) {
        if (i > 0) printf(" -> ");
        printf("%zu", caps[i]);
    }
    printf(")\n");
    printf("Línea: \"%s\"\n", linea);

    free(linea);
    return 0;
}   