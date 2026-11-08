// PRACTICA 11
// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverría Ureña
// Fecha creación: 07/11/2026
// Número de ejercicio: 10

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

struct Equipo
{
    string nombre;
    int partidosJugados;
    int victorias;
    int puntosTotales;
};

void registrarEquipos(vector<Equipo> &equipos)
{
    for (int i = 0; i < equipos.size(); i++)
    {
        cout << "\nEQUIPO " << i + 1 << endl;

        cout << "Ingrese el nombre del equipo: ";
        cin >> ws;
        getline(cin, equipos[i].nombre);

        equipos[i].partidosJugados = 0;
        equipos[i].victorias = 0;
        equipos[i].puntosTotales = 0;
    }
}

void simularResultado(vector<Equipo> &equipos)
{
    int cantidad = equipos.size();

    int equipo1 = rand() % cantidad;
    int equipo2 = rand() % cantidad;

    while (equipo1 == equipo2)
    {
        equipo2 = rand() % cantidad;
    }

    cout << "\nPARTIDO SIMULADO" << endl;

    cout << equipos[equipo1].nombre << " VS "
         << equipos[equipo2].nombre << endl;

    int ganador = rand() % 2;

    if (ganador == 0)
    {
        equipos[equipo1].partidosJugados++;
        equipos[equipo1].victorias++;
        equipos[equipo1].puntosTotales += 3;

        equipos[equipo2].partidosJugados++;

        cout << "Ganador: " << equipos[equipo1].nombre << endl;
    }
    else
    {
        equipos[equipo2].partidosJugados++;
        equipos[equipo2].victorias++;
        equipos[equipo2].puntosTotales += 3;

        equipos[equipo1].partidosJugados++;

        cout << "Ganador: " << equipos[equipo2].nombre << endl;
    }
}

void ordenarClasificacion(vector<Equipo> &equipos)
{
    int cantidad = equipos.size();

    for (int i = 0; i < cantidad - 1; i++)
    {
        for (int j = 0; j < cantidad - 1 - i; j++)
        {
            if (equipos[j].puntosTotales < equipos[j + 1].puntosTotales)
            {
                Equipo auxiliar = equipos[j];

                equipos[j] = equipos[j + 1];

                equipos[j + 1] = auxiliar;
            }
        }
    }
}

void mostrarTabla(vector<Equipo> equipos)
{
    cout << "\n========== TABLA DE POSICIONES ==========" << endl;

    cout << "Posicion | Equipo | Jugados | Victorias | Puntos" << endl;

    for (int i = 0; i < equipos.size(); i++)
    {
        cout << i + 1 << " | "
             << equipos[i].nombre << " | "
             << equipos[i].partidosJugados << " | "
             << equipos[i].victorias << " | "
             << equipos[i].puntosTotales << endl;
    }
}

int main()
{
    int n;

    srand(time(0));

    cout << "CAMPEONATO DE E-SPORTS" << endl;

    cout << "Ingrese la cantidad de equipos: ";
    cin >> n;

    while (n < 2)
    {
        cout << "Debe ingresar al menos 2 equipos: ";
        cin >> n;
    }

    vector<Equipo> equipos(n);

    registrarEquipos(equipos);

    simularResultado(equipos);

    ordenarClasificacion(equipos);

    mostrarTabla(equipos);

    return 0;
}