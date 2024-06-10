#include <stdio.h>

// Función que calcula la suma de los dígitos de un número
int suma_digitos(int numero) {
    int suma = 0;
    while (numero != 0) {
        suma += numero % 10;
        numero /= 10;
    }
    return suma;
}

int main() {
    int numero;
    
    // Solicitar al usuario que ingrese un número
    printf("Ingrese un número: ");
    scanf("%d", &numero);

    // Llamar a la función y mostrar el resultado
    int resultado = suma_digitos(numero);
    printf("La suma de los dígitos de %d es %d\n", numero, resultado);

    return 0;
}
