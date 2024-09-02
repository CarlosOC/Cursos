/*
* Este programa calcula las potencias de PI desde la potencia 2 hasta la potencia 10
* y la raíz cuadrada de dichas potencias.
* Se definen dos funciones:
*   - potencia(float pi, int pot): Calcula la potencia de PI elevada a un exponente.
*   - raiz(float a): Calcula la raíz cuadrada de un número.
* El programa imprime cada potencia de PI junto con su raíz cuadrada correspondiente.
*/

#include <stdio.h>
#include <math.h>

// Prototipos de las funciones
float potencia(float, int);
float raiz(float);

int main ()
{
    int i;
    float aux_pot, aux_raiz;

    printf("El programa calcula las potencias de PI desde la potencia 2 hasta la potencia 10\n");
    printf("y la raíz cuadrada de dichas potencias \n");

    // Bucle para calcular y mostrar potencias y raíces cuadradas de PI
    for (i = 2; i <= 10; i++)
    {
        aux_pot = potencia(M_PI, i);   // Calcula la potencia de PI
        aux_raiz = raiz(aux_pot);       // Calcula la raíz cuadrada de la potencia
        printf("%0.3f^%d: %0.3f -> %0.3f^(1/2): %0.3f \n", M_PI, i, aux_pot, aux_pot, aux_raiz);
    }

    return 0; // Finaliza el programa
}

// Función para calcular la potencia
float potencia(float pi, int pot)
{
    return pow(pi, pot); // Utiliza la función pow para calcular la potencia
}

// Función para calcular la raíz cuadrada
float raiz(float a)
{
    return sqrt(a); // Utiliza la función sqrt para calcular la raíz cuadrada
}
