#include <iostream>
#include "LibroCalificaciones.h" // incluye la definición de la clase LibroCalificaciones GradeBook
using namespace std;
// la función main empieza la ejecución del programa
int main()
{
    // crea dos objetos LibroCalificaciones
    LibroCalificaciones libroCalificaciones1( "Programacion II Teoria ");
    LibroCalificaciones libroCalificaciones2( "Programacion II Practica" );
    // muestra el valor inicial de nombreCurso para cada LibroCalificaciones
    cout << "libroCalificaciones1 creado para el curso: "   << libroCalificaciones1.obtenerNombreCurso() << endl;
    cout << "\nlibroCalificaciones2 creado para el curso: " << libroCalificaciones2.obtenerNombreCurso() << endl;
} // fin de main
