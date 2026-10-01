Preg 2.1.1

Preg 2.1.2
1. ¿Por qué n sigue siendo 10 en main? 
porque al terminar la funcion su valor se destruye, y main no es afectado.
2. ¿Cómo se resolvería sin usar punteros? 
retornando el valor calculado a la de la funcion 
3. Reescribir incrementar para que retorne el valor modificado. 
listo
Preg 2.1.3
1. Predecir la salida de cada uno. 
En el programa A unos y contador global 0, y el programa  B contador global 1.
2. Compilar y verificar. ¿Sorpresa? 
Si, falle en el programa B.
3. Refactorizar para eliminar la variable global: pasar el contador por parámetro y retornar el nuevo valor:
 int incrementar(int contador) { return contador + 1; } 
4. Discusión: ¿Por qué las variables globales son una mala práctica en Ingeniería de Software? 
Mencionar al menos tres razones (acoplamiento, dificultad de testeo, condiciones de carrera en concurrencia). 
Al modificar la variable global se cambia las funciones y la logica, lo cual podria terminar rompiendo algo.

Pregunta 2.2.1
1. ¿Qué contiene el .h y qué no debe contener?
Declaracion de funciones, #define y la estructura necesarias, no debe contener codigo ejecutable ni funciones completas.
 2. ¿Por qué el .h no debe tener definiciones de funciones (salvo static inline en casos avanzados)? 
 se crea el codigo varias veces y arroja error.
 3. ¿Para qué sirven las directivas (#ifndef/#define/#endif)? Probar incluir el mismo .h dos veces en main.c y ver qué pasa con y sin guardas. 
 evita que un archivo se procese mas de una vez
 4. ¿Por qué main.c solo necesita incluir raiz_digital.h y no raiz_digital.c? 
 main.c solo necesita saber como se llaman las funciones y los datos.