// Materia: Programacion I, Paralelo 4
// Autor: Valeria Fernanda Echeverrian Ureña
// Fecha creacion: 07/10/2026
// Numero de ejercicio: 2


#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void LlenarMatriz(int matriz[100][100], int n, int A, int B)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            matriz[i][j] = A + rand() % (B - A + 1);
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

int SumarColumna(int matriz[100][100], int n)
{
    int suma = 0;

    for(int i = 0; i < n; i++)
    {
        suma = suma + matriz[i][n - 1];
    }

    return suma;
}

int ProductoFila(int matriz[100][100], int n)
{
    int producto = 1;

    for(int j = 0; j < n; j++)
    {
        producto = producto * matriz[n - 1][j];
    }

    return producto;
}


void ObtenerMayor(int matriz[100][100], int n)
{
    int mayor = matriz[0][0];
    int fila = 0;
    int columna = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(matriz[i][j] > mayor)
            {
                mayor = matriz[i][j];
                fila = i;
                columna = j;
            }
        }
    }

    cout << "Mayor valor: " << mayor << endl;
    cout << "Fila: " << fila << endl;
    cout << "Columna: " << columna << endl;
}


float ObtenerPromedio(int matriz[100][100], int n)
{
    int suma = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            suma = suma + matriz[i][j];
        }
    }

    return (float)suma / (n * n);
}


int main()
{
    srand(time(0));

    int matriz[100][100];
    int n, A, B;

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese limite inferior A: ";
    cin >> A;

    cout << "Ingrese limite superior B: ";
    cin >> B;

    if(n < 1 || n > 100 || A > B)
    {
        cout << "Datos no validos" << endl;
        return 0;
    }

    LlenarMatriz(matriz, n, A, B);

    MostrarMatriz(matriz, n);

    cout << endl;

    cout << "Suma de la ultima columna: "
         << SumarColumna(matriz, n) << endl;

    cout << "Producto de la ultima fila: "
         << ProductoFila(matriz, n) << endl;

    ObtenerMayor(matriz, n);

    cout << "Promedio: "
         << ObtenerPromedio(matriz, n) << endl;

    return 0;
}