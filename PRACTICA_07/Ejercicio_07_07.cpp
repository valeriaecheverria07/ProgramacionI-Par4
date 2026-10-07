// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Fecha creación: 23/09/2026
// Número de ejercicio: 6

#include <iostream>

using namespace std;


int llenarVector(int vector[])
{
    int numero = 0;
    int cantidad = 0;

    while(cantidad < 100 && numero >= 0)
    {
        cout << "Ingrese un numero: ";
        cin >> numero;

        if(numero >= 0)
        {
            vector[cantidad] = numero;
            cantidad++;
        }
    }

    return cantidad;
}


void mostrarVector(int vector[], int cantidad)
{
    cout << endl;
    cout << "Elementos ingresados:" << endl;

    for(int i = 0; i < cantidad; i++)
    {
        cout << vector[i] << " ";
    }

    cout << endl;
}


int main()
{
    int vector[100];
    int cantidad;


    cantidad = llenarVector(vector);


    mostrarVector(vector, cantidad);


    return 0;
}