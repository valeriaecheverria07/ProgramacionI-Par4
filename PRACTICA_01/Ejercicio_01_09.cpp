// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 18/08/2026

#include <iostream>
using namespace std;

int main()
{
    int numero, digito, fila, columna;

    system("cls");

    cout<<"Ingrese un numero entero positivo: ";
    cin>>numero;

    while(numero > 0)
    {
        digito = numero % 10;

        cout<<"Digito: "<<digito<<endl;

        fila = 1;

        while(fila <= digito)
        {
            columna = 1;

            while(columna <= digito)
            {
                cout<<"* ";
                columna = columna + 1;
            }

            cout<<endl;
            fila = fila + 1;
        }

        cout<<endl;

        numero = numero / 10;
    }

    return 0;
}