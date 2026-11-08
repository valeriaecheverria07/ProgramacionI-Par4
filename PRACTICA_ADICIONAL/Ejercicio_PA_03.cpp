// PRÁCTICA ADICIONAL
// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverría Ureña
// Fecha creación: 06/11/2026
// Número de ejercicio: 3

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void buscarSufijo(vector<string> palabras, string sufijo)
{
    bool encontrado = false;

    cout << "\nPALABRAS QUE TERMINAN CON " << sufijo << ":" << endl;

    for (int i = 0; i < palabras.size(); i++)
    {
        if (palabras[i].size() >= sufijo.size())
        {
            if (palabras[i].substr(palabras[i].size() - sufijo.size()) == sufijo)
            {
                cout << palabras[i] << endl;
                encontrado = true;
            }
        }
    }

    if (encontrado == false)
    {
        cout << "No se encontraron palabras con ese sufijo." << endl;
    }
}

int main()
{
    vector<string> diccionario = {
        "cancion", "educacion", "informacion",
        "poblacion", "solucion", "casa",
        "arbol", "computadora", "flor", "libro"
    };

    string sufijo;

    cout << "BUSQUEDA DE SUFIJOS EN DICCIONARIO" << endl;

    cout << "Ingrese un sufijo de 4 letras: ";
    cin >> sufijo;

    buscarSufijo(diccionario, sufijo);

    return 0;
}