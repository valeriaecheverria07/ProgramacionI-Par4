// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 28/08/2026

#include <iostream>

using namespace std;

float calcularArea(float base, float altura)
{
    float area;

    area = (base * altura) / 2;

    return area;
}


int main()
{
    float base;
    float altura;
    float area;

    system("cls");

    cout<<"Ingrese la base del triangulo: ";
    cin>>base;

    cout<<"Ingrese la altura del triangulo: ";
    cin>>altura;

    area = calcularArea(base, altura);

    cout<<"El area del triangulo es: "<<area<<endl;

    return 0;
}