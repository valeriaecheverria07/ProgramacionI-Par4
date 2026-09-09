// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Fecha creación: 06/09/2026
// Número de ejercicio: 11

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
    int sumaPares = 0;
    int sumaImpares = 0;
    int cantidadImpares = 0;
    int mayorPrimo = 0;
    float promedioImpares = 0;

    srand(time(NULL));

    cout << "Ingrese la cantidad de numeros: ";
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        numero = GenerarNumeroAleatorio(1, 1000);

        cout << "Numero " << i << ": " << numero << endl;

        if (numero % 2 == 0)
        {
            sumaPares = sumaPares + numero;
        }
        else
        {
            sumaImpares = sumaImpares + numero;
            cantidadImpares++;
        }

        if (EsPrimo(numero))
        {
            if (numero > mayorPrimo)
            {
                mayorPrimo = numero;
            }
        }
    }

    if (cantidadImpares > 0)
    {
        promedioImpares = (float)sumaImpares / cantidadImpares;
    }

    cout << endl;
    cout << "Sumatoria de numeros pares: " << sumaPares << endl;
    cout << "Promedio de numeros impares: " << promedioImpares << endl;

    if (mayorPrimo > 0)
    {
        cout << "Mayor numero primo generado: " << mayorPrimo << endl;
    }
    else
    {
        cout << "No se genero ningun numero primo" << endl;
    }

    return 0;
}