/*
* Este programa genera y muestra la tabla de multiplicar de un número ingresado por el usuario.
* El usuario introduce un número y el programa imprime la tabla de multiplicación de ese número
* desde 1 hasta 10.
*/

#include <stdio.h>

int main()
{
    // Declaración de variables
    int i;
    float num;

    // Inicialización de las variables
    num = 0;

    // Solicita al usuario ingresar un número para la tabla de multiplicación
    printf("Ingrese un número para realizar la tabla de multiplicación \n");
    scanf("%f", &num);

    // Imprime el número ingresado por el usuario
    printf("El número ingresado es: %0.3f \n", num);

    // Bucle para generar la tabla de multiplicación del número ingresado
    for (i = 1; i < 11; i++)
    {
        // Imprime el resultado de la multiplicación
        printf("%d x %0.3f \t =\t %0.3f\n", i, num, (i * num));
    }

    return 0; // Finaliza el programa
}
