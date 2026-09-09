// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Fecha creación: 06/09/2026
// Número de ejercicio: 6

#include <iostream>

using namespace std;

void calcularTiempo(int totalSegundos, int &horas, int &minutos, int &segundos)
{
    horas = totalSegundos / 3600;
    minutos = (totalSegundos % 3600) / 60;
    segundos = totalSegundos % 60;
}

int main()
{
    int totalSegundos;
    int horas;
    int minutos;
    int segundos;

    cout << "Ingrese la cantidad total de segundos: ";
    cin >> totalSegundos;

    calcularTiempo(totalSegundos, horas, minutos, segundos);

    cout << endl;
    cout << "Horas: " << horas << endl;
    cout << "Minutos: " << minutos << endl;
    cout << "Segundos: " << segundos << endl;

    return 0;
}