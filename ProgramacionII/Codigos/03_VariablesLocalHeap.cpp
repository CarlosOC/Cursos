#include<iostream>
void FuncionEjemplo()
{
    int     varLocal = 10;      // Variable local en la pila
    int*    varHeap = new int;  // Asignación dinámica en el montón
    *varHeap = 20;
    std::cout << "Variable en la pila: " << varLocal << std::endl;
    std::cout << "Variable en el montón: " << *varHeap << std::endl;

    delete varHeap; // Libera la memoria del montón
}

int main()
{
    FuncionEjemplo();
    return 0;
}
