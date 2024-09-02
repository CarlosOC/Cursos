/*
* Este programa genera un vector de 20 elementos con números aleatorios.
* Los números aleatorios se generan utilizando la función `rand()` y 
* el vector se imprime en la consola con una organización de 5 elementos por línea.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    // Declaración de variables
    int i, Vector[20];

    // Inicializa la semilla del generador de números aleatorios
    srand(time(NULL));

    // Mensaje que indica que el vector ha sido cargado
    printf("El Vector Cargado es:\n");

    // Llena el vector con números aleatorios
    for(i = 0; i < 20; i++)
    {
        Vector[i] = rand(); // Asigna un número aleatorio a cada posición del vector
    }

    // Imprime el vector y organiza la salida en 5 elementos por línea
    for(i = 0; i < 20; i++)
    {
        printf("Vector[%d]: %d \t", i, Vector[i]); // Imprime el valor en la posición i
        if(!(i % 5)) printf("\n"); // Salta a la siguiente línea cada 5 elementos
    }

    return 0; // Finaliza el programa
}
