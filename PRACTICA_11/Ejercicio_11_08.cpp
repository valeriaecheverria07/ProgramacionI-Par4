// PRACTICA 11
// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverría Ureña
// Fecha creación: 07/11/2026
// Número de ejercicio: 8

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

struct Estudiante
{
    string nombres;
    int notaFinal;
};

void registrarEstudiantes(vector<Estudiante> &estudiantes)
{
    for (int i = 0; i < estudiantes.size(); i++)
    {
        cout << "\nESTUDIANTE " << i + 1 << endl;

        cout << "Ingrese los nombres: ";
        cin >> ws;
        getline(cin, estudiantes[i].nombres);

        estudiantes[i].notaFinal = rand() % 101;

        cout << "Nota generada: " << estudiantes[i].notaFinal << endl;
    }
}

void mostrarListas(vector<Estudiante> estudiantes)
{
    cout << "\n===== ESTUDIANTES APROBADOS =====" << endl;

    bool hayAprobados = false;

    for (int i = 0; i < estudiantes.size(); i++)
    {
        if (estudiantes[i].notaFinal >= 60)
        {
            cout << estudiantes[i].nombres << endl;
            hayAprobados = true;
        }
    }

    if (hayAprobados == false)
    {
        cout << "No hay estudiantes aprobados." << endl;
    }

    cout << "\n===== ESTUDIANTES REPROBADOS =====" << endl;

    bool hayReprobados = false;

    for (int i = 0; i < estudiantes.size(); i++)
    {
        if (estudiantes[i].notaFinal < 60)
        {
            cout << estudiantes[i].nombres << endl;
            hayReprobados = true;
        }
    }

    if (hayReprobados == false)
    {
        cout << "No hay estudiantes reprobados." << endl;
    }
}

int main()
{
    int n;

    srand(time(0));

    cout << "FILTRO DE CALIFICACIONES ESTUDIANTILES" << endl;

    cout << "Ingrese la cantidad de estudiantes: ";
    cin >> n;

    while (n <= 0)
    {
        cout << "Ingrese una cantidad mayor a cero: ";
        cin >> n;
    }

    vector<Estudiante> estudiantes(n);

    registrarEstudiantes(estudiantes);

    mostrarListas(estudiantes);

    return 0;
}