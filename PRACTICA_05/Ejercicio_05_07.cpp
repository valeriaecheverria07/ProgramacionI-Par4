// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Fecha creación: 06/09/2026
// Número de ejercicio: 7

#include <iostream>

using namespace std;

void agregarNota(double &sumaTotal, int &cantidadNotas, double nuevaNota)
{
    sumaTotal = sumaTotal + nuevaNota;
    cantidadNotas = cantidadNotas + 1;
}

int main()
{
    int N;
    int cantidadNotas = 0;
    double nuevaNota;
    double sumaTotal = 0;
    double promedio;

    cout << "Ingrese la cantidad de notas: ";
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        cout << "Ingrese la nota " << i << ": ";
        cin >> nuevaNota;

        agregarNota(sumaTotal, cantidadNotas, nuevaNota);
    }

    promedio = sumaTotal / cantidadNotas;

    cout << endl;
    cout << "Suma total de notas: " << sumaTotal << endl;
    cout << "Cantidad de notas: " << cantidadNotas << endl;
    cout << "Promedio: " << promedio << endl;

    return 0;
}