// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverría Ureña
// Fecha creación: 19/10/2026
// Número de ejercicio: 1

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void GenerarNombres(string Nombres[10], string Apellidos[10], int n)
{
    int a, b;

    for(int i = 0; i < n; i++)
    {
        a = rand() % 10;
        b = rand() % 10;

        cout << i + 1 << ". " << Nombres[a]
             << " " << Apellidos[b] << endl;
    }
}

int main()
{
    srand(time(0));

    string Nombres[10] = {
        "Juan", "Maria", "Pedro", "Ana", "Luis",
        "Sofia", "Carlos", "Lucia", "Diego", "Valeria"
    };

    string Apellidos[10] = {
        "Perez", "Gomez", "Lopez", "Rojas", "Flores",
        "Mamani", "Vargas", "Torres", "Garcia", "Mendoza"
    };

    int n;

    cout << "Ingrese cantidad de nombres: ";
    cin >> n;

    if(n > 0)
    {
        GenerarNombres(Nombres, Apellidos, n);
    }
    else
    {
        cout << "Cantidad no valida" << endl;
    }

    return 0;
}