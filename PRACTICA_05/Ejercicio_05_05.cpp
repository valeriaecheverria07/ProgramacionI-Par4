// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Fecha creación: 06/09/2026
// Número de ejercicio: 5

#include <iostream>

using namespace std;

double calcularArea(double lado)
{
    return lado * lado;
}

double calcularArea(double base, double altura)
{
    return base * altura;
}

float calcularArea(float radio, float PI)
{
    return PI * radio * radio;
}

int main()
{
    double lado;
    double base;
    double altura;
    float radio;
    float PI = 3.1416;

    cout << "Ingrese el lado del cuadrado: ";
    cin >> lado;

    cout << "Area del cuadrado: " << calcularArea(lado) << endl;

    cout << endl;

    cout << "Ingrese la base del rectangulo: ";
    cin >> base;

    cout << "Ingrese la altura del rectangulo: ";
    cin >> altura;

    cout << "Area del rectangulo: "
         << calcularArea(base, altura) << endl;

    cout << endl;

    cout << "Ingrese el radio del circulo: ";
    cin >> radio;

    cout << "Area del circulo: "
         << calcularArea(radio, PI) << endl;

    return 0;
}