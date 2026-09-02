// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 28/08/2026

#include <iostream>

using namespace std;


float calcularVolumen(float radio, float altura)
{
    const float pi = 3.1416;
    float volumen;

    volumen = pi * radio * radio * altura;

    return volumen;
}


int main()
{
    float radio;
    float altura;
    float volumen;

    system("cls");

    cout<<"Ingrese el radio del cilindro: ";
    cin>>radio;

    cout<<"Ingrese la altura del cilindro: ";
    cin>>altura;

    volumen = calcularVolumen(radio, altura);

    cout<<"El volumen del cilindro es: "<<volumen<<endl;

    return 0;
}