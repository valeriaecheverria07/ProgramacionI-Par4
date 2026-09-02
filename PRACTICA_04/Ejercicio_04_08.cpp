// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 31/08/2026

#include <iostream>

using namespace std;


int contarDigitos(int numero)
{
    int cantidad = 0;

    while(numero > 0)
    {
        numero = numero / 10;
        cantidad = cantidad + 1;
    }

    return cantidad;
}


int main()
{
    int numero;
    int cantidad;

    system("cls");

    cout<<"Ingrese un numero entero positivo: ";
    cin>>numero;

    cantidad = contarDigitos(numero);

    cout<<"La cantidad de digitos es: "<<cantidad<<endl;

    return 0;
}