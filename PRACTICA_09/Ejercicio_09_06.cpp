// Materia: Programacion I, Paralelo 4
// Autor: Valeria Fernanda Echeverrian Ureña
// Fecha creacion: 07/10/2026
// Numero de ejercicio: 6

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void LlenarMatriz(int temperaturas[4][7])
{
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 7; j++)
        {
            temperaturas[i][j] = 5 + rand() % 31;
        }
    }
}

void MostrarMatriz(int temperaturas[4][7])
{
    cout << endl;
    cout << "REGISTRO DE TEMPERATURAS" << endl;

    for(int i = 0; i < 4; i++)
    {
        cout << "Semana " << i + 1 << ": ";

        for(int j = 0; j < 7; j++)
        {
            cout << temperaturas[i][j] << "\t";
        }

        cout << endl;
    }
}

void TemperaturaMayor(int temperaturas[4][7])
{
    int mayor = temperaturas[0][0];
    int semana = 0;
    int dia = 0;

    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 7; j++)
        {
            if(temperaturas[i][j] > mayor)
            {
                mayor = temperaturas[i][j];
                semana = i;
                dia = j;
            }
        }
    }

    cout << endl;
    cout << "Temperatura mas alta: " << mayor << " C" << endl;
    cout << "Semana: " << semana + 1 << endl;
    cout << "Dia: " << dia + 1 << endl;
}

void PromedioSemanas(int temperaturas[4][7])
{
    int suma;
    float promedio;

    cout << endl;
    cout << "PROMEDIOS SEMANALES" << endl;

    for(int i = 0; i < 4; i++)
    {
        suma = 0;

        for(int j = 0; j < 7; j++)
        {
            suma = suma + temperaturas[i][j];
        }

        promedio = (float)suma / 7;

        cout << "Semana " << i + 1 << ": "
             << promedio << " C" << endl;
    }
}

int ContarDias(int temperaturas[4][7])
{
    int contador = 0;

    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 7; j++)
        {
            if(temperaturas[i][j] > 30)
            {
                contador++;
            }
        }
    }

    return contador;
}


int main()
{
    srand(time(0));

    int temperaturas[4][7];

    LlenarMatriz(temperaturas);

    MostrarMatriz(temperaturas);

    TemperaturaMayor(temperaturas);

    PromedioSemanas(temperaturas);

    cout << endl;
    cout << "Dias con temperatura mayor a 30 C: "
         << ContarDias(temperaturas) << endl;

    return 0;
}