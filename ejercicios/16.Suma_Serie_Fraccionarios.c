#include <stdio.h>

// Función para calcular la suma de la serie fraccionaria
double suma_fraccionarios(int n) {
    double suma = 0.0;
    for (int i = 1; i <= n; i++) {
        suma += 1.0 / i;
    }
    return suma;
}

int main() {
    int n;
    printf("Ingrese un número entero positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Por favor, ingrese un número entero positivo.\n");
        return 1; // Código de error
    }

    double resultado = suma_fraccionarios(n);
    printf("La suma de la serie es: %.6f\n", resultado);

    return 0; // Código de éxito
}
