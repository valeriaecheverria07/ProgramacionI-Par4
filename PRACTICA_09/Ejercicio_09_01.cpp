// Materia: Programacion I, Paralelo 4
// Autor: Valeria Fernanda Echeverrian Ureña
// Fecha creacion: 07/10/2026
// Numero de ejercicio: 1

#include <iostream>
using namespace std;

void LlenarMatriz(int matriz[100][100], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << "Ingrese elemento [" << i
                 << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
}


void CambiarFilas(int matriz[100][100], int n)
{
    int auxiliar;

    for(int j = 0; j < n; j++)
    {
        auxiliar = matriz[0][j];

        matriz[0][j] = matriz[n - 1][j];

        matriz[n - 1][j] = auxiliar;
    }
}


void MostrarMatriz(int matriz[100][100], int n)
{
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

    cout << "Ingrese el orden de la matriz: ";
    cin >> n;

    if(n < 1 || n > 100)
    {
        cout << "Orden no valido" << endl;
        return 0;
    }

    LlenarMatriz(matriz, n);

    cout << endl;
    cout << "Matriz original:" << endl;
    MostrarMatriz(matriz, n);

    CambiarFilas(matriz, n);

    cout << endl;
    cout << "Matriz modificada:" << endl;
    MostrarMatriz(matriz, n);
    return 0;
}