// PRÁCTICA ADICIONAL
// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverría Ureña
// Fecha creación: 06/11/2026
// Número de ejercicio: 1

#include <iostream>
#include <vector>
#include <string>

using namespace std;
bool validarCorreo(string correo)
{
    string dominio = "@ucb.edu.bo";

    if (correo.size() < dominio.size())
    {
        return false;
    }

    size_t posicionArroba = correo.find('@');

    if (posicionArroba == string::npos)
    {
        return false;
    }

    if (correo.find('@', posicionArroba + 1) != string::npos)
    {
        return false;
    }

    if (posicionArroba == 0)
    {
        return false;
    }

    if (correo[correo.size() - 1] == '.')
    {
        return false;
    }

    if (correo.substr(correo.size() - dominio.size()) != dominio)
    {
        return false;
    }

    size_t posicionPunto = correo.find('.', posicionArroba + 1);

    if (posicionPunto == string::npos)
    {
        return false;
    }

    if (posicionPunto == posicionArroba + 1)
    {
        return false;
    }

    return true;
}

vector<string> filtrarCorreos(vector<string> correos)
{
    vector<string> validos;

    for (int i = 0; i < correos.size(); i++)
    {
        if (validarCorreo(correos[i]))
        {
            validos.push_back(correos[i]);
        }
    }

    return validos;
}

int main()
{
    vector<string> correos(10);

    cout << "VALIDADOR DE CORREOS INSTITUCIONALES" << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << "Ingrese el correo " << i + 1 << ": ";
        cin >> correos[i];
    }

    vector<string> correosValidos = filtrarCorreos(correos);

    cout << "\nCORREOS VALIDOS PARA LA UNIVERSIDAD:" << endl;

    if (correosValidos.size() == 0)
    {
        cout << "No se encontraron correos validos." << endl;
    }
    else
    {
        for (int i = 0; i < correosValidos.size(); i++)
        {
            cout << correosValidos[i] << endl;
        }
    }

    return 0;
}