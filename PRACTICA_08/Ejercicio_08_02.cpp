// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Fecha creación: 3/10/2026
// Número de ejercicio: 2

#include <iostream>
#include <string>

using namespace std;


bool verificarContrasena(string contrasena)
{
    bool mayuscula = false;
    bool minuscula = false;
    bool numero = false;
    bool especial = false;

    if(contrasena.length() < 8)
    {
        return false;
    }

    for(int i = 0; i < contrasena.length(); i++)
    {
        if(contrasena[i] >= 'A' && contrasena[i] <= 'Z')
        {
            mayuscula = true;
        }
        else if(contrasena[i] >= 'a' && contrasena[i] <= 'z')
        {
            minuscula = true;
        }
        else if(contrasena[i] >= '0' && contrasena[i] <= '9')
        {
            numero = true;
        }
        else
        {
            especial = true;
        }
    }

    if(mayuscula == true &&
       minuscula == true &&
       numero == true &&
       especial == true)
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
    string contrasena;

    cout << "Ingrese una contrasena: ";
    cin >> contrasena;

    if(verificarContrasena(contrasena))
    {
        cout << "Contrasena segura" << endl;
    }
    else
    {
        cout << "Contrasena vulnerable" << endl;
    }

    return 0;
}