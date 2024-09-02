/*
* Este programa compara tres valores ingresados por el usuario.
* El programa determina si los tres valores son iguales, o si no lo son, 
* identifica y muestra cuál de los tres es el mayor.
*/

#include <stdio.h>

int main ()
{
    // Declaración de variables para los tres valores
    float X, Y, Z;

    // Inicialización de los valores a 0
    X = 0;
    Y = 0;
    Z = 0;

    // Solicita al usuario ingresar los tres valores
    printf("Ingrese tres valores\n");
    printf("X: ");
    scanf("%f", &X); // Lee el valor de X
    printf("Y: ");
    scanf("%f", &Y); // Lee el valor de Y
    printf("Z: ");
    scanf("%f", &Z); // Lee el valor de Z

    // Condicional para verificar si los tres valores son iguales
    if (X == Y && Y == Z)
    {
        printf("Los tres valores son iguales"); // Los tres valores son iguales
    }
    
    // Condicional para determinar cuál es el mayor valor si no son iguales
    if (X > Y && X > Z)
    {
        printf("El valor %0.3f es el mayor", X); // X es el mayor
    } 
    else if (Y > X && Y > Z)
    {
        printf("El valor %0.3f es el mayor", Y); // Y es el mayor
    } 
    else if (Z > X && Z > Y)
    {
        printf("El valor %0.3f es el mayor", Z); // Z es el mayor
    }

    return 0; // Finaliza el programa
}
