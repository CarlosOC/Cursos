/*
* Este programa calcula la suma de una serie de números generados a partir de un número ingresado por el usuario.
* La serie se genera de la forma siguiente: 1, 11, 111, 1111, etc.
* La cantidad de términos en la serie corresponde al número ingresado por el usuario.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    // Declaración de variables
    int i, n, sum, aux;

    // Inicialización de las variables
    sum = 0;
    aux = 1;

    // Solicita al usuario ingresar un número
    printf("Ingrese un número: ");
    scanf("%d", &n);

    // Bucle para generar la serie y calcular la suma
    for (i = 0; i < n; i++)
    {
        // Suma el valor actual de aux a sum
        sum = sum + aux;
        // Actualiza aux para el siguiente término en la serie
        aux = (aux * 10) + 1;
    }

    // Imprime el total de la serie calculada
    printf("El total de la serie es: %d \n", sum);

    return 0; // Finaliza el programa
}
