// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 30/08/2026

#include <iostream>

using namespace std;


int sumarNaturales(int N)
{
    int suma = 0;

    for(int i = 1; i <= N; i++)
    {
        suma = suma + i;
    }

    return suma;
}


int main()
{
    int N;
    int resultado;

    system("cls");

    cout<<"Ingrese un numero positivo: ";
    cin>>N;

    resultado = sumarNaturales(N);

    cout<<"La suma de los numeros es: "<<resultado<<endl;

    return 0;
}