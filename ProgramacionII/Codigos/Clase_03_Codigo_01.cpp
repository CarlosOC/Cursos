#include <iostream>
#include <cstring> // Para usar strcpy
using namespace std;

class LibroCalificaciones
{
    // Miembros públicos:
public:
    // Atributos:
    char NombreCurso[100]="";
    int NAlumnos=0;
    // Método
    void mostrarMensaje()
        {
            cout << "Bienvenido al Libro de calificaciones del Curso " << NombreCurso << endl;
            cout << "Numero de Alumnos:  " << NAlumnos << endl;
        }  
};  
int main()
{
    // Instanciamiento:
    LibroCalificaciones ProgramacionII;
    // Asignación de valores a los atributos del objeto 
    strcpy(ProgramacionII.NombreCurso, "Programacion II");
    // Llamada a un método:
    ProgramacionII.NAlumnos=65;
    ProgramacionII.mostrarMensaje();
    system("Pause");
}  