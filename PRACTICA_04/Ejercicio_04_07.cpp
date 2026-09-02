// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Carrera del estudiante: Ingenieria Biomedica
// Fecha creación: 30/08/2026

#include <iostream>

using namespace std;


float calcularDistancia(float velocidad, float tiempo)
{
    float distancia;

    distancia = velocidad * tiempo;

    return distancia;
}


int main()
{
    float velocidad;
    float tiempo;
    float distancia;

    system("cls");

    cout<<"Ingrese la velocidad: ";
    cin>>velocidad;

    cout<<"Ingrese el tiempo: ";
    cin>>tiempo;

    distancia = calcularDistancia(velocidad, tiempo);

    cout<<"La distancia recorrida es: "<<distancia<<endl;

    return 0;
}