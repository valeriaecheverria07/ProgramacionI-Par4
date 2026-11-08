// PRÁCTICA ADICIONAL
// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverría Ureña
// Fecha creación: 06/11/2026
// Número de ejercicio: 9

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void ingresarMedallas(vector<string> paises, int medallas[5][3])
{
    for (int i = 0; i < 5; i++)
    {
        cout << "\nPAIS: " << paises[i] << endl;

        cout << "Medallas de oro: ";
        cin >> medallas[i][0];

        cout << "Medallas de plata: ";
        cin >> medallas[i][1];

        cout << "Medallas de bronce: ";
        cin >> medallas[i][2];
    }
}

void buscarPais(vector<string> paises, int medallas[5][3], string nombre)
{
    int posicion = -1;

    for (int i = 0; i < 5; i++)
    {
        if (paises[i] == nombre)
        {
            posicion = i;
        }
    }

    if (posicion == -1)
    {
        cout << "\nPais no encontrado." << endl;
    }
    else
    {
        int total = medallas[posicion][0] +
                    medallas[posicion][1] +
                    medallas[posicion][2];

        cout << "\nRESULTADOS DE " << paises[posicion] << endl;

        cout << "Oros: " << medallas[posicion][0] << endl;
        cout << "Platas: " << medallas[posicion][1] << endl;
        cout << "Bronces: " << medallas[posicion][2] << endl;
        cout << "Total de medallas: " << total << endl;
    }
}

void paisMasOros(vector<string> paises, int medallas[5][3])
{
    int mayor = medallas[0][0];

    for (int i = 1; i < 5; i++)
    {
        if (medallas[i][0] > mayor)
        {
            mayor = medallas[i][0];
        }
    }

    cout << "\nPAIS CON MAS MEDALLAS DE ORO" << endl;

    for (int i = 0; i < 5; i++)
    {
        if (medallas[i][0] == mayor)
        {
            cout << paises[i] << " - " << mayor << " medallas de oro" << endl;
        }
    }
}

int main()
{
    vector<string> paises = {
        "Bolivia", "Brasil", "Argentina", "Chile", "Peru"
    };

    int medallas[5][3];

    string nombre;

    cout << "MEDALLERO OLIMPICO" << endl;

    ingresarMedallas(paises, medallas);

    cout << "\nIngrese el nombre del pais que desea buscar: ";
    cin >> nombre;

    buscarPais(paises, medallas, nombre);

    paisMasOros(paises, medallas);

    return 0;
}