#include <stdio.h> // Entrada y salida de datos

// Función que calcula la suma de los números pares hasta n
int sumarNumerosPares(int n) {
    int suma = 0;
    for (int i = 2; i <= n; i += 2) {
        suma += i;
    }
    return suma;
}

int main() {
    int n;

    // Solicitar al usuario el valor de n
    printf("Ingrese un número entero n: ");
    scanf("%d", &n);

    // Calcular la suma de los números pares hasta n
    int suma = sumarNumerosPares(n);

    // Mostrar el resultado
    printf("La suma de los números pares hasta %d es: %d\n", n, suma);

    return 0;
}
