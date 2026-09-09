// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Fecha creación: 06/09/2026
// Número de ejercicio: 9

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int GenerarNumeroAleatorio(int min, int max)
{
    return (rand() % (max - min + 1)) + min;
}

int CalcularFactorial(int numero)
{
    int factorial = 1;

    for (int i = 1; i <= numero; i++)
    {
        factorial = factorial * i;
    }

    return factorial;
}

int main()
{
    int numero;
    int factorial;

    srand(time(NULL));

    numero = GenerarNumeroAleatorio(1, 10);

    factorial = CalcularFactorial(numero);

    cout << "Numero generado: " << numero << endl;
    cout << "Factorial: " << factorial << endl;

    return 0;
}