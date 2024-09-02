/*
* Este programa permite al usuario ingresar el número de lados de una figura y luego dibujar la figura correspondiente.
* Las opciones disponibles son:
* 1. Ingresar la cantidad de lados (0, 3, o 4)
* 2. Dibujar la figura según los lados ingresados
* 3. Salir del programa
*
* Figuras soportadas:
* - 0 lados: Círculo (representación aproximada)
* - 3 lados: Triángulo equilátero
* - 4 lados: Cuadrado
*/

#include <stdio.h>
#include <math.h>

int main ()
{
    int j, i, opcion, lados;
    opcion = 0;
    lados = -1;

    do
    {
        // Menú de opciones
        do {
            printf("1.- Ingrese los Lados\n");
            printf("2.- Dibujar la figura\n");
            printf("3.- SALIR\n");
            printf("Opción: ");
            scanf("%d", &opcion);
            if(opcion < 0 || opcion > 3)
                printf("Error: Opción incorrecta\n");
        } while (opcion < 0 || opcion > 3);

        // Switch del menú, según las opciones
        switch (opcion)
        {
        case 1:
            // Ingreso de la cantidad de lados
            do
            {
                printf("Ingrese la cantidad de lados (Debe ser 0, 3, 4)\n");
                printf("Lados: ");
                scanf("%d", &lados);
                if (lados != 0 && lados != 3 && lados != 4)
                    printf("Error: Número de lados incorrecto. No se puede dibujar esa figura\n");
            } while (lados != 0 && lados != 3 && lados != 4);
            break;

        case 2:
            // Dibujo de la figura según el número de lados
            if (lados == -1)
                printf("Error: Ingrese el número de lados\n");
            else
            {
                // Switch de las figuras, según el número de lados
                switch (lados)
                {
                case 0: // Círculo
                    printf("\nCírculo\n");

                    for(i = 0; i < 7; i++)
                    {
                        if(i == 0) printf("   ********   \n");
                        if(i == 1) printf("  **********  \n");
                        if(i == 2) printf(" ************ \n");
                        if(i == 3) printf("**************\n");
                        if(i == 4) printf(" ************ \n");
                        if(i == 5) printf("  **********  \n");
                        if(i == 6) printf("   ********   \n");
                    }
                    break;

                case 3: // Triángulo
                    printf("\nTriángulo:\n");

                    for(i = 0; i <= 7; i++)
                    {
                        for(j = 0; j <= 7 - i; j++)   
                        {
                            printf(" ");
                        }
                        for(j = 0; j <= 2 * i - 1; j++) 
                        {
                            printf("*");
                        }
                        printf("\n");
                    }
                    break;

                case 4: // Cuadrado
                    printf("\nCuadrado:\n");
                    for(i = 0; i < 85; i++)
                    {
                        if(i != 0)
                        {
                            printf("*");
                            if(!(i % 14)) printf("\n");
                        }
                    }
                    printf("\n");
                    break;
                }
            }
            break;

        case 3:
            // Dibujo del lápiz
            printf("Lápiz\n");
            for(i = 0; i < 17; i++)
            {
                if(i == 0) printf("    **    \n");
                if(i == 1) printf("   ****   \n");
                if(i == 2) printf("  ******  \n");
                if(i == 3) printf(" ******** \n");
                if(i == 5) printf("**********\n");
                if(i == 6) printf("**********\n");
                if(i == 7) printf("**********\n");
                if(i == 8) printf("**********\n");
                if(i == 9) printf("**********\n");
                if(i == 10) printf("**********\n");
                if(i == 11) printf("**********\n");
                if(i == 12) printf("**********\n");
                if(i == 13) printf("**********\n");
                if(i == 14) printf("**********\n");
                if(i == 15) printf("**********\n");
                if(i == 16) printf(" ******** \n");
            }
            printf("\n");
            break;
        }
    } while (opcion != 3);

    return 0;
}
