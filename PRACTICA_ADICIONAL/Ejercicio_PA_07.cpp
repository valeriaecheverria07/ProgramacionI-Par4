// PRÁCTICA ADICIONAL
// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverría Ureña
// Fecha creación: 06/11/2026
// Número de ejercicio: 7

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

void llenarTiempos(double tiempos[4][5])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            tiempos[i][j] = 20.0 + (rand() % 301) / 10.0;
        }
    }
}

void mostrarTiempos(double tiempos[4][5])
{
    cout << "\nTIEMPOS DE LOS NADADORES" << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << "Estilo " << i + 1 << ": ";

        for (int j = 0; j < 5; j++)
        {
            cout << tiempos[i][j] << "  ";
        }

        cout << endl;
    }
}

void mejorTiempoEstilo(double tiempos[4][5])
{
    cout << "\nMEJOR TIEMPO DE CADA ESTILO" << endl;

    for (int i = 0; i < 4; i++)
    {
        double mejor = tiempos[i][0];
        int nadador = 0;

        for (int j = 1; j < 5; j++)
        {
            if (tiempos[i][j] < mejor)
            {
                mejor = tiempos[i][j];
                nadador = j;
            }
        }

        cout << "Estilo " << i + 1 << ": "
             << mejor << " segundos"
             << " - Nadador " << nadador + 1 << endl;
    }
}

void mejorPromedio(double tiempos[4][5])
{
    double promedios[5];

    for (int j = 0; j < 5; j++)
    {
        double suma = 0;

        for (int i = 0; i < 4; i++)
        {
            suma = suma + tiempos[i][j];
        }

        promedios[j] = suma / 4;
    }

    double mejor = promedios[0];
    int nadador = 0;

    for (int j = 1; j < 5; j++)
    {
        if (promedios[j] < mejor)
        {
            mejor = promedios[j];
            nadador = j;
        }
    }

    cout << "\nPROMEDIOS DE LOS NADADORES" << endl;

    for (int j = 0; j < 5; j++)
    {
        cout << "Nadador " << j + 1 << ": "
             << promedios[j] << " segundos" << endl;
    }

    cout << "\nMEJOR PROMEDIO" << endl;
    cout << "Nadador ganador: " << nadador + 1 << endl;
    cout << "Promedio: " << mejor << " segundos" << endl;
}

int main()
{
    double tiempos[4][5];

    srand(time(0));

    cout << fixed << setprecision(1);

    llenarTiempos(tiempos);

    mostrarTiempos(tiempos);

    mejorTiempoEstilo(tiempos);

    mejorPromedio(tiempos);

    return 0;
}