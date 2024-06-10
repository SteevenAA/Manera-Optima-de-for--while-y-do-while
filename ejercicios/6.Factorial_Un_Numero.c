#include <stdio.h> // Entrada y salida de datos

// Función para calcular el factorial de un número
unsigned long long factorial(int n) {
    unsigned long long result = 1;  // Usamos unsigned long long para soportar números grandes
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int number;
    
    // Solicitar al usuario que ingrese un número
    printf("Ingrese un número entero: ");
    scanf("%d", &number);

    
    // Calcular el factorial y mostrar el resultado
    unsigned long long fact = factorial(number);
    printf("El factorial de %d es %llu\n", number, fact);

    return 0;
}
