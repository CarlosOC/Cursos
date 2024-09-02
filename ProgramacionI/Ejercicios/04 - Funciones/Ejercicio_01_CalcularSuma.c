int main ()
{
    // Llama a la función fnc_suma con los argumentos 1 y 2, y muestra el resultado
    printf("La Suma es: %d", fnc_suma(1, 2));
    return 0; // Finaliza el programa
}

// Función para calcular la suma de dos enteros
int fnc_suma(int a, int b)
{
    int suma;
    suma = a + b; // Calcula la suma de a y b
    return suma;  // Devuelve el resultado de la suma
}