// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Fecha creación: 23/09/2026
// Número de ejercicio: 4

#include <iostream>

using namespace std;


void ingresarVector(int vector[], int cantidad)
{
    for(int i = 0; i < cantidad; i++)
    {
        cout << "Ingrese valor [" << i << "]: ";
        cin >> vector[i];
    }
}


void multiplicarVectores(int vector1[], int vector2[], int resultado[], int cantidad)
{
    for(int i = 0; i < cantidad; i++)
    {
        resultado[i] = vector1[i] * vector2[i];
    }
}


void mostrarVector(int vector[], int cantidad)
{
    for(int i = 0; i < cantidad; i++)
    {
        cout << vector[i] << " ";
    }

    cout << endl;
}


int main()
{
    int N;


    cout << "Ingrese la dimension de los vectores: ";
    cin >> N;


    int vector1[100];
    int vector2[100];
    int resultado[100];


    cout << endl << "Ingrese datos del vector 1" << endl;
    ingresarVector(vector1, N);


    cout << endl << "Ingrese datos del vector 2" << endl;
    ingresarVector(vector2, N);


    multiplicarVectores(vector1, vector2, resultado, N);


    cout << endl << "Vector resultado de la multiplicacion:" << endl;

    mostrarVector(resultado, N);


    return 0;
}