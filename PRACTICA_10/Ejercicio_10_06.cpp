// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverría Ureña
// Fecha creación: 19/10/2026
// Número de ejercicio: 6

#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;


void GenerarNombres(vector<string>& estudiantes, int n)
{
    string Nombres[10] = {
        "Juan", "Maria", "Pedro", "Ana", "Luis",
        "Sofia", "Carlos", "Lucia", "Diego", "Valeria"
    };

    string Apellidos[10] = {
        "Perez", "Gomez", "Lopez", "Rojas", "Flores",
        "Mamani", "Vargas", "Torres", "Garcia", "Mendoza"
    };

    for(int i = 0; i < n; i++)
    {
        int a = rand() % 10;
        int b = rand() % 10;

        estudiantes.push_back(Nombres[a] + " " + Apellidos[b]);
    }
}


void MostrarNombres(vector<string> estudiantes)
{
    for(int i = 0; i < estudiantes.size(); i++)
    {
        cout << i + 1 << ". " << estudiantes[i] << endl;
    }
}


void OrdenarNombres(vector<string>& estudiantes)
{
    string auxiliar;

    for(int i = 0; i < estudiantes.size() - 1; i++)
    {
        for(int j = 0; j < estudiantes.size() - 1 - i; j++)
        {
            if(estudiantes[j] > estudiantes[j + 1])
            {
                auxiliar = estudiantes[j];
                estudiantes[j] = estudiantes[j + 1];
                estudiantes[j + 1] = auxiliar;
            }
        }
    }
}


int main()
{
    srand(time(0));

    vector<string> estudiantes;
    int n;

    cout << "Ingrese cantidad de estudiantes: ";
    cin >> n;

    if(n > 0)
    {
        GenerarNombres(estudiantes, n);

        cout << endl;
        cout << "LISTA ORIGINAL" << endl;
        MostrarNombres(estudiantes);

        OrdenarNombres(estudiantes);

        cout << endl;
        cout << "LISTA ORDENADA ALFABETICAMENTE" << endl;
        MostrarNombres(estudiantes);
    }
    else
    {
        cout << "Cantidad no valida" << endl;
    }

    return 0;
}