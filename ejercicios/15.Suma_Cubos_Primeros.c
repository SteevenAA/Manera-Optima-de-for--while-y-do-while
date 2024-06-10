#include <stdio.h>

// Función que calcula el cubo de un número
int calcular_cubo(int numero) {
    return numero * numero * numero;
}

// Función que calcula la suma de los cubos de los primeros n números naturales
int suma_de_cubos(int n) {
    int suma = 0;

    for (int i = 1; i <= n; i++) {
        suma += calcular_cubo(i);
    }

    return suma;
}

int main() {
    int n;

    // Solicitamos al usuario que ingrese el valor de n
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    // Calculamos la suma de los cubos
    int resultado = suma_de_cubos(n);

    // Imprimimos el resultado
    printf("La suma de los cubos de los primeros %d numeros naturales es: %d\n", n, resultado);

    return 0;
}
