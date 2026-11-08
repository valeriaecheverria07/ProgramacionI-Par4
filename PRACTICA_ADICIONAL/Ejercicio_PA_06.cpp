// PRÁCTICA ADICIONAL
// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverría Ureña
// Fecha creación: 06/11/2026
// Número de ejercicio: 6

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void llenarSala(int sala[5][5])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            sala[i][j] = rand() % 2;
        }
    }
}

void mostrarSala(int sala[5][5])
{
    cout << "\nDISTRIBUCION DE ASIENTOS" << endl;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << sala[i][j] << "  ";
        }

        cout << endl;
    }

    cout << "\n0 = Asiento libre" << endl;
    cout << "1 = Asiento ocupado" << endl;
}

bool verificarAsientos(int sala[5][5], int fila)
{
    for (int j = 0; j < 4; j++)
    {
        if (sala[fila][j] == 0 && sala[fila][j + 1] == 0)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    int sala[5][5];
    int fila;

    srand(time(0));

    llenarSala(sala);

    mostrarSala(sala);

    cout << "\nIngrese el numero de fila que desea consultar (1-5): ";
    cin >> fila;

    while (fila < 1 || fila > 5)
    {
        cout << "Fila incorrecta. Ingrese nuevamente (1-5): ";
        cin >> fila;
    }

    if (verificarAsientos(sala, fila - 1))
    {
        cout << "\nSI existen dos asientos libres juntos en la fila " << fila << endl;
    }
    else
    {
        cout << "\nNO existen dos asientos libres juntos en la fila " << fila << endl;
    }

    return 0;
}