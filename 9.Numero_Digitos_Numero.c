#include <stdio.h>

// Función para contar el número de dígitos de un número
int countDigits(int number) {
    int count = 0;
    
    // Si el número es 0, tiene un dígito
    if (number == 0) {
        return 1;
    }
    
    // Convertir número a positivo si es negativo
    if (number < 0) {
        number = -number;
    }

    // Contar los dígitos
    while (number != 0) {
        number /= 10;
        count++;
    }
    
    return count;
}

int main() {
    int number;

    // Solicitar al usuario que ingrese un número
    printf("Ingrese un número: ");
    scanf("%d", &number);

    // Llamar a la función countDigits y mostrar el resultado
    int result = countDigits(number);
    printf("El número de dígitos de %d es: %d\n", number, result);

    return 0;
}
