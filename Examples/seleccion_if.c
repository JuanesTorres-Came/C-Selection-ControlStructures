/*
 * Ejemplo de estructura de selección simple con if en C.
 * Este archivo muestra cómo tomar decisiones con una única condición.
 *
 * Funcionalidad:
 * - Verifica si el número ingresado es par o impar.
 */

#include <stdio.h>

int main() {
    int numero;

    // Entrada del usuario
    printf("Ingresa un número: ");
    scanf("%d", &numero);

    // Estructura de selección: if
    if (numero % 2 == 0) {
        printf("El número %d es par.\n", numero);
    }

    return 0;
}
