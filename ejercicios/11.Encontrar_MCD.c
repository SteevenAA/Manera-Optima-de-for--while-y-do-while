#include <stdio.h> // Entrada y salida de datos

// Función para calcular el MCD usando el algoritmo de Euclides
int calcularMCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    // Leer dos números del usuario
    printf("Introduce el primer número: ");
    scanf("%d", &num1);
    printf("Introduce el segundo número: ");
    scanf("%d", &num2);

    // Calcular el MCD
    int mcd = calcularMCD(num1, num2);

    // Mostrar el resultado
    printf("El MCD de %d y %d es: %d\n", num1, num2, mcd);

    return 0;
}
