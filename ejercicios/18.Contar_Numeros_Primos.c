#include <stdio.h> // Entrada y salida de datos
#include <stdbool.h>

// Función para verificar si un número es primo
bool esPrimo(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

// Función para contar los números primos hasta n
int contarPrimos(int n) {
    int contador = 0;
    for (int i = 2; i <= n; i++) {
        if (esPrimo(i)) {
            contador++;
        }
    }
    return contador;
}

int main() {
    int n;
    printf("Ingrese un número: ");
    scanf("%d", &n);

    int totalPrimos = contarPrimos(n);
    printf("Hay %d números primos hasta %d.\n", totalPrimos, n);

    return 0;
}
