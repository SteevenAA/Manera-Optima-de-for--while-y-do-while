#include <stdio.h> // Entrada y salida de datos

// Función que genera y devuelve el n-ésimo número de Fibonacci
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    int a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

// Procedimiento que muestra los primeros n números de Fibonacci
void mostrarFibonacci(int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}

int main() {
    int n;
    printf("Ingrese el número de elementos de la serie de Fibonacci a mostrar: ");
    scanf("%d", &n);
    mostrarFibonacci(n);
    return 0;
}
