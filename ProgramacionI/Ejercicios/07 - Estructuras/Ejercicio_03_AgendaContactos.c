/* 
 * Programa en C para gestionar una agenda de contactos.
 * 
 * Este programa permite al usuario agendar nuevos contactos, buscar contactos por nombre o apellido,
 * mostrar todos los contactos agendados, y mostrar el número de registros disponibles.
 * 
 * Funciones:
 * - agendarcontacto: Permite ingresar un nuevo contacto y guardarlo en la agenda.
 * - buscarcontacto: Permite buscar un contacto por nombre o apellido.
 * - mostrarcontactos: Muestra todos los contactos actualmente agendados.
 * - eliminarcontacto: (Nota: La función está declarada pero no implementada en este código.)
 */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define n_total 4 // Número máximo de contactos en la agenda

// Estructura para almacenar la información de un contacto
struct persona {
    char nombre[20];
    char apellido[12];
    char telefono[12];
    char mail[20];
} contactos[n_total];

// Prototipos de las funciones
int agendarcontacto(int numero_agendados);
void buscarcontacto();
void mostrarcontactos(int numero_agendados);
void eliminarcontacto();

int main()
{
    int opcion, numero_agendados;
    numero_agendados = 0; // Inicializa el número de contactos agendados a 0

    do {
        do {
            // Menú de opciones
            printf("1.- Agendar un Contacto\n");
            printf("2.- Buscar un Contacto\n");
            printf("3.- Mostrar Todos\n");
            printf("4.- Registros Disponibles\n");
            printf("5.- Salir\n");
            printf("Elija una opcion: ");
            scanf("%d", &opcion);
            if (opcion < 1 || opcion > 5) 
                printf("Error: Opcion Incorrecta\n");
        } while (opcion < 1 || opcion > 5);

        switch (opcion)
        {
        case 1: // Agendar un Contacto
            if (numero_agendados == n_total)
                printf("Agenda Completa\n");
            else
                numero_agendados = agendarcontacto(numero_agendados);
            break;
        case 2: // Buscar un Contacto
            buscarcontacto();
            break;
        case 3: // Mostrar Todos
            mostrarcontactos(numero_agendados);
            break;
        case 4: // Registros Disponibles
            printf("< Quedan %d Registro Disponible > \n", n_total - numero_agendados);
            break;
        case 5: // Salir
            printf("cerrando el programa ...");
            break;
        default:
            break;
        }
    } while (opcion != 5);

    return 0;
}

// Función para agendar un nuevo contacto
int agendarcontacto(int n_agendados)
{
    int i = n_agendados;

    printf("Ingreso de un Nuevo Contacto\n");
    printf("Nombre: ");
    scanf("%s", contactos[i].nombre);
    printf("Apellido: ");
    scanf("%s", contactos[i].apellido);
    printf("Telefono: ");
    scanf("%s", contactos[i].telefono);
    printf("Mail: ");
    scanf("%s", contactos[i].mail);

    printf("Registro Guardado!\n");
    printf("Nombre: %s\n", contactos[i].nombre);
    printf("Apellido: %s\n", contactos[i].apellido);
    printf("Telefono: %s\n", contactos[i].telefono);
    printf("Mail: %s\n", contactos[i].mail);

    n_agendados++;
    return n_agendados;
}

// Función para buscar un contacto por nombre o apellido
void buscarcontacto()
{
    int opcion, flag, i;
    char aux_nombre[20], aux_apellido[12];

    do {
        do {
            // Menú de búsqueda
            printf("1.- Buscar Contacto por Nombre\n");
            printf("2.- Buscar Contacto por Apellido\n");
            printf("3.- Salir\n");
            printf("Elija una opcion: ");
            scanf("%d", &opcion);
            if (opcion < 1 || opcion > 3)
                printf("Error: Opcion Incorrecta\n");
        } while (opcion < 1 || opcion > 3);

        switch (opcion)
        {
        case 1: // Buscar Contacto por Nombre
            flag = 0;
            printf("Ingrese Nombre: ");
            scanf("%s", aux_nombre);

            printf(" || RESULTADO DE LA BUSQUEDA ||\n");
            for (i = 0; i < n_total; i++)
            {
                if (strcmp(aux_nombre, contactos[i].nombre) == 0)
                {
                    flag = 1;
                    printf("Nombre: %s\n", contactos[i].nombre);
                    printf("Apellido: %s\n", contactos[i].apellido);
                    printf("Telefono: %s\n", contactos[i].telefono);
                    printf("Mail: %s\n", contactos[i].mail);
                    printf("\n");
                }
            }
            if (flag == 0)
                printf("El Contacto no fue encontrado!\n");
            break;
        case 2: // Buscar Contacto por Apellido
            flag = 0;
            printf("Ingrese Apellido: ");
            scanf("%s", aux_apellido);

            printf(" || RESULTADO DE LA BUSQUEDA ||\n");
            for (i = 0; i < n_total; i++)
            {
                if (strcmp(aux_apellido, contactos[i].apellido) == 0)
                {
                    flag = 1;
                    printf("Nombre: %s\n", contactos[i].nombre);
                    printf("Apellido: %s\n", contactos[i].apellido);
                    printf("Telefono: %s\n", contactos[i].telefono);
                    printf("Mail: %s\n", contactos[i].mail);
                    printf("\n");
                }
            }
            if (flag == 0)
                printf("El Contacto no fue encontrado!\n");
            break;
        case 3: // Salir
            printf("Saliendo ...\n");
            break;
        default:
            break;
        }
    } while (opcion != 3);
}

// Función para mostrar todos los contactos agendados
void mostrarcontactos(int n_agendados)
{
    printf(" || LISTADO DE CONTACTOS ||\n");
    for (int i = 0; i < n_agendados; i++)
    {
        printf("Nombre: %s\n", contactos[i].nombre);
        printf("Apellido: %s\n", contactos[i].apellido);
        printf("Telefono: %s\n", contactos[i].telefono);
        printf("Mail: %s\n", contactos[i].mail);
        printf("\n");
    }
}
