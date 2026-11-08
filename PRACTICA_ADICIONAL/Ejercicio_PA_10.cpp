// PRÁCTICA ADICIONAL
// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverría Ureña
// Fecha creación: 06/11/2026
// Número de ejercicio: 10

#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void generarPrecios(int precios[6][3])
{
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            precios[i][j] = rand() % 901 + 300;
        }
    }
}

void cotizarDestino(vector<string> destinos, vector<string> aerolineas, int precios[6][3], string prefijo)
{
    int posicion = -1;

    for (int i = 0; i < 6; i++)
    {
        if (destinos[i].substr(0, 3) == prefijo)
        {
            posicion = i;
        }
    }

    if (posicion == -1)
    {
        cout << "\nDestino no encontrado." << endl;
    }
    else
    {
        cout << "\nCOTIZACION PARA " << destinos[posicion] << endl;

        for (int j = 0; j < 3; j++)
        {
            cout << aerolineas[j] << ": $"
                 << precios[posicion][j] << endl;
        }
    }
}

void mostrarMasBarato(vector<string> destinos, vector<string> aerolineas, int precios[6][3])
{
    cout << "\nAEROLINEA MAS ECONOMICA POR DESTINO" << endl;

    for (int i = 0; i < 6; i++)
    {
        int menor = precios[i][0];

        for (int j = 1; j < 3; j++)
        {
            if (precios[i][j] < menor)
            {
                menor = precios[i][j];
            }
        }

        cout << "\nDestino: " << destinos[i] << endl;

        for (int j = 0; j < 3; j++)
        {
            if (precios[i][j] == menor)
            {
                cout << "Aerolinea: " << aerolineas[j] << endl;
                cout << "Precio: $" << menor << endl;
            }
        }
    }
}

int main()
{
    vector<string> destinos = {
        "Miami", "Madrid", "Bogota",
        "Chile", "Francia", "Espana"
    };

    vector<string> aerolineas = {
        "BOA", "Avianca", "Copa"
    };

    int precios[6][3];

    string prefijo;

    srand(time(0));

    cout << "SISTEMA DE PASAJES DE AEROLINEAS" << endl;

    generarPrecios(precios);

    cout << "\nIngrese las primeras 3 letras del destino: ";
    cin >> prefijo;

    while (prefijo.size() != 3)
    {
        cout << "Debe ingresar exactamente 3 letras: ";
        cin >> prefijo;
    }

    cotizarDestino(destinos, aerolineas, precios, prefijo);

    mostrarMasBarato(destinos, aerolineas, precios);

    return 0;
}