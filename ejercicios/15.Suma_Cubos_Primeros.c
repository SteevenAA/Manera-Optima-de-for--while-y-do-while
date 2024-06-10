#include <stdio.h> // Entrada y salida de datos

int main() {
    int n;
    long long int suma = 0; // Usamos long long int para manejar números grandes

    // Solicitar al usuario que ingrese un número
    printf("Ingrese un numero: ");
    scanf("%d", &n);

    // Imprimir la serie de cubos y calcular la suma
    printf("Si n = %d, suma = ", n);
    for (int i = 1; i <= n; i++) {
        printf("%d^3", i);
        suma += i * i * i;
        if (i != n) {
            printf(" + ");
        }
    }

    // Imprimir la suma total
    printf(" = %lld\n", suma);

    return 0;
}