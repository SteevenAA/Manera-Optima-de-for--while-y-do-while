#include <stdio.h>
#include <math.h>

// Función para calcular la raíz cúbica mediante restas sucesivas
double cubic_root_by_subtraction(double n) {
    double x = 0;
    double increment = 1.0;

    // Para mayor precisión, podemos usar diferentes incrementos
    while (n > 0) {
        double temp = n - (x * x * x);
        if (temp >= 0) {
            n = temp;
            x += increment;
        } else {
            x -= increment;
            increment /= 10;  // Reducimos el incremento para mayor precisión
        }
    }

    return x;
}

int main() {
    double number;
    
    // Solicitar al usuario el número del que desea calcular la raíz cúbica
    printf("Ingrese el número para calcular su raíz cúbica: ");
    scanf("%lf", &number);

    // Asegurarse de que el número sea positivo
    if (number < 0) {
        printf("Por favor, ingrese un número positivo.\n");
        return 1;
    }

    // Calcular la raíz cúbica mediante restas sucesivas
    double result = cubic_root_by_subtraction(number);

    // Mostrar el resultado
    printf("La raíz cúbica aproximada de %.2f es %.5f\n", number, result);

    return 0;
}