// PRACTICA 11
// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverría Ureña
// Fecha creación: 07/11/2026
// Número de ejercicio: 3

#include <iostream>

using namespace std;

struct Tiempo
{
    int horas;
    int minutos;
    int segundos;
};

Tiempo sumarTiempos(Tiempo tiempo1, Tiempo tiempo2)
{
    Tiempo resultado;

    resultado.horas = tiempo1.horas + tiempo2.horas;
    resultado.minutos = tiempo1.minutos + tiempo2.minutos;
    resultado.segundos = tiempo1.segundos + tiempo2.segundos;

    if (resultado.segundos > 59)
    {
        resultado.segundos = resultado.segundos - 60;
        resultado.minutos++;
    }

    if (resultado.minutos > 59)
    {
        resultado.minutos = resultado.minutos - 60;
        resultado.horas++;
    }

    return resultado;
}

void mostrarTiempo(Tiempo tiempo)
{
    cout << tiempo.horas << " horas, ";
    cout << tiempo.minutos << " minutos y ";
    cout << tiempo.segundos << " segundos." << endl;
}

int main()
{
    Tiempo tiempo1, tiempo2, resultado;

    cout << "CALCULADORA DE TIEMPO" << endl;

    cout << "\nPRIMER TIEMPO" << endl;

    cout << "Ingrese las horas: ";
    cin >> tiempo1.horas;

    cout << "Ingrese los minutos: ";
    cin >> tiempo1.minutos;

    cout << "Ingrese los segundos: ";
    cin >> tiempo1.segundos;

    cout << "\nSEGUNDO TIEMPO" << endl;

    cout << "Ingrese las horas: ";
    cin >> tiempo2.horas;

    cout << "Ingrese los minutos: ";
    cin >> tiempo2.minutos;

    cout << "Ingrese los segundos: ";
    cin >> tiempo2.segundos;

    resultado = sumarTiempos(tiempo1, tiempo2);

    cout << "\nRESULTADO DE LA SUMA:" << endl;
    mostrarTiempo(resultado);

    return 0;
}