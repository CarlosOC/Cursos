/*
* Este programa clasifica un triángulo basado en los tres lados ingresados por el usuario.
* El usuario debe ingresar tres lados positivos. El programa verifica si los lados 
* forman un triángulo equilátero, isósceles o escaleno, y muestra el tipo de triángulo.
*/

#include <stdio.h>

int main()
{
    // Declaración de variables para los tres lados del triángulo
    float lado_1, lado_2, lado_3;

    // Inicialización de los lados a 0
    lado_1 = 0;
    lado_2 = 0;
    lado_3 = 0;

    // Solicita al usuario ingresar el lado 1, repite hasta que el valor sea positivo
    do
    {
        printf("Ingrese el lado 1: \n");
        scanf("%f", &lado_1);
        if (lado_1 <= 0)
        {
            printf("Error: Ingrese Nuevamente el valor\n\a");
        }
    } while (lado_1 <= 0);

    // Solicita al usuario ingresar el lado 2, repite hasta que el valor sea positivo
    do
    {
        printf("Ingrese el lado 2: \n");
        scanf("%f", &lado_2);
        if (lado_2 <= 0)
        {
            printf("Error: Ingrese Nuevamente el valor\n\a");
        }
    } while (lado_2 <= 0);

    // Solicita al usuario ingresar el lado 3, repite hasta que el valor sea positivo
    do
    {
        printf("Ingrese el lado 3: \n");
        scanf("%f", &lado_3);
        if (lado_3 <= 0)
        {
            printf("Error: Ingrese Nuevamente el valor\n\a");
        }
    } while (lado_3 <= 0);

    // Verifica y muestra el tipo de triángulo basado en los lados ingresados
    if (lado_1 == lado_2 && lado_1 == lado_3)
    {
        printf("Los tres lados son iguales\n");
        printf("El triángulo es equilátero\n");
    }
    else if (lado_1 != lado_2 && lado_1 != lado_3 && lado_2 != lado_3)
    {
        printf("Los tres lados son distintos\n");
        printf("El triángulo es escaleno\n");
    }
    else if ((lado_1 == lado_2 && lado_1 != lado_3) || 
             (lado_2 == lado_3 && lado_2 != lado_1) || 
             (lado_3 == lado_1 && lado_3 != lado_2))
    {
        printf("Dos lados son iguales\n");
        printf("El triángulo es isósceles\n");
    }

    return 0; // Finaliza el programa
}
