// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverría Ureña
// Fecha creación: 19/10/2026
// Número de ejercicio: 2

#include <iostream>
#include <vector>

using namespace std;


void LlenarVector(vector<int>& puntos, int n)
{
    int nota;

    for(int i = 0; i < n; i++)
    {
        do
        {
            cout << "Ingrese puntuacion del jugador "
                 << i + 1 << " (1-100): ";
            cin >> nota;

        } while(nota < 1 || nota > 100);

        puntos.push_back(nota);
    }
}

void OrdenarBurbuja(vector<int>& puntos, int n)
{
    int auxiliar;

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - 1 - i; j++)
        {
            if(puntos[j] < puntos[j + 1])
            {
                auxiliar = puntos[j];
                puntos[j] = puntos[j + 1];
                puntos[j + 1] = auxiliar;
            }
        }
    }
}


void MostrarPodio(vector<int> puntos, int n)
{
    cout << endl;
    cout << "PODIO DE VIDEOJUEGOS" << endl;

    for(int i = 0; i < 3 && i < n; i++)
    {
        cout << i + 1 << " lugar: "
             << puntos[i] << " puntos" << endl;
    }
}


int main()
{
    vector<int> puntos;
    int n;

    cout << "Ingrese cantidad de jugadores: ";
    cin >> n;

    if(n > 0)
    {
        LlenarVector(puntos, n);

        OrdenarBurbuja(puntos, n);

        MostrarPodio(puntos, n);
    }
    else
    {
        cout << "Cantidad no valida" << endl;
    }

    return 0;
}