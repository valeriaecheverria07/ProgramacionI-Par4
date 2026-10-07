// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Fecha creación: 23/09/2026
// Número de ejercicio: 3

#include <iostream>

using namespace std;


void ingresarCalificaciones(int calificaciones[], int cantidad)
{
    for(int i = 0; i < cantidad; i++)
    {
        cout << "Ingrese calificacion " << i + 1 << ": ";
        cin >> calificaciones[i];
    }
}


int calcularSuma(int calificaciones[], int cantidad)
{
    int suma = 0;

    for(int i = 0; i < cantidad; i++)
    {
        suma = suma + calificaciones[i];
    }

    return suma;
}


double calcularPromedio(int suma, int cantidad)
{
    return (double)suma / cantidad;
}


void calcularDesviaciones(int calificaciones[], double desviacion[], double promedio, int cantidad)
{
    for(int i = 0; i < cantidad; i++)
    {
        desviacion[i] = calificaciones[i] - promedio;
    }
}


double calcularVarianza(double desviacion[], int cantidad)
{
    double suma = 0;

    for(int i = 0; i < cantidad; i++)
    {
        suma = suma + (desviacion[i] * desviacion[i]);
    }

    return suma / cantidad;
}


void mostrarResultados(int calificaciones[], double desviacion[], int cantidad)
{
    cout << endl;
    cout << "Calificacion\tDesviacion" << endl;

    for(int i = 0; i < cantidad; i++)
    {
        cout << calificaciones[i] << "\t\t"
             << desviacion[i] << endl;
    }
}


int main()
{
    int cantidad;


    cout << "Ingrese la cantidad de calificaciones: ";
    cin >> cantidad;


    int calificaciones[cantidad];
    double desviacion[cantidad];


    ingresarCalificaciones(calificaciones, cantidad);


    int suma = calcularSuma(calificaciones, cantidad);


    double promedio = calcularPromedio(suma, cantidad);


    calcularDesviaciones(calificaciones, desviacion, promedio, cantidad);


    double varianza = calcularVarianza(desviacion, cantidad);


    cout << endl;
    cout << "Suma total: " << suma << endl;
    cout << "Promedio: " << promedio << endl;


    mostrarResultados(calificaciones, desviacion, cantidad);


    cout << endl;
    cout << "Varianza: " << varianza << endl;


    return 0;
}
