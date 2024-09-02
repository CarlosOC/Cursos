/*
* Este programa gestiona la información de 3 personas e imprime varios detalles sobre ellas.
* Para cada persona, se registra el nombre, peso y altura, y se calcula el Índice de Masa Corporal (IMC).
* Además, el programa determina y muestra:
*   - La persona más alta
*   - La persona más baja
*   - La persona más ligera
*   - La persona más pesada
*/

#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h> // Necesaria para incluir strcpy

// Definición de la estructura persona
struct persona
{
   char nombre[50];   // Nombre de la persona
   float peso;        // Peso de la persona
   float altura;      // Altura de la persona
} personas[3];        // Array para almacenar 3 personas

int main() 
{
    // Declaración de variables
    int i, alto, bajo, liviano, pesado;
    float imc, aux_01, aux_02;

    // Inicialización de variables
    imc = 0;
    bajo = 0;
    liviano = 0;
    pesado = 0;
    aux_01 = 0;
    aux_02 = 0;

    // Entrada de datos para las 3 personas
    for (i = 0; i < 3; i++)
    {
        printf("Ingrese el nombre de la persona [%d]: ", i + 1);
        if (i > 0) getchar(); // Limpia el buffer del teclado
        gets(personas[i].nombre); // Nota: gets() está obsoleta y puede ser insegura, se recomienda usar fgets()

        printf("Ingrese el peso de %s: ", personas[i].nombre);
        scanf("%f", &personas[i].peso);

        printf("Ingrese la altura de %s: ", personas[i].nombre);
        scanf("%f", &personas[i].altura);
    }

    // Cálculo e impresión del IMC para cada persona
    for (i = 0; i < 3; i++)
    {
        printf("El IMC de %s: ", personas[i].nombre);
        imc = personas[i].peso / (personas[i].altura * personas[i].altura);
        printf("%f\n", imc);
    }

    // Determina la persona más alta y la persona más pesada
    for (i = 0; i < 3; i++)
    {
        if (personas[i].peso > aux_01)
        {
            aux_01 = personas[i].peso;
            pesado = i;
        }
        if (personas[i].altura > aux_02)
        {
            aux_02 = personas[i].altura;
            alto = i;
        }
    }

    // Determina la persona más baja y la persona más ligera
    for (i = 0; i < 3; i++)
    {
        if (personas[i].peso < aux_01)
        {
            aux_01 = personas[i].peso;
            liviano = i;
        }
        if (personas[i].altura < aux_02)
        {
            aux_02 = personas[i].altura;
            bajo = i;
        }
    }

    // Imprime los resultados
    printf("El más alto es: %s\n", personas[alto].nombre);
    printf("El más bajo es: %s\n", personas[bajo].nombre);
    printf("El más liviano es: %s\n", personas[liviano].nombre);
    printf("El más pesado es: %s\n", personas[pesado].nombre);

    return 0; // Finaliza el programa
}
