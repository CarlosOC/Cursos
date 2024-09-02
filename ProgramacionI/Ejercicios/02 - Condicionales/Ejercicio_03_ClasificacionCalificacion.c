/*
* Este programa clasifica una calificación ingresada por el usuario.
* El usuario introduce una calificación en forma de letra (A, B, C, D, F),
* y el programa imprime el correspondiente mensaje de desempeño.
* El programa también maneja la entrada de caracteres inválidos.
*/

#include <stdio.h>

int main ()
{
    // Declaración de la variable para la calificación
    char calificacion;

    // Solicita al usuario introducir una calificación
    printf("Introduzca una Calificación [A, B, C, D, F]\n");
    printf("Calificación: ");
    scanf(" %c", &calificacion); // Nota: se usa " %c" para leer caracteres y evitar problemas con caracteres de espacio en blanco

    // Clasificación de la calificación utilizando una estructura switch
    switch (calificacion)
    {
        case 'A': // Calificación A
            printf("Excelente");
            break;
        case 'B': // Calificación B
            printf("Buena");
            break;
        case 'C': // Calificación C
            printf("Regular");
            break;    
        case 'D': // Calificación D
            printf("Suficiente");
            break;
        case 'F': // Calificación F
            printf("No Suficiente");
            break;        
        default: // Caso para caracteres inválidos
            printf("Error: Ingreso un carácter inválido. Debe ingresar: A, B, C, D, F");
            break;
    }

    return 0; // Finaliza el programa
}
