// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 24/08/2026


#include <iostream>

using namespace std;

int main()
{
    int numero1, numero2;

    system("cls");

    cout<<"Ingrese el primer numero: ";
    cin>>numero1;

    cout<<"Ingrese el segundo numero: ";
    cin>>numero2;

    if(numero1 > numero2)
    {
        for(int i = numero1; i >= numero2; i--)
        {
            cout<<i<<" ";
        }
    }
    else
    {
        for(int i = numero1; i <= numero2; i++)
        {
            cout<<i<<" ";
        }
    }

    return 0;
}