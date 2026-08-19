// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 17/08/2026

#include <iostream>
using namespace std;

int main()
{
    int año;

    system("cls");

    cout<<"Ingrese un año de 4 digitos: ";
    cin>>año;

    if (año % 400 == 0)
    {
        cout<<"El año es bisiesto."<<endl;
    }
    else if (año % 100 == 0)
    {
        cout<<"El anño NO es bisiesto."<<endl;
    }
    else if (año % 4 == 0)
    {
        cout<<"El año es bisiesto."<<endl;
    }
    else
    {
        cout<<"El año NO es bisiesto."<<endl;
    }

    return 0;
}