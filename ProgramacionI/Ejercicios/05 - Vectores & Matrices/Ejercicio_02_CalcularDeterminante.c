/*
* Este programa calcula el determinante de una matriz 3x3 utilizando el método de las diagonales.
* El usuario ingresa los valores de la matriz, que se almacena en un arreglo bidimensional.
* El programa luego extiende la matriz a una matriz 5x3 para calcular las diagonales necesarias
* y así obtener el determinante.
* El determinante se imprime y se indica si la matriz es singular (es decir, si el determinante es 0).
*/

#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>

// Prototipo de la función para calcular el determinante
float determinante(int matriz[3][3]);

int main ()
{
    int matriz[3][3];
    float det;

    // Entrada de datos para la matriz
    for(int i = 0; i < 3; i++) 
    {
        for(int j = 0; j < 3; j++) 
        {
            printf("Ingrese el Valor [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
  
    // Imprime la matriz ingresada
    printf("La Matrix es:\n");
    for(int i = 0; i < 3; i++) 
    {
        for(int j = 0; j < 3; j++) 
        {
            printf("[%d]", matriz[i][j]);
        }
        printf("\n");
    }

    // Calcula el determinante
    det = determinante(matriz);

    // Imprime el resultado del determinante
    printf("El Determinante es: %f", det);
    if(det == 0) 
        printf(" La matriz es singular");
    
    return 0; // Finaliza el programa
}

// Función para calcular el determinante de una matriz 3x3
float determinante(int matriz[3][3])
{
    int MatrizExtendida[5][3], Diag_01, Diag_02, Diag_03, Diag_04, Diag_05, Diag_06;
    float Det;

    Diag_01 = 1;
    Diag_02 = 1;
    Diag_03 = 1;
    Diag_04 = 1;
    Diag_05 = 1;
    Diag_06 = 1;

    // Extiende la matriz original a una matriz 5x3
    for(int i = 0; i < 5; i++) 
    {
        for(int j = 0; j < 3; j++) 
        {
            MatrizExtendida[i][j] = matriz[i][j];
            if(i > 2) 
                MatrizExtendida[i][j] = matriz[i - 3][j];
        }
    }
    
    // Imprime la matriz extendida
    printf("La Matrix Extendida es:\n");
    for(int i = 0; i < 5; i++) 
    {
        for(int j = 0; j < 3; j++) 
        {
            printf("[%d]", MatrizExtendida[i][j]);
        }
        printf("\n");
    }

    // Calcula las diagonales necesarias para el determinante
    for(int i = 0; i < 5; i++) 
    {
        for(int j = 0; j < 3; j++) 
        {
            // Diagonales Positivas
            if(i == j) Diag_01 = MatrizExtendida[i][j] * Diag_01;
            if(i - j == 1) Diag_02 = MatrizExtendida[i][j] * Diag_02;
            if(i - j == 2) Diag_03 = MatrizExtendida[i][j] * Diag_03;
            // Diagonales Negativas
            if(i + j == 2) Diag_04 = MatrizExtendida[i][j] * Diag_04;
            if(i + j == 3) Diag_05 = MatrizExtendida[i][j] * Diag_05;
            if(i + j == 4) Diag_06 = MatrizExtendida[i][j] * Diag_06;
        }
    }

    // Calcula el determinante
    Det = (Diag_01 + Diag_02 + Diag_03) - (Diag_04 + Diag_05 + Diag_06);

    return Det; // Devuelve el determinante calculado
}
