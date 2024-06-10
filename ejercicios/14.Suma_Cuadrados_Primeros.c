#include <stdio.h>

// Función para calcular la suma de los cuadrados de los primeros n números naturales
int suma_cuadrados(int n) {
    int suma = 0;
    for (int i = 1; i <= n; i++) {
        suma += i * i;
    }
    return suma;
}

int main() {
    int n;
    // Pedir al usuario que ingrese un número entero
    printf("Ingrese un número entero: ");
    scanf("%d", &n);
    
    // Calcular la suma de los cuadrados
    int resultado = suma_cuadrados(n);
    
    // Mostrar el resultado
    printf("La suma de los cuadrados de los primeros %d números naturales es: %d\n", n, resultado);
    
    return 0;
}
