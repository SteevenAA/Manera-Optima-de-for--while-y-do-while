#include <stdio.h> // Entrada y salida de datos

int main() {
    // Declarar variables
    int numero, contador = 0;

    // Solicitar al usuario que ingrese un número
    printf("Ingrese un número: ");
    scanf("%d", &numero);

    // Contar el número de dígitos
    while (numero != 0) {
        numero /= 10; // Dividir el número por 10 para eliminar el último dígito
        contador++; // Incrementar el contador de dígitos
    }

    // Imprimir el resultado de número de dígitos
    printf("El numero tiene %d digitos.\n", contador);

    return 0;
}