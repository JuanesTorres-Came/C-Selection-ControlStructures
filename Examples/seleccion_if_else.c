/*
 * Ejemplo de estructura de selección if-else en C.
 * Este archivo muestra el uso básico de la estructura if-else
 * para tomar decisiones en función de la entrada del usuario.
 *
 * Funcionalidad:
 * - El programa verifica si el número ingresado es mayor, menor o igual a 10.
 * - Luego imprime un mensaje en pantalla según el resultado.
 */

#include <stdio.h>

int main() {
    int numero;

    // Entrada del usuario
    printf("Ingresa un número: ");
    scanf("%d", &numero);

    // Estructura de selección: if-else
    if (numero > 10) {
        printf("El número es mayor que 10.\n");
    } else if (numero < 10) {
        printf("El número es menor que 10.\n");
    } else {
        printf("El número es igual a 10.\n");
    }

    return 0;
}
