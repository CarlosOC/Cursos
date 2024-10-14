#include <iostream>
#include <cstring> // Para usar strcpy
using namespace std;

class LibroCalificaciones
{
// Miembros privado:
private:
// Atributos Privados:
    char nombreCurso[100]="";
    int NAlumnos=0;

// Miembros públicos:
public:
    // Método
    void EstablecerNombreCurso()
    {
        cout << "Ingrese el Nombre del Curso: " << endl;
        cin << nombreCurso;
    }
    void EstablecerNumeroAlumnos()
    {
        cout << "Cantidad de Alumnos: " << endl;
        cin << NAlumnos;
    }
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
   // Llamada a un método:
    ProgramacionII.EstablecerNombreCurso();
    ProgramacionII.EstablecerNumeroAlumnos();
 
    ProgramacionII.mostrarMensaje();
    system("Pause");
}  
