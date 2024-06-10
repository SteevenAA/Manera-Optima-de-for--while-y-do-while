#include <stdio.h>
#include <stdbool.h>

// Declaración de la función que verifica si un número es primo
bool esPrimo(int numero);

// Procedimiento principal
int main() {
    int numero;

    // Solicitamos al usuario que ingrese un número
    printf("Ingrese un número: ");
    scanf("%d", &numero);

    // Verificamos si el número es primo
    if (esPrimo(numero)) {
        printf("%d es un número primo.\n", numero);
    } else {
        printf("%d no es un número primo.\n", numero);
    }

    return 0;
}

// Definición de la función que verifica si un número es primo
bool esPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}
