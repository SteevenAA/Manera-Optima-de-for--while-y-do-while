#include <stdio.h>

// Función para calcular el producto de los primeros n términos de una serie geométrica
double producto_serie_geometrica(int n, double primer_termino, double razon) {
    double producto = 1.0;
    double termino = primer_termino;
    
    // Usamos un bucle for para recorrer los primeros n términos
    for (int i = 0; i < n; i++) {
        producto *= termino;
        termino *= razon;
    }
    
    return producto;
}

int main() {
    int n;
    double primer_termino, razon;
    
    // Solicitar al usuario el número de términos, el primer término y la razón
    printf("Ingrese el número de términos (n): ");
    scanf("%d", &n);
    printf("Ingrese el primer término de la serie: ");
    scanf("%lf", &primer_termino);
    printf("Ingrese la razón de la serie: ");
    scanf("%lf", &razon);
    
    // Calcular el producto de los primeros n términos
    double resultado = producto_serie_geometrica(n, primer_termino, razon);
    
    // Mostrar el resultado
    printf("El producto de los primeros %d términos de la serie geométrica es: %lf\n", n, resultado);
    
    return 0;
}
