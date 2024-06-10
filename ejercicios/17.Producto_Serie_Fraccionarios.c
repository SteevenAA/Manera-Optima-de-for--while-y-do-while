#include <stdio.h> // Entrada y salida de datos

int main() {
    // Declarar variables
    int n;
    double prod = 1.0;

    // Solicitar al usuario que ingrese un número
    printf("Ingrese un numero: ");
    scanf("%d", &n);

    // Imprimir la serie y calcular el producto
    printf("Si n = %d, prod = ", n);
    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            printf("1");
        } else {
            printf("1/%d", i);
        }
        prod *= 1.0 / i;
        if (i != n) {
            printf(" * ");
        }
    }

    // Imprimir el producto total (opcional si solo se necesita la serie)
    // printf(" = %f\n", producto);

    return 0;
}