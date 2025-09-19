/*
 * Ejemplo de estructura de control while en C.
 * Este archivo muestra cómo usar un bucle while para imprimir los números
 * del 1 al 5.
 *
 * Funcionalidad:
 * - El programa usa un bucle `while` para iterar e imprimir números
 *   del 1 al 5 en la consola.
 */

#include <stdio.h>

int main() {
    int i = 1;

    // Estructura de control: while
    while (i <= 5) {
        printf("%d\n", i);
        i++; // Incrementa el valor de i en 1
    }

    return 0;
}
