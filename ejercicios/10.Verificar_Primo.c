#include <stdio.h> // Entrada y salida de datos

int main() {
    int numero, es_primo = 1; // Inicialmente asumimos que el número es primo

    // Solicitar al usuario que ingrese un número
    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    // Verificar si el número es primo
    if (numero <= 1) {
        es_primo = 0; // Los números menores o iguales a 1 no son primos
    } else {
        for (int i = 2; i * i <= numero; i++) {
            if (numero % i == 0) {
                es_primo = 0; // Si el número es divisible por i, no es primo
                break;
            }
        }
    }

    // Imprimir el resultado
    if (es_primo) {
        printf("%d es primo.\n", numero);
    } else {
        printf("%d no es primo.\n", numero);
    }

    return 0;
}