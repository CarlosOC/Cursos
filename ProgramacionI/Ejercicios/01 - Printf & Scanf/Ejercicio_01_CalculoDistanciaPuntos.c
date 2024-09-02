/*
* Este programa calcula la distancia entre dos puntos en un plano cartesiano.
* El usuario ingresa las coordenadas (X_01, Y_01) del primer punto y (X_02, Y_02) 
* del segundo punto, y el programa calcula y muestra la distancia entre ellos.
*/

#include <stdio.h>
#include <math.h>

int main ()
{
    // Declaración de variables para las coordenadas de los dos puntos y la distancia
    float X_01, Y_01, X_02, Y_02, d;
    
    // Inicialización de las coordenadas a 0
    X_01 = 0;
    Y_01 = 0;
    X_02 = 0;
    Y_02 = 0;

    // Mensaje para el usuario indicando el propósito del programa
    printf("El programa calcula la distancia entre dos puntos\nIngrese el Primer Punto X_01, Y_01\n");

    // Solicita al usuario ingresar la coordenada X del primer punto
    printf("X_01: ");
    scanf("%f", &X_01); // Lee el valor de X_01

    // Solicita al usuario ingresar la coordenada Y del primer punto
    printf("Y_01: ");
    scanf("%f", &Y_01); // Lee el valor de Y_01

    // Solicita al usuario ingresar la coordenada X del segundo punto
    printf("Ingrese el Segundo Punto X_02, Y_02\n");
    printf("X_02: ");
    scanf("%f", &X_02); // Lee el valor de X_02

    // Solicita al usuario ingresar la coordenada Y del segundo punto
    printf("Y_02: ");
    scanf("%f", &Y_02); // Lee el valor de Y_02

    // Mensaje indicando que se va a calcular la distancia entre los puntos
    printf("La distancia entre los puntos es:\n");

    // Cálculo de la distancia utilizando la fórmula de la distancia euclidiana
    d = sqrt(pow(fabs(X_02 - X_01), 2) + pow(fabs(Y_02 - Y_01), 2));

    // Imprime la distancia calculada junto con las coordenadas de los puntos
    printf("Distancia entre (X_01: %0.3f ; Y_01: %0.3f) y (X_02: %0.3f ; Y_02: %0.3f) : %0.3f", X_01, Y_01, X_02, Y_02, d);
    
    return 0; // Finaliza el programa
}