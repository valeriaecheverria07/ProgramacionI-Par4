// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 24/08/2026

#include <iostream>

using namespace std;

int main()
{
    int numero;
    int suma = 0;

    system("cls");

    cout<<"Ingrese un numero: ";
    cin>>numero;

    for(int i = 1; i < numero; i++)
    {
        if(numero % i == 0)
        {
            suma = suma + i;
        }
    }

    if(suma == numero)
    {
        cout<<"El numero es perfecto"<<endl;
    }
    else
    {
        cout<<"El numero no es perfecto"<<endl;
    }

    return 0;
}