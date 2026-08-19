// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 18/08/2026

#include <iostream>
using namespace std;

int main()
{
    int nota;

    system("cls");

    cout<<"Ingrese una nota entre 0 y 100: ";
    cin>>nota;

    while(nota < 0 || nota > 100)
    {
        cout<<"Nota invalida. Ingrese nuevamente: ";
        cin>>nota;
    }

    cout<<"Nota registrada correctamente"<<endl;

    return 0;
}