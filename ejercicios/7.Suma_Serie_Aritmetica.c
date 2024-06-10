#include <stdio.h> // Entrada y salida de datos

// Declaración de la función para calcular la suma de los primeros n términos de una serie aritmética
int suma_serie_aritmetica(int n);

int main() {
    int n;
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);
    
    int suma = suma_serie_aritmetica(n);
    printf("La suma de los primeros %d términos de la serie aritmética es: %d\n", n, suma);
    
    return 0;
}

// Definición de la función para calcular la suma de los primeros n términos de una serie aritmética
int suma_serie_aritmetica(int n) {
    int suma = 0;
    for (int i = 1; i <= n; i++) {
        suma += i;
    }
    return suma;
}
