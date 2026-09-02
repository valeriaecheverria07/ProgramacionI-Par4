// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 28/08/2026

#include <iostream>

using namespace std;


int encontrarMayor(int n1, int n2, int n3)
{
    int mayor;

    mayor = n1;

    if(n2 > mayor)
    {
        mayor = n2;
    }

    if(n3 > mayor)
    {
        mayor = n3;
    }

    return mayor;
}


int main()
{
    int n1, n2, n3;
    int mayor;

    system("cls");

    cout<<"Ingrese el primer numero: ";
    cin>>n1;

    cout<<"Ingrese el segundo numero: ";
    cin>>n2;

    cout<<"Ingrese el tercer numero: ";
    cin>>n3;

    mayor = encontrarMayor(n1, n2, n3);

    cout<<"El numero mayor es: "<<mayor<<endl;

    return 0;
}