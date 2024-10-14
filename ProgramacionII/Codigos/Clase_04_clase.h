#include <string>
// definición de la clase LibroCalificaciones
using namespace std;
class LibroCalificaciones
{
public:
    explicit LibroCalificaciones( std::string ); // constructor que inicializa a nombreCurso
    void establecerNombreCurso( std::string ); // establece el nombre del curso
    string obtenerNombreCurso() const; // obtiene el nombre del curso
    void mostrarMensaje() const; // muestra un mensaje de bienvenida
private:
   string nombreCurso; // nombre del curso para este LibroCalificaciones
}; // fin de la clase LibroCalificaciones
