// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 17/08/2026

#include <iostream>
using namespace std;

int main()
{
    float practica, teoria, participacion, notaFinal;

    system("cls");

    cout<<"Ingrese la nota de practicas: ";
    cin>>practica;

    cout<<"Ingrese la nota teorica: ";
    cin>>teoria;

    cout<<"Ingrese la nota de participacion: ";
    cin>>participacion;

    notaFinal=(practica*0.30)+(teoria*0.60)+(participacion*0.10);

    system("cls");

    cout<<"La nota final es: "<<notaFinal<<endl;

    return 0;
}