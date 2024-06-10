#include <stdio.h> // Entrada y salida de datos

// Función para sumar números impares hasta n
int sumar_impares_hasta(int n) {
    int suma = 0;
    for (int i = 1; i <= n; i += 2) {
        suma += i;
    }
    return suma;
}

int main() {
    int n;

    // Solicitar al usuario el valor de n
    printf("Ingrese un número entero n: ");
    scanf("%d", &n);

    // Llamar a la función y mostrar el resultado
    int resultado = sumar_impares_hasta(n);
    printf("La suma de los números impares hasta %d es: %d\n", n, resultado);

    return 0;
}
