#include <stdio.h>

// Función para multiplicar dos números utilizando sumas sucesivas
int multiplicar(int a, int b) {
    int resultado = 0;
    for (int i = 0; i < b; i++) {
        resultado += a;
    }
    return resultado;
}

// Función para calcular la potencia utilizando multiplicaciones sucesivas
int potencia(int base, int exponente) {
    int resultado = 1;
    for (int i = 0; i < exponente; i++) {
        resultado = multiplicar(resultado, base);
    }
    return resultado;
}

int main() {
    int base, exponente;
    
    // Solicitar al usuario la base y el exponente
    printf("Introduce la base: ");
    scanf("%d", &base);
    
    printf("Introduce el exponente: ");
    scanf("%d", &exponente);
    
    // Calcular la potencia
    int resultado = potencia(base, exponente);
    
    // Mostrar el resultado
    printf("%d^%d = %d\n", base, exponente, resultado);
    
    return 0;
}
