// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverria Ureña
// Fecha creación: 23/09/2026
// Número de ejercicio: 1

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


void generarVoltajes(double voltajes[])
{
    double limiteInferior = 20.00;
    double limiteSuperior = 220.00;

    for(int i = 0; i < 100; i++)
    {
        voltajes[i] = limiteInferior +
        (rand() / (double)RAND_MAX) *
        (limiteSuperior - limiteInferior);
    }
}


void generarTemperaturas(double temperaturas[])
{
    double limiteInferior = 0.00;
    double limiteSuperior = 100.00;

    for(int i = 0; i < 50; i++)
    {
        temperaturas[i] = limiteInferior +
        (rand() / (double)RAND_MAX) *
        (limiteSuperior - limiteInferior);
    }
}


void generarCaracteres(char caracteres[])
{
    char datos[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    for(int i = 0; i < 30; i++)
    {
        caracteres[i] = datos[rand() % 36];
    }
}


void generarAnios(int anios[])
{
    int limiteInferior = 1990;
    int limiteSuperior = 2025;

    for(int i = 0; i < 100; i++)
    {
        anios[i] = limiteInferior +
        rand() % (limiteSuperior - limiteInferior + 1);
    }
}


void generarVelocidades(double velocidades[])
{
    double limiteInferior = 10.00;
    double limiteSuperior = 300.00;

    for(int i = 0; i < 32; i++)
    {
        velocidades[i] = limiteInferior +
        (rand() / (double)RAND_MAX) *
        (limiteSuperior - limiteInferior);
    }
}


void generarDistancias(double distancias[])
{
    double limiteInferior = 1.00;
    double limiteSuperior = 1000.00;

    for(int i = 0; i < 1000; i++)
    {
        distancias[i] = limiteInferior +
        (rand() / (double)RAND_MAX) *
        (limiteSuperior - limiteInferior);
    }
}


void mostrarDouble(double vector[], int cantidad)
{
    for(int i = 0; i < cantidad; i++)
    {
        cout << vector[i] << " ";
    }

    cout << endl;
}


void mostrarEnteros(int vector[], int cantidad)
{
    for(int i = 0; i < cantidad; i++)
    {
        cout << vector[i] << " ";
    }

    cout << endl;
}


void mostrarCaracteres(char vector[], int cantidad)
{
    for(int i = 0; i < cantidad; i++)
    {
        cout << vector[i] << " ";
    }

    cout << endl;
}


int main()
{
    srand(time(0));


    double voltajes[100];
    double temperaturas[50];
    char caracteres[30];
    int anios[100];
    double velocidades[32];
    double distancias[1000];


    generarVoltajes(voltajes);
    generarTemperaturas(temperaturas);
    generarCaracteres(caracteres);
    generarAnios(anios);
    generarVelocidades(velocidades);
    generarDistancias(distancias);


    cout << "Lista de voltajes:" << endl;
    mostrarDouble(voltajes,100);


    cout << endl << "Lista de temperaturas:" << endl;
    mostrarDouble(temperaturas,50);


    cout << endl << "Lista de caracteres:" << endl;
    mostrarCaracteres(caracteres,30);


    cout << endl << "Lista de anios:" << endl;
    mostrarEnteros(anios,100);


    cout << endl << "Lista de velocidades:" << endl;
    mostrarDouble(velocidades,32);


    cout << endl << "Lista de distancias:" << endl;
    mostrarDouble(distancias,1000);


    return 0;
}