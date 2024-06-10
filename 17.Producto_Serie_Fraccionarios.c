#include <stdio.h>

// Función para calcular el producto de la serie de fraccionarios
double calcular_producto(int n) {
    double producto = 1.0; // Inicializar el producto a 1.0
    for (int i = 1; i <= n; i++) {
        producto *= 1.0 / i;
    }
    return producto;
}

// Función principal
int main() {
    int n;
    printf("Introduce el valor de n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("El valor de n debe ser mayor que 0.\n");
        return 1;
    }

    double resultado = calcular_producto(n);
    printf("El producto de la serie es: %f\n", resultado);

    return 0;
}
