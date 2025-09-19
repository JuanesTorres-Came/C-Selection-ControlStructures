/*
 * Ejemplo de estructura de control do-while en C.
 * Este archivo muestra cómo usar el bucle do-while para imprimir los números
 * del 1 al 5, con la diferencia de que la condición se verifica al final del bucle.
 *
 * Funcionalidad:
 * - El programa utiliza un bucle `do-while` para mostrar los números del 1 al 5.
 */

#include <stdio.h>

int main() {
    int i = 1;

    // Estructura de control: do-while
    do {
        printf("%d\n", i);
        i++; // Incrementa el valor de i
    } while (i <= 5);

    return 0;
}
