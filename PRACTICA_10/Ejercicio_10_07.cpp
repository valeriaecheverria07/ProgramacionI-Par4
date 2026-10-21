// Autor: Valeria Fernanda Echeverría Ureña
// Fecha creación: 19/10/2026
// Número de ejercicio: 7

#include <iostream>
#include <vector>
#include <string>

using namespace std;


void LlenarDatos(vector<string>& nombres, int notas[5][3])
{
    string nombre;

    for(int i = 0; i < 5; i++)
    {
        cout << "Ingrese nombre del estudiante " << i + 1 << ": ";
        cin >> nombre;

        nombres.push_back(nombre);

        for(int j = 0; j < 3; j++)
        {
            cout << "Ingrese nota " << j + 1 << ": ";
            cin >> notas[i][j];
        }
    }
}


void CalcularPromedios(int notas[5][3], vector<float>& promedios)
{
    int suma;

    for(int i = 0; i < 5; i++)
    {
        suma = 0;

        for(int j = 0; j < 3; j++)
        {
            suma = suma + notas[i][j];
        }

        promedios.push_back((float)suma / 3);
    }
}

void OrdenarAlfabeticamente(vector<string>& nombres,
                            int notas[5][3],
                            vector<float>& promedios)
{
    string auxiliarNombre;
    int auxiliarNota;
    float auxiliarPromedio;

    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4 - i; j++)
        {
            if(nombres[j] > nombres[j + 1])
            {
                auxiliarNombre = nombres[j];
                nombres[j] = nombres[j + 1];
                nombres[j + 1] = auxiliarNombre;

                for(int k = 0; k < 3; k++)
                {
                    auxiliarNota = notas[j][k];
                    notas[j][k] = notas[j + 1][k];
                    notas[j + 1][k] = auxiliarNota;
                }

                auxiliarPromedio = promedios[j];
                promedios[j] = promedios[j + 1];
                promedios[j + 1] = auxiliarPromedio;
            }
        }
    }
}


void MostrarBoletin(vector<string> nombres,
                    int notas[5][3],
                    vector<float> promedios)
{
    cout << endl;
    cout << "BOLETIN DE NOTAS" << endl;
    cout << "Nombre\tNota 1\tNota 2\tNota 3\tPromedio" << endl;

    for(int i = 0; i < 5; i++)
    {
        cout << nombres[i] << "\t";

        for(int j = 0; j < 3; j++)
        {
            cout << notas[i][j] << "\t";
        }

        cout << promedios[i] << endl;
    }
}


int main()
{
    vector<string> nombres;
    int notas[5][3];
    vector<float> promedios;

    LlenarDatos(nombres, notas);

    CalcularPromedios(notas, promedios);

    OrdenarAlfabeticamente(nombres, notas, promedios);

    MostrarBoletin(nombres, notas, promedios);

    return 0;
}