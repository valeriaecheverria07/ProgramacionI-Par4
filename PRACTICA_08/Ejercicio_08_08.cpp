// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Fecha creación: 3/10/2026
// Número de ejercicio: 8

#include <iostream>
#include <string>

using namespace std;


int separarPalabras(string texto, string palabras[])
{
    string palabra = "";
    int cantidad = 0;

    for(int i = 0; i <= texto.length(); i++)
    {
        if(i < texto.length() && texto[i] != ' ')
        {
            palabra = palabra + texto[i];
        }
        else
        {
            if(palabra.length() > 0)
            {
                palabras[cantidad] = palabra;
                cantidad++;
                palabra = "";
            }
        }
    }

    return cantidad;
}


bool verificarPlagio(string oracionA, string oracionB)
{
    string palabrasA[100];
    string palabrasB[100];

    int cantidadA;
    int cantidadB;
    int coincidencias = 0;

    cantidadA = separarPalabras(oracionA, palabrasA);
    cantidadB = separarPalabras(oracionB, palabrasB);

    for(int i = 0; i < cantidadA; i++)
    {
        bool encontrada = false;

        for(int j = 0; j < cantidadB; j++)
        {
            if(palabrasA[i] == palabrasB[j])
            {
                encontrada = true;
            }
        }

        if(encontrada == true)
        {
            coincidencias++;
        }
    }

    cout << "Palabras que coinciden: " << coincidencias << endl;

    if(coincidencias > 3)
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main()
{
    string oracionA;
    string oracionB;

    cout << "Ingrese la oracion A: ";
    getline(cin, oracionA);

    cout << "Ingrese la oracion B: ";
    getline(cin, oracionB);

    if(verificarPlagio(oracionA, oracionB))
    {
        cout << "Existe sospecha de plagio" << endl;
    }
    else
    {
        cout << "No existe sospecha de plagio" << endl;
    }

    return 0;
}