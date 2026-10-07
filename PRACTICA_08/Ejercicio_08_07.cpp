// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Fecha creación: 3/10/2026
// Número de ejercicio: 7

#include <iostream>
#include <string>

using namespace std;


int buscarHashtags(string texto, string hashtags[])
{
    int cantidad = 0;
    string palabra = "";

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
                if(palabra[0] == '#')
                {
                    hashtags[cantidad] = palabra;
                    cantidad++;
                }
            }

            palabra = "";
        }
    }

    return cantidad;
}


void mostrarHashtags(string hashtags[], int cantidad)
{
    cout << endl;
    cout << "Hashtags encontrados:" << endl;

    for(int i = 0; i < cantidad; i++)
    {
        cout << hashtags[i] << endl;
    }
}


int main()
{
    string texto;
    string hashtags[100];
    int cantidad;

    cout << "Ingrese un texto: ";
    getline(cin, texto);

    cantidad = buscarHashtags(texto, hashtags);

    mostrarHashtags(hashtags, cantidad);

    return 0;
}