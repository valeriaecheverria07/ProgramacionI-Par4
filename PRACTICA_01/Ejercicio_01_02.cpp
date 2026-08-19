// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 17/08/2026

#include <iostream>
using namespace std;

int main()
{
    float precio, precioFinal;

    system("cls");

    cout<<"Ingrese el precio del producto: "<<endl;
    cin>>precio;

    precioFinal = precio+(precio*0.13);

    cout<<"El precio con IVA (13%) es: "<<precioFinal<<endl;

    return 0;
}