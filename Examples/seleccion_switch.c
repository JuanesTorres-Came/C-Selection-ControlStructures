/*
 * Ejemplo de estructura de selección switch en C.
 * Este archivo muestra cómo utilizar la instrucción switch para
 * manejar múltiples opciones en base a una entrada numérica.
 *
 * Funcionalidad:
 * - El programa utiliza un número del 1 al 3 para elegir un día de la semana.
 * - Se imprimen los días correspondientes en texto.
 */

#include <stdio.h>

int main() {
    int dia;

    // Entrada del usuario
    printf("Ingresa un número del 1 al 7 para seleccionar un día de la semana: ");
    scanf("%d", &dia);

    // Estructura de selección: switch
    switch (dia) {
        case 1:
            printf("Lunes\n");
            break;
        case 2:
            printf("Martes\n");
            break;
        case 3:
            printf("Miércoles\n");
            break;
        case 4:
            printf("Jueves\n");
            break;
        case 5:
            printf("Viernes\n");
            break;
        case 6:
            printf("Sábado\n");
            break;
        case 7:
            printf("Domingo\n");
            break;
        default:
            printf("Número fuera de rango, por favor ingresa un número entre 1 y 7.\n");
    }

    return 0;
}
