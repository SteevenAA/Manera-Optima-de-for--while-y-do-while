#include <stdio.h>// Entrada y salida de datos

int main() {
    // Declarar variables
    int n;
    int sum = 0;

    // Solicitar al usuario que ingrese un número
    printf("Ingrese un numero: ");
    scanf("%d", &n);

    // Mostrar la serie y calcular la suma
    printf("Si n = %d, el número triangular es ", n);
    for (int i = 1; i <= n; i++) {
        printf("%d", i);
        sum += i;
        if (i != n) {
            printf(" + ");
        }
    }

    // Imprimir el resultado final
    printf(" = %d\n", sum);

    return 0;
}