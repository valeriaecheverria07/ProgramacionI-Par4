// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carrera: Ingenieria Biomedica
// Fecha de Creación: 8/09/2026

#include <iostream>
#include <conio.h>

using namespace std;

void tiempo(int, int&, int&, int&);

int main()
{
    int totalSeg, horas, min, seg;

    cout << "Digite el numero total de segundos: ";
    cin >> totalSeg;

    tiempo(totalSeg, horas, min, seg);

    cout << "\nTiempo equivalente a la cantidad de segundos digitados: " << endl;
    cout << "Horas: " << horas << endl;
    cout << "Minutos: " << min << endl;
    cout << "Segundos: " << seg << endl;

    getch();
    return 0;
}

void tiempo(int totalSeg, int& horas, int& min, int& seg)
{
    horas = totalSeg / 3600;
    totalSeg %= 3600;
    min = totalSeg / 60;
    seg = totalSeg % 60;
}