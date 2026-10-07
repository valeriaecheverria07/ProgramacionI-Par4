// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Fecha creación: 3/10/2026
// Número de ejercicio: 3

#include <iostream>
#include <string>

using namespace std;


bool verificarTarjeta(string tarjeta)
{
    int suma = 0;
    int numero;

    if(tarjeta.length() != 16)
    {
        return false;
    }

    for(int i = 0; i < 16; i++)
    {
        numero = tarjeta[i] - '0';

        if(i % 2 == 0)
        {
            numero = numero * 2;

            if(numero > 9)
            {
                numero = numero - 9;
            }
        }

        suma = suma + numero;
    }

    if(suma % 10 == 0)
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
    string tarjeta;

    cout << "Ingrese los 16 digitos de la tarjeta: ";
    cin >> tarjeta;

    if(verificarTarjeta(tarjeta))
    {
        cout << "Tarjeta valida" << endl;
    }
    else
    {
        cout << "Tarjeta no valida" << endl;
    }

    return 0;
}