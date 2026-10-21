// Materia: Programación I, Paralelo 4
// Autor: Valeria Fernanda Echeverría Ureña
// Fecha creación: 19/10/2026
// Número de ejercicio: 3

#include <iostream>
#include <vector>

using namespace std;


void LlenarVector(vector<float>& tiempos, int n)
{
    float tiempo;

    for(int i = 0; i < n; i++)
    {
        do
        {
            cout << "Ingrese tiempo del corredor "
                 << i + 1 << " (10-20): ";
            cin >> tiempo;

        } while(tiempo < 10 || tiempo > 20);

        tiempos.push_back(tiempo);
    }
}


void MostrarVector(vector<float> tiempos)
{
    for(int i = 0; i < tiempos.size(); i++)
    {
        cout << tiempos[i] << " segundos" << endl;
    }
}


void OrdenarInsercion(vector<float>& tiempos)
{
    float auxiliar;
    int j;

    for(int i = 1; i < tiempos.size(); i++)
    {
        auxiliar = tiempos[i];
        j = i - 1;

        while(j >= 0 && tiempos[j] > auxiliar)
        {
            tiempos[j + 1] = tiempos[j];
            j--;
        }

        tiempos[j + 1] = auxiliar;
    }
}


int main()
{
    vector<float> tiempos;
    int n;

    cout << "Ingrese cantidad de corredores: ";
    cin >> n;

    if(n > 0)
    {
        LlenarVector(tiempos, n);

        cout << endl;
        cout << "TIEMPOS ORIGINALES" << endl;
        MostrarVector(tiempos);

        OrdenarInsercion(tiempos);

        cout << endl;
        cout << "TIEMPOS ORDENADOS" << endl;
        MostrarVector(tiempos);
    }
    else
    {
        cout << "Cantidad no valida" << endl;
    }

    return 0;
}