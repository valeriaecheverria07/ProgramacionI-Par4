// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Fecha creación: 3/10/2026
// Número de ejercicio: 6

#include <iostream>
#include <string>

using namespace std;


string eliminarEspacios(string texto)
{
    string nuevoTexto = "";

    for(int i = 0; i < texto.length(); i++)
    {
        if(texto[i] != ' ')
        {
            nuevoTexto = nuevoTexto + texto[i];
        }
        else
        {
            if(nuevoTexto.length() > 0 &&
               nuevoTexto[nuevoTexto.length() - 1] != ' ')
            {
                nuevoTexto = nuevoTexto + ' ';
            }
        }
    }

    if(nuevoTexto.length() > 0 &&
       nuevoTexto[nuevoTexto.length() - 1] == ' ')
    {
        nuevoTexto.erase(nuevoTexto.length() - 1, 1);
    }

    return nuevoTexto;
}


int main()
{
    string texto;

    cout << "Ingrese un texto: ";
    getline(cin, texto);

    texto = eliminarEspacios(texto);

    cout << "Texto corregido: " << texto << endl;

    return 0;
}