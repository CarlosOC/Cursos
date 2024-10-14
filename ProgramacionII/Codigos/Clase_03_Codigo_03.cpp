#include <iostream>
#include <cstring> // Para usar strcpy
using namespace std;

class LibroCalificaciones
{
private:
    // Atributos Privados:
    char nombreCurso[100] = "";
    int NAlumnos = 0;
protected:
    // Atributo Protected:
    char semestre[10] = "N/A";
public:
    // Métodos Públicos:
    void EstablecerNombreCurso()
    {
        cout << "Ingrese el Nombre del Curso: ";
        cin >> nombreCurso;
    }
    void EstablecerNumeroAlumnos()
    {
        cout << "Cantidad de Alumnos: ";
        cin >> NAlumnos;
    }
    void EstablecerSemestre()
    {
        cout << "Ingrese el Semestre del Curso: ";
        cin >> semestre;
    }
    void mostrarMensaje()
    {
        cout << "Bienvenido al Libro de calificaciones del Curso " << nombreCurso << endl;
        cout << "Numero de Alumnos: " << NAlumnos << endl;
        cout << "Semestre: " << semestre << endl;
    }
    // Método para obtener el nombre del curso (necesario para la clase derivada)
    const char* ObtenerNombreCurso() const
    {
        return nombreCurso;
    }
};

class LibroCalificacionesPracticos : public LibroCalificaciones
{
private:
    // Nuevos atributos para la clase derivada
    char nombreProfesor[100] = "";
    char ubicacionClase[100] = "";

public:
    // Métodos para establecer los nuevos atributos
    void EstablecerNombreProfesor()
    {
        cout << "Ingrese el Nombre del Profesor: ";
        cin >> nombreProfesor;
    }

    void EstablecerUbicacionClase()
    {
        cout << "Ingrese la Ubicación de la Clase: ";
        cin >> ubicacionClase;
    }

    // Sobrescribiendo el método mostrarMensaje para incluir la nueva información
    void mostrarMensajeDetallado()
    {
        // Llamada al método de la clase base
        mostrarMensaje();
        cout << "Profesor: " << nombreProfesor << endl;
        cout << "Ubicación de la Clase: " << ubicacionClase << endl;
    }

    // Método para cambiar el semestre desde la clase derivada
    void CambiarSemestre(const char* nuevoSemestre)
    {
        strcpy(semestre, nuevoSemestre);
    }
};

int main()
{
    // Instanciamiento de la clase derivada
    LibroCalificacionesPracticos ProgramacionII;

    // Llamada a métodos heredados y nuevos métodos de la clase derivada
    ProgramacionII.EstablecerNombreCurso();
    ProgramacionII.EstablecerNumeroAlumnos();
    ProgramacionII.EstablecerNombreProfesor();
    ProgramacionII.EstablecerUbicacionClase();
    ProgramacionII.EstablecerSemestre();

    // Cambiar el semestre usando el método de la clase derivada
    ProgramacionII.CambiarSemestre("2024-I");

    // Mostrar mensaje detallado
    ProgramacionII.mostrarMensajeDetallado();

    system("Pause");
    return 0;
}
