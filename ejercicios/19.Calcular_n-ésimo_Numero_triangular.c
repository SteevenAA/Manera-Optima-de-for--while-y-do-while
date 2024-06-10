#include <stdio.h>

// Declaración de la función que calcula el n-ésimo número triangular
int calcularNumeroTriangular(int n);

int main() {
    int n;

    // Solicitar al usuario que ingrese el valor de n
    printf("Ingrese un número entero positivo: ");
    scanf("%d", &n);

    // Validar la entrada
    if (n <= 0) {
        printf("El número debe ser un entero positivo.\n");
        return 1;
    }

    // Llamar a la función para calcular el número triangular
    int numeroTriangular = calcularNumeroTriangular(n);

    // Imprimir el resultado
    printf("El %d-ésimo número triangular es: %d\n", n, numeroTriangular);

    return 0;
}

// Definición de la función que calcula el n-ésimo número triangular
int calcularNumeroTriangular(int n) {
    int resultado = 0;

    // Usar un bucle for para sumar los números del 1 a n
    for (int i = 1; i <= n; i++) {
        resultado += i;
    }

    return resultado;
}
