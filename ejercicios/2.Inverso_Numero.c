#include <stdio.h> // Entrada y salida de datos

// Función para invertir un número
int invertirNumero(int num) {
    int inverso = 0;
    while (num != 0) {
        inverso = inverso * 10 + num % 10;
        num = num / 10;
    }
    return inverso;
}

// Función principal
int main() {
    int numero, resultado;

    // Solicitar el número al usuario
    printf("Introduce un número: ");
    scanf("%d", &numero);

    // Invertir el número utilizando la función
    resultado = invertirNumero(numero);

    // Mostrar el resultado
    printf("El inverso del número %d es %d\n", numero, resultado);

    return 0;
}
