// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 28/08/2026

#include <iostream>

using namespace std;


float convertirDolares(float bolivianos, float cambio)
{
    float dolares;

    dolares = bolivianos / cambio;

    return dolares;
}


int main()
{
    float bolivianos;
    float cambio;
    float dolares;

    system("cls");

    cout<<"Ingrese el monto en bolivianos: ";
    cin>>bolivianos;

    cout<<"Ingrese el tipo de cambio: ";
    cin>>cambio;

    dolares = convertirDolares(bolivianos, cambio);

    cout<<"El monto en dolares es: "<<dolares<<endl;

    return 0;
}