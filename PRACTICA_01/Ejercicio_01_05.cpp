// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 17/08/2026

#include <iostream>
using namespace std;

int main()
{
    int dia;

    system("cls");

    cout<<"Ingrese un numero del 1 al 7: ";
    cin>>dia;

    switch(dia)
    {
        case 1:
            cout<<"Lunes"<<endl;
            break;

        case 2:
            cout<<"Martes"<<endl;
            break;

        case 3:
            cout<<"Miercoles"<<endl;
            break;

        case 4:
            cout<<"Jueves"<<endl;
            break;

        case 5:
            cout<<"Viernes"<<endl;
            break;

        case 6:
            cout<<"Sabado"<<endl;
            break;

        case 7:
            cout<<"Domingo"<<endl;
            break;

        default:
            cout<<"Error, numero fuera de rango"<<endl;
    }

    return 0;
}