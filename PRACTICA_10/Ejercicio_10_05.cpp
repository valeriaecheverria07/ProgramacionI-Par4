// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverría Ureña
// Fecha creación: 19/10/2026
// Número de ejercicio: 5

#include <iostream>
#include <string>

using namespace std;


void OrdenarPalabra(string &palabra)
{
    char auxiliar;

    for(int i = 0; i < palabra.length() - 1; i++)
    {
        for(int j = 0; j < palabra.length() - 1 - i; j++)
        {
            if(palabra[j] > palabra[j + 1])
            {
                auxiliar = palabra[j];
                palabra[j] = palabra[j + 1];
                palabra[j + 1] = auxiliar;
            }
        }
    }
}


int main()
{
    string palabra;

    cout << "Ingrese una palabra: ";
    cin >> palabra;

    OrdenarPalabra(palabra);

    cout << "Palabra ordenada: " << palabra << endl;

    return 0;
}