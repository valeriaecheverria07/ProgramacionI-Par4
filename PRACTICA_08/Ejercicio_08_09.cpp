// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Fecha creación: 3/10/2026
// Número de ejercicio: 9

#include <iostream>
#include <string>

using namespace std;


char convertirMinuscula(char letra)
{
    if(letra >= 'A' && letra <= 'Z')
    {
        letra = letra + 32;
    }

    return letra;
}


void buscarContactos(string contactos[], int cantidad, string prefijo)
{
    cout << endl;
    cout << "Contactos encontrados:" << endl;

    for(int i = 0; i < cantidad; i++)
    {
        bool coincide = true;

        for(int j = 0; j < 3; j++)
        {
            if(convertirMinuscula(contactos[i][j]) !=
               convertirMinuscula(prefijo[j]))
            {
                coincide = false;
            }
        }

        if(coincide == true)
        {
            cout << contactos[i] << endl;
        }
    }
}


int main()
{
    string contactos[5] = {
        "Marcelo",
        "Maria",
        "Martin",
        "Juan",
        "Marcos"
    };

    string prefijo;

    cout << "Ingrese un prefijo de 3 letras: ";
    cin >> prefijo;

    buscarContactos(contactos, 5, prefijo);

    return 0;
}