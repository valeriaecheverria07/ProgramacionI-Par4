// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Fecha creación: 23/09/2026
// Número de ejercicio: 2

#include <iostream>

using namespace std;


void mostrarVoltios(double voltios[])
{
    for(int i = 0; i < 9; i++)
    {
        cout << voltios[i] << "\t";

        if((i + 1) % 3 == 0)
        {
            cout << endl;
        }
    }
}


int main()
{
    double voltios[9] = {11.95, 16.32, 12.15,
                         8.22, 15.98, 26.22,
                         13.54, 6.45, 17.59};


    cout << "Valores del vector voltios:" << endl;

    mostrarVoltios(voltios);


    return 0;
}