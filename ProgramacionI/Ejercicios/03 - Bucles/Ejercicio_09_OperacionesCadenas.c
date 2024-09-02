/*
* Este programa realiza varias operaciones con cadenas de caracteres.
* 1. Solicita al usuario que introduzca un texto.
* 2. Calcula y muestra el tamaño del texto ingresado.
* 3. Copia el texto a otra cadena y muestra el tamaño de la cadena copiada.
* 4. Concatena la cadena copiada al texto original y muestra el resultado.
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main ()
{
    char str[50], str2[50];
    int i, caracteres_alfabeticos, caracteres_numericos, caracteres_puntuacion, caracteres_espacio;

    // Inicialización de variables
    i = 0;
    caracteres_alfabeticos = 0;
    caracteres_numericos = 0;
    caracteres_puntuacion = 0;
    caracteres_espacio = 0;

    // Solicita al usuario que introduzca un texto
    printf("Introduzca un Texto: \n");
    gets(str);  // Nota: gets() está obsoleto y se recomienda usar fgets() en su lugar

    /*
    // Comentado: Conteo de caracteres en el texto
    while (str[i] != '\0')
    {
        if (isalpha(str[i])) caracteres_alfabeticos++;
        if (isdigit(str[i])) caracteres_numericos++;
        if (ispunct(str[i])) caracteres_puntuacion++;
        if (isspace(str[i])) caracteres_espacio++;
        i++;
    }
       
    printf("El Texto Ingresado:\n");
    printf("%s", str);
    printf("\nContiene:\n");
    printf("Caracteres Alfabeticos: %d\nCaracteres Numericos: %d\nCaracteres Puntuacion: %d\nCaracteres Espacio: %d",
           caracteres_alfabeticos, caracteres_numericos, caracteres_puntuacion, caracteres_espacio);
    */

    // Muestra el tamaño del texto ingresado
    printf("Tamaño del Texto: %lu\n", strlen(str));  // %lu para mostrar tamaño como unsigned long

    // Copia el texto a otra cadena
    strcpy(str2, str);
    printf("\nTamaño del Texto Copiado: %lu\n", strlen(str2));  // Muestra el tamaño de la cadena copiada

    // Concatena la cadena copiada al texto original
    strcat(str, str2);
    printf("Texto concatenado: %s\n", str);  // Muestra el texto concatenado

    return 0;
}
