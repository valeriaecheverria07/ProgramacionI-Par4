// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Fecha creación: 23/09/2026
// Número de ejercicio: 6

#include <iostream>

using namespace std;


void ingresarVector(int vector[])
{
    for(int i = 0; i < 5; i++)
    {
        cout << "Ingrese valor [" << i << "]: ";
        cin >> vector[i];
    }
}


void sumarVectores(int vector1[], int vector2[], int vector3[])
{
    for(int i = 0; i < 5; i++)
    {
        vector3[i] = vector1[i] + vector2[i];
    }
}


void mostrarVector(int vector[])
{
    for(int i = 0; i < 5; i++)
    {
        cout << vector[i] << " ";
    }

    cout << endl;
}


int main()
{
    int vector1[5];
    int vector2[5];
    int vector3[5];


    cout << "Ingrese datos del vector1:" << endl;
    ingresarVector(vector1);


    cout << endl << "Ingrese datos del vector2:" << endl;
    ingresarVector(vector2);


    sumarVectores(vector1, vector2, vector3);


    cout << endl << "Vector3 resultado de la suma:" << endl;

    mostrarVector(vector3);


    return 0;
}
