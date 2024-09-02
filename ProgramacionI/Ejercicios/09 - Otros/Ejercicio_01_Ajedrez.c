/*
* Este programa simula la asignación y visualización de un tablero de ajedrez.
* El programa crea un tablero de 8x8, asigna las piezas en sus posiciones iniciales
* y las imprime en la consola. Además, dibuja el tablero de ajedrez utilizando 
* caracteres ASCII para representar las casillas claras y oscuras.
*/

#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>

// Función que devuelve el tipo de pieza en función de su posición en el tablero
char buscarPieza(int i, int j);

// Función que imprime el color de la casilla en el tablero
char ColorPad(int i, int j);

int main()
{
    // Declaración de la matriz de 8x8 que representa el tablero
    char tablero[8][8];

    // Asigna las piezas en las posiciones iniciales del tablero
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            tablero[i][j] = buscarPieza(i, j); // Asigna la pieza correspondiente en la posición [i][j]
        }
    }

    // Imprime el título "Tablero:" en la consola
    printf("Tablero:\n");

    // Imprime las piezas negras (primera y segunda fila del tablero)
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            printf(" %c ", tablero[i][j]); // Imprime la pieza en la posición [i][j]
        }
        printf("\n"); // Salta a la siguiente línea después de imprimir una fila completa
    }

    // Imprime una línea divisoria
    for(int i = 0; i < 24; i++) printf("_");
    printf("\n");

    // Imprime el tablero de ajedrez sin las piezas
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            ColorPad(i, j); // Imprime la casilla correspondiente (clara u oscura)
        }
        printf("\n"); // Salta a la siguiente línea después de imprimir una fila completa
    }

    // Imprime otra línea divisoria
    for(int i = 0; i < 24; i++) printf("_");
    printf("\n");

    // Imprime las piezas blancas (séptima y octava fila del tablero)
    for(int i = 6; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            printf(" %c ", tablero[i][j]); // Imprime la pieza en la posición [i][j]
        }
        printf("\n"); // Salta a la siguiente línea después de imprimir una fila completa
    }

    printf("\n\n");

    return 0; // Finaliza el programa
}

// Función que devuelve el tipo de pieza según su posición en el tablero
char buscarPieza(int i, int j)
{
    switch(i)
    {
        case 0:
            if(j == 0 || j == 7){ return 'T'; } // Torre
            if(j == 1 || j == 6){ return 'C'; } // Caballo
            if(j == 2 || j == 5){ return 'A'; } // Alfil
            if(j == 3){ return 'R'; }           // Reina
            if(j == 4){ return 'Y'; }           // Rey
            break;
        case 1:
            return 'P'; // Peón (fila de peones negros)
            break;
        case 6:
            return 'P'; // Peón (fila de peones blancos)
            break;
        case 7:
            if(j == 0 || j == 7){ return 'T'; } // Torre
            if(j == 1 || j == 6){ return 'C'; } // Caballo
            if(j == 2 || j == 5){ return 'A'; } // Alfil
            if(j == 3){ return 'R'; }           // Reina
            if(j == 4){ return 'Y'; }           // Rey
            break;
        default:
            return ' '; // Espacio vacío para las casillas sin piezas
            break;
    }
}

// Función que imprime el color de la casilla según la posición en el tablero
char ColorPad(int i, int j)
{
    if((i + j) % 2) 
        printf("%c%c%c", 32, 32, 32); // Casilla clara
    else 
        printf("%c%c%c", 219, 219, 219); // Casilla oscura
}