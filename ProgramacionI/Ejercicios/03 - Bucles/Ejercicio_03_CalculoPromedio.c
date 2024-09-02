/*
* Este programa calcula el promedio de 10 números ingresados por el usuario.
* El usuario introduce 10 números, uno a uno, y el programa suma todos los valores
* y calcula el promedio. Finalmente, el promedio de los números ingresados es mostrado.
*/

#include <stdio.h>

int main()
{
    // Declaración de variables
    int i;
    float num, sum, prom;

    // Inicialización de las variables
    num = 0;
    sum = 0;
    prom = 0;

    // Mensaje para el usuario indicando que debe ingresar 10 números
    printf("Ingrese 10 números para calcular el promedio \n");

    // Bucle para ingresar 10 números y calcular la suma
    for (i = 0; i < 10; i++)
    {
        // Imprime el mensaje de entrada, diferenciando el formato del último número
        if (i == 9) 
            printf("Ingrese el valor %d: ", i + 1);
        else 
            printf("Ingrese el valor 0%d: ", i + 1);
        
        // Lee el número ingresado por el usuario
        scanf("%f", &num);
        
        // Acumulación de la suma de los números
        sum = sum + num;
    }

    // Cálculo del promedio
    prom = sum / 10;
    
    // Imprime el promedio de los números ingresados
    printf("El promedio de los números ingresados es: %f\n", prom);

    return 0; // Finaliza el programa
}
