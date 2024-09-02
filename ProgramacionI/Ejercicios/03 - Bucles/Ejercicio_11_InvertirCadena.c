/* 
 * Programa en C para invertir una cadena de caracteres.
 * 
 * Este programa define una cadena original "Hola Mundo!" y utiliza una función para invertir
 * la cadena y almacenar el resultado en otra cadena. Luego, imprime la cadena original y la cadena
 * invertida, junto con las direcciones de memoria de ambas cadenas.
 * 
 * Funciones:
 * - invertir: Toma dos punteros a cadenas, invierte la cadena de origen y la guarda en el destino.
 */

#include <stdio.h>

// Prototipo de la función que invierte la cadena
char *invertir(char *dest, const char *orig);

// Cadena original y destino
char origen[40] = "Hola Mundo!"; 
char destino[40]; // !odnuM aloH

int main()
{
    printf("Direccion Destino: %p \n", (void*)&destino); // Imprime la dirección de memoria de destino
    printf("Direccion Origen:  %p \n", (void*)&origen);  // Imprime la dirección de memoria de origen

    invertir(destino, origen); // Llama a la función para invertir la cadena

    printf("Dato en Origen:  %s\n", origen); // Imprime la cadena original
    printf("Dato en Destino: %s\n", destino); // Imprime la cadena invertida

    return 0; // Fin del programa
}

// Función que invierte una cadena y la almacena en otra
char *invertir(char *dest, const char *orig)
{
    const char *p = orig; // Puntero para recorrer la cadena original
    int cnt = 0;

    // Encuentra la longitud de la cadena original
    while (*p != '\0')
    {
        p++;
        cnt++;
    }

    p--; // Ajusta el puntero al último carácter de la cadena original
    for (int i = 0; i < cnt; i++)
    {
        dest[i] = *p--; // Copia los caracteres en orden inverso
    }
    dest[cnt] = '\0'; // Termina la cadena invertida con un carácter nulo

    return dest; // Retorna el puntero a la cadena invertida
}