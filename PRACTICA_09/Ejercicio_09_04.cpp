// Materia: Programacion I, Paralelo 4
// Autor: Valeria Fernanda Echeverrian Ureña
// Fecha creacion: 07/10/2026
// Numero de ejercicio: 4


#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void LlenarMatriz(int matriz[100][100], int n, int m)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            matriz[i][j] = 1 + rand() % 10;
        }
    }
}

void MostrarMatriz(int matriz[100][100], int n, int m)
{
    cout << endl;
    cout << "Matriz generada:" << endl;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout << matriz[i][j] << "\t";
        }

        cout << endl;
    }
}

void BuscarPuntoSilla(int matriz[100][100], int n, int m)
{
    bool encontrado = false;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            bool menorFila = true;
            bool mayorColumna = true;

            for(int k = 0; k < m; k++)
            {
                if(matriz[i][j] > matriz[i][k])
                {
                    menorFila = false;
                }
            }

            for(int k = 0; k < n; k++)
            {
                if(matriz[i][j] < matriz[k][j])
                {
                    mayorColumna = false;
                }
            }

            if(menorFila == true && mayorColumna == true)
            {
                cout << endl;
                cout << "Punto de silla encontrado" << endl;
                cout << "Valor: " << matriz[i][j] << endl;
                cout << "Fila: " << i << endl;
                cout << "Columna: " << j << endl;

                encontrado = true;
            }
        }
    }

    if(encontrado == false)
    {
        cout << endl;
        cout << "No se encontro ningun punto de silla" << endl;
    }
}


int main()
{
    srand(time(0));

    int matriz[100][100];
    int n, m;

    cout << "Ingrese numero de filas N: ";
    cin >> n;

    cout << "Ingrese numero de columnas M: ";
    cin >> m;

    if(n < 1 || n > 100 || m < 1 || m > 100)
    {
        cout << "Dimensiones no validas" << endl;
        return 0;
    }

    LlenarMatriz(matriz, n, m);

    MostrarMatriz(matriz, n, m);

    BuscarPuntoSilla(matriz, n, m);

    return 0;
}