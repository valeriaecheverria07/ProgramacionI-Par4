// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 24/08/2026

#include <iostream>

using namespace std;

int main()
{
    int n;
    int suma = 0;

    system("cls");

    cout<<"Ingrese un numero: ";
    cin>>n;

    for(int i = 1; i <= n; i++)
    {
        suma = suma + i;
    }

    cout<<"La suma es: "<<suma<<endl;

    return 0;
}