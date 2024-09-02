/*
* Este programa invierte los dígitos de un número entero ingresado por el usuario.
* El usuario introduce un número, y el programa imprime sus dígitos en orden inverso.
*/

#include <stdio.h>

int main()
{
    // Declaración de variables
    int resto, num, aux;

    // Inicialización de la variable aux
    aux = 0;

    // Solicita al usuario ingresar un número
    printf("Ingrese un número: ");
    scanf("%d", &num);

    // Asigna el valor del número a resto
    resto = num;

    // Bucle para invertir los dígitos del número
    while (resto != 0)
    {
        // Calcula el dígito menos significativo y actualiza resto
        aux = resto / 10;
        resto = resto % 10;
        
        // Imprime el dígito menos significativo
        printf("%d", resto);
        
        // Actualiza resto para el siguiente dígito
        resto = aux;
    }

    return 0; // Finaliza el programa
}
