// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Fecha creación: 06/09/2026
// Número de ejercicio: 10

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int GenerarNumeroAleatorio(int min, int max)
{
    return (rand() % (max - min + 1)) + min;
}

bool EsPrimo(int numero)
{
    int divisores = 0;

    for (int i = 1; i <= numero; i++)
    {
        if (numero % i == 0)
        {
            divisores++;
        }
    }

    if (divisores == 2)
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
    int N;
    int numero;
    int cantidadPrimos = 0;

    srand(time(NULL));

    cout << "Ingrese la cantidad de numeros: ";
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        numero = GenerarNumeroAleatorio(1, 10000);

        cout << "Numero " << i << ": " << numero << endl;

        if (EsPrimo(numero))
        {
            cantidadPrimos++;
        }
    }

    cout << endl;
    cout << "Cantidad de numeros primos: " << cantidadPrimos << endl;

    return 0;
}