// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 18/08/2026

#include <iostream>
using namespace std;

int main()
{
    int numero, digito, cantidad=0, suma=0;

    system("cls");

    cout<<"Ingrese un numero entero positivo: ";
    cin>>numero;

    while(numero > 0)
    {
        digito = numero % 10;
        suma = suma + digito;
        cantidad = cantidad + 1;
        numero = numero / 10;
    }

    cout<<"Cantidad de digitos: "<<cantidad<<endl;
    cout<<"Suma de los digitos: "<<suma<<endl;

    return 0;
}