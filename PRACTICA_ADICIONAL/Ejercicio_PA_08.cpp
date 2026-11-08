// PRÁCTICA ADICIONAL
// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverría Ureña
// Fecha creación: 06/11/2026
// Número de ejercicio: 8

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

const int MAX = 100;

void llenarMatriz(int matriz[MAX][MAX], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matriz[i][j] = rand() % 100 + 1;
        }
    }
}

void mostrarMatriz(int matriz[MAX][MAX], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matriz[i][j] << "\t";
        }

        cout << endl;
    }
}

void encontrarColumnas(int matriz[MAX][MAX], int n, int &peor, int &mejor)
{
    double menorPromedio = 0;
    double mayorPromedio = 0;

    cout << "\nPROMEDIOS DE LAS COLUMNAS" << endl;

    for (int j = 0; j < n; j++)
    {
        double suma = 0;

        for (int i = 0; i < n; i++)
        {
            suma = suma + matriz[i][j];
        }

        double promedio = suma / n;

        cout << "Columna " << j + 1 << ": " << promedio << endl;

        if (j == 0)
        {
            menorPromedio = promedio;
            mayorPromedio = promedio;

            peor = j;
            mejor = j;
        }
        else
        {
            if (promedio < menorPromedio)
            {
                menorPromedio = promedio;
                peor = j;
            }

            if (promedio > mayorPromedio)
            {
                mayorPromedio = promedio;
                mejor = j;
            }
        }
    }
}

void intercambiarColumnas(int matriz[MAX][MAX], int n, int peor, int mejor)
{
    for (int i = 0; i < n; i++)
    {
        int auxiliar = matriz[i][peor];

        matriz[i][peor] = matriz[i][mejor];

        matriz[i][mejor] = auxiliar;
    }
}

int main()
{
    int matriz[MAX][MAX];
    int n;
    int peor, mejor;

    srand(time(0));

    cout << "INTERCAMBIO DE LA PEOR COLUMNA" << endl;

    cout << "Ingrese el tamano de la matriz: ";
    cin >> n;

    while (n < 1 || n > MAX)
    {
        cout << "Ingrese un tamano entre 1 y 100: ";
        cin >> n;
    }

    llenarMatriz(matriz, n);

    cout << "\nMATRIZ ORIGINAL:" << endl;
    mostrarMatriz(matriz, n);

    encontrarColumnas(matriz, n, peor, mejor);

    cout << "\nColumna con menor promedio: " << peor + 1 << endl;
    cout << "Columna con mayor promedio: " << mejor + 1 << endl;

    intercambiarColumnas(matriz, n, peor, mejor);

    cout << "\nMATRIZ DESPUES DEL INTERCAMBIO:" << endl;
    mostrarMatriz(matriz, n);

    return 0;
}