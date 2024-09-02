/*
* Este programa convierte un número entero ingresado por el usuario en su representación binaria.
* El usuario introduce un número decimal, y el programa imprime su equivalente en binario.
* Nota: El código actual genera una representación binaria invertida.
*/

#include <stdio.h>

int main()
{
    // Declaración de variables
    int resto, num, aux, binario;

    // Inicialización de las variables
    aux = 0;
    binario = 0;

    // Solicita al usuario ingresar un número
    printf("Ingrese un número: ");
    scanf("%d", &num);

    // Conversión del número decimal a binario
    do {
        resto = num % 2;     // Calcula el resto de la división entre 2 (bit menos significativo)
        num = num / 2;       // Divide el número entre 2
        binario = binario + resto * 10; // Construye la representación binaria en orden invertido
    } while (num != 0);     // Repite hasta que el número se convierte en 0

    // Imprime la representación binaria del número
    printf("El número en binario es: %d", binario);

    return 0; // Finaliza el programa
}
