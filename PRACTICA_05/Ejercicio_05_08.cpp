// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Fecha creación: 06/09/2026
// Número de ejercicio: 8

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int LanzarMoneda()
{
    return (rand() % 2) + 1;
}

int main()
{
    int N;
    int moneda;
    int caras = 0;
    int cruces = 0;
    float porcentajeCaras;
    float porcentajeCruces;

    srand(time(NULL));

    cout << "Ingrese la cantidad de lanzamientos: ";
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        moneda = LanzarMoneda();

        if (moneda == 1)
        {
            cout << "Lanzamiento " << i << ": Cara" << endl;
            caras++;
        }
        else
        {
            cout << "Lanzamiento " << i << ": Cruz" << endl;
            cruces++;
        }
    }

    porcentajeCaras = (caras * 100.0) / N;
    porcentajeCruces = (cruces * 100.0) / N;

    cout << endl;
    cout << "Cantidad de caras: " << caras << endl;
    cout << "Cantidad de cruces: " << cruces << endl;
    cout << "Porcentaje de caras: " << porcentajeCaras << "%" << endl;
    cout << "Porcentaje de cruces: " << porcentajeCruces << "%" << endl;

    return 0;
}