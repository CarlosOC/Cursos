#include <iostream>  
// la función main comienza la ejecución del programa
int main()
{
// Declaraciones de variables
int numero = 0; // primer entero a sumar (se inicializa con 0)
std::cout << "Escriba un numero "; // pide los datos al usuario
std::cin >> numero;         // lee el primer entero del usuario y lo coloca en numero1

std::cout << "El numero ingresado es: " << numero << std::endl; // muestra la suma; fin de línea

return  0; // indica que el programa terminó con éxito
}  
