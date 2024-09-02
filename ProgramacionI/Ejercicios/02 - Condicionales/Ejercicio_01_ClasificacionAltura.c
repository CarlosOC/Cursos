/*
* Este programa determina la categoría de altura de un individuo.
* El usuario ingresa la altura en centímetros, y el programa clasifica al individuo 
* como "Petiso", "Normal", "Alto", o "Muy Alto" según el rango en el que se encuentre la altura.
*/

#include <stdio.h>

int main ()
{
    // Declaración de la variable para almacenar la altura del individuo
    float altura;

    // Inicialización de la altura a 0
    altura = 0;

    // Solicita al usuario ingresar la altura del individuo en centímetros
    printf("Ingrese la altura del individuo: [en cm]\n");
    scanf("%f", &altura); // Lee el valor de la altura

    // Condicional para determinar la categoría de altura según el valor ingresado
    if (altura < 150)
    {
        printf("El individuo es Petiso"); // Altura menor a 150 cm
    } 
    else if (altura >= 150 && altura <= 170)
    {
        printf("El individuo es Normal"); // Altura entre 150 cm y 170 cm
    } 
    else if (altura > 170 && altura <= 195)
    {
        printf("El individuo es Alto"); // Altura entre 171 cm y 195 cm
    } 
    else if (altura > 195)
    {
        printf("El individuo es Muy Alto"); // Altura mayor a 195 cm
    }

    return 0; // Finaliza el programa
}
