// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Fecha creación: 06/09/2026
// Número de ejercicio: 12

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int GenerarNumeroAleatorio(int min, int max)
{
    return (rand() % (max - min + 1)) + min;
}

int CalcularPanales(int ninos1, int ninos2, int ninos3)
{
    int totalPanales;

    totalPanales = (ninos1 * 6) + (ninos2 * 3) + (ninos3 * 2);

    return totalPanales;
}

int main()
{
    int N;
    int ninos1;
    int ninos2;
    int ninos3;
    int restantes;
    int totalPanales;

    srand(time(NULL));

    cout << "Ingrese la cantidad total de ninos: ";
    cin >> N;

    ninos1 = GenerarNumeroAleatorio(0, N);

    restantes = N - ninos1;

    ninos2 = GenerarNumeroAleatorio(0, restantes);

    restantes = restantes - ninos2;

    ninos3 = restantes;

    totalPanales = CalcularPanales(ninos1, ninos2, ninos3);

    cout << endl;
    cout << "Ninos de 1 anio: " << ninos1 << endl;
    cout << "Ninos de 2 anios: " << ninos2 << endl;
    cout << "Ninos de 3 anios: " << ninos3 << endl;

    cout << endl;
    cout << "Total de ninos: " << ninos1 + ninos2 + ninos3 << endl;
    cout << "Panales consumidos por dia: " << totalPanales << endl;

    return 0;
}