#include <stdio.h>

// Función para calcular la raíz cúbica mediante restas sucesivas
double cubic_root_by_subtraction(double n) {
    double x = 0;
    double increment = 1.0;

    // Para mayor precisión, podemos usar diferentes incrementos
    while (increment > 1e-10) {  // Continuar hasta que el incremento sea muy pequeño
        while (n >= (x + increment) * (x + increment) * (x + increment)) {
            x += increment;
        }
        increment /= 10;  // Reducimos el incremento para mayor precisión
    }

    return x;
}

int main() {
    double number;
    
    // Solicitar al usuario el número del que desea calcular la raíz cúbica
    printf("Ingrese el número para calcular su raíz cúbica: ");
    scanf("%lf", &number);

    // Calcular la raíz cúbica mediante restas sucesivas
    double result = cubic_root_by_subtraction(number);

    // Mostrar el resultado
    printf("La raíz cúbica aproximada de %.2f es %.10f\n", number, result);

    return 0;
}