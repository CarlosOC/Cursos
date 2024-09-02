/*
* Este programa demuestra el uso de estructuras en C para gestionar información sobre un profesor, un curso y un departamento.
* Se definen tres estructuras: `profesor`, `curso` y `depto`, y se inicializan con valores de ejemplo.
* Luego, se imprimen los detalles de cada estructura.
*/

#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h> // Necesaria para incluir strcpy

// Definición de la estructura departamento
struct depto {
    int DEPTO_ID;           // Identificador del departamento
    char NOMBRE[12];        // Nombre del departamento
    char DIRECTOR[12];      // Director del departamento
    char DESCRIPCION[100];  // Descripción del departamento
    int TELEFONO;           // Teléfono del departamento
};

// Definición de la estructura profesor
struct profesor {
    int PROF_ID;            // Identificador del profesor
    char NOMBRE[12];        // Nombre del profesor
    char APELLIDO[12];      // Apellido del profesor
    int TELEFONO;           // Teléfono del profesor
};

// Definición de la estructura curso
struct curso {
    int CURSO_ID;           // Identificador del curso
    int PROF_ID;            // Identificador del profesor que imparte el curso
    char NOMBRE[12];        // Nombre del curso
    char NIVEL[12];         // Nivel del curso (e.g., Secundaria)
    char DESCRIPCION[100];  // Descripción del curso
};

int main()
{
    // Declaración e inicialización de instancias de las estructuras
    struct profesor Carlos;
    struct curso PrimerI;
    struct depto Basicas;

    // Inicialización de la estructura profesor
    Carlos.PROF_ID = 01;
    strcpy(Carlos.NOMBRE, "Carlos");
    strcpy(Carlos.APELLIDO, "Oviedo");
    Carlos.TELEFONO = 4423755;

    // Inicialización de la estructura curso
    PrimerI.CURSO_ID = 01;
    PrimerI.PROF_ID = 01;
    strcpy(PrimerI.NOMBRE, "Primero I");
    strcpy(PrimerI.NIVEL, "Secundaria");
    strcpy(PrimerI.DESCRIPCION, "Secundaria - Primer Año - I");

    // Inicialización de la estructura departamento
    Basicas.DEPTO_ID = 02;
    strcpy(Basicas.NOMBRE, "Basicas");
    strcpy(Basicas.DIRECTOR, "Roberto");
    Basicas.TELEFONO = 44552233;
    strcpy(Basicas.DESCRIPCION, "Matemáticas, Lengua, Historia");

    // Impresión de los detalles de las estructuras
    printf("Profesor: \nID: %d \nNombre: %s\nApellido: %s\nTelefono: %d\n", Carlos.PROF_ID, Carlos.NOMBRE, Carlos.APELLIDO, Carlos.TELEFONO);
    printf("\nCurso: \nID: %d \nNombre: %s\nNivel: %s\nDescripcion: %s\n", PrimerI.CURSO_ID, PrimerI.NOMBRE, PrimerI.NIVEL, PrimerI.DESCRIPCION);
    printf("\nDepto: \nID: %d \nNombre: %s\nDirector: %s\nTelefono: %d\nDescripcion: %s\n", Basicas.DEPTO_ID, Basicas.NOMBRE, Basicas.DIRECTOR, Basicas.TELEFONO, Basicas.DESCRIPCION);

    return 0; // Finaliza el programa
}
