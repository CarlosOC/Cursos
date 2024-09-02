/*
* Este programa genera un vector de 20 elementos con números aleatorios,
* cuenta cuántos de estos números son pares e impares, y luego muestra los resultados.
* Los números se generan utilizando la función `rand()` y se imprimen en la consola,
* organizados en filas de 5 elementos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    // Declaración de variables
    int i, Vector[20], n_pares, n_impares;

    // Inicialización de los contadores de números pares e impares
    n_pares = 0;
    n_impares = 0;

    // Inicializa la semilla del generador de números aleatorios
    srand(time(NULL));

    // Mensaje que indica que el vector ha sido cargado
    printf("El Vector Cargado es:\n");

    // Llena el vector con números aleatorios y cuenta los pares e impares
    for(i = 0; i < 20; i++)
    {
        Vector[i] = rand(); // Asigna un número aleatorio a cada posición del vector
        printf("Vector[%d]: %d \t", i, Vector[i]); // Imprime el valor en la posición i
        if(!(i % 5)) printf("\n"); // Salta a la siguiente línea cada 5 elementos

        // Cuenta los números pares e impares
        if(Vector[i] % 2) 
            n_pares++; // Incrementa el contador de números pares si el número es impar
        else 
            n_impares++; // Incrementa el contador de números impares si el número es par
    }

    // Imprime los resultados de la cuenta de pares e impares
    printf("\nEl Vector tiene:\nN Pares: %d\nN Impares: %d", n_pares, n_impares);

    return 0; // Finaliza el programa
}
