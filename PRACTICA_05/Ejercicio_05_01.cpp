// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Fecha creación: 6/09/2026
// Número de ejercicio: 1

#include <iostream>

using namespace std;

void IntercambiarValores(int &numero1, int &numero2)
{
    int auxiliar;

    auxiliar = numero1;
    numero1 = numero2;
    numero2 = auxiliar;
}

int main()
{
    int numero1;
    int numero2;

    system("cls");

    cout<<"Ingrese el primer numero: ";
    cin>>numero1;

    cout<<"Ingrese el segundo numero: ";
    cin>>numero2;

    cout<<endl;
    cout<<"Antes del intercambio:"<<endl;
    cout<<"Numero 1: "<<numero1<<endl;
    cout<<"Numero 2: "<<numero2<<endl;

    IntercambiarValores(numero1, numero2);

    cout<<endl;
    cout<<"Despues del intercambio:"<<endl;
    cout<<"Numero 1: "<<numero1<<endl;
    cout<<"Numero 2: "<<numero2<<endl;

    return 0;
}