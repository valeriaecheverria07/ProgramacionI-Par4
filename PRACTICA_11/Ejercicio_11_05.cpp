// PRACTICA 11
// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Urena
// Fecha creación: 07/11/2026
// Número de ejercicio: 5

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Cancion
{
    string titulo;
    string artista;
    int duracionSegundos;
};

void calcularDuracion(vector<Cancion> canciones)
{
    int totalSegundos = 0;

    for (int i = 0; i < canciones.size(); i++)
    {
        totalSegundos = totalSegundos + canciones[i].duracionSegundos;
    }

    int minutos = totalSegundos / 60;
    int segundos = totalSegundos % 60;

    cout << "\nDURACION TOTAL DE LA PLAYLIST" << endl;
    cout << "Total: " << minutos << " minutos y "
         << segundos << " segundos." << endl;
}

int main()
{
    int n;

    cout << "PLAYLIST MUSICAL" << endl;

    cout << "Ingrese la cantidad de canciones: ";
    cin >> n;

    while (n <= 0)
    {
        cout << "Ingrese una cantidad mayor a cero: ";
        cin >> n;
    }

    vector<Cancion> canciones(n);

    for (int i = 0; i < n; i++)
    {
        cout << "\nCANCION " << i + 1 << endl;

        cout << "Ingrese el titulo: ";
        cin >> ws;
        getline(cin, canciones[i].titulo);

        cout << "Ingrese el artista: ";
        getline(cin, canciones[i].artista);

        cout << "Ingrese la duracion en segundos: ";
        cin >> canciones[i].duracionSegundos;
    }

    calcularDuracion(canciones);

    return 0;
}