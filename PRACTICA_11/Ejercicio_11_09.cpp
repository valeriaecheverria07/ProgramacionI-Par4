// PRACTICA 11
// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverría Ureña
// Fecha creación: 07/11/2026
// Número de ejercicio: 9

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Tarea
{
    string descripcion;
    bool completada;
};

void mostrarPendientes(vector<Tarea> tareas)
{
    bool hayPendientes = false;

    cout << "\n===== TAREAS PENDIENTES =====" << endl;

    for (int i = 0; i < tareas.size(); i++)
    {
        if (tareas[i].completada == false)
        {
            cout << "Tarea " << i + 1 << ": "
                 << tareas[i].descripcion << endl;

            hayPendientes = true;
        }
    }

    if (hayPendientes == false)
    {
        cout << "No hay tareas pendientes." << endl;
    }
}

void completarTarea(vector<Tarea> &tareas, int indice)
{
    if (indice >= 1 && indice <= tareas.size())
    {
        if (tareas[indice - 1].completada == false)
        {
            tareas[indice - 1].completada = true;

            cout << "Tarea marcada como completada." << endl;
        }
        else
        {
            cout << "Esta tarea ya esta completada." << endl;
        }
    }
    else
    {
        cout << "Indice de tarea no valido." << endl;
    }
}

int main()
{
    int n;
    int opcion = 0;
    int indice;

    cout << "GESTION DE TAREAS" << endl;

    cout << "Ingrese la cantidad de tareas: ";
    cin >> n;

    while (n <= 0)
    {
        cout << "Ingrese una cantidad mayor a cero: ";
        cin >> n;
    }

    vector<Tarea> tareas(n);

    for (int i = 0; i < n; i++)
    {
        cout << "\nTAREA " << i + 1 << endl;

        cout << "Ingrese la descripcion: ";
        cin >> ws;
        getline(cin, tareas[i].descripcion);

        tareas[i].completada = false;
    }

    while (opcion != 3)
    {
        cout << "\n===== MENU DE TAREAS =====" << endl;
        cout << "1. Mostrar tareas pendientes" << endl;
        cout << "2. Marcar tarea como completada" << endl;
        cout << "3. Salir" << endl;

        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
            case 1:
                mostrarPendientes(tareas);
                break;

            case 2:
                cout << "Ingrese el indice de la tarea: ";
                cin >> indice;

                completarTarea(tareas, indice);
                break;

            case 3:
                cout << "Saliendo del programa..." << endl;
                break;

            default:
                cout << "Opcion no valida." << endl;
        }
    }

    return 0;
}