#include <stdio.h> // Entrada y salida de datos

int main() {
    int n, sum = 0;

    // Solicitar al usuario que ingrese un número
    printf("Ingrese un numero: ");
    scanf("%d", &n);

    // Imprimir la serie de cuadrados y calcular la suma
    printf("suma = ");
    for (int i = 1; i <= n; i++) {
        printf("%d^2", i);
        sum += i * i;
        if (i != n) {
            printf(" + ");
        }
    }

    // Imprimir la suma total
    printf(" = %d\n", sum);

    return 0;
}