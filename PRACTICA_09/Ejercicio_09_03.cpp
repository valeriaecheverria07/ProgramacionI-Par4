// Materia: Programacion I, Paralelo 4
// Autor: Valeria Fernanda Echeverrian Ureña
// Fecha creacion: 07/10/2026
// Numero de ejercicio: 3
#include <iostream>
using namespace std;

void LlenarMatriz(int matriz[100][100], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            matriz[i][j] = 1 + (i * 2) + j;
        }
    }
}

void MostrarMatriz(int matriz[100][100], int n)
{
    cout << endl;
    cout << "Matriz generada:" << endl;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << matriz[i][j] << "\t";
        }

        cout << endl;
    }
}


int main()
{
    int matriz[100][100];
    int n;

    cout << "Ingrese N: ";
    cin >> n;

    if(n < 1 || n > 100)
    {
        cout << "Orden no valido" << endl;
        return 0;
    }

    LlenarMatriz(matriz, n);

    MostrarMatriz(matriz, n);

    return 0;
}